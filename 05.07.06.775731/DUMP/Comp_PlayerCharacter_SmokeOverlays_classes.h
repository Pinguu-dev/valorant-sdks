// BlueprintGeneratedClass Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C
// Size: 0x168 (Inherited: 0xe8)
struct UComp_PlayerCharacter_SmokeOverlays_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AActor*, struct FStruct_SmokeAndColorAlphaInfo> ActiveSmokesAndColors; // 0xf0(0x50)
	struct AShooterCharacter* OwningShooterCharacter; // 0x140(0x08)
	struct UStaticMesh* MeshFrameTemplate; // 0x148(0x08)
	struct UStaticMeshComponent* MeshFrame; // 0x150(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x158(0x08)
	struct UMaterialInterface* DynamicMaterialTemplate; // 0x160(0x08)

	void UpdateSmokeOverlay(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.UpdateSmokeOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetSmokeColor(float& HighestAlpha, struct FLinearColor& HighestAlphaColorMain, struct FLinearColor& HighestAlphaColorFringe); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.GetSmokeColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AttemptStopUpdating(bool& Stopped); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.AttemptStopUpdating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CreateDynamicMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.CreateDynamicMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetMeshFrameAndDynamicMaterial(struct UStaticMeshComponent*& MeshFrame, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.GetMeshFrameAndDynamicMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AddOrUpdateSmokeOverlay(struct AActor* Smoke, float Alpha, struct FLinearColor ColorMain, struct FLinearColor ColorFringe); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.AddOrUpdateSmokeOverlay // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void RemoveSmokeOverlay(struct AActor* Smoke); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.RemoveSmokeOverlay // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnDestroyed_Event_1(struct AActor* DestroyedActor); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.OnDestroyed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdatePerspective(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.UpdatePerspective // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_PlayerCharacter_SmokeOverlays(int32_t EntryPoint); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ExecuteUbergraph_Comp_PlayerCharacter_SmokeOverlays // (Final|UbergraphFunction) // @ game+0x3511190
};

