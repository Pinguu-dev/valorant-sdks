// BlueprintGeneratedClass Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C
// Size: 0x131 (Inherited: 0xe8)
struct UComp_ShooterCharacter_ViewTargetingModeManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool TargetViewActive; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FMulticastInlineDelegate UpdateTargetViewMode; // 0xf8(0x10)
	struct FEffectID FXC_ID_TargetViewStart; // 0x108(0x20)
	struct AEffectContainer* FXC_StartTargetView; // 0x128(0x08)
	bool TargetViewIsStarted; // 0x130(0x01)

	void GetTargetViewModeActive(bool& TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.GetTargetViewModeActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void SetTargetViewMode(bool bValue); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.SetTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void AttemptStartTargetViewMode(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.AttemptStartTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AttemptStopTargetViewMode(); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.AttemptStopTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_ShooterCharacter_ViewTargetingModeManager(int32_t EntryPoint); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ExecuteUbergraph_Comp_ShooterCharacter_ViewTargetingModeManager // (Final|UbergraphFunction) // @ game+0x3511190
	void UpdateTargetViewMode__DelegateSignature(bool TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.UpdateTargetViewMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

