// BlueprintGeneratedClass ForceModule_RopeAscender.ForceModule_RopeAscender_C
// Size: 0x2e1 (Inherited: 0x178)
struct UForceModule_RopeAscender_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct USplineComponent* ; // 0x180(0x08)
	struct UCurveFloat* ; // 0x188(0x08)
	bool ; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FVector AttachOffset; // 0x194(0x0c)
	struct FEffectID ; // 0x1a0(0x20)
	struct FEffectID ; // 0x1c0(0x20)
	bool ; // 0x1e0(0x01)
	bool ; // 0x1e1(0x01)
	char pad_1E2[0xe]; // 0x1e2(0x0e)
	struct FTransform ; // 0x1f0(0x30)
	struct FVector ; // 0x220(0x0c)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UStaticMeshComponent* ; // 0x230(0x08)
	struct FExplicitFloatCurve ; // 0x238(0x88)
	float CreationTime; // 0x2c0(0x04)
	float ; // 0x2c4(0x04)
	float ; // 0x2c8(0x04)
	bool ; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float ; // 0x2d0(0x04)
	struct FGameplayTag ; // 0x2d4(0x0c)
	bool ; // 0x2e0(0x01)

	void (); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float& Speed, bool& ); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FTransform& Distance, float& Key); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.TickForceModule // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float , struct FVector& Offset); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetAppliedForce // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Initialize(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void Shutdown(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Character); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

