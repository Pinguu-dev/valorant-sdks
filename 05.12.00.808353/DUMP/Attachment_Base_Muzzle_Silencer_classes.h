// BlueprintGeneratedClass Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C
// Size: 0x220 (Inherited: 0x170)
struct UAttachment_Base_Muzzle_Silencer_C : UAttachment_Base_Muzzle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x178(0x10)
	struct TArray<struct UMaterialInterface*> 3p MaterialOverrides; // 0x188(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectOverrides; // 0x198(0x50)
	struct AProjectile_Gun_C* ProjectileOverride; // 0x1e8(0x08)
	struct FVector Scale; // 0x1f0(0x0c)
	struct FVector MP5 Scale; // 0x1fc(0x0c)
	struct FVector Carbine Scale; // 0x208(0x0c)
	bool IsModelviewer; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct UAnimInstance* AnimInstance; // 0x218(0x08)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void PlayInspect(struct AEffectContainer* Inspect FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayInspect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void PlayEquip(struct AEffectContainer* Equip FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void PlayReload(struct AEffectContainer* Reload FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void AddToGun (Override This One)(); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Attachment_Base_Muzzle_Silencer(int32_t EntryPoint); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.ExecuteUbergraph_Attachment_Base_Muzzle_Silencer // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

