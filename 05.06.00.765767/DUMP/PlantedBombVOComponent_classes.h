// BlueprintGeneratedClass PlantedBombVOComponent.PlantedBombVOComponent_C
// Size: 0x152 (Inherited: 0xe8)
struct UPlantedBombVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0xf0(0x08)
	bool PlayedOutOfTimeVO; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TMap<struct AShooterCharacter*, int32_t> CharactersThatHaveBegunDefuse; // 0x100(0x50)
	bool PlayedResumeDefuseVO; // 0x150(0x01)
	bool PlayedDefuseThankVO; // 0x151(0x01)
};

