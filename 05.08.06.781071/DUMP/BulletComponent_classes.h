// BlueprintGeneratedClass BulletComponent.BulletComponent_C
// Size: 0x171 (Inherited: 0x118)
struct UBulletComponent_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	enum class BulletEnum BulletEnum; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<struct UStaticMesh*> BulletMeshList; // 0x128(0x10)
	int32_t NumBullets; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct UStaticMeshComponent*> PrimaryBulletArray; // 0x140(0x10)
	struct FName SocketName; // 0x150(0x0c)
	bool HideBulletsOnFire?; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct UStaticMesh* MeshOverride; // 0x160(0x08)
	struct UMeshComponent* MeshParent; // 0x168(0x08)
	bool Visibility; // 0x170(0x01)

	void SetAllMeshesVisible(); // Function BulletComponent.BulletComponent_C.SetAllMeshesVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReapplyMeshVisibility(); // Function BulletComponent.BulletComponent_C.ReapplyMeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateBulletMaterials(struct UMaterialInterface* Material); // Function BulletComponent.BulletComponent_C.UpdateBulletMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateBulletArrayVisibility(bool Visibility); // Function BulletComponent.BulletComponent_C.UpdateBulletArrayVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetBulletMeshToUse(struct UStaticMesh*& BulletMesh); // Function BulletComponent.BulletComponent_C.GetBulletMeshToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateBulletArrayMeshes(struct UStaticMesh* BulletMesh, struct UMaterialInterface* BulletMaterial, struct FName Socket, struct UMeshComponent* New Parent, bool Visibility, int32_t Number Of Bullets); // Function BulletComponent.BulletComponent_C.UpdateBulletArrayMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CreateBullets(struct UMeshComponent* Parent, struct UStaticMesh* BulletMesh, struct TArray<struct UStaticMeshComponent*>& BulletArray, struct FName SocketName, int32_t Number Of Bullets); // Function BulletComponent.BulletComponent_C.CreateBullets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetTarget(struct TScriptInterface<IPersonalizationVisualInterface_C> PersonalizationInterface); // Function BulletComponent.BulletComponent_C.GetTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BulletComponent.BulletComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Make Bullets(struct TScriptInterface<IPersonalizationVisualInterface_C> PersonalizationInterface); // Function BulletComponent.BulletComponent_C.Make Bullets // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BulletComponent(int32_t EntryPoint); // Function BulletComponent.BulletComponent_C.ExecuteUbergraph_BulletComponent // (Final|UbergraphFunction) // @ game+0x3520f50
};

