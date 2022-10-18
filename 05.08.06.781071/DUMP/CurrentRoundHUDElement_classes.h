// WidgetBlueprintGeneratedClass CurrentRoundHUDElement.CurrentRoundHUDElement_C
// Size: 0x358 (Inherited: 0x2d8)
struct UCurrentRoundHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e0(0x08)
	int32_t NumberOfHideRequests; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UGamepadInputIconBase* BuyButtonGamepad; // 0x2f0(0x08)
	struct UTextBlock* Attacking_ref; // 0x2f8(0x08)
	struct UTextBlock* Defending_ref; // 0x300(0x08)
	struct UTextBlock* BuyButtonB_ref; // 0x308(0x08)
	struct UOverlay* BuyPhaseAnnouncement_ref; // 0x310(0x08)
	struct UBorder* NewVar_1; // 0x318(0x08)
	struct UBorder* GamepadPromptBorder_ref; // 0x320(0x08)
	struct UTextBlock* MainText_ref; // 0x328(0x08)
	struct UHorizontalBox* PressButtonToBuy_ref; // 0x330(0x08)
	struct UTextBlock* RoundText_ref; // 0x338(0x08)
	struct UCanvasPanel* SecondaryCanvas_ref; // 0x340(0x08)
	struct USizeBox* sizebox_ref; // 0x348(0x08)
	struct UWidgetAnimation* IntroAnimation_ref; // 0x350(0x08)

	void GetIntroAnimation(struct UWidgetAnimation*& IntroAnimation_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetIntroAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetSizeboxWidget(struct USizeBox*& sizebox_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetSizeboxWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetSecondaryCanvasWidget(struct UCanvasPanel*& SecondaryCanvas_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetSecondaryCanvasWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetRoundTextWidget(struct UTextBlock*& RoundText_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetRoundTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetPressButtonToBuyWidget(struct UHorizontalBox*& PressButtonToBuy_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetPressButtonToBuyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetMainTextWidget(struct UTextBlock*& MainText_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetMainTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetGamepadPromptWidget(struct UBorder*& GamepadPromptBorder_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetGamepadPromptWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetBuyPhaseAnnouncementWidget(struct UOverlay*& BuyPhaseAnnouncement_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetBuyPhaseAnnouncementWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetBuyButtonBTextWidget(struct UTextBlock*& BuyButtonB_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetBuyButtonBTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetDefendingTextWidget(struct UTextBlock*& Defending_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetDefendingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetAttackingTextWidget(struct UTextBlock*& AttackingText); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetAttackingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AssignGamepadGlyphs(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.AssignGamepadGlyphs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	struct FText GetOvertimeNotifyText(struct ABaseGameState_C* BaseGameState); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetOvertimeNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void CheckForGameStateOverride(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.CheckForGameStateOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateBuyButtonVisibility(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateBuyButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void RequestShow(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.RequestShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void RequestHide(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.RequestHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void makeRoundNotifyText(struct ABaseGameState_C*& BaseGameState); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.makeRoundNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateVisibility(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateWidgets(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnRoundNumberChanged(int32_t NewValue); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnRoundNumberChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnGameStateChanged_Event_1(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnGameStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAnnouncementChange_Event_1(bool AnnouncementVisible); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnAnnouncementChange_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Fade Out Widget(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.Fade Out Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnMenuOpened(struct UMenuStackEntry* OpenedEntry); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnMenuClosed(struct UMenuStackEntry* ClosedEntry); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnViewTargetChanged_Event(struct AActor* NewViewTarget); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ActionBindingChanged_Event_1(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.ActionBindingChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ScoreboardVisibilityChanged(bool IsVisible); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetAndSubscribeToBuyKey(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetAndSubscribeToBuyKey // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInitialized(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnSettingUpdated(struct FName& Setting); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnSettingUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnRoundEnd(int32_t RoundNumberEnded); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_CurrentRoundHUDElement(int32_t EntryPoint); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.ExecuteUbergraph_CurrentRoundHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

