// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: logodata.proto

#include "logodata.pb.h"
#include "logodata.grpc.pb.h"

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

static const char* LogoDataProto_method_names[] = {
  "/logo.LogoDataProto/get_data",
};

std::unique_ptr< LogoDataProto::Stub> LogoDataProto::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LogoDataProto::Stub> stub(new LogoDataProto::Stub(channel));
  return stub;
}

LogoDataProto::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_get_data_(LogoDataProto_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LogoDataProto::Stub::get_data(::grpc::ClientContext* context, const ::logo::LogoDataRequest& request, ::logo::LogoDataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::logo::LogoDataRequest, ::logo::LogoDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_get_data_, context, request, response);
}

void LogoDataProto::Stub::experimental_async::get_data(::grpc::ClientContext* context, const ::logo::LogoDataRequest* request, ::logo::LogoDataResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::logo::LogoDataRequest, ::logo::LogoDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_get_data_, context, request, response, std::move(f));
}

void LogoDataProto::Stub::experimental_async::get_data(::grpc::ClientContext* context, const ::logo::LogoDataRequest* request, ::logo::LogoDataResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_get_data_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::logo::LogoDataResponse>* LogoDataProto::Stub::PrepareAsyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoDataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::logo::LogoDataResponse, ::logo::LogoDataRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_get_data_, context, request);
}

::grpc::ClientAsyncResponseReader< ::logo::LogoDataResponse>* LogoDataProto::Stub::Asyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoDataRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncget_dataRaw(context, request, cq);
  result->StartCall();
  return result;
}

LogoDataProto::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LogoDataProto_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LogoDataProto::Service, ::logo::LogoDataRequest, ::logo::LogoDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](LogoDataProto::Service* service,
             ::grpc::ServerContext* ctx,
             const ::logo::LogoDataRequest* req,
             ::logo::LogoDataResponse* resp) {
               return service->get_data(ctx, req, resp);
             }, this)));
}

LogoDataProto::Service::~Service() {
}

::grpc::Status LogoDataProto::Service::get_data(::grpc::ServerContext* context, const ::logo::LogoDataRequest* request, ::logo::LogoDataResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace logo

