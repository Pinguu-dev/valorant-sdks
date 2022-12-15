// BlueprintGeneratedClass MenuDisplayEquippable.MenuDisplayEquippable_C
// Size: 0x4c0 (Inherited: 0x3d0)
struct AMenuDisplayEquippable_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USkeletalMeshComponent* JuiceBoxSkeletalMesh; // 0x3d8(0x08)
	struct UStaticMeshComponent* Spray Display Mesh; // 0x3e0(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x3e8(0x08)
	struct USkeletalMeshComponent* CosmeticMesh1P; // 0x3f0(0x08)
	struct UStaticMeshComponent* Magazine; // 0x3f8(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x400(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x408(0x08)
	bool DidBeginPlay; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<struct UMaterialInterface*> WantedMaterials; // 0x418(0x10)
	struct USkeletalMesh* WantedGunMesh; // 0x428(0x08)
	struct UStaticMesh* WantedMagazineMesh; // 0x430(0x08)
	struct USkeletalMesh* WantedCosmeticMesh; // 0x438(0x08)
	bool IsMelee; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FRotator Current Rotation; // 0x444(0x0c)
	struct FRotator Wanted Rotation; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FEffectID> Current FXCs; // 0x460(0x10)
	struct FVector Current Center; // 0x470(0x0c)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UBulletComponent_C* BulletComponent; // 0x480(0x08)
	bool Focus Gunbuddy; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct AAresEquippable* EquippableClass; // 0x490(0x08)
	bool UseLoadingTextures; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	struct FVector Pan Offset; // 0x49c(0x0c)
	struct TArray<struct UStaticMeshComponent*> VFX Meshes; // 0x4a8(0x10)
	struct UEquippableSkinChromaDataAsset* Weapon Chroma Reference; // 0x4b8(0x08)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetMagazine3p // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetMagazine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void SetJuiceboxMesh(struct USkeletalMeshComponent* JuiceboxMesh, struct USkeletalMesh* SkeletalMesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.SetJuiceboxMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void InitializeJuicebox(struct UJuiceBoxDataAsset* JuiceBoxDataAsset, struct FVector CameraCenter); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.InitializeJuicebox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void DestroyChildComponent(struct UActorComponent* ChildComponent); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.DestroyChildComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Reset FXCs(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Reset FXCs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Spray(struct USprayHandle* Spray Handle); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Spray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OverrideTextures(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.OverrideTextures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void CheckTexturesStreamedIn(bool& AreTexturesStreamedIn); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.CheckTexturesStreamedIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Calculate Center(struct FVector Default Center, struct FVector& Current Center); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Calculate Center // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set FXC(struct UEquippableSkinDataAsset* EquippableSkin, int32_t Skin Level, struct UEquippableSkinChromaDataAsset* Chroma); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set FXC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Rotation Immediate(struct FRotator NewRotation, bool bTeleport); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Rotation Immediate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Mesh Rotation(float X (Roll), float Y (Pitch), float Z (Yaw)); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Mesh Rotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Gunbuddy(struct UEquippableCharmLevelDataAsset* CharmAsset); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Gunbuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Rotation(float X (Roll), float Z (Yaw)); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Rotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void CopyBaseWeapon(struct UEquippableSkinDataAsset* Target); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.CopyBaseWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Set Skin(struct UEquippableSkinDataAsset* EquippableSkinAsset, struct UEquippableSkinChromaDataAsset* EquippableChromaAsset, int32_t Level, struct UEquippableCharmDataAsset* EquippableCharmAsset, int32_t CharmLevel, bool Focus Gunbuddy, struct FVector Default Center, bool UseLoadingTextures, bool GunbuddyUpdateOnly); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Set Skin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void SetLod0(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.SetLod0 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ResetMeshes(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ResetMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void ReceiveTick(float DeltaSeconds); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_MenuDisplayEquippable(int32_t EntryPoint); // Function MenuDisplayEquippable.MenuDisplayEquippable_C.ExecuteUbergraph_MenuDisplayEquippable // (Final|UbergraphFunction) // @ game+0x33231a0
};

