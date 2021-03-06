// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_logo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_logo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_logo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_logo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_logo_2eproto;
namespace logo {
class LogoRequest;
class LogoRequestDefaultTypeInternal;
extern LogoRequestDefaultTypeInternal _LogoRequest_default_instance_;
class LogoResponse;
class LogoResponseDefaultTypeInternal;
extern LogoResponseDefaultTypeInternal _LogoResponse_default_instance_;
}  // namespace logo
PROTOBUF_NAMESPACE_OPEN
template<> ::logo::LogoRequest* Arena::CreateMaybeMessage<::logo::LogoRequest>(Arena*);
template<> ::logo::LogoResponse* Arena::CreateMaybeMessage<::logo::LogoResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace logo {

// ===================================================================

class LogoRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:logo.LogoRequest) */ {
 public:
  inline LogoRequest() : LogoRequest(nullptr) {}
  virtual ~LogoRequest();

  LogoRequest(const LogoRequest& from);
  LogoRequest(LogoRequest&& from) noexcept
    : LogoRequest() {
    *this = ::std::move(from);
  }

  inline LogoRequest& operator=(const LogoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogoRequest& operator=(LogoRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogoRequest& default_instance();

  static inline const LogoRequest* internal_default_instance() {
    return reinterpret_cast<const LogoRequest*>(
               &_LogoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogoRequest& a, LogoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(LogoRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LogoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogoRequest* New() const final {
    return CreateMaybeMessage<LogoRequest>(nullptr);
  }

  LogoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogoRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogoRequest& from);
  void MergeFrom(const LogoRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogoRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "logo.LogoRequest";
  }
  protected:
  explicit LogoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_logo_2eproto);
    return ::descriptor_table_logo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:logo.LogoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_logo_2eproto;
};
// -------------------------------------------------------------------

class LogoResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:logo.LogoResponse) */ {
 public:
  inline LogoResponse() : LogoResponse(nullptr) {}
  virtual ~LogoResponse();

  LogoResponse(const LogoResponse& from);
  LogoResponse(LogoResponse&& from) noexcept
    : LogoResponse() {
    *this = ::std::move(from);
  }

  inline LogoResponse& operator=(const LogoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogoResponse& operator=(LogoResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogoResponse& default_instance();

  static inline const LogoResponse* internal_default_instance() {
    return reinterpret_cast<const LogoResponse*>(
               &_LogoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogoResponse& a, LogoResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(LogoResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LogoResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogoResponse* New() const final {
    return CreateMaybeMessage<LogoResponse>(nullptr);
  }

  LogoResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogoResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogoResponse& from);
  void MergeFrom(const LogoResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogoResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "logo.LogoResponse";
  }
  protected:
  explicit LogoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_logo_2eproto);
    return ::descriptor_table_logo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBase64FieldNumber = 1,
  };
  // string base64 = 1;
  void clear_base64();
  const std::string& base64() const;
  void set_base64(const std::string& value);
  void set_base64(std::string&& value);
  void set_base64(const char* value);
  void set_base64(const char* value, size_t size);
  std::string* mutable_base64();
  std::string* release_base64();
  void set_allocated_base64(std::string* base64);
  private:
  const std::string& _internal_base64() const;
  void _internal_set_base64(const std::string& value);
  std::string* _internal_mutable_base64();
  public:

  // @@protoc_insertion_point(class_scope:logo.LogoResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr base64_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_logo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogoRequest

// -------------------------------------------------------------------

// LogoResponse

// string base64 = 1;
inline void LogoResponse::clear_base64() {
  base64_.ClearToEmpty();
}
inline const std::string& LogoResponse::base64() const {
  // @@protoc_insertion_point(field_get:logo.LogoResponse.base64)
  return _internal_base64();
}
inline void LogoResponse::set_base64(const std::string& value) {
  _internal_set_base64(value);
  // @@protoc_insertion_point(field_set:logo.LogoResponse.base64)
}
inline std::string* LogoResponse::mutable_base64() {
  // @@protoc_insertion_point(field_mutable:logo.LogoResponse.base64)
  return _internal_mutable_base64();
}
inline const std::string& LogoResponse::_internal_base64() const {
  return base64_.Get();
}
inline void LogoResponse::_internal_set_base64(const std::string& value) {
  
  base64_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void LogoResponse::set_base64(std::string&& value) {
  
  base64_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:logo.LogoResponse.base64)
}
inline void LogoResponse::set_base64(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  base64_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:logo.LogoResponse.base64)
}
inline void LogoResponse::set_base64(const char* value,
    size_t size) {
  
  base64_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:logo.LogoResponse.base64)
}
inline std::string* LogoResponse::_internal_mutable_base64() {
  
  return base64_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* LogoResponse::release_base64() {
  // @@protoc_insertion_point(field_release:logo.LogoResponse.base64)
  return base64_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LogoResponse::set_allocated_base64(std::string* base64) {
  if (base64 != nullptr) {
    
  } else {
    
  }
  base64_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), base64,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:logo.LogoResponse.base64)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace logo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_logo_2eproto
