// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: p4/tmp/p4config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "p4/tmp/p4config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace p4 {
namespace tmp {
class P4DeviceConfig_ExtrasDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<P4DeviceConfig_Extras> {
} _P4DeviceConfig_Extras_default_instance_;
class P4DeviceConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<P4DeviceConfig> {
} _P4DeviceConfig_default_instance_;

namespace protobuf_p4_2ftmp_2fp4config_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[3];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig_Extras, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig_Extras, kv_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig, reassign_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig, extras_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(P4DeviceConfig, device_data_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(P4DeviceConfig_Extras)},
  { 5, -1, sizeof(P4DeviceConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_P4DeviceConfig_Extras_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_P4DeviceConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "p4/tmp/p4config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
  const ::google::protobuf::Descriptor* P4DeviceConfig_Extras_KvEntry_descriptor = protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[0].descriptor;
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        P4DeviceConfig_Extras_KvEntry_descriptor,
        ::google::protobuf::internal::MapEntry<
            ::std::string,
            ::std::string,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            0>::CreateDefaultInstance(
                P4DeviceConfig_Extras_KvEntry_descriptor));
}

}  // namespace

void TableStruct::Shutdown() {
  _P4DeviceConfig_Extras_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _P4DeviceConfig_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _P4DeviceConfig_Extras_default_instance_.DefaultConstruct();
  _P4DeviceConfig_default_instance_.DefaultConstruct();
  _P4DeviceConfig_default_instance_.get_mutable()->extras_ = const_cast< ::p4::tmp::P4DeviceConfig_Extras*>(
      ::p4::tmp::P4DeviceConfig_Extras::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\025p4/tmp/p4config.proto\022\006p4.tmp\"\316\001\n\016P4De"
      "viceConfig\022\020\n\010reassign\030\001 \001(\010\022-\n\006extras\030\002"
      " \001(\0132\035.p4.tmp.P4DeviceConfig.Extras\022\023\n\013d"
      "evice_data\030\003 \001(\014\032f\n\006Extras\0221\n\002kv\030\001 \003(\0132%"
      ".p4.tmp.P4DeviceConfig.Extras.KvEntry\032)\n"
      "\007KvEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "p4/tmp/p4config.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_p4_2ftmp_2fp4config_2eproto


// ===================================================================

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int P4DeviceConfig_Extras::kKvFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

P4DeviceConfig_Extras::P4DeviceConfig_Extras()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_p4_2ftmp_2fp4config_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:p4.tmp.P4DeviceConfig.Extras)
}
P4DeviceConfig_Extras::P4DeviceConfig_Extras(const P4DeviceConfig_Extras& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  const ::google::protobuf::Descriptor*& P4DeviceConfig_Extras_KvEntry_descriptor = protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[0].descriptor;
  kv_.SetAssignDescriptorCallback(
      protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce);
  kv_.SetEntryDescriptor(
      &P4DeviceConfig_Extras_KvEntry_descriptor);
  kv_.MergeFrom(from.kv_);
  // @@protoc_insertion_point(copy_constructor:p4.tmp.P4DeviceConfig.Extras)
}

void P4DeviceConfig_Extras::SharedCtor() {
  const ::google::protobuf::Descriptor*& P4DeviceConfig_Extras_KvEntry_descriptor = protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[0].descriptor;
  kv_.SetAssignDescriptorCallback(
      protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce);
  kv_.SetEntryDescriptor(
      &P4DeviceConfig_Extras_KvEntry_descriptor);
  _cached_size_ = 0;
}

P4DeviceConfig_Extras::~P4DeviceConfig_Extras() {
  // @@protoc_insertion_point(destructor:p4.tmp.P4DeviceConfig.Extras)
  SharedDtor();
}

void P4DeviceConfig_Extras::SharedDtor() {
}

void P4DeviceConfig_Extras::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* P4DeviceConfig_Extras::descriptor() {
  protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[1].descriptor;
}

const P4DeviceConfig_Extras& P4DeviceConfig_Extras::default_instance() {
  protobuf_p4_2ftmp_2fp4config_2eproto::InitDefaults();
  return *internal_default_instance();
}

P4DeviceConfig_Extras* P4DeviceConfig_Extras::New(::google::protobuf::Arena* arena) const {
  P4DeviceConfig_Extras* n = new P4DeviceConfig_Extras;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void P4DeviceConfig_Extras::Clear() {
// @@protoc_insertion_point(message_clear_start:p4.tmp.P4DeviceConfig.Extras)
  kv_.Clear();
}

bool P4DeviceConfig_Extras::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:p4.tmp.P4DeviceConfig.Extras)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, string> kv = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          P4DeviceConfig_Extras_KvEntry::Parser< ::google::protobuf::internal::MapField<
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&kv_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), parser.key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "p4.tmp.P4DeviceConfig.Extras.KvEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), parser.value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "p4.tmp.P4DeviceConfig.Extras.KvEntry.value"));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:p4.tmp.P4DeviceConfig.Extras)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:p4.tmp.P4DeviceConfig.Extras)
  return false;
#undef DO_
}

void P4DeviceConfig_Extras::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:p4.tmp.P4DeviceConfig.Extras)
  // map<string, string> kv = 1;
  if (!this->kv().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "p4.tmp.P4DeviceConfig.Extras.KvEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "p4.tmp.P4DeviceConfig.Extras.KvEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->kv().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->kv().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->kv().begin();
          it != this->kv().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<P4DeviceConfig_Extras_KvEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(kv_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<P4DeviceConfig_Extras_KvEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->kv().begin();
          it != this->kv().end(); ++it) {
        entry.reset(kv_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:p4.tmp.P4DeviceConfig.Extras)
}

::google::protobuf::uint8* P4DeviceConfig_Extras::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:p4.tmp.P4DeviceConfig.Extras)
  // map<string, string> kv = 1;
  if (!this->kv().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "p4.tmp.P4DeviceConfig.Extras.KvEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "p4.tmp.P4DeviceConfig.Extras.KvEntry.value");
      }
    };

    if (deterministic &&
        this->kv().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->kv().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->kv().begin();
          it != this->kv().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<P4DeviceConfig_Extras_KvEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(kv_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<P4DeviceConfig_Extras_KvEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->kv().begin();
          it != this->kv().end(); ++it) {
        entry.reset(kv_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:p4.tmp.P4DeviceConfig.Extras)
  return target;
}

size_t P4DeviceConfig_Extras::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:p4.tmp.P4DeviceConfig.Extras)
  size_t total_size = 0;

  // map<string, string> kv = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->kv_size());
  {
    ::google::protobuf::scoped_ptr<P4DeviceConfig_Extras_KvEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->kv().begin();
        it != this->kv().end(); ++it) {
      entry.reset(kv_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void P4DeviceConfig_Extras::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:p4.tmp.P4DeviceConfig.Extras)
  GOOGLE_DCHECK_NE(&from, this);
  const P4DeviceConfig_Extras* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const P4DeviceConfig_Extras>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:p4.tmp.P4DeviceConfig.Extras)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:p4.tmp.P4DeviceConfig.Extras)
    MergeFrom(*source);
  }
}

void P4DeviceConfig_Extras::MergeFrom(const P4DeviceConfig_Extras& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:p4.tmp.P4DeviceConfig.Extras)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  kv_.MergeFrom(from.kv_);
}

void P4DeviceConfig_Extras::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:p4.tmp.P4DeviceConfig.Extras)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void P4DeviceConfig_Extras::CopyFrom(const P4DeviceConfig_Extras& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:p4.tmp.P4DeviceConfig.Extras)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool P4DeviceConfig_Extras::IsInitialized() const {
  return true;
}

void P4DeviceConfig_Extras::Swap(P4DeviceConfig_Extras* other) {
  if (other == this) return;
  InternalSwap(other);
}
void P4DeviceConfig_Extras::InternalSwap(P4DeviceConfig_Extras* other) {
  kv_.Swap(&other->kv_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata P4DeviceConfig_Extras::GetMetadata() const {
  protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// P4DeviceConfig_Extras

// map<string, string> kv = 1;
int P4DeviceConfig_Extras::kv_size() const {
  return kv_.size();
}
void P4DeviceConfig_Extras::clear_kv() {
  kv_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::std::string >&
P4DeviceConfig_Extras::kv() const {
  // @@protoc_insertion_point(field_map:p4.tmp.P4DeviceConfig.Extras.kv)
  return kv_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::std::string >*
P4DeviceConfig_Extras::mutable_kv() {
  // @@protoc_insertion_point(field_mutable_map:p4.tmp.P4DeviceConfig.Extras.kv)
  return kv_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int P4DeviceConfig::kReassignFieldNumber;
const int P4DeviceConfig::kExtrasFieldNumber;
const int P4DeviceConfig::kDeviceDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

P4DeviceConfig::P4DeviceConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_p4_2ftmp_2fp4config_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:p4.tmp.P4DeviceConfig)
}
P4DeviceConfig::P4DeviceConfig(const P4DeviceConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  device_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.device_data().size() > 0) {
    device_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_data_);
  }
  if (from.has_extras()) {
    extras_ = new ::p4::tmp::P4DeviceConfig_Extras(*from.extras_);
  } else {
    extras_ = NULL;
  }
  reassign_ = from.reassign_;
  // @@protoc_insertion_point(copy_constructor:p4.tmp.P4DeviceConfig)
}

void P4DeviceConfig::SharedCtor() {
  device_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&extras_, 0, reinterpret_cast<char*>(&reassign_) -
    reinterpret_cast<char*>(&extras_) + sizeof(reassign_));
  _cached_size_ = 0;
}

P4DeviceConfig::~P4DeviceConfig() {
  // @@protoc_insertion_point(destructor:p4.tmp.P4DeviceConfig)
  SharedDtor();
}

void P4DeviceConfig::SharedDtor() {
  device_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete extras_;
  }
}

void P4DeviceConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* P4DeviceConfig::descriptor() {
  protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[2].descriptor;
}

const P4DeviceConfig& P4DeviceConfig::default_instance() {
  protobuf_p4_2ftmp_2fp4config_2eproto::InitDefaults();
  return *internal_default_instance();
}

P4DeviceConfig* P4DeviceConfig::New(::google::protobuf::Arena* arena) const {
  P4DeviceConfig* n = new P4DeviceConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void P4DeviceConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:p4.tmp.P4DeviceConfig)
  device_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && extras_ != NULL) {
    delete extras_;
  }
  extras_ = NULL;
  reassign_ = false;
}

bool P4DeviceConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:p4.tmp.P4DeviceConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool reassign = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &reassign_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .p4.tmp.P4DeviceConfig.Extras extras = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_extras()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes device_data = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_device_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:p4.tmp.P4DeviceConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:p4.tmp.P4DeviceConfig)
  return false;
#undef DO_
}

void P4DeviceConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:p4.tmp.P4DeviceConfig)
  // bool reassign = 1;
  if (this->reassign() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->reassign(), output);
  }

  // .p4.tmp.P4DeviceConfig.Extras extras = 2;
  if (this->has_extras()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->extras_, output);
  }

  // bytes device_data = 3;
  if (this->device_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->device_data(), output);
  }

  // @@protoc_insertion_point(serialize_end:p4.tmp.P4DeviceConfig)
}

::google::protobuf::uint8* P4DeviceConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:p4.tmp.P4DeviceConfig)
  // bool reassign = 1;
  if (this->reassign() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->reassign(), target);
  }

  // .p4.tmp.P4DeviceConfig.Extras extras = 2;
  if (this->has_extras()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->extras_, false, target);
  }

  // bytes device_data = 3;
  if (this->device_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->device_data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:p4.tmp.P4DeviceConfig)
  return target;
}

size_t P4DeviceConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:p4.tmp.P4DeviceConfig)
  size_t total_size = 0;

  // bytes device_data = 3;
  if (this->device_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->device_data());
  }

  // .p4.tmp.P4DeviceConfig.Extras extras = 2;
  if (this->has_extras()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->extras_);
  }

  // bool reassign = 1;
  if (this->reassign() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void P4DeviceConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:p4.tmp.P4DeviceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const P4DeviceConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const P4DeviceConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:p4.tmp.P4DeviceConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:p4.tmp.P4DeviceConfig)
    MergeFrom(*source);
  }
}

void P4DeviceConfig::MergeFrom(const P4DeviceConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:p4.tmp.P4DeviceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.device_data().size() > 0) {

    device_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_data_);
  }
  if (from.has_extras()) {
    mutable_extras()->::p4::tmp::P4DeviceConfig_Extras::MergeFrom(from.extras());
  }
  if (from.reassign() != 0) {
    set_reassign(from.reassign());
  }
}

void P4DeviceConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:p4.tmp.P4DeviceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void P4DeviceConfig::CopyFrom(const P4DeviceConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:p4.tmp.P4DeviceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool P4DeviceConfig::IsInitialized() const {
  return true;
}

void P4DeviceConfig::Swap(P4DeviceConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void P4DeviceConfig::InternalSwap(P4DeviceConfig* other) {
  device_data_.Swap(&other->device_data_);
  std::swap(extras_, other->extras_);
  std::swap(reassign_, other->reassign_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata P4DeviceConfig::GetMetadata() const {
  protobuf_p4_2ftmp_2fp4config_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_p4_2ftmp_2fp4config_2eproto::file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// P4DeviceConfig

// bool reassign = 1;
void P4DeviceConfig::clear_reassign() {
  reassign_ = false;
}
bool P4DeviceConfig::reassign() const {
  // @@protoc_insertion_point(field_get:p4.tmp.P4DeviceConfig.reassign)
  return reassign_;
}
void P4DeviceConfig::set_reassign(bool value) {
  
  reassign_ = value;
  // @@protoc_insertion_point(field_set:p4.tmp.P4DeviceConfig.reassign)
}

// .p4.tmp.P4DeviceConfig.Extras extras = 2;
bool P4DeviceConfig::has_extras() const {
  return this != internal_default_instance() && extras_ != NULL;
}
void P4DeviceConfig::clear_extras() {
  if (GetArenaNoVirtual() == NULL && extras_ != NULL) delete extras_;
  extras_ = NULL;
}
const ::p4::tmp::P4DeviceConfig_Extras& P4DeviceConfig::extras() const {
  // @@protoc_insertion_point(field_get:p4.tmp.P4DeviceConfig.extras)
  return extras_ != NULL ? *extras_
                         : *::p4::tmp::P4DeviceConfig_Extras::internal_default_instance();
}
::p4::tmp::P4DeviceConfig_Extras* P4DeviceConfig::mutable_extras() {
  
  if (extras_ == NULL) {
    extras_ = new ::p4::tmp::P4DeviceConfig_Extras;
  }
  // @@protoc_insertion_point(field_mutable:p4.tmp.P4DeviceConfig.extras)
  return extras_;
}
::p4::tmp::P4DeviceConfig_Extras* P4DeviceConfig::release_extras() {
  // @@protoc_insertion_point(field_release:p4.tmp.P4DeviceConfig.extras)
  
  ::p4::tmp::P4DeviceConfig_Extras* temp = extras_;
  extras_ = NULL;
  return temp;
}
void P4DeviceConfig::set_allocated_extras(::p4::tmp::P4DeviceConfig_Extras* extras) {
  delete extras_;
  extras_ = extras;
  if (extras) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:p4.tmp.P4DeviceConfig.extras)
}

// bytes device_data = 3;
void P4DeviceConfig::clear_device_data() {
  device_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& P4DeviceConfig::device_data() const {
  // @@protoc_insertion_point(field_get:p4.tmp.P4DeviceConfig.device_data)
  return device_data_.GetNoArena();
}
void P4DeviceConfig::set_device_data(const ::std::string& value) {
  
  device_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:p4.tmp.P4DeviceConfig.device_data)
}
#if LANG_CXX11
void P4DeviceConfig::set_device_data(::std::string&& value) {
  
  device_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:p4.tmp.P4DeviceConfig.device_data)
}
#endif
void P4DeviceConfig::set_device_data(const char* value) {
  
  device_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:p4.tmp.P4DeviceConfig.device_data)
}
void P4DeviceConfig::set_device_data(const void* value, size_t size) {
  
  device_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:p4.tmp.P4DeviceConfig.device_data)
}
::std::string* P4DeviceConfig::mutable_device_data() {
  
  // @@protoc_insertion_point(field_mutable:p4.tmp.P4DeviceConfig.device_data)
  return device_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* P4DeviceConfig::release_device_data() {
  // @@protoc_insertion_point(field_release:p4.tmp.P4DeviceConfig.device_data)
  
  return device_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void P4DeviceConfig::set_allocated_device_data(::std::string* device_data) {
  if (device_data != NULL) {
    
  } else {
    
  }
  device_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_data);
  // @@protoc_insertion_point(field_set_allocated:p4.tmp.P4DeviceConfig.device_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tmp
}  // namespace p4

// @@protoc_insertion_point(global_scope)
