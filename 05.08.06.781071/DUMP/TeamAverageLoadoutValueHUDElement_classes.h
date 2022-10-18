// WidgetBlueprintGeneratedClass TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C
// Size: 0x30c (Inherited: 0x2d8)
struct UTeamAverageLoadoutValueHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UInvalidationBox* InvalidationBox_TeamAverageLoadoutValue; // 0x2e0(0x08)
	struct UTextBlock* Money; // 0x2e8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2f0(0x08)
	bool bShowEnemyValue; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	struct FLinearColor DisplayColor; // 0x2fc(0x10)

	void UpdateWidget(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateVisibility(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTeamChanged_Event_1(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent_1(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTeamAverageLoadoutValueUpdated_Event_1(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.OnTeamAverageLoadoutValueUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HandleScoreboard(); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.HandleScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_TeamAverageLoadoutValueHUDElement(int32_t EntryPoint); // Function TeamAverageLoadoutValueHUDElement.TeamAverageLoadoutValueHUDElement_C.ExecuteUbergraph_TeamAverageLoadoutValueHUDElement // (Final|UbergraphFunction) // @ game+0x3520f50
};

