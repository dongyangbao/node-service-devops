// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: logo.proto
// Original file comments:
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_logo_2eproto__INCLUDED
#define GRPC_logo_2eproto__INCLUDED

#include "logo.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace logo {

// The greeting service definition.
class LogoProto final {
 public:
  static constexpr char const* service_full_name() {
    return "logo.LogoProto";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    virtual ::grpc::Status get_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::logo::LogoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>> Asyncget_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>>(Asyncget_dataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>> PrepareAsyncget_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>>(PrepareAsyncget_dataRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Sends a greeting
      virtual void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>* Asyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::logo::LogoResponse>* PrepareAsyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status get_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::logo::LogoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>> Asyncget_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>>(Asyncget_dataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>> PrepareAsyncget_data(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>>(PrepareAsyncget_dataRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void get_data(::grpc::ClientContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>* Asyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::logo::LogoResponse>* PrepareAsyncget_dataRaw(::grpc::ClientContext* context, const ::logo::LogoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_get_data_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    virtual ::grpc::Status get_data(::grpc::ServerContext* context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_get_data() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestget_data(::grpc::ServerContext* context, ::logo::LogoRequest* request, ::grpc::ServerAsyncResponseWriter< ::logo::LogoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_get_data<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_get_data() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::logo::LogoRequest, ::logo::LogoResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::logo::LogoRequest* request, ::logo::LogoResponse* response) { return this->get_data(context, request, response); }));}
    void SetMessageAllocatorFor_get_data(
        ::grpc::experimental::MessageAllocator< ::logo::LogoRequest, ::logo::LogoResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::logo::LogoRequest, ::logo::LogoResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* get_data(
      ::grpc::CallbackServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* get_data(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_get_data<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_get_data<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_get_data() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_get_data() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestget_data(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_get_data() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->get_data(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* get_data(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* get_data(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_get_data : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_get_data() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::logo::LogoRequest, ::logo::LogoResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::logo::LogoRequest, ::logo::LogoResponse>* streamer) {
                       return this->Streamedget_data(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_get_data() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status get_data(::grpc::ServerContext* /*context*/, const ::logo::LogoRequest* /*request*/, ::logo::LogoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedget_data(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::logo::LogoRequest,::logo::LogoResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_get_data<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_get_data<Service > StreamedService;
};

}  // namespace logo


#endif  // GRPC_logo_2eproto__INCLUDED