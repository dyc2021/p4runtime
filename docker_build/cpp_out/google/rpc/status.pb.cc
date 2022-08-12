// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/rpc/status.proto

#include "google/rpc/status.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace google {
namespace rpc {
constexpr Status::Status(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : details_()
  , message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , code_(0){}
struct StatusDefaultTypeInternal {
  constexpr StatusDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StatusDefaultTypeInternal() {}
  union {
    Status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace rpc
}  // namespace google
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2frpc_2fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2frpc_2fstatus_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2frpc_2fstatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2frpc_2fstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, code_),
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, message_),
  PROTOBUF_FIELD_OFFSET(::google::rpc::Status, details_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::rpc::Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::rpc::_Status_default_instance_),
};

const char descriptor_table_protodef_google_2frpc_2fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027google/rpc/status.proto\022\ngoogle.rpc\032\031g"
  "oogle/protobuf/any.proto\"N\n\006Status\022\014\n\004co"
  "de\030\001 \001(\005\022\017\n\007message\030\002 \001(\t\022%\n\007details\030\003 \003"
  "(\0132\024.google.protobuf.AnyBa\n\016com.google.r"
  "pcB\013StatusProtoP\001Z7google.golang.org/gen"
  "proto/googleapis/rpc/status;status\370\001\001\242\002\003"
  "RPCb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2frpc_2fstatus_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2frpc_2fstatus_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2frpc_2fstatus_2eproto = {
  false, false, 251, descriptor_table_protodef_google_2frpc_2fstatus_2eproto, "google/rpc/status.proto", 
  &descriptor_table_google_2frpc_2fstatus_2eproto_once, descriptor_table_google_2frpc_2fstatus_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_google_2frpc_2fstatus_2eproto::offsets,
  file_level_metadata_google_2frpc_2fstatus_2eproto, file_level_enum_descriptors_google_2frpc_2fstatus_2eproto, file_level_service_descriptors_google_2frpc_2fstatus_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2frpc_2fstatus_2eproto_getter() {
  return &descriptor_table_google_2frpc_2fstatus_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2frpc_2fstatus_2eproto(&descriptor_table_google_2frpc_2fstatus_2eproto);
namespace google {
namespace rpc {

// ===================================================================

class Status::_Internal {
 public:
};

void Status::clear_details() {
  details_.Clear();
}
Status::Status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  details_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.rpc.Status)
}
Status::Status(const Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      details_(from.details_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:google.rpc.Status)
}

void Status::SharedCtor() {
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
code_ = 0;
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:google.rpc.Status)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Status::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Status::ArenaDtor(void* object) {
  Status* _this = reinterpret_cast< Status* >(object);
  (void)_this;
}
void Status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:google.rpc.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  details_.Clear();
  message_.ClearToEmpty();
  code_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.rpc.Status.message"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .google.protobuf.Any details = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_details(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.rpc.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 code = 1;
  if (this->_internal_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_code(), target);
  }

  // string message = 2;
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.rpc.Status.message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_message(), target);
  }

  // repeated .google.protobuf.Any details = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_details_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_details(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.rpc.Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.rpc.Status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any details = 3;
  total_size += 1UL * this->_internal_details_size();
  for (const auto& msg : this->details_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string message = 2;
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // int32 code = 1;
  if (this->_internal_code() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Status::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Status::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Status::GetClassData() const { return &_class_data_; }

void Status::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Status *>(to)->MergeFrom(
      static_cast<const Status &>(from));
}


void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.rpc.Status)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  details_.MergeFrom(from.details_);
  if (!from._internal_message().empty()) {
    _internal_set_message(from._internal_message());
  }
  if (from._internal_code() != 0) {
    _internal_set_code(from._internal_code());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.rpc.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::InternalSwap(Status* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  details_.InternalSwap(&other->details_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, lhs_arena,
      &other->message_, rhs_arena
  );
  swap(code_, other->code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Status::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2frpc_2fstatus_2eproto_getter, &descriptor_table_google_2frpc_2fstatus_2eproto_once,
      file_level_metadata_google_2frpc_2fstatus_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::rpc::Status* Arena::CreateMaybeMessage< ::google::rpc::Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::rpc::Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
