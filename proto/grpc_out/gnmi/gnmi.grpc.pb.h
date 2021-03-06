// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gnmi/gnmi.proto
// Original file comments:
//
// Copyright 2016 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_gnmi_2fgnmi_2eproto__INCLUDED
#define GRPC_gnmi_2fgnmi_2eproto__INCLUDED

#include "gnmi/gnmi.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace gnmi {

class gNMI final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Capabilities allows the client to retrieve the set of capabilities that
    // is supported by the target. This allows the target to validate the
    // service version that is implemented and retrieve the set of models that
    // the target supports. The models can then be specified in subsequent RPCs
    // to restrict the set of data that is utilized.
    // Reference: gNMI Specification Section 3.2
    virtual ::grpc::Status Capabilities(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::gnmi::CapabilityResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::CapabilityResponse>> AsyncCapabilities(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::CapabilityResponse>>(AsyncCapabilitiesRaw(context, request, cq));
    }
    // Retrieve a snapshot of data from the target. A Get RPC requests that the
    // target snapshots a subset of the data tree as specified by the paths
    // included in the message and serializes this to be returned to the
    // client using the specified encoding.
    // Reference: gNMI Specification Section 3.3
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::gnmi::GetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    // Set allows the client to modify the state of data on the target. The
    // paths to modified along with the new values that the client wishes
    // to set the value to.
    // Reference: gNMI Specification Section 3.4
    virtual ::grpc::Status Set(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::gnmi::SetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    // Subscribe allows a client to request the target to send it values
    // of particular paths within the data tree. These values may be streamed
    // at a particular cadence (STREAM), sent one off on a long-lived channel
    // (POLL), or sent as a one-off retrieval (ONCE).
    // Reference: gNMI Specification Section 3.5
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>> Subscribe(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>>(SubscribeRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>> AsyncSubscribe(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>>(AsyncSubscribeRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::CapabilityResponse>* AsyncCapabilitiesRaw(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::gnmi::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* SubscribeRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* AsyncSubscribeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Capabilities(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::gnmi::CapabilityResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::CapabilityResponse>> AsyncCapabilities(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::CapabilityResponse>>(AsyncCapabilitiesRaw(context, request, cq));
    }
    ::grpc::Status Get(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::gnmi::GetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    ::grpc::Status Set(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::gnmi::SetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gnmi::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>> Subscribe(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>>(SubscribeRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>> AsyncSubscribe(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>>(AsyncSubscribeRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::gnmi::CapabilityResponse>* AsyncCapabilitiesRaw(::grpc::ClientContext* context, const ::gnmi::CapabilityRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::gnmi::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::gnmi::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::gnmi::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::gnmi::SetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* SubscribeRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::gnmi::SubscribeRequest, ::gnmi::SubscribeResponse>* AsyncSubscribeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    const ::grpc::RpcMethod rpcmethod_Capabilities_;
    const ::grpc::RpcMethod rpcmethod_Get_;
    const ::grpc::RpcMethod rpcmethod_Set_;
    const ::grpc::RpcMethod rpcmethod_Subscribe_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Capabilities allows the client to retrieve the set of capabilities that
    // is supported by the target. This allows the target to validate the
    // service version that is implemented and retrieve the set of models that
    // the target supports. The models can then be specified in subsequent RPCs
    // to restrict the set of data that is utilized.
    // Reference: gNMI Specification Section 3.2
    virtual ::grpc::Status Capabilities(::grpc::ServerContext* context, const ::gnmi::CapabilityRequest* request, ::gnmi::CapabilityResponse* response);
    // Retrieve a snapshot of data from the target. A Get RPC requests that the
    // target snapshots a subset of the data tree as specified by the paths
    // included in the message and serializes this to be returned to the
    // client using the specified encoding.
    // Reference: gNMI Specification Section 3.3
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::gnmi::GetRequest* request, ::gnmi::GetResponse* response);
    // Set allows the client to modify the state of data on the target. The
    // paths to modified along with the new values that the client wishes
    // to set the value to.
    // Reference: gNMI Specification Section 3.4
    virtual ::grpc::Status Set(::grpc::ServerContext* context, const ::gnmi::SetRequest* request, ::gnmi::SetResponse* response);
    // Subscribe allows a client to request the target to send it values
    // of particular paths within the data tree. These values may be streamed
    // at a particular cadence (STREAM), sent one off on a long-lived channel
    // (POLL), or sent as a one-off retrieval (ONCE).
    // Reference: gNMI Specification Section 3.5
    virtual ::grpc::Status Subscribe(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::gnmi::SubscribeResponse, ::gnmi::SubscribeRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Capabilities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Capabilities() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Capabilities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Capabilities(::grpc::ServerContext* context, const ::gnmi::CapabilityRequest* request, ::gnmi::CapabilityResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCapabilities(::grpc::ServerContext* context, ::gnmi::CapabilityRequest* request, ::grpc::ServerAsyncResponseWriter< ::gnmi::CapabilityResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Get() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::gnmi::GetRequest* request, ::gnmi::GetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::gnmi::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::gnmi::GetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Set() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* context, const ::gnmi::SetRequest* request, ::gnmi::SetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSet(::grpc::ServerContext* context, ::gnmi::SetRequest* request, ::grpc::ServerAsyncResponseWriter< ::gnmi::SetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Subscribe() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::gnmi::SubscribeResponse, ::gnmi::SubscribeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribe(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::gnmi::SubscribeResponse, ::gnmi::SubscribeRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(3, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Capabilities<WithAsyncMethod_Get<WithAsyncMethod_Set<WithAsyncMethod_Subscribe<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Capabilities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Capabilities() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Capabilities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Capabilities(::grpc::ServerContext* context, const ::gnmi::CapabilityRequest* request, ::gnmi::CapabilityResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Get() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::gnmi::GetRequest* request, ::gnmi::GetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Set() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* context, const ::gnmi::SetRequest* request, ::gnmi::SetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Subscribe() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::gnmi::SubscribeResponse, ::gnmi::SubscribeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Capabilities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Capabilities() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::gnmi::CapabilityRequest, ::gnmi::CapabilityResponse>(std::bind(&WithStreamedUnaryMethod_Capabilities<BaseClass>::StreamedCapabilities, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Capabilities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Capabilities(::grpc::ServerContext* context, const ::gnmi::CapabilityRequest* request, ::gnmi::CapabilityResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCapabilities(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::gnmi::CapabilityRequest,::gnmi::CapabilityResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Get() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::gnmi::GetRequest, ::gnmi::GetResponse>(std::bind(&WithStreamedUnaryMethod_Get<BaseClass>::StreamedGet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::gnmi::GetRequest* request, ::gnmi::GetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::gnmi::GetRequest,::gnmi::GetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Set() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::gnmi::SetRequest, ::gnmi::SetResponse>(std::bind(&WithStreamedUnaryMethod_Set<BaseClass>::StreamedSet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Set(::grpc::ServerContext* context, const ::gnmi::SetRequest* request, ::gnmi::SetResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::gnmi::SetRequest,::gnmi::SetResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Capabilities<WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Set<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Capabilities<WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Set<Service > > > StreamedService;
};

}  // namespace gnmi


#endif  // GRPC_gnmi_2fgnmi_2eproto__INCLUDED
