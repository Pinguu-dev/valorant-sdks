// BlueprintGeneratedClass Weapon_Skin_Base.Weapon_Skin_Base_C
// Size: 0x50d (Inherited: 0x118)
struct UWeapon_Skin_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct UAnimInstance* Weapon Cosmetic AnimGraph; // 0x120(0x08)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 1P; // 0x128(0x30)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 1P Cosmetic; // 0x158(0x30)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x188(0x10)
	struct TSoftObjectPtr<UStaticMesh> Magazine 1P; // 0x198(0x30)
	struct TArray<struct UMaterialInterface*> 1pMagazine MaterialOverrides; // 0x1c8(0x10)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 3P; // 0x1d8(0x30)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x208(0x10)
	struct UStaticMesh* Magazine 3P; // 0x218(0x08)
	struct TArray<struct UMaterialInterface*> 3pMagazineMaterial Overrides; // 0x220(0x10)
	enum class PersonalizationSkinRarity Rarity; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UMaterial* KillBannerMaterial; // 0x238(0x08)
	enum class EKillBannerAnimation KillBannerWidgetAnimation; // 0x240(0x01)
	bool Bullet Mesh Visibility; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct UStaticMesh* BulletMeshOverride; // 0x248(0x08)
	struct UMaterialInterface* BulletMaterialOverride; // 0x250(0x08)
	int32_t NumBullets; // 0x258(0x04)
	struct FName Bullet Socket; // 0x25c(0x0c)
	struct AEffectContainer* FXC Kill Effect; // 0x268(0x08)
	struct FName On Kill Attach Socket; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x280(0x50)
	struct AEffectContainer* FXC Victim Finisher; // 0x2d0(0x08)
	struct AEffectContainer* FXC Victim Planted Finisher; // 0x2d8(0x08)
	struct UActorComponent* OnKillEffect; // 0x2e0(0x08)
	struct UMeshComponent* BulletMeshParent; // 0x2e8(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> Character 1P AnimationOverridesMap; // 0x2f0(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> Character 1P Animation Altmode Overrides Map; // 0x340(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Gun 1P Animation Overrides Map; // 0x390(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic Gun 1P Animation Overrides Map; // 0x3e0(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic Gun 1P Animation Altmode Overrides Map; // 0x430(0x50)
	struct USkeletalMesh* BuddyMount; // 0x480(0x08)
	struct UMaterialInterface* BuddyMountMaterial; // 0x488(0x08)
	bool FinisherCancelsMovement; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float FinisherDestroyCorpseTime; // 0x494(0x04)
	struct UKillBannerData* KillBannerData; // 0x498(0x08)
	struct UStaticMesh* Shell Casing 1P; // 0x4a0(0x08)
	struct UStaticMesh* Shell Casing 3P; // 0x4a8(0x08)
	struct UMaterialInterface* Shell Casing Material 1P; // 0x4b0(0x08)
	struct UMaterialInterface* Shell Casing Material 3P; // 0x4b8(0x08)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x4c0(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x4d0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x4e0(0x10)
	bool Attach Bullet To Cosmetic; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x4f8(0x08)
	struct UBaseGunSkinVOComponent_C* Spawned VO Component; // 0x500(0x08)
	int32_t Random Int; // 0x508(0x04)
	bool bFirstPersonAssetsSetup; // 0x50c(0x01)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Are First Person Soft Refs Loaded(bool& bLoaded); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.Are First Person Soft Refs Loaded // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetupFirstPersonAssets(); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.SetupFirstPersonAssets // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetStaticMesh(struct TSoftObjectPtr<UStaticMesh> SoftStaticMesh, struct UStaticMesh*& Mesh); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetStaticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GenerateRandomInt(int32_t& RandomInt); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GenerateRandomInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetSkeletalMesh(struct TSoftObjectPtr<USkeletalMesh> SoftSkeletalMesh, struct USkeletalMesh*& Mesh); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetSkeletalMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void Add VO Component(struct AActor* Owning Gun); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.Add VO Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Add VFX Meshes(); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetRarityColor(struct FLinearColor& Color); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GetRarityColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void GotKill(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.GotKill // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Custom_OnSetOwner(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.Custom_OnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void K2_OnAssetsLoaded(int32_t AssetTypes); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.K2_OnAssetsLoaded // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Custom On Kill(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.Custom On Kill // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Weapon_Skin_Base(int32_t EntryPoint); // Function Weapon_Skin_Base.Weapon_Skin_Base_C.ExecuteUbergraph_Weapon_Skin_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

