// BlueprintGeneratedClass BaseEjectable.BaseEjectable_C
// Size: 0x568 (Inherited: 0x520)
struct ABaseEjectable_C : AAresEjectable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UAresOutlineComponent* ; // 0x528(0x08)
	struct UAresOutlineComponent* ; // 0x530(0x08)
	struct UStaticMeshComponent* Mesh1P; // 0x538(0x08)
	struct UStaticMeshComponent* Mesh3P; // 0x540(0x08)
	struct UStaticMeshComponent* ; // 0x548(0x08)
	bool ; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UStaticMesh* ; // 0x558(0x08)
	struct UStaticMesh* ; // 0x560(0x08)

	void (struct FVector SurfaceNormal, struct TArray<struct FVector>& ); // Function BaseEjectable.BaseEjectable_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector A, struct FVector B, struct FRotator& Result); // Function BaseEjectable.BaseEjectable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (bool& ); // Function BaseEjectable.BaseEjectable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (struct FVector , struct FVector& ); // Function BaseEjectable.BaseEjectable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function BaseEjectable.BaseEjectable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void EventOverrideMesh(struct UStaticMesh* OverrideMesh1P, struct UStaticMesh* OverrideMesh3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMesh // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventOverrideMaterial(struct UMaterialInterface* OverrideMaterial1P, struct UMaterialInterface* OverrideMaterial3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMaterial // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventOverride1PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMesh // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventOverride3PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMesh // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventSpawned(); // Function BaseEjectable.BaseEjectable_C.EventSpawned // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventOverride1PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMaterial // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void EventOverride3PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMaterial // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseEjectable.BaseEjectable_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

