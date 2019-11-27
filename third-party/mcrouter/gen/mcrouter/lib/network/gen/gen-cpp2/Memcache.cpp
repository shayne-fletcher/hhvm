/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "mcrouter/lib/network/gen/gen-cpp2/Memcache.h"
#include "mcrouter/lib/network/gen/gen-cpp2/Memcache.tcc"

#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace facebook { namespace memcache { namespace thrift {
std::unique_ptr<apache::thrift::AsyncProcessor> MemcacheSvIf::getProcessor() {
  return std::make_unique<MemcacheAsyncProcessor>(this);
}

void MemcacheSvIf::mcGet(facebook::memcache::McGetReply& /*_return*/, const facebook::memcache::McGetRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcGet");
}

folly::SemiFuture<facebook::memcache::McGetReply> MemcacheSvIf::semifuture_mcGet(const facebook::memcache::McGetRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McGetReply& _return) { mcGet(_return, request); });
}

folly::Future<facebook::memcache::McGetReply> MemcacheSvIf::future_mcGet(const facebook::memcache::McGetRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcGet(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcGet(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McGetReply>> callback, const facebook::memcache::McGetRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcGet(request); });
}


void MemcacheSvIf::mcSet(facebook::memcache::McSetReply& /*_return*/, const facebook::memcache::McSetRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcSet");
}

folly::SemiFuture<facebook::memcache::McSetReply> MemcacheSvIf::semifuture_mcSet(const facebook::memcache::McSetRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McSetReply& _return) { mcSet(_return, request); });
}

folly::Future<facebook::memcache::McSetReply> MemcacheSvIf::future_mcSet(const facebook::memcache::McSetRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcSet(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcSet(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McSetReply>> callback, const facebook::memcache::McSetRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcSet(request); });
}


void MemcacheSvIf::mcDelete(facebook::memcache::McDeleteReply& /*_return*/, const facebook::memcache::McDeleteRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcDelete");
}

folly::SemiFuture<facebook::memcache::McDeleteReply> MemcacheSvIf::semifuture_mcDelete(const facebook::memcache::McDeleteRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McDeleteReply& _return) { mcDelete(_return, request); });
}

folly::Future<facebook::memcache::McDeleteReply> MemcacheSvIf::future_mcDelete(const facebook::memcache::McDeleteRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcDelete(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcDelete(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McDeleteReply>> callback, const facebook::memcache::McDeleteRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcDelete(request); });
}


void MemcacheSvIf::mcLeaseGet(facebook::memcache::McLeaseGetReply& /*_return*/, const facebook::memcache::McLeaseGetRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcLeaseGet");
}

folly::SemiFuture<facebook::memcache::McLeaseGetReply> MemcacheSvIf::semifuture_mcLeaseGet(const facebook::memcache::McLeaseGetRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McLeaseGetReply& _return) { mcLeaseGet(_return, request); });
}

folly::Future<facebook::memcache::McLeaseGetReply> MemcacheSvIf::future_mcLeaseGet(const facebook::memcache::McLeaseGetRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcLeaseGet(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcLeaseGet(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McLeaseGetReply>> callback, const facebook::memcache::McLeaseGetRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcLeaseGet(request); });
}


void MemcacheSvIf::mcLeaseSet(facebook::memcache::McLeaseSetReply& /*_return*/, const facebook::memcache::McLeaseSetRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcLeaseSet");
}

folly::SemiFuture<facebook::memcache::McLeaseSetReply> MemcacheSvIf::semifuture_mcLeaseSet(const facebook::memcache::McLeaseSetRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McLeaseSetReply& _return) { mcLeaseSet(_return, request); });
}

folly::Future<facebook::memcache::McLeaseSetReply> MemcacheSvIf::future_mcLeaseSet(const facebook::memcache::McLeaseSetRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcLeaseSet(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcLeaseSet(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McLeaseSetReply>> callback, const facebook::memcache::McLeaseSetRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcLeaseSet(request); });
}


void MemcacheSvIf::mcAdd(facebook::memcache::McAddReply& /*_return*/, const facebook::memcache::McAddRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcAdd");
}

folly::SemiFuture<facebook::memcache::McAddReply> MemcacheSvIf::semifuture_mcAdd(const facebook::memcache::McAddRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McAddReply& _return) { mcAdd(_return, request); });
}

folly::Future<facebook::memcache::McAddReply> MemcacheSvIf::future_mcAdd(const facebook::memcache::McAddRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcAdd(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcAdd(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McAddReply>> callback, const facebook::memcache::McAddRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcAdd(request); });
}


void MemcacheSvIf::mcReplace(facebook::memcache::McReplaceReply& /*_return*/, const facebook::memcache::McReplaceRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcReplace");
}

folly::SemiFuture<facebook::memcache::McReplaceReply> MemcacheSvIf::semifuture_mcReplace(const facebook::memcache::McReplaceRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McReplaceReply& _return) { mcReplace(_return, request); });
}

folly::Future<facebook::memcache::McReplaceReply> MemcacheSvIf::future_mcReplace(const facebook::memcache::McReplaceRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcReplace(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcReplace(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McReplaceReply>> callback, const facebook::memcache::McReplaceRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcReplace(request); });
}


void MemcacheSvIf::mcGets(facebook::memcache::McGetsReply& /*_return*/, const facebook::memcache::McGetsRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcGets");
}

folly::SemiFuture<facebook::memcache::McGetsReply> MemcacheSvIf::semifuture_mcGets(const facebook::memcache::McGetsRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McGetsReply& _return) { mcGets(_return, request); });
}

folly::Future<facebook::memcache::McGetsReply> MemcacheSvIf::future_mcGets(const facebook::memcache::McGetsRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcGets(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcGets(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McGetsReply>> callback, const facebook::memcache::McGetsRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcGets(request); });
}


void MemcacheSvIf::mcCas(facebook::memcache::McCasReply& /*_return*/, const facebook::memcache::McCasRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcCas");
}

folly::SemiFuture<facebook::memcache::McCasReply> MemcacheSvIf::semifuture_mcCas(const facebook::memcache::McCasRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McCasReply& _return) { mcCas(_return, request); });
}

folly::Future<facebook::memcache::McCasReply> MemcacheSvIf::future_mcCas(const facebook::memcache::McCasRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcCas(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcCas(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McCasReply>> callback, const facebook::memcache::McCasRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcCas(request); });
}


void MemcacheSvIf::mcIncr(facebook::memcache::McIncrReply& /*_return*/, const facebook::memcache::McIncrRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcIncr");
}

folly::SemiFuture<facebook::memcache::McIncrReply> MemcacheSvIf::semifuture_mcIncr(const facebook::memcache::McIncrRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McIncrReply& _return) { mcIncr(_return, request); });
}

folly::Future<facebook::memcache::McIncrReply> MemcacheSvIf::future_mcIncr(const facebook::memcache::McIncrRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcIncr(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcIncr(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McIncrReply>> callback, const facebook::memcache::McIncrRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcIncr(request); });
}


void MemcacheSvIf::mcDecr(facebook::memcache::McDecrReply& /*_return*/, const facebook::memcache::McDecrRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcDecr");
}

folly::SemiFuture<facebook::memcache::McDecrReply> MemcacheSvIf::semifuture_mcDecr(const facebook::memcache::McDecrRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McDecrReply& _return) { mcDecr(_return, request); });
}

folly::Future<facebook::memcache::McDecrReply> MemcacheSvIf::future_mcDecr(const facebook::memcache::McDecrRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcDecr(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcDecr(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McDecrReply>> callback, const facebook::memcache::McDecrRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcDecr(request); });
}


void MemcacheSvIf::mcMetaget(facebook::memcache::McMetagetReply& /*_return*/, const facebook::memcache::McMetagetRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcMetaget");
}

folly::SemiFuture<facebook::memcache::McMetagetReply> MemcacheSvIf::semifuture_mcMetaget(const facebook::memcache::McMetagetRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McMetagetReply& _return) { mcMetaget(_return, request); });
}

folly::Future<facebook::memcache::McMetagetReply> MemcacheSvIf::future_mcMetaget(const facebook::memcache::McMetagetRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcMetaget(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcMetaget(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McMetagetReply>> callback, const facebook::memcache::McMetagetRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcMetaget(request); });
}


void MemcacheSvIf::mcAppend(facebook::memcache::McAppendReply& /*_return*/, const facebook::memcache::McAppendRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcAppend");
}

folly::SemiFuture<facebook::memcache::McAppendReply> MemcacheSvIf::semifuture_mcAppend(const facebook::memcache::McAppendRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McAppendReply& _return) { mcAppend(_return, request); });
}

folly::Future<facebook::memcache::McAppendReply> MemcacheSvIf::future_mcAppend(const facebook::memcache::McAppendRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcAppend(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcAppend(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McAppendReply>> callback, const facebook::memcache::McAppendRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcAppend(request); });
}


void MemcacheSvIf::mcPrepend(facebook::memcache::McPrependReply& /*_return*/, const facebook::memcache::McPrependRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcPrepend");
}

folly::SemiFuture<facebook::memcache::McPrependReply> MemcacheSvIf::semifuture_mcPrepend(const facebook::memcache::McPrependRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McPrependReply& _return) { mcPrepend(_return, request); });
}

folly::Future<facebook::memcache::McPrependReply> MemcacheSvIf::future_mcPrepend(const facebook::memcache::McPrependRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcPrepend(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcPrepend(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McPrependReply>> callback, const facebook::memcache::McPrependRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcPrepend(request); });
}


void MemcacheSvIf::mcTouch(facebook::memcache::McTouchReply& /*_return*/, const facebook::memcache::McTouchRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcTouch");
}

folly::SemiFuture<facebook::memcache::McTouchReply> MemcacheSvIf::semifuture_mcTouch(const facebook::memcache::McTouchRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McTouchReply& _return) { mcTouch(_return, request); });
}

folly::Future<facebook::memcache::McTouchReply> MemcacheSvIf::future_mcTouch(const facebook::memcache::McTouchRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcTouch(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcTouch(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McTouchReply>> callback, const facebook::memcache::McTouchRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcTouch(request); });
}


void MemcacheSvIf::mcFlushRe(facebook::memcache::McFlushReReply& /*_return*/, const facebook::memcache::McFlushReRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcFlushRe");
}

folly::SemiFuture<facebook::memcache::McFlushReReply> MemcacheSvIf::semifuture_mcFlushRe(const facebook::memcache::McFlushReRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McFlushReReply& _return) { mcFlushRe(_return, request); });
}

folly::Future<facebook::memcache::McFlushReReply> MemcacheSvIf::future_mcFlushRe(const facebook::memcache::McFlushReRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcFlushRe(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcFlushRe(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McFlushReReply>> callback, const facebook::memcache::McFlushReRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcFlushRe(request); });
}


void MemcacheSvIf::mcFlushAll(facebook::memcache::McFlushAllReply& /*_return*/, const facebook::memcache::McFlushAllRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcFlushAll");
}

folly::SemiFuture<facebook::memcache::McFlushAllReply> MemcacheSvIf::semifuture_mcFlushAll(const facebook::memcache::McFlushAllRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McFlushAllReply& _return) { mcFlushAll(_return, request); });
}

folly::Future<facebook::memcache::McFlushAllReply> MemcacheSvIf::future_mcFlushAll(const facebook::memcache::McFlushAllRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcFlushAll(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcFlushAll(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McFlushAllReply>> callback, const facebook::memcache::McFlushAllRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcFlushAll(request); });
}


void MemcacheSvIf::mcGat(facebook::memcache::McGatReply& /*_return*/, const facebook::memcache::McGatRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcGat");
}

folly::SemiFuture<facebook::memcache::McGatReply> MemcacheSvIf::semifuture_mcGat(const facebook::memcache::McGatRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McGatReply& _return) { mcGat(_return, request); });
}

folly::Future<facebook::memcache::McGatReply> MemcacheSvIf::future_mcGat(const facebook::memcache::McGatRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcGat(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcGat(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McGatReply>> callback, const facebook::memcache::McGatRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcGat(request); });
}


void MemcacheSvIf::mcGats(facebook::memcache::McGatsReply& /*_return*/, const facebook::memcache::McGatsRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcGats");
}

folly::SemiFuture<facebook::memcache::McGatsReply> MemcacheSvIf::semifuture_mcGats(const facebook::memcache::McGatsRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McGatsReply& _return) { mcGats(_return, request); });
}

folly::Future<facebook::memcache::McGatsReply> MemcacheSvIf::future_mcGats(const facebook::memcache::McGatsRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcGats(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcGats(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McGatsReply>> callback, const facebook::memcache::McGatsRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcGats(request); });
}


void MemcacheSvIf::mcVersion(facebook::memcache::McVersionReply& /*_return*/, const facebook::memcache::McVersionRequest& /*request*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mcVersion");
}

folly::SemiFuture<facebook::memcache::McVersionReply> MemcacheSvIf::semifuture_mcVersion(const facebook::memcache::McVersionRequest& request) {
  return apache::thrift::detail::si::semifuture_returning([&](facebook::memcache::McVersionReply& _return) { mcVersion(_return, request); });
}

folly::Future<facebook::memcache::McVersionReply> MemcacheSvIf::future_mcVersion(const facebook::memcache::McVersionRequest& request) {
  return apache::thrift::detail::si::future(semifuture_mcVersion(request), getThreadManager());
}


void MemcacheSvIf::async_eb_mcVersion(std::unique_ptr<apache::thrift::HandlerCallback<facebook::memcache::McVersionReply>> callback, const facebook::memcache::McVersionRequest& request) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, request = std::move(request)]() mutable { return future_mcVersion(request); });
}


const char* MemcacheAsyncProcessor::getServiceName() {
  return "Memcache";
}

folly::Optional<std::string> MemcacheAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void MemcacheAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool MemcacheAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::shared_ptr<folly::RequestContext> MemcacheAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

std::unordered_set<std::string> MemcacheAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> MemcacheAsyncProcessor::cacheKeyMap_ {};
const MemcacheAsyncProcessor::ProcessMap& MemcacheAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MemcacheAsyncProcessor::ProcessMap MemcacheAsyncProcessor::binaryProcessMap_ {
  {"mcGet", &MemcacheAsyncProcessor::process_mcGet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcSet", &MemcacheAsyncProcessor::process_mcSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcDelete", &MemcacheAsyncProcessor::process_mcDelete<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcLeaseGet", &MemcacheAsyncProcessor::process_mcLeaseGet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcLeaseSet", &MemcacheAsyncProcessor::process_mcLeaseSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcAdd", &MemcacheAsyncProcessor::process_mcAdd<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcReplace", &MemcacheAsyncProcessor::process_mcReplace<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcGets", &MemcacheAsyncProcessor::process_mcGets<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcCas", &MemcacheAsyncProcessor::process_mcCas<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcIncr", &MemcacheAsyncProcessor::process_mcIncr<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcDecr", &MemcacheAsyncProcessor::process_mcDecr<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcMetaget", &MemcacheAsyncProcessor::process_mcMetaget<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcAppend", &MemcacheAsyncProcessor::process_mcAppend<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcPrepend", &MemcacheAsyncProcessor::process_mcPrepend<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcTouch", &MemcacheAsyncProcessor::process_mcTouch<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcFlushRe", &MemcacheAsyncProcessor::process_mcFlushRe<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcFlushAll", &MemcacheAsyncProcessor::process_mcFlushAll<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcGat", &MemcacheAsyncProcessor::process_mcGat<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcGats", &MemcacheAsyncProcessor::process_mcGats<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mcVersion", &MemcacheAsyncProcessor::process_mcVersion<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MemcacheAsyncProcessor::ProcessMap& MemcacheAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MemcacheAsyncProcessor::ProcessMap MemcacheAsyncProcessor::compactProcessMap_ {
  {"mcGet", &MemcacheAsyncProcessor::process_mcGet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcSet", &MemcacheAsyncProcessor::process_mcSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcDelete", &MemcacheAsyncProcessor::process_mcDelete<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcLeaseGet", &MemcacheAsyncProcessor::process_mcLeaseGet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcLeaseSet", &MemcacheAsyncProcessor::process_mcLeaseSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcAdd", &MemcacheAsyncProcessor::process_mcAdd<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcReplace", &MemcacheAsyncProcessor::process_mcReplace<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcGets", &MemcacheAsyncProcessor::process_mcGets<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcCas", &MemcacheAsyncProcessor::process_mcCas<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcIncr", &MemcacheAsyncProcessor::process_mcIncr<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcDecr", &MemcacheAsyncProcessor::process_mcDecr<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcMetaget", &MemcacheAsyncProcessor::process_mcMetaget<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcAppend", &MemcacheAsyncProcessor::process_mcAppend<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcPrepend", &MemcacheAsyncProcessor::process_mcPrepend<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcTouch", &MemcacheAsyncProcessor::process_mcTouch<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcFlushRe", &MemcacheAsyncProcessor::process_mcFlushRe<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcFlushAll", &MemcacheAsyncProcessor::process_mcFlushAll<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcGat", &MemcacheAsyncProcessor::process_mcGat<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcGats", &MemcacheAsyncProcessor::process_mcGats<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mcVersion", &MemcacheAsyncProcessor::process_mcVersion<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}}} // facebook::memcache::thrift
namespace apache { namespace thrift {

}} // apache::thrift