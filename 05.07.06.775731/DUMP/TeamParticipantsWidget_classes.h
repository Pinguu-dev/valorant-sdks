// WidgetBlueprintGeneratedClass TeamParticipantsWidget.TeamParticipantsWidget_C
// Size: 0x372 (Inherited: 0x2d8)
struct UTeamParticipantsWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* Center; // 0x2e0(0x08)
	struct UInvalidationBox* InvalidationBox_center; // 0x2e8(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveLeft; // 0x2f0(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveRight; // 0x2f8(0x08)
	struct UImage* Left; // 0x300(0x08)
	struct UHorizontalBox* PlayerListHBox; // 0x308(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget; // 0x310(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_1; // 0x318(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_2; // 0x320(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_3; // 0x328(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_4; // 0x330(0x08)
	struct UImage* Right; // 0x338(0x08)
	struct UImage* teamObjectiveImage_Left; // 0x340(0x08)
	struct UImage* teamObjectiveImage_Right; // 0x348(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x350(0x08)
	bool IsAlliedTeam; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UObject* attackerIcon; // 0x360(0x08)
	struct UObject* defenderIcon; // 0x368(0x08)
	bool IsObserver; // 0x370(0x01)
	enum class EAresTeamRole TeamRole; // 0x371(0x01)

	void UpdateWidgets(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void IsAllyWidget(bool& Ally); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.IsAllyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void IsLeftWidget(bool& Left); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.IsLeftWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UpdatePlayersAlignment(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdatePlayersAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateBackgroundTeamColor(bool IsAllyTeam); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdateBackgroundTeamColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void RecreateWidgets(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.RecreateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnTeamChanged_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnHUDPlayerModelListUpdated_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnHUDPlayerModelListUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnTeamCompositionsChanged_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnTeamCompositionsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Destruct(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_TeamParticipantsWidget(int32_t EntryPoint); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.ExecuteUbergraph_TeamParticipantsWidget // (Final|UbergraphFunction) // @ game+0x3511190
};

