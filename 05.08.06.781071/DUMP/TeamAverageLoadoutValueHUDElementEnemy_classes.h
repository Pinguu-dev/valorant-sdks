// WidgetBlueprintGeneratedClass TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C
// Size: 0x324 (Inherited: 0x2d8)
struct UTeamAverageLoadoutValueHUDElementEnemy_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* highThreatBgPulse; // 0x2e0(0x08)
	struct UOverlay* highEnemyMoneyContainer; // 0x2e8(0x08)
	struct UImage* highMoneyAlertBg; // 0x2f0(0x08)
	struct UImage* highMoneyAlertIcon; // 0x2f8(0x08)
	struct UTextBlock* Money; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)
	bool bShowEnemyValue; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	struct FLinearColor DisplayColor; // 0x314(0x10)

	void UpdateWidget(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateVisibility(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTeamChanged_Event_1(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent_1(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTeamAverageLoadoutValueUpdated_Event_1(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.OnTeamAverageLoadoutValueUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HandleScoreboard(); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.HandleScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_TeamAverageLoadoutValueHUDElementEnemy(int32_t EntryPoint); // Function TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C.ExecuteUbergraph_TeamAverageLoadoutValueHUDElementEnemy // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

