// BlueprintGeneratedClass Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C
// Size: 0x183 (Inherited: 0xf8)
struct UComp_FXC_SwapMaterials_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct UMaterialInstance* OverrideMaterial; // 0x108(0x08)
	bool UseDynamicMaterial; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x118(0x08)
	bool HasAlreadyReset; // 0x120(0x01)
	bool SwapOnEffectStart; // 0x121(0x01)
	bool SwapBackOnStopEffect; // 0x122(0x01)
	char pad_123[0x5]; // 0x123(0x05)
	struct FMulticastInlineDelegate MaterialsSwapped; // 0x128(0x10)
	struct FMulticastInlineDelegate MaterialsReverted; // 0x138(0x10)
	bool MaterialsHaveBeenSwapped; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct USkeletalMeshComponent* TargetMesh; // 0x150(0x08)
	bool ShouldSetTeamParameter; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FScalarParameterValue> FresnelScalarValues; // 0x160(0x10)
	struct TArray<struct FVectorParameterValue> FresnelVectorValues; // 0x170(0x10)
	bool CopyFresnelSettings; // 0x180(0x01)
	bool ManulSwapQueued; // 0x181(0x01)
	bool RequireSwappedMaterialActiveToSwapBack; // 0x182(0x01)

	void ApplyFresnelSettings(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ApplyFresnelSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StoreFresnelSettings(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.StoreFresnelSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MaybeSetTeamParameter(struct UMaterialInstanceDynamic* Material); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.MaybeSetTeamParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetOriginalMaterials(struct TArray<struct UMaterialInterface*>& OriginalMaterials); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetOriginalMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void SwapMaterials(struct UMaterialInstance* InMaterial, struct TArray<struct UMaterialInterface*>& OldMaterials); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.SwapMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SwapBackMaterials(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.SwapBackMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetDynamicMaterial(struct UMaterialInstanceDynamic*& DynamicMaterialInstance); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetDynamicMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetOwningShooterCharacter(struct AShooterCharacter*& ShooterCharacter); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetOwningShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetSkeletalMeshToSwap(struct AShooterCharacter* ShooterCharacter, struct USkeletalMeshComponent*& Mesh); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetSkeletalMeshToSwap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void ManuallyResetMaterials(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ManuallyResetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void InitializeMaterial(struct UMaterialInstance*& OverrideMaterial); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.InitializeMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ManualSwap(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ManualSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ResetEffect(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_FXC_SwapMaterials(int32_t EntryPoint); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ExecuteUbergraph_Comp_FXC_SwapMaterials // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void MaterialsReverted__DelegateSignature(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.MaterialsReverted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MaterialsSwapped__DelegateSignature(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.MaterialsSwapped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

