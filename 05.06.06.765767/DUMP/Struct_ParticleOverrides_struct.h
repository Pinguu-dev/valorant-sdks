// UserDefinedStruct Struct_ParticleOverrides.Struct_ParticleOverrides
// Size: 0x138 (Inherited: 0x00)
struct FStruct_ParticleOverrides {
	struct FName MaterialOverrideName_2_3443938141F38B6769DA9BB8141393A1; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UMaterialInterface> MaterialOverride_40_16CE1D1D42512330C9D21B82256523B8; // 0x10(0x30)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureOverride_41_9C31D3264992EF7C695CBA8E291EBFC5; // 0x40(0x50)
	struct TMap<struct FName, struct FLinearColor> ColorOverride_15_DB05BDB843AD77F47BD3F29D8A8C6CFB; // 0x90(0x50)
	struct TMap<struct FName, float> ScalarOverride_14_E7E0ED0A426128CACFCBA18BF651BCD5; // 0xe0(0x50)
	struct UMaterialInstanceDynamic* DynamicInstancecallinBPonly_39_F23DFF20456F518A9A386F9F96CACD81; // 0x130(0x08)
};

