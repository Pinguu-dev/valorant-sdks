// WidgetBlueprintGeneratedClass TeamScoreHUDElement.TeamScoreHUDElement_C
// Size: 0x31d (Inherited: 0x2d8)
struct UTeamScoreHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UTextBlock* Score; // 0x2e0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e8(0x08)
	bool bShowEnemyScore; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FLinearColor DisplayColor; // 0x2f4(0x10)
	char pad_304[0x4]; // 0x304(0x04)
	struct UImage* TeamColor_1; // 0x308(0x08)
	struct FHUDVisibilityConfig VisibilityConfig; // 0x310(0x0d)

	void InitializeHUDVisibilityConfig(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.InitializeHUDVisibilityConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateWidget(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateVisibility(bool ScoreboardVisible); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnPointsUpdated(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnPointsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnTeamChanged_Event_1(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnFirstPersonModelPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnFirstPersonModelPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ScoreboardVisibilityChanged(bool IsVisible); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HUDConfigChanged(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.HUDConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_TeamScoreHUDElement(int32_t EntryPoint); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.ExecuteUbergraph_TeamScoreHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

