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
};

