// UserDefinedStruct Struct_ParticleOverrides.Struct_ParticleOverrides
// Size: 0x138 (Inherited: 0x00)
struct FStruct_ParticleOverrides {
	struct FName ; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UMaterialInterface> ; // 0x10(0x30)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> ; // 0x40(0x50)
	struct TMap<struct FName, struct FLinearColor> ; // 0x90(0x50)
	struct TMap<struct FName, float> ; // 0xe0(0x50)
	struct UMaterialInstanceDynamic* ; // 0x130(0x08)
};

