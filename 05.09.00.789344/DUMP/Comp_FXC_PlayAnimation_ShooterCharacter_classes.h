// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C
// Size: 0x17e (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* 1P_Animation; // 0x100(0x08)
	struct UAnimMontage* 1P_Overlay_Animation; // 0x108(0x08)
	struct UAnimMontage* 3P_Animation; // 0x110(0x08)
	struct UAnimMontage* 3P_Cosmetic_Animation; // 0x118(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float StopAnimBlendOutTime; // 0x124(0x04)
	float 1P_PlayRate; // 0x128(0x04)
	float 3P_PlayRate; // 0x12c(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	float StartTime; // 0x138(0x04)
	float TimeModifier; // 0x13c(0x04)
	bool DestroyEffectWhenAnimIsInterrupted; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TArray<struct FStruct_PlayingMontage> ActiveMontages; // 0x148(0x10)
	struct FMulticastInlineDelegate DispatchMontageStopped; // 0x158(0x10)
	bool bManualStart; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct AAresEquippable* AssociatedEquippable; // 0x170(0x08)
	float MontageEndTime; // 0x178(0x04)
	bool Debug Montage State; // 0x17c(0x01)
	bool 3PDelayDeadAndSettled; // 0x17d(0x01)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GoToMontageSection(struct FString SectionName); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GoToMontageSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetPlayRate(float BasePlayRate, float TimeModifier, float& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PlayAnimation(float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void MontageStopped(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.MontageStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopActiveMontages(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StopActiveMontages // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayAndTrackMontage(struct UAnimInstance* Instance, struct UAnimMontage* Montage, float PlayRate, float StartTime); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.PlayAndTrackMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UnbindMontageEvents(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.UnbindMontageEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TriggerManualStart(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.TriggerManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AssociateAnim(struct UAnimationAsset* Anim); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.AssociateAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void DelayedMontageUnbind(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.DelayedMontageUnbind // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void DispatchMontageStopped__DelegateSignature(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.DispatchMontageStopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

