// BlueprintGeneratedClass ShotgunShellCasing.ShotgunShellCasing_C
// Size: 0x574 (Inherited: 0x568)
struct AShotgunShellCasing_C : ABaseShellCasing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	float RotationSpeed; // 0x570(0x04)

	void ReceiveTick(float DeltaSeconds); // Function ShotgunShellCasing.ShotgunShellCasing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function ShotgunShellCasing.ShotgunShellCasing_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_ShotgunShellCasing(int32_t EntryPoint); // Function ShotgunShellCasing.ShotgunShellCasing_C.ExecuteUbergraph_ShotgunShellCasing // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

