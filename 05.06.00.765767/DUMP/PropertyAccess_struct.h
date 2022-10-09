// Enum PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8 {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8 {
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteByteToInt32 = 12,
	PromoteByteToInt64 = 13,
	PromoteByteToFloat = 14,
	PromoteInt32ToInt64 = 15,
	PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType_MAX = 17
};

// Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8 {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8 {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// ScriptStruct PropertyAccess.PropertyAccessLibrary
// Size: 0xc8 (Inherited: 0x00)
struct FPropertyAccessLibrary {
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x00(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths; // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths; // 0x20(0x10)
	struct FPropertyAccessCopyBatch CopyBatches[0x4]; // 0x30(0x40)
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses; // 0x70(0x10)
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses; // 0x80(0x10)
	struct TArray<struct FPropertyAccessIndirection> Indirections; // 0x90(0x10)
	struct TArray<int32_t> EventAccessIndices; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
};

// ScriptStruct PropertyAccess.PropertyAccessIndirection
// Size: 0x40 (Inherited: 0x00)
struct FPropertyAccessIndirection {
	struct TFieldPath<FArrayProperty> ArrayProperty; // 0x00(0x20)
	struct UFunction* Function; // 0x20(0x08)
	int32_t ReturnBufferSize; // 0x28(0x04)
	int32_t ReturnBufferAlignment; // 0x2c(0x04)
	int32_t ArrayIndex; // 0x30(0x04)
	uint32_t Offset; // 0x34(0x04)
	enum class EPropertyAccessObjectType ObjectType; // 0x38(0x01)
	enum class EPropertyAccessIndirectionType Type; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// Size: 0x30 (Inherited: 0x00)
struct FPropertyAccessIndirectionChain {
	struct TFieldPath<FProperty> Property; // 0x00(0x20)
	int32_t IndirectionStartIndex; // 0x20(0x04)
	int32_t IndirectionEndIndex; // 0x24(0x04)
	int32_t EventID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// Size: 0x10 (Inherited: 0x00)
struct FPropertyAccessCopyBatch {
	struct TArray<struct FPropertyAccessCopy> Copies; // 0x00(0x10)
};

// ScriptStruct PropertyAccess.PropertyAccessCopy
// Size: 0x10 (Inherited: 0x00)
struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x00(0x04)
	int32_t DestAccessStartIndex; // 0x04(0x04)
	int32_t DestAccessEndIndex; // 0x08(0x04)
	enum class EPropertyAccessCopyType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct PropertyAccess.PropertyAccessPath
// Size: 0x0c (Inherited: 0x00)
struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x00(0x04)
	int32_t PathSegmentCount; // 0x04(0x04)
	char bHasEvents : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct PropertyAccess.PropertyAccessSegment
// Size: 0x48 (Inherited: 0x00)
struct FPropertyAccessSegment {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct TFieldPath<FProperty> Property; // 0x18(0x20)
	struct UFunction* Function; // 0x38(0x08)
	int32_t ArrayIndex; // 0x40(0x04)
	uint16_t Flags; // 0x44(0x02)
	char pad_46[0x2]; // 0x46(0x02)
};

