// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: offboard/offboard.proto

#include "offboard/offboard.pb.h"
#include "offboard/offboard.grpc.pb.h"

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
namespace mavsdk {
namespace rpc {
namespace offboard {

static const char* OffboardService_method_names[] = {
  "/mavsdk.rpc.offboard.OffboardService/Start",
  "/mavsdk.rpc.offboard.OffboardService/Stop",
  "/mavsdk.rpc.offboard.OffboardService/IsActive",
  "/mavsdk.rpc.offboard.OffboardService/SetAttitude",
  "/mavsdk.rpc.offboard.OffboardService/SetActuatorControl",
  "/mavsdk.rpc.offboard.OffboardService/SetAttitudeRate",
  "/mavsdk.rpc.offboard.OffboardService/SetPositionNed",
  "/mavsdk.rpc.offboard.OffboardService/SetVelocityBody",
  "/mavsdk.rpc.offboard.OffboardService/SetVelocityNed",
};

std::unique_ptr< OffboardService::Stub> OffboardService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< OffboardService::Stub> stub(new OffboardService::Stub(channel));
  return stub;
}

OffboardService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Start_(OffboardService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Stop_(OffboardService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_IsActive_(OffboardService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetAttitude_(OffboardService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetActuatorControl_(OffboardService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetAttitudeRate_(OffboardService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetPositionNed_(OffboardService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetVelocityBody_(OffboardService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetVelocityNed_(OffboardService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status OffboardService::Stub::Start(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StartRequest& request, ::mavsdk::rpc::offboard::StartResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Start_, context, request, response);
}

void OffboardService::Stub::experimental_async::Start(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StartRequest* request, ::mavsdk::rpc::offboard::StartResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Start_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::Start(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StartRequest* request, ::mavsdk::rpc::offboard::StartResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Start_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::StartResponse>* OffboardService::Stub::PrepareAsyncStartRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StartRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::StartResponse>::Create(channel_.get(), cq, rpcmethod_Start_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::StartResponse>* OffboardService::Stub::AsyncStartRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StartRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncStartRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::Stop(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StopRequest& request, ::mavsdk::rpc::offboard::StopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Stop_, context, request, response);
}

void OffboardService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StopRequest* request, ::mavsdk::rpc::offboard::StopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StopRequest* request, ::mavsdk::rpc::offboard::StopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::StopResponse>* OffboardService::Stub::PrepareAsyncStopRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::StopResponse>::Create(channel_.get(), cq, rpcmethod_Stop_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::StopResponse>* OffboardService::Stub::AsyncStopRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::StopRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncStopRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::IsActive(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest& request, ::mavsdk::rpc::offboard::IsActiveResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_IsActive_, context, request, response);
}

void OffboardService::Stub::experimental_async::IsActive(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest* request, ::mavsdk::rpc::offboard::IsActiveResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_IsActive_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::IsActive(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest* request, ::mavsdk::rpc::offboard::IsActiveResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_IsActive_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::IsActiveResponse>* OffboardService::Stub::PrepareAsyncIsActiveRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::IsActiveResponse>::Create(channel_.get(), cq, rpcmethod_IsActive_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::IsActiveResponse>* OffboardService::Stub::AsyncIsActiveRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncIsActiveRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest& request, ::mavsdk::rpc::offboard::SetAttitudeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetAttitude_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest* request, ::mavsdk::rpc::offboard::SetAttitudeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetAttitude_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest* request, ::mavsdk::rpc::offboard::SetAttitudeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetAttitude_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetAttitudeResponse>* OffboardService::Stub::PrepareAsyncSetAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetAttitudeResponse>::Create(channel_.get(), cq, rpcmethod_SetAttitude_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetAttitudeResponse>* OffboardService::Stub::AsyncSetAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetAttitudeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetActuatorControl(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest& request, ::mavsdk::rpc::offboard::SetActuatorControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetActuatorControl_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetActuatorControl(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest* request, ::mavsdk::rpc::offboard::SetActuatorControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetActuatorControl_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetActuatorControl(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest* request, ::mavsdk::rpc::offboard::SetActuatorControlResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetActuatorControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetActuatorControlResponse>* OffboardService::Stub::PrepareAsyncSetActuatorControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetActuatorControlResponse>::Create(channel_.get(), cq, rpcmethod_SetActuatorControl_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetActuatorControlResponse>* OffboardService::Stub::AsyncSetActuatorControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetActuatorControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetAttitudeRate(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest& request, ::mavsdk::rpc::offboard::SetAttitudeRateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetAttitudeRate_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetAttitudeRate(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest* request, ::mavsdk::rpc::offboard::SetAttitudeRateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetAttitudeRate_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetAttitudeRate(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest* request, ::mavsdk::rpc::offboard::SetAttitudeRateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetAttitudeRate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetAttitudeRateResponse>* OffboardService::Stub::PrepareAsyncSetAttitudeRateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetAttitudeRateResponse>::Create(channel_.get(), cq, rpcmethod_SetAttitudeRate_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetAttitudeRateResponse>* OffboardService::Stub::AsyncSetAttitudeRateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetAttitudeRateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetPositionNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest& request, ::mavsdk::rpc::offboard::SetPositionNedResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetPositionNed_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetPositionNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest* request, ::mavsdk::rpc::offboard::SetPositionNedResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPositionNed_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetPositionNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest* request, ::mavsdk::rpc::offboard::SetPositionNedResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetPositionNed_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetPositionNedResponse>* OffboardService::Stub::PrepareAsyncSetPositionNedRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetPositionNedResponse>::Create(channel_.get(), cq, rpcmethod_SetPositionNed_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetPositionNedResponse>* OffboardService::Stub::AsyncSetPositionNedRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetPositionNedRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetVelocityBody(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest& request, ::mavsdk::rpc::offboard::SetVelocityBodyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetVelocityBody_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetVelocityBody(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest* request, ::mavsdk::rpc::offboard::SetVelocityBodyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetVelocityBody_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetVelocityBody(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest* request, ::mavsdk::rpc::offboard::SetVelocityBodyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetVelocityBody_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetVelocityBodyResponse>* OffboardService::Stub::PrepareAsyncSetVelocityBodyRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetVelocityBodyResponse>::Create(channel_.get(), cq, rpcmethod_SetVelocityBody_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetVelocityBodyResponse>* OffboardService::Stub::AsyncSetVelocityBodyRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetVelocityBodyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OffboardService::Stub::SetVelocityNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest& request, ::mavsdk::rpc::offboard::SetVelocityNedResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetVelocityNed_, context, request, response);
}

void OffboardService::Stub::experimental_async::SetVelocityNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest* request, ::mavsdk::rpc::offboard::SetVelocityNedResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetVelocityNed_, context, request, response, std::move(f));
}

void OffboardService::Stub::experimental_async::SetVelocityNed(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest* request, ::mavsdk::rpc::offboard::SetVelocityNedResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetVelocityNed_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetVelocityNedResponse>* OffboardService::Stub::PrepareAsyncSetVelocityNedRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::offboard::SetVelocityNedResponse>::Create(channel_.get(), cq, rpcmethod_SetVelocityNed_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::offboard::SetVelocityNedResponse>* OffboardService::Stub::AsyncSetVelocityNedRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetVelocityNedRaw(context, request, cq);
  result->StartCall();
  return result;
}

OffboardService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::StartRequest, ::mavsdk::rpc::offboard::StartResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::StartRequest* req,
             ::mavsdk::rpc::offboard::StartResponse* resp) {
               return service->Start(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::StopRequest, ::mavsdk::rpc::offboard::StopResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::StopRequest* req,
             ::mavsdk::rpc::offboard::StopResponse* resp) {
               return service->Stop(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::IsActiveRequest, ::mavsdk::rpc::offboard::IsActiveResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::IsActiveRequest* req,
             ::mavsdk::rpc::offboard::IsActiveResponse* resp) {
               return service->IsActive(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetAttitudeRequest, ::mavsdk::rpc::offboard::SetAttitudeResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetAttitudeRequest* req,
             ::mavsdk::rpc::offboard::SetAttitudeResponse* resp) {
               return service->SetAttitude(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetActuatorControlRequest, ::mavsdk::rpc::offboard::SetActuatorControlResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetActuatorControlRequest* req,
             ::mavsdk::rpc::offboard::SetActuatorControlResponse* resp) {
               return service->SetActuatorControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetAttitudeRateRequest, ::mavsdk::rpc::offboard::SetAttitudeRateResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetAttitudeRateRequest* req,
             ::mavsdk::rpc::offboard::SetAttitudeRateResponse* resp) {
               return service->SetAttitudeRate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetPositionNedRequest, ::mavsdk::rpc::offboard::SetPositionNedResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetPositionNedRequest* req,
             ::mavsdk::rpc::offboard::SetPositionNedResponse* resp) {
               return service->SetPositionNed(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetVelocityBodyRequest, ::mavsdk::rpc::offboard::SetVelocityBodyResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetVelocityBodyRequest* req,
             ::mavsdk::rpc::offboard::SetVelocityBodyResponse* resp) {
               return service->SetVelocityBody(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OffboardService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OffboardService::Service, ::mavsdk::rpc::offboard::SetVelocityNedRequest, ::mavsdk::rpc::offboard::SetVelocityNedResponse>(
          [](OffboardService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::offboard::SetVelocityNedRequest* req,
             ::mavsdk::rpc::offboard::SetVelocityNedResponse* resp) {
               return service->SetVelocityNed(ctx, req, resp);
             }, this)));
}

OffboardService::Service::~Service() {
}

::grpc::Status OffboardService::Service::Start(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::StartRequest* request, ::mavsdk::rpc::offboard::StartResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::Stop(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::StopRequest* request, ::mavsdk::rpc::offboard::StopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::IsActive(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::IsActiveRequest* request, ::mavsdk::rpc::offboard::IsActiveResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetAttitude(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRequest* request, ::mavsdk::rpc::offboard::SetAttitudeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetActuatorControl(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetActuatorControlRequest* request, ::mavsdk::rpc::offboard::SetActuatorControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetAttitudeRate(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetAttitudeRateRequest* request, ::mavsdk::rpc::offboard::SetAttitudeRateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetPositionNed(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetPositionNedRequest* request, ::mavsdk::rpc::offboard::SetPositionNedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetVelocityBody(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetVelocityBodyRequest* request, ::mavsdk::rpc::offboard::SetVelocityBodyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OffboardService::Service::SetVelocityNed(::grpc::ServerContext* context, const ::mavsdk::rpc::offboard::SetVelocityNedRequest* request, ::mavsdk::rpc::offboard::SetVelocityNedResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace offboard

