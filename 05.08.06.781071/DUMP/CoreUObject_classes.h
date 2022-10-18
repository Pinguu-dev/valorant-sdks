// Class CoreUObject.Object
// Size: 0x30 (Inherited: 0x00)
struct UObject {
	char pad_0[0x30]; // 0x00(0x30)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // @ game+0x3520f50
};

// Class CoreUObject.Interface
// Size: 0x30 (Inherited: 0x30)
struct UInterface : UObject {
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x78 (Inherited: 0x30)
struct UGCObjectReferencer : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class CoreUObject.TextBuffer
// Size: 0x58 (Inherited: 0x30)
struct UTextBuffer : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class CoreUObject.Field
// Size: 0x38 (Inherited: 0x30)
struct UField : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class CoreUObject.Struct
// Size: 0xb8 (Inherited: 0x38)
struct UStruct : UField {
	char pad_38[0x80]; // 0x38(0x80)
};

// Class CoreUObject.ScriptStruct
// Size: 0xc8 (Inherited: 0xb8)
struct UScriptStruct : UStruct {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class CoreUObject.Package
// Size: 0xa8 (Inherited: 0x30)
struct UPackage : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class CoreUObject.Class
// Size: 0x240 (Inherited: 0xb8)
struct UClass : UStruct {
	char pad_B8[0x188]; // 0xb8(0x188)
};

// Class CoreUObject.Function
// Size: 0xe8 (Inherited: 0xb8)
struct UFunction : UStruct {
	char pad_B8[0x30]; // 0xb8(0x30)
};

// Class CoreUObject.DelegateFunction
// Size: 0xe8 (Inherited: 0xe8)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0x100 (Inherited: 0xe8)
struct USparseDelegateFunction : UDelegateFunction {
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class CoreUObject.DynamicClass
// Size: 0x2c0 (Inherited: 0x240)
struct UDynamicClass : UClass {
	char pad_240[0x80]; // 0x240(0x80)
};

// Class CoreUObject.PackageMap
// Size: 0xe8 (Inherited: 0x30)
struct UPackageMap : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)
};

// Class CoreUObject.Enum
// Size: 0x68 (Inherited: 0x38)
struct UEnum : UField {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3f8 (Inherited: 0x240)
struct ULinkerPlaceholderClass : UClass {
	char pad_240[0x1b8]; // 0x240(0x1b8)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xf8 (Inherited: 0x30)
struct ULinkerPlaceholderExportObject : UObject {
	char pad_30[0xc8]; // 0x30(0xc8)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x2a0 (Inherited: 0xe8)
struct ULinkerPlaceholderFunction : UFunction {
	char pad_E8[0x1b8]; // 0xe8(0x1b8)
};

// Class CoreUObject.MetaData
// Size: 0xd0 (Inherited: 0x30)
struct UMetaData : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x38 (Inherited: 0x30)
struct UObjectRedirector : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class CoreUObject.Property
// Size: 0x80 (Inherited: 0x38)
struct UProperty : UField {
	char pad_38[0x48]; // 0x38(0x48)
};

// Class CoreUObject.EnumProperty
// Size: 0x90 (Inherited: 0x80)
struct UEnumProperty : UProperty {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class CoreUObject.ArrayProperty
// Size: 0x88 (Inherited: 0x80)
struct UArrayProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x88 (Inherited: 0x80)
struct UObjectPropertyBase : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x88 (Inherited: 0x80)
struct UBoolProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.NumericProperty
// Size: 0x80 (Inherited: 0x80)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size: 0x88 (Inherited: 0x80)
struct UByteProperty : UNumericProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.ObjectProperty
// Size: 0x88 (Inherited: 0x88)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x90 (Inherited: 0x88)
struct UClassProperty : UObjectProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x88 (Inherited: 0x80)
struct UDelegateProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x80 (Inherited: 0x80)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x80 (Inherited: 0x80)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x80 (Inherited: 0x80)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x80 (Inherited: 0x80)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x80 (Inherited: 0x80)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x80 (Inherited: 0x80)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x88 (Inherited: 0x80)
struct UInterfaceProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x88 (Inherited: 0x88)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0xa8 (Inherited: 0x80)
struct UMapProperty : UProperty {
	char pad_80[0x28]; // 0x80(0x28)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x88 (Inherited: 0x80)
struct UMulticastDelegateProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x88 (Inherited: 0x88)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x88 (Inherited: 0x88)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size: 0x80 (Inherited: 0x80)
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
// Size: 0xa0 (Inherited: 0x80)
struct USetProperty : UProperty {
	char pad_80[0x20]; // 0x80(0x20)
};

// Class CoreUObject.SoftObjectProperty
// Size: 0x88 (Inherited: 0x88)
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
// Size: 0x90 (Inherited: 0x88)
struct USoftClassProperty : USoftObjectProperty {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class CoreUObject.StrProperty
// Size: 0x80 (Inherited: 0x80)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x88 (Inherited: 0x80)
struct UStructProperty : UProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x80 (Inherited: 0x80)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x80 (Inherited: 0x80)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x80 (Inherited: 0x80)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x88 (Inherited: 0x88)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x80 (Inherited: 0x80)
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
// Size: 0x38 (Inherited: 0x30)
struct UPropertyWrapper : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x38 (Inherited: 0x38)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x38 (Inherited: 0x38)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};

