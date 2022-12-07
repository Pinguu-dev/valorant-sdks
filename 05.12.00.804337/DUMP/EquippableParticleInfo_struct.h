// UserDefinedStruct EquippableParticleInfo.EquippableParticleInfo
// Size: 0xb0 (Inherited: 0x00)
struct FEquippableParticleInfo {
	struct TSoftObjectPtr<UParticleSystem> ; // 0x00(0x30)
	bool ; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName ; // 0x34(0x0c)
	bool ; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FTransform ; // 0x50(0x30)
	enum class ELHMMirroringIgnoreType ; // 0x80(0x01)
	enum class EAresParticleVariantColor ; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t ; // 0x84(0x04)
	struct TArray<enum class EAresEquippableState> ; // 0x88(0x10)
	enum class EquippableParticleToggleEnum ; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FStruct_ParticleOverrides> ; // 0xa0(0x10)
};

