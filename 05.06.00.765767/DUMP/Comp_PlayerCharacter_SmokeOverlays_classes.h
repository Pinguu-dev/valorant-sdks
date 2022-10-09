// BlueprintGeneratedClass Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C
// Size: 0x168 (Inherited: 0xe8)
struct UComp_PlayerCharacter_SmokeOverlays_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AActor*, struct FStruct_SmokeAndColorAlphaInfo> ActiveSmokesAndColors; // 0xf0(0x50)
	struct AShooterCharacter* OwningShooterCharacter; // 0x140(0x08)
	struct UStaticMesh* MeshFrameTemplate; // 0x148(0x08)
	struct UStaticMeshComponent* MeshFrame; // 0x150(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x158(0x08)
	struct UMaterialInterface* DynamicMaterialTemplate; // 0x160(0x08)
};

