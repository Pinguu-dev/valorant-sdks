// ScriptStruct AssetRegistry.TagAndValue
// Size: 0x20 (Inherited: 0x00)
struct FTagAndValue {
	struct FName Tag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x05 (Inherited: 0x00)
struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x00(0x01)
	bool bIncludeHardPackageReferences; // 0x01(0x01)
	bool bIncludeSearchableNames; // 0x02(0x01)
	bool bIncludeSoftManagementReferences; // 0x03(0x01)
	bool bIncludeHardManagementReferences; // 0x04(0x01)
};

