// BlueprintGeneratedClass Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C
// Size: 0x131 (Inherited: 0xe8)
struct UComp_ShooterCharacter_ViewTargetingModeManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool TargetViewActive; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FMulticastInlineDelegate UpdateTargetViewMode; // 0xf8(0x10)
	struct FEffectID ; // 0x108(0x20)
	struct AEffectContainer* ; // 0x128(0x08)
	bool ; // 0x130(0x01)

	void GetTargetViewModeActive(bool& TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.GetTargetViewModeActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (bool bValue); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C. // (Final|UbergraphFunction) // @ game+0x3322a60
	void UpdateTargetViewMode__DelegateSignature(bool TargetViewActive); // Function Comp_ShooterCharacter_ViewTargetingModeManager.Comp_ShooterCharacter_ViewTargetingModeManager_C.UpdateTargetViewMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

