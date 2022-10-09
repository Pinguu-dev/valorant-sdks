// Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x140 (Inherited: 0x30)
struct UAnimationCompressionLibraryDatabase : UObject {
	struct TArray<char> CookedCompressedBytes; // 0x30(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x40(0x10)
	char pad_50[0xd0]; // 0x50(0xd0)
	uint32_t MaxStreamRequestSizeKB; // 0x120(0x04)
	char pad_124[0x1c]; // 0x124(0x1c)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x48 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase {
	struct UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x40(0x08)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x48 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase {
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x40(0x08)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLSafe : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x30 (Inherited: 0x30)
struct UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec {
};

