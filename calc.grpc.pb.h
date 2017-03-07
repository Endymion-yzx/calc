// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: calc.proto
#ifndef GRPC_calc_2eproto__INCLUDED
#define GRPC_calc_2eproto__INCLUDED

#include "calc.pb.h"

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

namespace calc {

// Interface
class Calc final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CalcArea(::grpc::ClientContext* context, const ::calc::Circle& request, ::calc::Area* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::calc::Area>> AsyncCalcArea(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::calc::Area>>(AsyncCalcAreaRaw(context, request, cq));
    }
    virtual ::grpc::Status CalcCircum(::grpc::ClientContext* context, const ::calc::Circle& request, ::calc::Circum* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::calc::Circum>> AsyncCalcCircum(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::calc::Circum>>(AsyncCalcCircumRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriterInterface< ::calc::Circle>> CalcAreaSum(::grpc::ClientContext* context, ::calc::Area* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::calc::Circle>>(CalcAreaSumRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::calc::Circle>> AsyncCalcAreaSum(::grpc::ClientContext* context, ::calc::Area* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::calc::Circle>>(AsyncCalcAreaSumRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::calc::Circle, ::calc::Area>> CalcAreaStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::calc::Circle, ::calc::Area>>(CalcAreaStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::calc::Circle, ::calc::Area>> AsyncCalcAreaStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::calc::Circle, ::calc::Area>>(AsyncCalcAreaStreamRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::calc::Area>* AsyncCalcAreaRaw(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::calc::Circum>* AsyncCalcCircumRaw(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::calc::Circle>* CalcAreaSumRaw(::grpc::ClientContext* context, ::calc::Area* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::calc::Circle>* AsyncCalcAreaSumRaw(::grpc::ClientContext* context, ::calc::Area* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::calc::Circle, ::calc::Area>* CalcAreaStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::calc::Circle, ::calc::Area>* AsyncCalcAreaStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CalcArea(::grpc::ClientContext* context, const ::calc::Circle& request, ::calc::Area* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::calc::Area>> AsyncCalcArea(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::calc::Area>>(AsyncCalcAreaRaw(context, request, cq));
    }
    ::grpc::Status CalcCircum(::grpc::ClientContext* context, const ::calc::Circle& request, ::calc::Circum* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::calc::Circum>> AsyncCalcCircum(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::calc::Circum>>(AsyncCalcCircumRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::calc::Circle>> CalcAreaSum(::grpc::ClientContext* context, ::calc::Area* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::calc::Circle>>(CalcAreaSumRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::calc::Circle>> AsyncCalcAreaSum(::grpc::ClientContext* context, ::calc::Area* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::calc::Circle>>(AsyncCalcAreaSumRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::calc::Circle, ::calc::Area>> CalcAreaStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::calc::Circle, ::calc::Area>>(CalcAreaStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::calc::Circle, ::calc::Area>> AsyncCalcAreaStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::calc::Circle, ::calc::Area>>(AsyncCalcAreaStreamRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::calc::Area>* AsyncCalcAreaRaw(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::calc::Circum>* AsyncCalcCircumRaw(::grpc::ClientContext* context, const ::calc::Circle& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::calc::Circle>* CalcAreaSumRaw(::grpc::ClientContext* context, ::calc::Area* response) override;
    ::grpc::ClientAsyncWriter< ::calc::Circle>* AsyncCalcAreaSumRaw(::grpc::ClientContext* context, ::calc::Area* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientReaderWriter< ::calc::Circle, ::calc::Area>* CalcAreaStreamRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::calc::Circle, ::calc::Area>* AsyncCalcAreaStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    const ::grpc::RpcMethod rpcmethod_CalcArea_;
    const ::grpc::RpcMethod rpcmethod_CalcCircum_;
    const ::grpc::RpcMethod rpcmethod_CalcAreaSum_;
    const ::grpc::RpcMethod rpcmethod_CalcAreaStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CalcArea(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Area* response);
    virtual ::grpc::Status CalcCircum(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Circum* response);
    virtual ::grpc::Status CalcAreaSum(::grpc::ServerContext* context, ::grpc::ServerReader< ::calc::Circle>* reader, ::calc::Area* response);
    virtual ::grpc::Status CalcAreaStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::calc::Area, ::calc::Circle>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_CalcArea : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CalcArea() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CalcArea() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcArea(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Area* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalcArea(::grpc::ServerContext* context, ::calc::Circle* request, ::grpc::ServerAsyncResponseWriter< ::calc::Area>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CalcCircum : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CalcCircum() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CalcCircum() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcCircum(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Circum* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalcCircum(::grpc::ServerContext* context, ::calc::Circle* request, ::grpc::ServerAsyncResponseWriter< ::calc::Circum>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CalcAreaSum : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CalcAreaSum() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_CalcAreaSum() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcAreaSum(::grpc::ServerContext* context, ::grpc::ServerReader< ::calc::Circle>* reader, ::calc::Area* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalcAreaSum(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::calc::Area, ::calc::Circle>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(2, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CalcAreaStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CalcAreaStream() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_CalcAreaStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcAreaStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::calc::Area, ::calc::Circle>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalcAreaStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::calc::Area, ::calc::Circle>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(3, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CalcArea<WithAsyncMethod_CalcCircum<WithAsyncMethod_CalcAreaSum<WithAsyncMethod_CalcAreaStream<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CalcArea : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CalcArea() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CalcArea() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcArea(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Area* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CalcCircum : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CalcCircum() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CalcCircum() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcCircum(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Circum* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CalcAreaSum : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CalcAreaSum() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_CalcAreaSum() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcAreaSum(::grpc::ServerContext* context, ::grpc::ServerReader< ::calc::Circle>* reader, ::calc::Area* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CalcAreaStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CalcAreaStream() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_CalcAreaStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CalcAreaStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::calc::Area, ::calc::Circle>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CalcArea : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CalcArea() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::calc::Circle, ::calc::Area>(std::bind(&WithStreamedUnaryMethod_CalcArea<BaseClass>::StreamedCalcArea, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CalcArea() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CalcArea(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Area* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCalcArea(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::calc::Circle,::calc::Area>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CalcCircum : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CalcCircum() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::calc::Circle, ::calc::Circum>(std::bind(&WithStreamedUnaryMethod_CalcCircum<BaseClass>::StreamedCalcCircum, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CalcCircum() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CalcCircum(::grpc::ServerContext* context, const ::calc::Circle* request, ::calc::Circum* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCalcCircum(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::calc::Circle,::calc::Circum>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CalcArea<WithStreamedUnaryMethod_CalcCircum<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CalcArea<WithStreamedUnaryMethod_CalcCircum<Service > > StreamedService;
};

}  // namespace calc


#endif  // GRPC_calc_2eproto__INCLUDED
