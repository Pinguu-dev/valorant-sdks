// UserDefinedStruct EquippableParticleInfo.EquippableParticleInfo
// Size: 0xb0 (Inherited: 0x00)
struct FEquippableParticleInfo {
	struct TSoftObjectPtr<UParticleSystem> Particle_2_17C9AF7D417240068E5DCA8354366E1C; // 0x00(0x30)
	bool IsCharacterAttachment_5_652108004A1F9AD6C85384A03EDA0B0E; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName AttachPoint_8_6F68D76A457DFADC9E26D0AE4CF094C1; // 0x34(0x0c)
	bool IsWorldAttachmentLocation_26_809C445945C6CC058594E5B85CFE2C8F; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FTransform SpawnTransform_11_EA5FA7984D3E63CB5DB9D7A7BD543A0C; // 0x50(0x30)
	enum class ELHMMirroringIgnoreType MirroringIgnoreType_14_32BBD254465B406346FBCB8F5D897841; // 0x80(0x01)
	enum class EAresParticleVariantColor VariantColor_32_36DD0113439F66D6F7526EB1DC2E3EDB; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t TranslucentSortPriority_29_2600D666431EEAFA6A7426B79120F09D; // 0x84(0x04)
	struct TArray<enum class EAresEquippableState> ActiveStates_18_8D67C38C48BEEAD4B574F2B0A415D25D; // 0x88(0x10)
	enum class EquippableParticleToggleEnum StateChangeToggleType_39_B2934B8D4B127D5ED602438C765291B4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FStruct_ParticleOverrides> ParticleOverrides_21_1AD3A01943BB17FAB656F8B9C42F87A0; // 0xa0(0x10)
};

