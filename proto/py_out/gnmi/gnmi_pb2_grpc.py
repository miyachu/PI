# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

import gnmi.gnmi_pb2 as gnmi_dot_gnmi__pb2


class gNMIStub(object):

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.Capabilities = channel.unary_unary(
        '/gnmi.gNMI/Capabilities',
        request_serializer=gnmi_dot_gnmi__pb2.CapabilityRequest.SerializeToString,
        response_deserializer=gnmi_dot_gnmi__pb2.CapabilityResponse.FromString,
        )
    self.Get = channel.unary_unary(
        '/gnmi.gNMI/Get',
        request_serializer=gnmi_dot_gnmi__pb2.GetRequest.SerializeToString,
        response_deserializer=gnmi_dot_gnmi__pb2.GetResponse.FromString,
        )
    self.Set = channel.unary_unary(
        '/gnmi.gNMI/Set',
        request_serializer=gnmi_dot_gnmi__pb2.SetRequest.SerializeToString,
        response_deserializer=gnmi_dot_gnmi__pb2.SetResponse.FromString,
        )
    self.Subscribe = channel.stream_stream(
        '/gnmi.gNMI/Subscribe',
        request_serializer=gnmi_dot_gnmi__pb2.SubscribeRequest.SerializeToString,
        response_deserializer=gnmi_dot_gnmi__pb2.SubscribeResponse.FromString,
        )


class gNMIServicer(object):

  def Capabilities(self, request, context):
    """Capabilities allows the client to retrieve the set of capabilities that
    is supported by the target. This allows the target to validate the
    service version that is implemented and retrieve the set of models that
    the target supports. The models can then be specified in subsequent RPCs
    to restrict the set of data that is utilized.
    Reference: gNMI Specification Section 3.2
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Get(self, request, context):
    """Retrieve a snapshot of data from the target. A Get RPC requests that the
    target snapshots a subset of the data tree as specified by the paths
    included in the message and serializes this to be returned to the
    client using the specified encoding.
    Reference: gNMI Specification Section 3.3
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Set(self, request, context):
    """Set allows the client to modify the state of data on the target. The
    paths to modified along with the new values that the client wishes
    to set the value to.
    Reference: gNMI Specification Section 3.4
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Subscribe(self, request_iterator, context):
    """Subscribe allows a client to request the target to send it values
    of particular paths within the data tree. These values may be streamed
    at a particular cadence (STREAM), sent one off on a long-lived channel
    (POLL), or sent as a one-off retrieval (ONCE).
    Reference: gNMI Specification Section 3.5
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_gNMIServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'Capabilities': grpc.unary_unary_rpc_method_handler(
          servicer.Capabilities,
          request_deserializer=gnmi_dot_gnmi__pb2.CapabilityRequest.FromString,
          response_serializer=gnmi_dot_gnmi__pb2.CapabilityResponse.SerializeToString,
      ),
      'Get': grpc.unary_unary_rpc_method_handler(
          servicer.Get,
          request_deserializer=gnmi_dot_gnmi__pb2.GetRequest.FromString,
          response_serializer=gnmi_dot_gnmi__pb2.GetResponse.SerializeToString,
      ),
      'Set': grpc.unary_unary_rpc_method_handler(
          servicer.Set,
          request_deserializer=gnmi_dot_gnmi__pb2.SetRequest.FromString,
          response_serializer=gnmi_dot_gnmi__pb2.SetResponse.SerializeToString,
      ),
      'Subscribe': grpc.stream_stream_rpc_method_handler(
          servicer.Subscribe,
          request_deserializer=gnmi_dot_gnmi__pb2.SubscribeRequest.FromString,
          response_serializer=gnmi_dot_gnmi__pb2.SubscribeResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'gnmi.gNMI', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
