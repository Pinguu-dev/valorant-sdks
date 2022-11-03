// BlueprintGeneratedClass PersonalizationVisualInterface.PersonalizationVisualInterface_C
// Size: 0x30 (Inherited: 0x30)
struct UPersonalizationVisualInterface_C : UInterface {

	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function PersonalizationVisualInterface.PersonalizationVisualInterface_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

