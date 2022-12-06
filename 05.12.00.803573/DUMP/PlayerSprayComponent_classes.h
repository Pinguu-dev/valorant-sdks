// BlueprintGeneratedClass PlayerSprayComponent.PlayerSprayComponent_C
// Size: 0x124 (Inherited: 0x110)
struct UPlayerSprayComponent_C : UPlayerSprayComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	float ; // 0x118(0x04)
	float ; // 0x11c(0x04)
	int32_t ; // 0x120(0x04)

	bool AuthCanPlayerSpray(); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthCanPlayerSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void AuthOnPlayerSprayed(struct AAresSpray* UsedSpray, struct USprayEquipSlotDataAsset* Context); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthOnPlayerSprayed // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnSpraySpawned(struct AEffectContainer* SpawnedSpray); // Function PlayerSprayComponent.PlayerSprayComponent_C.OnSpraySpawned // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function PlayerSprayComponent.PlayerSprayComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function PlayerSprayComponent.PlayerSprayComponent_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

