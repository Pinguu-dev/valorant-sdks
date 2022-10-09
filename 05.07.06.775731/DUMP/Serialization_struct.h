// ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x480 (Inherited: 0x00)
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; // 0x00(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x03)
	char pad_33[0x5]; // 0x33(0x05)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0xc0)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0x100(0xa0)
	struct FStructSerializerArrayTestStruct Arrays; // 0x1a0(0x60)
	struct FStructSerializerMapTestStruct Maps; // 0x200(0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x340(0x140)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerSetTestStruct {
	struct TSet<struct FString> StrSet; // 0x00(0x50)
	struct TSet<int32_t> IntSet; // 0x50(0x50)
	struct TSet<struct FName> NameSet; // 0xa0(0x50)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0xa0 (Inherited: 0x00)
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString String; // 0x20(0x10)
	struct FText Text; // 0x30(0x18)
	struct FVector Vector; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 Vector4; // 0x60(0x10)
	struct FRotator Rotator; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FQuat Quat; // 0x80(0x10)
	struct FColor Color; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerMapTestStruct {
	struct TMap<int32_t, struct FString> IntToStr; // 0x00(0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xa0(0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x60 (Inherited: 0x00)
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; // 0x00(0x10)
	struct TArray<char> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x04)
	int32_t StaticInt32Array[0x3]; // 0x24(0x0c)
	float StaticFloatArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FVector> VectorArray; // 0x40(0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0xc0 (Inherited: 0x00)
struct FStructSerializerObjectTestStruct {
	struct UObject* Class; // 0x00(0x08)
	struct UMetaData* SubClass; // 0x08(0x08)
	struct TSoftClassPtr<UObject> SoftClass; // 0x10(0x30)
	struct UObject* Object; // 0x40(0x08)
	struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x48(0x08)
	struct TSoftObjectPtr<UMetaData> SoftObject; // 0x50(0x30)
	struct FSoftClassPath ClassPath; // 0x80(0x20)
	struct FSoftObjectPath ObjectPath; // 0xa0(0x20)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x03 (Inherited: 0x00)
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x00(0x01)
	bool BoolTrue; // 0x01(0x01)
	char Bitfield0 : 1; // 0x02(0x01)
	char Bitfield1 : 1; // 0x02(0x01)
	char Bitfield2Set : 1; // 0x02(0x01)
	char Bitfield3 : 1; // 0x02(0x01)
	char Bitfield4Set : 1; // 0x02(0x01)
	char Bitfield5Set : 1; // 0x02(0x01)
	char Bitfield6 : 1; // 0x02(0x01)
	char Bitfield7Set : 1; // 0x02(0x01)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x00)
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t Int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	char UInt8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16_t UInt16; // 0x12(0x02)
	uint32_t UInt32; // 0x14(0x04)
	uint64_t UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

// ScriptStruct Serialization.StructSerializerByteArray
// Size: 0x38 (Inherited: 0x00)
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> ByteArray; // 0x08(0x10)
	int32_t Dummy2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

