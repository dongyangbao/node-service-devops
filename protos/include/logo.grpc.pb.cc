// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: logo.proto

#include "logo.pb.h"
#include "logo.grpc.pb.h"

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

static const char* LogoProto_method_names[] = {
  "/logo.LogoProto/get_data",
};

std::unique_ptr< LogoProto::Stub> LogoProto::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LogoProto::Stub> stub(new LogoProto::Stub(channel));
  return stub;
}

LogoProto::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_get_data_(LogoProto_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LogoProto::Stub::get_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::logo::LogoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::logo::LogoRequest, ::logo::LogoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_get_data_, context, request, response);
}

void LogoProto::Stub::experimental_async::get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::logo::LogoRequest, ::logo::LogoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_get_data_, context, request, response, std::move(f));
}

void LogoProto::Stub::experimental_async::get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_get_data_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>* LogoProto::Stub::PrepareAsyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::logo::LogoResponse, ::logo::LogoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_get_data_, context, request);
}

::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>* LogoProto::Stub::Asyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncget_dataRaw(context, request, cq);
  result->StartCall();
  return result;
}

LogoProto::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LogoProto_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LogoProto::Service, ::logo::LogoRequest, ::logo::LogoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](LogoProto::Service* service,
             ::grpc::ServerContext* ctx,
             const ::logo::LogoRequest* req,
             ::logo::LogoResponse* resp) {
               return service->get_data(ctx, req, resp);
             }, this)));
}

LogoProto::Service::~Service() {
}

::grpc::Status LogoProto::Service::get_data(::grpc::ServerContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace logo

