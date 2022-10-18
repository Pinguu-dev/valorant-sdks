// BlueprintGeneratedClass PlantedBombMinimapComponent.PlantedBombMinimapComponent_C
// Size: 0x518 (Inherited: 0x500)
struct UPlantedBombMinimapComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UGameObjectVisibilityComponent* VisibilityComponent; // 0x508(0x08)
	struct UUserWidget* OriginalWidget; // 0x510(0x08)

	void UpdateWidgetClass(); // Function PlantedBombMinimapComponent.PlantedBombMinimapComponent_C.UpdateWidgetClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function PlantedBombMinimapComponent.PlantedBombMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent_1(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function PlantedBombMinimapComponent.PlantedBombMinimapComponent_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent_2(struct AActor* ActorThatExitedTeamSight); // Function PlantedBombMinimapComponent.PlantedBombMinimapComponent_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_PlantedBombMinimapComponent(int32_t EntryPoint); // Function PlantedBombMinimapComponent.PlantedBombMinimapComponent_C.ExecuteUbergraph_PlantedBombMinimapComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

