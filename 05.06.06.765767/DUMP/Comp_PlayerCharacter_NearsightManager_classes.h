// BlueprintGeneratedClass Comp_PlayerCharacter_NearsightManager.Comp_PlayerCharacter_NearsightManager_C
// Size: 0x208 (Inherited: 0xe8)
struct UComp_PlayerCharacter_NearsightManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UStaticMeshComponent* OccluderMesh; // 0xf0(0x08)
	struct UStaticMeshComponent* FadeMesh; // 0xf8(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x100(0x08)
	struct UMaterialInterface* OccluderMaterialTemplate; // 0x108(0x08)
	struct UStaticMesh* NearsightDomeTemplate; // 0x110(0x08)
	struct TMap<struct AActor*, struct FStruct_NearsightInfo> ActiveNearsightMap; // 0x118(0x50)
	float FullyMaskedAlphaOn; // 0x168(0x04)
	struct FVector CameraOffset; // 0x16c(0x0c)
	struct UMaterialInterface* FadeMaterialTemplate; // 0x178(0x08)
	struct UMaterialInstanceDynamic* OccluderDynamicMaterial; // 0x180(0x08)
	struct TMap<struct AActor*, float> ActiveNearsightTiming; // 0x188(0x50)
	struct UMaterialInstanceDynamic* FadeDynamicMaterial; // 0x1d8(0x08)
	struct UMaterialInterface* CutoutOccluderMaterialTemplate; // 0x1e0(0x08)
	struct UStaticMeshComponent* CutoutOccluderMesh; // 0x1e8(0x08)
	struct UMaterialInstanceDynamic* CutoutOccluderDynamicMaterial; // 0x1f0(0x08)
	struct UComp_ShooterCharacter_ViewTargetingModeManager_C* TargetViewModeManager; // 0x1f8(0x08)
	struct UStaticMeshComponent* TargetViewFadeMesh; // 0x200(0x08)
};

