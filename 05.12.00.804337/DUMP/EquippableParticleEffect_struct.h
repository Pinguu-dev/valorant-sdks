// UserDefinedStruct EquippableParticleEffect.EquippableParticleEffect
// Size: 0x91 (Inherited: 0x00)
struct FEquippableParticleEffect {
	struct TSoftObjectPtr<UParticleSystem> FX_19_5B5FCA93487B128018A0BD8E978EE4BE; // 0x00(0x30)
	struct FName ; // 0x30(0x0c)
	struct FFloatRange ; // 0x3c(0x10)
	enum class ErrorTypeEnum ; // 0x4c(0x01)
	bool ; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FStruct_ParticleOverrides> ; // 0x50(0x10)
	struct FTransform ; // 0x60(0x30)
	enum class EAresParticleVariantColor ; // 0x90(0x01)
};

