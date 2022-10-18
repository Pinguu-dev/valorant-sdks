// BlueprintGeneratedClass Gun_Zoomable.Gun_Zoomable_C
// Size: 0x1328 (Inherited: 0x120c)
struct AGun_Zoomable_C : AGun_C {
	char pad_120C[0x4]; // 0x120c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1210(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x1218(0x08)
	struct UComp_Gun_FlaggedZoomSettings_C* Comp_Gun_FlaggedZoomSettings; // 0x1220(0x08)
	struct UZoomLevelStateComponent* ZoomStateUnzoomedSkipTransition; // 0x1228(0x08)
	struct UPendingZoomLevelStateComponent* PendingZoomLevel2; // 0x1230(0x08)
	struct UPendingZoomLevelStateComponent* PendingZoomLevel1; // 0x1238(0x08)
	struct UZoomLevelStateComponent* ZoomStateInactive; // 0x1240(0x08)
	struct UZoomLevelStateComponent* ZoomStateLevel2; // 0x1248(0x08)
	struct UZoomLevelStateComponent* ZoomStateLevel1; // 0x1250(0x08)
	struct UZoomLevelStateComponent* ZoomStateUnzoomed; // 0x1258(0x08)
	struct UZoomLevelStateComponent* ZoomStateDisabled; // 0x1260(0x08)
	struct UEquippableStateMachineComponent* ZoomStateMachine; // 0x1268(0x08)
	struct UZoomManagerComponent* ZoomManagerComponent; // 0x1270(0x08)
	struct UCycleZoomState* CycleZoomState; // 0x1278(0x08)
	struct UZoomMultiplierComponent* ZoomMultiplier; // 0x1280(0x08)
	struct UBaseCrosshairHudElement* ZoomedCrosshair; // 0x1288(0x08)
	bool CanOverrideZoomedCrosshair; // 0x1290(0x01)
	char pad_1291[0x7]; // 0x1291(0x07)
	struct UBaseCrosshairHudElement* ZoomedCustomCrosshair; // 0x1298(0x08)
	enum class AfterFiringWhileZoomedOption AfterFiringWhileZoomed; // 0x12a0(0x01)
	bool IsZoomable; // 0x12a1(0x01)
	char pad_12A2[0x6]; // 0x12a2(0x06)
	struct UAttachment_Base_Reflex_C* ReflexComponent; // 0x12a8(0x08)
	bool WeaponVisibility; // 0x12b0(0x01)
	bool IsAutoZoomQueued; // 0x12b1(0x01)
	char pad_12B2[0x2]; // 0x12b2(0x02)
	int32_t QueuedZoomLevel; // 0x12b4(0x04)
	bool ZoomCosmeticsEnable; // 0x12b8(0x01)
	bool CycleThroughZoomOnTriggerInput; // 0x12b9(0x01)
	bool ShouldAutoRescopeSniper; // 0x12ba(0x01)
	char pad_12BB[0x5]; // 0x12bb(0x05)
	struct FMulticastInlineDelegate OnZoomLevelReached; // 0x12c0(0x10)
	struct FMulticastInlineDelegate OnZoomStateReset; // 0x12d0(0x10)
	bool HasBegunInitialZoom; // 0x12e0(0x01)
	char pad_12E1[0x7]; // 0x12e1(0x07)
	struct TArray<struct UScriptStateComponent*> ValidZoomStates; // 0x12e8(0x10)
	struct TArray<struct UScriptStateComponent*> FiringStates; // 0x12f8(0x10)
	struct TArray<struct UScriptStateComponent*> ValidZoomStatesWithReload; // 0x1308(0x10)
	float AutoPrimaryZoomRefireDelay; // 0x1318(0x04)
	bool CachedCanFireWhileZooming; // 0x131c(0x01)
	char pad_131D[0x3]; // 0x131d(0x03)
	struct AShooterCharacter* CurrentOwner; // 0x1320(0x08)

	void EnableFootsteps(); // Function Gun_Zoomable.Gun_Zoomable_C.EnableFootsteps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DisableFootsteps(); // Function Gun_Zoomable.Gun_Zoomable_C.DisableFootsteps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateZoomStateFiringBehaviors(); // Function Gun_Zoomable.Gun_Zoomable_C.UpdateZoomStateFiringBehaviors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool DetermineIfCanFireWhileZooming(); // Function Gun_Zoomable.Gun_Zoomable_C.DetermineIfCanFireWhileZooming // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool DoesPreventZoomWhileFiring(); // Function Gun_Zoomable.Gun_Zoomable_C.DoesPreventZoomWhileFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetZoomedCrosshair(struct UBaseCrosshairHudElement*& ZoomedCrosshair); // Function Gun_Zoomable.Gun_Zoomable_C.GetZoomedCrosshair // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetMobileAutoPrimaryRefireDelay(float& AutoRefireDelay); // Function Gun_Zoomable.Gun_Zoomable_C.GetMobileAutoPrimaryRefireDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetUseHoldInput(bool& Return Value); // Function Gun_Zoomable.Gun_Zoomable_C.GetUseHoldInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetUpReflexComponent(); // Function Gun_Zoomable.Gun_Zoomable_C.SetUpReflexComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CanCycleZoomFromIdle(bool& CanZoom); // Function Gun_Zoomable.Gun_Zoomable_C.CanCycleZoomFromIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Gun_Zoomable.Gun_Zoomable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void TryCycleZoomFromIdle(); // Function Gun_Zoomable.Gun_Zoomable_C.TryCycleZoomFromIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CosmeticUnZoomStarted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.CosmeticUnZoomStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnZoomInCompleted_Event_1(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomInCompleted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnZoomOutCompleted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomOutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ResetZoomGameplayAndCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.ResetZoomGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetZoomCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.SetZoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetZoomLevelReachedGameplayAndCosmetics(float ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.SetZoomLevelReachedGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetUnzoomCosmetics(); // Function Gun_Zoomable.Gun_Zoomable_C.SetUnzoomCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CosmeticZoomPercentageReached(struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C.CosmeticZoomPercentageReached // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void On Zoom Component Cooldown Completed(struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C.On Zoom Component Cooldown Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExitHoldToZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.ExitHoldToZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void EnterHoldToZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.EnterHoldToZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnADSHoldInputChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnADSHoldInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnScopeHoldInputChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnScopeHoldInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnCycleThroughSniperZoomLevelsChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnCycleThroughSniperZoomLevelsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ServerSetCycleThroughZoomLevels(bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.ServerSetCycleThroughZoomLevels // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAutoRescopeSniperSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.OnAutoRescopeSniperSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ServerSetAutoRescopeSniper(bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C.ServerSetAutoRescopeSniper // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnSetOwner(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Gun_Zoomable.Gun_Zoomable_C.OnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ClientItemEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void GunInspect(enum class GunEmote Emote); // Function Gun_Zoomable.Gun_Zoomable_C.GunInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__CycleZoomState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__CycleZoomState_K2Node_ComponentBoundEvent_0_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void OnServerBeganInitialZoom(); // Function Gun_Zoomable.Gun_Zoomable_C.OnServerBeganInitialZoom // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__ReadyingState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__ReadyingState_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void UpdateStateMachineFlow(); // Function Gun_Zoomable.Gun_Zoomable_C.UpdateStateMachineFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnRejectZoomInvalidState_Event_1(struct UScriptStateComponent* InvalidState); // Function Gun_Zoomable.Gun_Zoomable_C.OnRejectZoomInvalidState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ClientItemUnEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__ZoomMultiplier_K2Node_ComponentBoundEvent_2_OnZoomInStartedSignature__DelegateSignature(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C.BndEvt__ZoomMultiplier_K2Node_ComponentBoundEvent_2_OnZoomInStartedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void OnGameRuleBoolChanged_NotifyBlueprint_Event_1(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function Gun_Zoomable.Gun_Zoomable_C.OnGameRuleBoolChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Gun_Zoomable(int32_t EntryPoint); // Function Gun_Zoomable.Gun_Zoomable_C.ExecuteUbergraph_Gun_Zoomable // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void OnZoomStateReset__DelegateSignature(); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomStateReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnZoomLevelReached__DelegateSignature(float ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomLevelReached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

