// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logodata.proto

#include "logodata.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace logo {
class LogoDataRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogoDataRequest> _instance;
} _LogoDataRequest_default_instance_;
class LogoDataResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogoDataResponse> _instance;
} _LogoDataResponse_default_instance_;
}  // namespace logo
static void InitDefaultsscc_info_LogoDataRequest_logodata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::logo::_LogoDataRequest_default_instance_;
    new (ptr) ::logo::LogoDataRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogoDataRequest_logodata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogoDataRequest_logodata_2eproto}, {}};

static void InitDefaultsscc_info_LogoDataResponse_logodata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::logo::_LogoDataResponse_default_instance_;
    new (ptr) ::logo::LogoDataResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogoDataResponse_logodata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogoDataResponse_logodata_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_logodata_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_logodata_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_logodata_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_logodata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataRequest, codeforces_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataRequest, topcoder_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataRequest, nike_username_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataRequest, nike_password_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataResponse, codeforces_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataResponse, topcoder_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataResponse, nike_distance_),
  PROTOBUF_FIELD_OFFSET(::logo::LogoDataResponse, nike_activities_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::logo::LogoDataRequest)},
  { 9, -1, sizeof(::logo::LogoDataResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::logo::_LogoDataRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::logo::_LogoDataResponse_default_instance_),
};

const char descriptor_table_protodef_logodata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016logodata.proto\022\004logo\"e\n\017LogoDataReques"
  "t\022\022\n\ncodeforces\030\001 \001(\t\022\020\n\010topcoder\030\002 \001(\t\022"
  "\025\n\rnike_username\030\003 \001(\t\022\025\n\rnike_password\030"
  "\004 \001(\t\"h\n\020LogoDataResponse\022\022\n\ncodeforces\030"
  "\001 \001(\005\022\020\n\010topcoder\030\002 \001(\005\022\025\n\rnike_distance"
  "\030\003 \001(\001\022\027\n\017nike_activities\030\004 \001(\0052L\n\rLogoD"
  "ataProto\022;\n\010get_data\022\025.logo.LogoDataRequ"
  "est\032\026.logo.LogoDataResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_logodata_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_logodata_2eproto_sccs[2] = {
  &scc_info_LogoDataRequest_logodata_2eproto.base,
  &scc_info_LogoDataResponse_logodata_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_logodata_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_logodata_2eproto = {
  false, false, descriptor_table_protodef_logodata_2eproto, "logodata.proto", 317,
  &descriptor_table_logodata_2eproto_once, descriptor_table_logodata_2eproto_sccs, descriptor_table_logodata_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_logodata_2eproto::offsets,
  file_level_metadata_logodata_2eproto, 2, file_level_enum_descriptors_logodata_2eproto, file_level_service_descriptors_logodata_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_logodata_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_logodata_2eproto)), true);
namespace logo {

// ===================================================================

class LogoDataRequest::_Internal {
 public:
};

LogoDataRequest::LogoDataRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:logo.LogoDataRequest)
}
LogoDataRequest::LogoDataRequest(const LogoDataRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  codeforces_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_codeforces().empty()) {
    codeforces_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_codeforces(), 
      GetArena());
  }
  topcoder_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_topcoder().empty()) {
    topcoder_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_topcoder(), 
      GetArena());
  }
  nike_username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_nike_username().empty()) {
    nike_username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_nike_username(), 
      GetArena());
  }
  nike_password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_nike_password().empty()) {
    nike_password_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_nike_password(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:logo.LogoDataRequest)
}

void LogoDataRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogoDataRequest_logodata_2eproto.base);
  codeforces_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  topcoder_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  nike_username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  nike_password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LogoDataRequest::~LogoDataRequest() {
  // @@protoc_insertion_point(destructor:logo.LogoDataRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LogoDataRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  codeforces_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  topcoder_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  nike_username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  nike_password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LogoDataRequest::ArenaDtor(void* object) {
  LogoDataRequest* _this = reinterpret_cast< LogoDataRequest* >(object);
  (void)_this;
}
void LogoDataRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LogoDataRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogoDataRequest& LogoDataRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogoDataRequest_logodata_2eproto.base);
  return *internal_default_instance();
}


void LogoDataRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:logo.LogoDataRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  codeforces_.ClearToEmpty();
  topcoder_.ClearToEmpty();
  nike_username_.ClearToEmpty();
  nike_password_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LogoDataRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string codeforces = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_codeforces();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "logo.LogoDataRequest.codeforces"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string topcoder = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_topcoder();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "logo.LogoDataRequest.topcoder"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string nike_username = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_nike_username();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "logo.LogoDataRequest.nike_username"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string nike_password = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_nike_password();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "logo.LogoDataRequest.nike_password"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LogoDataRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:logo.LogoDataRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string codeforces = 1;
  if (this->codeforces().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_codeforces().data(), static_cast<int>(this->_internal_codeforces().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "logo.LogoDataRequest.codeforces");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_codeforces(), target);
  }

  // string topcoder = 2;
  if (this->topcoder().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_topcoder().data(), static_cast<int>(this->_internal_topcoder().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "logo.LogoDataRequest.topcoder");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_topcoder(), target);
  }

  // string nike_username = 3;
  if (this->nike_username().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_nike_username().data(), static_cast<int>(this->_internal_nike_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "logo.LogoDataRequest.nike_username");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_nike_username(), target);
  }

  // string nike_password = 4;
  if (this->nike_password().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_nike_password().data(), static_cast<int>(this->_internal_nike_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "logo.LogoDataRequest.nike_password");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_nike_password(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:logo.LogoDataRequest)
  return target;
}

size_t LogoDataRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:logo.LogoDataRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string codeforces = 1;
  if (this->codeforces().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_codeforces());
  }

  // string topcoder = 2;
  if (this->topcoder().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_topcoder());
  }

  // string nike_username = 3;
  if (this->nike_username().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nike_username());
  }

  // string nike_password = 4;
  if (this->nike_password().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nike_password());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogoDataRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:logo.LogoDataRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const LogoDataRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogoDataRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:logo.LogoDataRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:logo.LogoDataRequest)
    MergeFrom(*source);
  }
}

void LogoDataRequest::MergeFrom(const LogoDataRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:logo.LogoDataRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.codeforces().size() > 0) {
    _internal_set_codeforces(from._internal_codeforces());
  }
  if (from.topcoder().size() > 0) {
    _internal_set_topcoder(from._internal_topcoder());
  }
  if (from.nike_username().size() > 0) {
    _internal_set_nike_username(from._internal_nike_username());
  }
  if (from.nike_password().size() > 0) {
    _internal_set_nike_password(from._internal_nike_password());
  }
}

void LogoDataRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:logo.LogoDataRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogoDataRequest::CopyFrom(const LogoDataRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:logo.LogoDataRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogoDataRequest::IsInitialized() const {
  return true;
}

void LogoDataRequest::InternalSwap(LogoDataRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  codeforces_.Swap(&other->codeforces_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  topcoder_.Swap(&other->topcoder_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  nike_username_.Swap(&other->nike_username_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  nike_password_.Swap(&other->nike_password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata LogoDataRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class LogoDataResponse::_Internal {
 public:
};

LogoDataResponse::LogoDataResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:logo.LogoDataResponse)
}
LogoDataResponse::LogoDataResponse(const LogoDataResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&codeforces_, &from.codeforces_,
    static_cast<size_t>(reinterpret_cast<char*>(&nike_activities_) -
    reinterpret_cast<char*>(&codeforces_)) + sizeof(nike_activities_));
  // @@protoc_insertion_point(copy_constructor:logo.LogoDataResponse)
}

void LogoDataResponse::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&codeforces_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&nike_activities_) -
      reinterpret_cast<char*>(&codeforces_)) + sizeof(nike_activities_));
}

LogoDataResponse::~LogoDataResponse() {
  // @@protoc_insertion_point(destructor:logo.LogoDataResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LogoDataResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void LogoDataResponse::ArenaDtor(void* object) {
  LogoDataResponse* _this = reinterpret_cast< LogoDataResponse* >(object);
  (void)_this;
}
void LogoDataResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LogoDataResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogoDataResponse& LogoDataResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogoDataResponse_logodata_2eproto.base);
  return *internal_default_instance();
}


void LogoDataResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:logo.LogoDataResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&codeforces_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nike_activities_) -
      reinterpret_cast<char*>(&codeforces_)) + sizeof(nike_activities_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LogoDataResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 codeforces = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          codeforces_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 topcoder = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          topcoder_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double nike_distance = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          nike_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // int32 nike_activities = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          nike_activities_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LogoDataResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:logo.LogoDataResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 codeforces = 1;
  if (this->codeforces() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_codeforces(), target);
  }

  // int32 topcoder = 2;
  if (this->topcoder() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_topcoder(), target);
  }

  // double nike_distance = 3;
  if (!(this->nike_distance() <= 0 && this->nike_distance() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_nike_distance(), target);
  }

  // int32 nike_activities = 4;
  if (this->nike_activities() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_nike_activities(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:logo.LogoDataResponse)
  return target;
}

size_t LogoDataResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:logo.LogoDataResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 codeforces = 1;
  if (this->codeforces() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_codeforces());
  }

  // int32 topcoder = 2;
  if (this->topcoder() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_topcoder());
  }

  // double nike_distance = 3;
  if (!(this->nike_distance() <= 0 && this->nike_distance() >= 0)) {
    total_size += 1 + 8;
  }

  // int32 nike_activities = 4;
  if (this->nike_activities() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_nike_activities());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogoDataResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:logo.LogoDataResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const LogoDataResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogoDataResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:logo.LogoDataResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:logo.LogoDataResponse)
    MergeFrom(*source);
  }
}

void LogoDataResponse::MergeFrom(const LogoDataResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:logo.LogoDataResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.codeforces() != 0) {
    _internal_set_codeforces(from._internal_codeforces());
  }
  if (from.topcoder() != 0) {
    _internal_set_topcoder(from._internal_topcoder());
  }
  if (!(from.nike_distance() <= 0 && from.nike_distance() >= 0)) {
    _internal_set_nike_distance(from._internal_nike_distance());
  }
  if (from.nike_activities() != 0) {
    _internal_set_nike_activities(from._internal_nike_activities());
  }
}

void LogoDataResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:logo.LogoDataResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogoDataResponse::CopyFrom(const LogoDataResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:logo.LogoDataResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogoDataResponse::IsInitialized() const {
  return true;
}

void LogoDataResponse::InternalSwap(LogoDataResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LogoDataResponse, nike_activities_)
      + sizeof(LogoDataResponse::nike_activities_)
      - PROTOBUF_FIELD_OFFSET(LogoDataResponse, codeforces_)>(
          reinterpret_cast<char*>(&codeforces_),
          reinterpret_cast<char*>(&other->codeforces_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LogoDataResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace logo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::logo::LogoDataRequest* Arena::CreateMaybeMessage< ::logo::LogoDataRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::logo::LogoDataRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::logo::LogoDataResponse* Arena::CreateMaybeMessage< ::logo::LogoDataResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::logo::LogoDataResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
