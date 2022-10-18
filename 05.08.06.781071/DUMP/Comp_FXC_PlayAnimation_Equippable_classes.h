// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C
// Size: 0x152 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_Equippable_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* 1P_Animation; // 0x100(0x08)
	struct UAnimMontage* 3P_Animation; // 0x108(0x08)
	struct UAnimMontage* 1P_Cosmetic_Animation; // 0x110(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float 1P_PlayRate; // 0x11c(0x04)
	float 3P_PlayRate; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x128(0x08)
	struct AAresEquippable* OwningEquippable; // 0x130(0x08)
	float TimeModifier; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FStruct_PlayingMontage> ActiveMontages; // 0x140(0x10)
	bool bManualStart; // 0x150(0x01)
	bool DestroyEffectIfEquippableUnequipped; // 0x151(0x01)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldPlayAnimation(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ShouldPlayAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GoToMontageSection(struct FString SectionName); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GoToMontageSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetPlayRate(float BasePlayRate, float TimeModifier, float& PlayRate); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlayAnimation(float StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlayEquippableAnimation(struct UAnimMontage* Montage, struct USkeletalMeshComponent* Mesh, float PlayRate, float StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.PlayEquippableAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StopActiveMontages(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StopActiveMontages // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UnbindMontageEvents(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.UnbindMontageEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void MontageStopped(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.MontageStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerManualStart(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.TriggerManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnItemUnequipped_Event_1(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.OnItemUnequipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_Equippable(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_Equippable // (Final|UbergraphFunction) // @ game+0x3520f50
};

