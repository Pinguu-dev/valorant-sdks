// BlueprintGeneratedClass Gun_Zoomable.Gun_Zoomable_C
// Size: 0x1360 (Inherited: 0x122c)
struct AGun_Zoomable_C : AGun_C {
	char pad_122C[0x4]; // 0x122c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1230(0x08)
	struct UBufferedZoomLevelStateComponent* ; // 0x1238(0x08)
	struct UBufferedZoomLevelStateComponent* ; // 0x1240(0x08)
	struct UBufferedZoomLevelStateComponent* ; // 0x1248(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x1250(0x08)
	struct UComp_Gun_FlaggedZoomSettings_C* Comp_Gun_FlaggedZoomSettings; // 0x1258(0x08)
	struct UZoomLevelStateComponent* ; // 0x1260(0x08)
	struct UPendingZoomLevelStateComponent* ; // 0x1268(0x08)
	struct UPendingZoomLevelStateComponent* ; // 0x1270(0x08)
	struct UZoomLevelStateComponent* ; // 0x1278(0x08)
	struct UZoomLevelStateComponent* ; // 0x1280(0x08)
	struct UZoomLevelStateComponent* ; // 0x1288(0x08)
	struct UZoomLevelStateComponent* ; // 0x1290(0x08)
	struct UZoomLevelStateComponent* ; // 0x1298(0x08)
	struct UEquippableStateMachineComponent* ; // 0x12a0(0x08)
	struct UZoomManagerComponent* ZoomManagerComponent; // 0x12a8(0x08)
	struct UCycleZoomState* CycleZoomState; // 0x12b0(0x08)
	struct UZoomMultiplierComponent* ZoomMultiplier; // 0x12b8(0x08)
	struct UBaseCrosshairHudElement* ; // 0x12c0(0x08)
	bool ; // 0x12c8(0x01)
	char pad_12C9[0x7]; // 0x12c9(0x07)
	struct UBaseCrosshairHudElement* ; // 0x12d0(0x08)
	enum class AfterFiringWhileZoomedOption ; // 0x12d8(0x01)
	bool ; // 0x12d9(0x01)
	char pad_12DA[0x6]; // 0x12da(0x06)
	struct UAttachment_Base_Reflex_C* ; // 0x12e0(0x08)
	bool ; // 0x12e8(0x01)
	bool ; // 0x12e9(0x01)
	char pad_12EA[0x2]; // 0x12ea(0x02)
	int32_t ; // 0x12ec(0x04)
	bool ; // 0x12f0(0x01)
	bool ; // 0x12f1(0x01)
	bool ; // 0x12f2(0x01)
	char pad_12F3[0x5]; // 0x12f3(0x05)
	struct FMulticastInlineDelegate OnZoomLevelReached; // 0x12f8(0x10)
	struct FMulticastInlineDelegate OnZoomStateReset; // 0x1308(0x10)
	bool ; // 0x1318(0x01)
	char pad_1319[0x7]; // 0x1319(0x07)
	struct TArray<struct UScriptStateComponent*> ; // 0x1320(0x10)
	struct TArray<struct UScriptStateComponent*> FiringStates; // 0x1330(0x10)
	struct TArray<struct UScriptStateComponent*> ; // 0x1340(0x10)
	float ; // 0x1350(0x04)
	bool ; // 0x1354(0x01)
	char pad_1355[0x3]; // 0x1355(0x03)
	struct AShooterCharacter* ; // 0x1358(0x08)

	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UBaseCrosshairHudElement*& ); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void GetMobileAutoPrimaryRefireDelay(float& AutoRefireDelay); // Function Gun_Zoomable.Gun_Zoomable_C.GetMobileAutoPrimaryRefireDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (bool& Return Value); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& CanZoom); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UFiringStateComponent*& FiringState); // Function Gun_Zoomable.Gun_Zoomable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Gun_Zoomable.Gun_Zoomable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UZoomComponent* ZoomComponent); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool NewValue); // Function Gun_Zoomable.Gun_Zoomable_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ClientItemEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void GunInspect(enum class GunEmote Emote); // Function Gun_Zoomable.Gun_Zoomable_C.GunInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UScriptStateComponent* InvalidState); // Function Gun_Zoomable.Gun_Zoomable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ClientItemUnEquipped(); // Function Gun_Zoomable.Gun_Zoomable_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintEvent) // @ game+0x3322a90
	void OnGameRuleBoolChanged_NotifyBlueprint_Event_1(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function Gun_Zoomable.Gun_Zoomable_C.OnGameRuleBoolChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Gun_Zoomable.Gun_Zoomable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Gun_Zoomable.Gun_Zoomable_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void OnZoomStateReset__DelegateSignature(); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomStateReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnZoomLevelReached__DelegateSignature(float ZoomLevel); // Function Gun_Zoomable.Gun_Zoomable_C.OnZoomLevelReached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

