// BlueprintGeneratedClass BaseEjectable.BaseEjectable_C
// Size: 0x568 (Inherited: 0x520)
struct ABaseEjectable_C : AAresEjectable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UAresOutlineComponent* AresOutline3P; // 0x528(0x08)
	struct UAresOutlineComponent* AresOutline1P; // 0x530(0x08)
	struct UStaticMeshComponent* Mesh1P; // 0x538(0x08)
	struct UStaticMeshComponent* Mesh3P; // 0x540(0x08)
	struct UStaticMeshComponent* ActiveMesh; // 0x548(0x08)
	bool ApplyScaleOnGround; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UStaticMesh* Original Mesh 1P; // 0x558(0x08)
	struct UStaticMesh* Original Mesh 3P; // 0x560(0x08)

	void RotateToClosestRestNormal(struct FVector SurfaceNormal, struct TArray<struct FVector>& RestNormalz); // Function BaseEjectable.BaseEjectable_C.RotateToClosestRestNormal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BuildRotatorFromTwoVectors(struct FVector A, struct FVector B, struct FRotator& Result); // Function BaseEjectable.BaseEjectable_C.BuildRotatorFromTwoVectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3520f50
	void Has1PMesh(bool& Has1PMesh); // Function BaseEjectable.BaseEjectable_C.Has1PMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3520f50
	void Calc1PSpawnPosition(struct FVector InWorldPosition, struct FVector& OutWorldPosition); // Function BaseEjectable.BaseEjectable_C.Calc1PSpawnPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BaseEjectable.BaseEjectable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void EventOverrideMesh(struct UStaticMesh* OverrideMesh1P, struct UStaticMesh* OverrideMesh3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMesh // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventOverrideMaterial(struct UMaterialInterface* OverrideMaterial1P, struct UMaterialInterface* OverrideMaterial3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMaterial // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventOverride1PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMesh // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventOverride3PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMesh // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventSpawned(); // Function BaseEjectable.BaseEjectable_C.EventSpawned // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventOverride1PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMaterial // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void EventOverride3PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMaterial // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseEjectable(int32_t EntryPoint); // Function BaseEjectable.BaseEjectable_C.ExecuteUbergraph_BaseEjectable // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

