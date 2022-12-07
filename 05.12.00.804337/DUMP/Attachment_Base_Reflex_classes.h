// BlueprintGeneratedClass Attachment_Base_Reflex.Attachment_Base_Reflex_C
// Size: 0x1e1 (Inherited: 0x120)
struct UAttachment_Base_Reflex_C : UAttachment_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct FName SocketName; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct TSoftObjectPtr<USkeletalMesh> ; // 0x138(0x30)
	struct USkeletalMeshComponent* ; // 0x168(0x08)
	struct UStaticMeshComponent* ; // 0x170(0x08)
	float ScopedStabilityMultiplier; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x180(0x10)
	struct TSoftObjectPtr<UStaticMesh> ; // 0x190(0x30)
	struct TArray<struct UMaterialInterface*> ; // 0x1c0(0x10)
	struct USkeletalMeshComponent* ; // 0x1d0(0x08)
	struct UObject* AnimBlueprint; // 0x1d8(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x1e0(0x01)

	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct TArray<struct UMaterialInterface*>& ); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AEffectContainer* , struct FEffectID& ); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AEffectContainer* , struct FEffectID& ); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AEffectContainer* , struct FEffectID& ); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Visible); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FColor NewColor); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

