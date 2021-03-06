// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cloudflare.proto

#include "cloudflare.pb.h"
#include "cloudflare.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace logo {

static const char* CloudflareProto_method_names[] = {
  "/logo.CloudflareProto/push_kv",
};

std::unique_ptr< CloudflareProto::Stub> CloudflareProto::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CloudflareProto::Stub> stub(new CloudflareProto::Stub(channel));
  return stub;
}

CloudflareProto::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_push_kv_(CloudflareProto_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CloudflareProto::Stub::push_kv(::grpc::ClientContext* context, const ::logo::CloudflarePutKVRequest& request, ::logo::CloudflarePutKVResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::logo::CloudflarePutKVRequest, ::logo::CloudflarePutKVResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_push_kv_, context, request, response);
}

void CloudflareProto::Stub::experimental_async::push_kv(::grpc::ClientContext* context, const ::logo::CloudflarePutKVRequest* request, ::logo::CloudflarePutKVResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::logo::CloudflarePutKVRequest, ::logo::CloudflarePutKVResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_push_kv_, context, request, response, std::move(f));
}

void CloudflareProto::Stub::experimental_async::push_kv(::grpc::ClientContext* context, const ::logo::CloudflarePutKVRequest* request, ::logo::CloudflarePutKVResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_push_kv_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::logo::CloudflarePutKVResponse>* CloudflareProto::Stub::PrepareAsyncpush_kvRaw(::grpc::ClientContext* context, const ::logo::CloudflarePutKVRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::logo::CloudflarePutKVResponse, ::logo::CloudflarePutKVRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_push_kv_, context, request);
}

::grpc::ClientAsyncResponseReader< ::logo::CloudflarePutKVResponse>* CloudflareProto::Stub::Asyncpush_kvRaw(::grpc::ClientContext* context, const ::logo::CloudflarePutKVRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncpush_kvRaw(context, request, cq);
  result->StartCall();
  return result;
}

CloudflareProto::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudflareProto_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudflareProto::Service, ::logo::CloudflarePutKVRequest, ::logo::CloudflarePutKVResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CloudflareProto::Service* service,
             ::grpc::ServerContext* ctx,
             const ::logo::CloudflarePutKVRequest* req,
             ::logo::CloudflarePutKVResponse* resp) {
               return service->push_kv(ctx, req, resp);
             }, this)));
}

CloudflareProto::Service::~Service() {
}

::grpc::Status CloudflareProto::Service::push_kv(::grpc::ServerContext* context, const ::logo::CloudflarePutKVRequest* request, ::logo::CloudflarePutKVResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace logo

