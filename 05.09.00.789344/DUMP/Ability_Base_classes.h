// BlueprintGeneratedClass Ability_Base.Ability_Base_C
// Size: 0xff1 (Inherited: 0xef0)
struct AAbility_Base_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UAbilityTrackingComponent* AbilityTrackingComponent; // 0xef8(0x08)
	struct URespondToEventStateComponent* RespondToEventState; // 0xf00(0x08)
	struct UCharacterAbilityStatisticsComponent_C* CharacterAbilityStatisticsComponent; // 0xf08(0x08)
	struct FEmbeddedEffectInfo FXC_EquippedSettings; // 0xf10(0x30)
	struct FEffectID FXC_Equipped_ID; // 0xf40(0x20)
	struct UCharacterAbilityWidget* AbilityHUDWidgetClass; // 0xf60(0x08)
	struct UCharacterAbilityWidget* AbilityHUDWidget; // 0xf68(0x08)
	struct FMulticastInlineDelegate DispatchUpdateAbilityWidget; // 0xf70(0x10)
	bool OnCooldown; // 0xf80(0x01)
	char pad_F81[0x7]; // 0xf81(0x07)
	struct FMulticastInlineDelegate PlayFrontIconAnim; // 0xf88(0x10)
	struct FMulticastInlineDelegate PlayBackIconAnim; // 0xf98(0x10)
	bool PlayEquipAnimation; // 0xfa8(0x01)
	char pad_FA9[0x3]; // 0xfa9(0x03)
	int32_t CurrentCharge; // 0xfac(0x04)
	bool PlayResourceConsumeAnimation; // 0xfb0(0x01)
	char pad_FB1[0x7]; // 0xfb1(0x07)
	struct FMulticastInlineDelegate PlayRechargeAnim; // 0xfb8(0x10)
	bool OutOfChargesOnCooldown; // 0xfc8(0x01)
	char pad_FC9[0x7]; // 0xfc9(0x07)
	struct FMulticastInlineDelegate TimerStarted; // 0xfd0(0x10)
	struct FMulticastInlineDelegate AbilityHUD_Setup; // 0xfe0(0x10)
	bool DisabledFeedbackCooldown; // 0xff0(0x01)

	void AbilityIsOnCooldown(bool& OnCooldown); // Function Ability_Base.Ability_Base_C.AbilityIsOnCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void FinishPrototypeCooldownSetup(); // Function Ability_Base.Ability_Base_C.FinishPrototypeCooldownSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UsePrototypeCooldown(bool& Result); // Function Ability_Base.Ability_Base_C.UsePrototypeCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void StartPrototypeCooldown(bool AbilityDestroyed); // Function Ability_Base.Ability_Base_C.StartPrototypeCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void DestroyCooldownComponents(struct TSoftClassPtr<UObject> IgnoreClass); // Function Ability_Base.Ability_Base_C.DestroyCooldownComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayDisabledVO(enum class EAresEquippableInput Button, enum class EAresEquippableInputAction InputType); // Function Ability_Base.Ability_Base_C.PlayDisabledVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleAbilityFailVO(enum class EEquippableRejectInputReason Selection); // Function Ability_Base.Ability_Base_C.HandleAbilityFailVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetVisibilityUpdatesEnabled(bool Enable); // Function Ability_Base.Ability_Base_C.SetVisibilityUpdatesEnabled // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopEquippedEffect(); // Function Ability_Base.Ability_Base_C.StopEquippedEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ShouldPlayResourceAnim(bool& ShouldPlayAnim); // Function Ability_Base.Ability_Base_C.ShouldPlayResourceAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayResourceBasedIconAnims(); // Function Ability_Base.Ability_Base_C.PlayResourceBasedIconAnims // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetAbilityHUD_Widget(struct UCharacterAbilityWidget*& AbilityHUDWidget); // Function Ability_Base.Ability_Base_C.GetAbilityHUD_Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SetAbilityHUD_Widget(struct UCharacterAbilityWidget* AbilityHUDWidget); // Function Ability_Base.Ability_Base_C.SetAbilityHUD_Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ClientItemEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ClientItemUnEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Ability_Base.Ability_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function Ability_Base.Ability_Base_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnIgnoredResponseOutOfGameplay_Event_1(); // Function Ability_Base.Ability_Base_C.OnIgnoredResponseOutOfGameplay_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnNumUltimatePointsChanged_Event_1(int32_t NewValue, bool IsUltNewlyReady); // Function Ability_Base.Ability_Base_C.OnNumUltimatePointsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ItemOnSetOwner_Event_1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Ability_Base.Ability_Base_C.ItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRejectedInput_Event_1(struct AAresEquippable* Equippable, enum class EEquippableRejectInputReason Reason); // Function Ability_Base.Ability_Base_C.OnRejectedInput_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void FailedDispatcher_Event_1(); // Function Ability_Base.Ability_Base_C.FailedDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnUnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnGameFeatureToggleChangedNotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Ability_Base.Ability_Base_C.OnGameFeatureToggleChangedNotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TakeFailOffCooldown(); // Function Ability_Base.Ability_Base_C.TakeFailOffCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnStateHandleInputAction_Event_1(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Ability_Base.Ability_Base_C.OnStateHandleInputAction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void RemoveDisabledVOCooldown(); // Function Ability_Base.Ability_Base_C.RemoveDisabledVOCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAbilityUsed_Event_1(struct AAresEquippable* Equippable); // Function Ability_Base.Ability_Base_C.OnAbilityUsed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Event Inspect(); // Function Ability_Base.Ability_Base_C.Event Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Ability_Base(int32_t EntryPoint); // Function Ability_Base.Ability_Base_C.ExecuteUbergraph_Ability_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void AbilityHUD_Setup__DelegateSignature(); // Function Ability_Base.Ability_Base_C.AbilityHUD_Setup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TimerStarted__DelegateSignature(struct FStruct_Ability_Timer_Info TimerInfo); // Function Ability_Base.Ability_Base_C.TimerStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayRechargeAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayRechargeAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayBackIconAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayBackIconAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayFrontIconAnim__DelegateSignature(); // Function Ability_Base.Ability_Base_C.PlayFrontIconAnim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void DispatchUpdateAbilityWidget__DelegateSignature(); // Function Ability_Base.Ability_Base_C.DispatchUpdateAbilityWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

