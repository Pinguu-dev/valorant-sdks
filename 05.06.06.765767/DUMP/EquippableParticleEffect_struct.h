// UserDefinedStruct EquippableParticleEffect.EquippableParticleEffect
// Size: 0x91 (Inherited: 0x00)
struct FEquippableParticleEffect {
	struct TSoftObjectPtr<UParticleSystem> FX_19_5B5FCA93487B128018A0BD8E978EE4BE; // 0x00(0x30)
	struct FName AttachPointName_6_25CC9F24411010E103CE1AB64DD2D1A7; // 0x30(0x0c)
	struct FFloatRange StabilityRange_11_5DCB17A64B93CF639BE3F7A03987F2F6; // 0x3c(0x10)
	enum class ErrorTypeEnum ErrorType_14_0C25A56A4B22E9B0B683C3900EC44963; // 0x4c(0x01)
	bool AttachToVFX_Camera_18_585864524087628F10D67AABD4FCDC8A; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FStruct_ParticleOverrides> ParticleOverrides_24_752913DF411B657A7CDFE7B485D78154; // 0x50(0x10)
	struct FTransform SpawnTransform_27_94C3828247D8E101703B23BF7F84E58E; // 0x60(0x30)
	enum class EAresParticleVariantColor VariantColor_32_3825E2234C0E6F665069D2B810BC484C; // 0x90(0x01)
};

