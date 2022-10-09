// BlueprintGeneratedClass PlayerSprayComponent.PlayerSprayComponent_C
// Size: 0x124 (Inherited: 0x110)
struct UPlayerSprayComponent_C : UPlayerSprayComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	float AuthWorldTimeLastSpray; // 0x118(0x04)
	float SprayCooldownSeconds; // 0x11c(0x04)
	int32_t MaxAllowedSprays; // 0x120(0x04)

	bool AuthCanPlayerSpray(); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthCanPlayerSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthOnPlayerSprayed(struct AAresSpray* UsedSpray, struct USprayEquipSlotDataAsset* Context); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthOnPlayerSprayed // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnSpraySpawned(struct AEffectContainer* SpawnedSpray); // Function PlayerSprayComponent.PlayerSprayComponent_C.OnSpraySpawned // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void On Round Phase Change(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function PlayerSprayComponent.PlayerSprayComponent_C.On Round Phase Change // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_PlayerSprayComponent(int32_t EntryPoint); // Function PlayerSprayComponent.PlayerSprayComponent_C.ExecuteUbergraph_PlayerSprayComponent // (Final|UbergraphFunction) // @ game+0x3511190
};

