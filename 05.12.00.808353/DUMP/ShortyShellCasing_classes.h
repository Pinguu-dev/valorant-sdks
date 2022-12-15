// BlueprintGeneratedClass ShortyShellCasing.ShortyShellCasing_C
// Size: 0x574 (Inherited: 0x568)
struct AShortyShellCasing_C : ABaseShellCasing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	float RotationSpeed; // 0x570(0x04)

	void ReceiveTick(float DeltaSeconds); // Function ShortyShellCasing.ShortyShellCasing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function ShortyShellCasing.ShortyShellCasing_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_ShortyShellCasing(int32_t EntryPoint); // Function ShortyShellCasing.ShortyShellCasing_C.ExecuteUbergraph_ShortyShellCasing // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

