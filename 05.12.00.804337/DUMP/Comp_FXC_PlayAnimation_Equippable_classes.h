// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C
// Size: 0x152 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_Equippable_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* ; // 0x100(0x08)
	struct UAnimMontage* ; // 0x108(0x08)
	struct UAnimMontage* ; // 0x110(0x08)
	bool ; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ; // 0x11c(0x04)
	float ; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x128(0x08)
	struct AAresEquippable* ; // 0x130(0x08)
	float ; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FStruct_PlayingMontage> ; // 0x140(0x10)
	bool ; // 0x150(0x01)
	bool ; // 0x151(0x01)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FString SectionName); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetPlayRate(float , float , float& PlayRate); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetEquippable(struct UObject* , struct AAresEquippable*& Equippable); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void PlayAnimation(float StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct UAnimMontage* Montage, struct USkeletalMeshComponent* Mesh, float PlayRate, float StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

