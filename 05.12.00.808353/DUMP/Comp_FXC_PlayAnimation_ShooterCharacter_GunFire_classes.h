// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C
// Size: 0x160 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_GunFire_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* 1P_Animation; // 0x100(0x08)
	struct UAnimMontage* 3P_Animation; // 0x108(0x08)
	struct UAnimMontage* Zoomed_1P_Animation; // 0x110(0x08)
	struct UAnimMontage* LastShot_1P_Animation; // 0x118(0x08)
	struct UAnimMontage* LastShot_3P_Animation; // 0x120(0x08)
	struct UAnimMontage* Zoomed_LastShot_1P_Animation; // 0x128(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float 1P_PlayRate; // 0x134(0x04)
	float 3P_PlayRate; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x140(0x08)
	float StartTime; // 0x148(0x04)
	float TimeModifier; // 0x14c(0x04)
	bool bFirstPerson; // 0x150(0x01)
	bool bZoomed; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct UFiringEffectComponent* FiringEffect; // 0x158(0x08)

	void GetCurrentMontage(bool bLastShot, bool bZoomed, struct UAnimMontage*& Montage); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.GetCurrentMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetPlayRate(float BasePlayRate, float TimeModifier, float& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnShot(int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.FxcOnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopAnims(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.StopAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void FxcOnStartedShooting(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.FxcOnStartedShooting // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnRegisterFiringState_Event_1(struct UFiringStateComponent* FiringState); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.FxcOnRegisterFiringState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_GunFire(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_GunFire.Comp_FXC_PlayAnimation_ShooterCharacter_GunFire_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_GunFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

