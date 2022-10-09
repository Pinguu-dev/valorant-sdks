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

	void GetCurrentMontageInfo(bool bZoomed, struct UAnimMontage*& Montage, float& PlayRate, struct UAnimInstance*& AnimInstance); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.GetCurrentMontageInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetPlayRate(float BasePlayRate, float TimeModifier, float& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StopAnims(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StopAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom // (Final|UbergraphFunction) // @ game+0x3511190
};

