/*
Copyright 2017 Google Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

package client

import (
	"crypto/tls"
	"reflect"
	"testing"
	"time"

	log "github.com/golang/glog"
	"context"
	"github.com/kylelemons/godebug/pretty"
	"google.golang.org/grpc"
	"github.com/openconfig/gnmi/client"
	"github.com/openconfig/gnmi/testing/fake/openconfig"
	"github.com/openconfig/gnmi/testing/fake/testing/grpc/config"

	fpb "github.com/openconfig/gnmi/testing/fake/proto"
	ocpb "github.com/openconfig/reference/rpc/openconfig"
)

func TestClient(t *testing.T) {
	tests := []struct {
		desc       string
		q          client.Query
		updates    []*fpb.Value
		disableEOF bool
		wantErr    bool
		wantNoti   []client.Notification

		poll        int
		wantPollErr string
	}{{
		desc:    "empty query",
		q:       client.Query{},
		wantErr: true,
	}, {
		desc: "once query with one update",
		q: client.Query{
			Target:  "dev",
			Type:    client.Once,
			Queries: []client.Path{{"a"}},
			TLS:     &tls.Config{InsecureSkipVerify: true},
		},
		updates: []*fpb.Value{{
			Path:      []string{"dev", "a"},
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_Sync{Sync: 1},
		}},
		wantNoti: []client.Notification{
			client.Connected{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Sync{},
		},
	}, {
		desc: "poll query with x3 by Poll()",
		poll: 3,
		q: client.Query{
			Target:  "dev",
			Type:    client.Poll,
			Queries: []client.Path{{"a"}},
			TLS:     &tls.Config{InsecureSkipVerify: true},
		},
		updates: []*fpb.Value{{
			Path:      []string{"dev", "a"},
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_Sync{Sync: 1},
		}},
		wantNoti: []client.Notification{
			client.Connected{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Sync{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Sync{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Sync{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Sync{},
		},
	}, {
		desc: "once query with updates and deletes",
		q: client.Query{
			Target:  "dev",
			Type:    client.Once,
			Queries: []client.Path{{"a"}},
			TLS:     &tls.Config{InsecureSkipVerify: true},
		},
		updates: []*fpb.Value{{
			Path:      []string{"dev", "a"},
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Path:      []string{"dev", "a", "b"},
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Path:      []string{"dev", "a", "b"},
			Timestamp: &fpb.Timestamp{Timestamp: 200},
			Repeat:    1,
			Value:     &fpb.Value_Delete{Delete: &fpb.DeleteValue{}},
		}, {
			Timestamp: &fpb.Timestamp{Timestamp: 300},
			Repeat:    1,
			Value:     &fpb.Value_Sync{Sync: 1},
		}},
		wantNoti: []client.Notification{
			client.Connected{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 100), Val: 5},
			client.Update{Path: []string{"dev", "a", "b"}, TS: time.Unix(0, 100), Val: 5},
			client.Delete{Path: []string{"dev", "a", "b"}, TS: time.Unix(0, 200)},
			client.Sync{},
		},
	}, {
		desc:       "stream query with updates and deletes",
		disableEOF: true,
		q: client.Query{
			Target:  "dev",
			Type:    client.Stream,
			Queries: []client.Path{{"a"}},
			TLS:     &tls.Config{InsecureSkipVerify: true},
		},
		updates: []*fpb.Value{{
			Timestamp: &fpb.Timestamp{Timestamp: 100},
			Repeat:    1,
			Value:     &fpb.Value_Sync{Sync: 1},
		}, {
			Path:      []string{"dev", "a"},
			Timestamp: &fpb.Timestamp{Timestamp: 200},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Path:      []string{"dev", "a", "b"},
			Timestamp: &fpb.Timestamp{Timestamp: 200},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Path:      []string{"dev", "a", "c"},
			Timestamp: &fpb.Timestamp{Timestamp: 200},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 5}},
		}, {
			Path:      []string{"dev", "a", "b"},
			Timestamp: &fpb.Timestamp{Timestamp: 300},
			Repeat:    1,
			Value:     &fpb.Value_Delete{Delete: &fpb.DeleteValue{}},
		}, {
			Path:      []string{"dev", "a", "c"},
			Timestamp: &fpb.Timestamp{Timestamp: 400},
			Repeat:    1,
			Value:     &fpb.Value_IntValue{IntValue: &fpb.IntValue{Value: 50}},
		}},
		wantNoti: []client.Notification{
			client.Connected{},
			client.Sync{},
			client.Update{Path: []string{"dev", "a"}, TS: time.Unix(0, 200), Val: 5},
			client.Update{Path: []string{"dev", "a", "b"}, TS: time.Unix(0, 200), Val: 5},
			client.Update{Path: []string{"dev", "a", "c"}, TS: time.Unix(0, 200), Val: 5},
			client.Delete{Path: []string{"dev", "a", "b"}, TS: time.Unix(0, 300)},
			client.Update{Path: []string{"dev", "a", "c"}, TS: time.Unix(0, 400), Val: 50},
		},
	}}
	opt, err := config.WithSelfTLSCert()
	if err != nil {
		t.Fatalf("failed to generate cert: %v", err)
	}
	for _, tt := range tests {
		t.Run(tt.desc, func(t *testing.T) {
			s, err := openconfig.New(
				&fpb.Config{
					Target:      "dev1",
					DisableSync: true,
					Values:      tt.updates,
					DisableEof:  tt.disableEOF,
				},
				[]grpc.ServerOption{opt},
			)

			if err != nil {
				t.Fatal("failed to start test server")
			}
			defer s.Close()

			q := tt.q
			q.Addrs = []string{s.Address()}
			c := client.New()
			defer c.Close()
			var gotNoti []client.Notification
			q.NotificationHandler = func(n client.Notification) error {
				gotNoti = append(gotNoti, n)
				return nil
			}
			err = c.Subscribe(context.Background(), q)
			switch {
			case tt.wantErr && err != nil:
				return
			case tt.wantErr && err == nil:
				t.Fatalf("c.Subscribe(): got nil error, expected non-nil")
			case !tt.wantErr && err != nil:
				t.Fatalf("c.Subscribe(): got error %v, expected nil", err)
			}
			for i := 0; i < tt.poll; i++ {
				err := c.Poll()
				switch {
				case err == nil && tt.wantPollErr != "":
					t.Errorf("c.Poll(): got nil error, expected non-nil %v", tt.wantPollErr)
				case err != nil && tt.wantPollErr == "":
					t.Errorf("c.Poll(): got error %v, expected nil", err)
				case err != nil && err.Error() != tt.wantPollErr:
					t.Errorf("c.Poll(): got error %v, expected error %v", err, tt.wantPollErr)
				}
			}
			if diff := pretty.Compare(tt.wantNoti, gotNoti); diff != "" {
				t.Errorf("unexpected updates:\n%s", diff)
			}
			impl, err := c.Impl()
			if err != nil {
				t.Fatalf("c.Impl() failed: %v", err)
			}
			if got, want := impl.(*Client).Peer(), s.Address(); got != want {
				t.Errorf("Peer() failed: got %v, want %v", got, want)
			}
		})
	}
}

func TestConvertSetRequest(t *testing.T) {
	sr := client.SetRequest{
		Delete: []client.Path{
			{"a", "b"},
			{"c", "d"},
		},
		Update: []client.Leaf{
			{Path: client.Path{"e"}, Val: 2},
			{Path: client.Path{"f", "g"}, Val: "foo"},
		},
		Replace: []client.Leaf{
			{Path: client.Path{"h", "i"}, Val: true},
			{Path: client.Path{"j"}, Val: 5},
		},
	}
	want := &ocpb.SetRequest{
		Delete: []*ocpb.Path{
			{Element: []string{"a", "b"}},
			{Element: []string{"c", "d"}},
		},
		Update: []*ocpb.Update{
			{
				Path:  &ocpb.Path{Element: []string{"e"}},
				Value: &ocpb.Value{Type: ocpb.Type_JSON, Value: []byte(`2`)},
			},
			{
				Path:  &ocpb.Path{Element: []string{"f", "g"}},
				Value: &ocpb.Value{Type: ocpb.Type_JSON, Value: []byte(`"foo"`)},
			},
		},
		Replace: []*ocpb.Update{
			{
				Path:  &ocpb.Path{Element: []string{"h", "i"}},
				Value: &ocpb.Value{Type: ocpb.Type_JSON, Value: []byte(`true`)},
			},
			{
				Path:  &ocpb.Path{Element: []string{"j"}},
				Value: &ocpb.Value{Type: ocpb.Type_JSON, Value: []byte(`5`)},
			},
		},
	}

	got, err := convertSetRequest(sr)
	if err != nil {
		log.Errorf("got error %v, want nil", err)
	}

	if diff := pretty.Compare(got, want); diff != "" {
		t.Errorf("diff:\n%s", diff)
	}
}

func TestConvertSetResponse(t *testing.T) {
	tests := []struct {
		desc    string
		sr      *ocpb.SetResponse
		want    client.SetResponse
		wantErr string
	}{
		{
			desc: "one update",
			sr: &ocpb.SetResponse{
				Response: []*ocpb.UpdateResponse{
					{Timestamp: 1},
				},
			},
			want: client.SetResponse{TS: time.Unix(0, 1)},
		},
		{
			desc: "one update with error",
			sr: &ocpb.SetResponse{
				Response: []*ocpb.UpdateResponse{
					{Timestamp: 1, Message: &ocpb.Error{Message: "foo"}},
				},
			},
			wantErr: `message:"foo" `,
		},
		{
			desc: "two updates with one error",
			sr: &ocpb.SetResponse{
				Response: []*ocpb.UpdateResponse{
					{Timestamp: 1},
					{Timestamp: 1, Message: &ocpb.Error{Message: "foo"}},
				},
			},
			wantErr: `message:"foo" `,
		},
		{
			desc: "two updates with two errors",
			sr: &ocpb.SetResponse{
				Response: []*ocpb.UpdateResponse{
					{Timestamp: 1, Message: &ocpb.Error{Message: "foo"}},
					{Timestamp: 1, Message: &ocpb.Error{Message: "bar"}},
				},
			},
			wantErr: `message:"foo" ; message:"bar" `,
		},
	}

	for _, tt := range tests {
		t.Run(tt.desc, func(t *testing.T) {
			got, err := convertSetResponse(tt.sr)
			switch {
			case err != nil && tt.wantErr == "":
				t.Errorf("got error %q, want nil", err)
			case err == nil && tt.wantErr != "":
				t.Errorf("got nil error, want %q", tt.wantErr)
			case err != nil && tt.wantErr != "":
				if err.Error() != tt.wantErr {
					t.Errorf("got error %q, want %q", err, tt.wantErr)
				}
			default:
				if !reflect.DeepEqual(got, tt.want) {
					t.Errorf("got %#v, want %#v", got, tt.want)
				}
			}
		})
	}
}
