// BlueprintGeneratedClass Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C
// Size: 0x183 (Inherited: 0xf8)
struct UComp_FXC_SwapMaterials_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct UMaterialInstance* OverrideMaterial; // 0x108(0x08)
	bool ; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UMaterialInstanceDynamic* ; // 0x118(0x08)
	bool ; // 0x120(0x01)
	bool ; // 0x121(0x01)
	bool ; // 0x122(0x01)
	char pad_123[0x5]; // 0x123(0x05)
	struct FMulticastInlineDelegate ; // 0x128(0x10)
	struct FMulticastInlineDelegate ; // 0x138(0x10)
	bool ; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct USkeletalMeshComponent* ; // 0x150(0x08)
	bool ; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FScalarParameterValue> ; // 0x160(0x10)
	struct TArray<struct FVectorParameterValue> ; // 0x170(0x10)
	bool ; // 0x180(0x01)
	bool ; // 0x181(0x01)
	bool ; // 0x182(0x01)

	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UMaterialInstanceDynamic* Material); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct UMaterialInterface*>& ); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void SwapMaterials(struct UMaterialInstance* InMaterial, struct TArray<struct UMaterialInterface*>& OldMaterials); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.SwapMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetDynamicMaterial(struct UMaterialInstanceDynamic*& ); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetDynamicMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void GetOwningShooterCharacter(struct AShooterCharacter*& ShooterCharacter); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.GetOwningShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct AShooterCharacter* ShooterCharacter, struct USkeletalMeshComponent*& Mesh); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UMaterialInstance*& OverrideMaterial); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_SwapMaterials.Comp_FXC_SwapMaterials_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

