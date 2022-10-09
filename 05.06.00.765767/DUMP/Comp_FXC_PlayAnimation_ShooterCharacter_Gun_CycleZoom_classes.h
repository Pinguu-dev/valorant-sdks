// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C
// Size: 0x150 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* ZoomIn_1P_Animation; // 0x100(0x08)
	struct UAnimMontage* ZoomIn_3P_Animation; // 0x108(0x08)
	struct UAnimMontage* ZoomOut_1P_Animation; // 0x110(0x08)
	struct UAnimMontage* ZoomOut_3P_Animation; // 0x118(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float 1P_PlayRate; // 0x124(0x04)
	float 3P_PlayRate; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	float StartTime; // 0x138(0x04)
	float TimeModifier; // 0x13c(0x04)
	bool bZoomed; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UAnimMontage* MontageToPlay; // 0x148(0x08)
};

