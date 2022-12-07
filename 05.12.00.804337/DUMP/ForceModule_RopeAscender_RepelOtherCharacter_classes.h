// BlueprintGeneratedClass ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C
// Size: 0x1a8 (Inherited: 0x178)
struct UForceModule_RopeAscender_RepelOtherCharacter_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	float ; // 0x180(0x04)
	float ; // 0x184(0x04)
	float ; // 0x188(0x04)
	bool ; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FForceModuleHandle ; // 0x190(0x08)
	float ; // 0x198(0x04)
	float ; // 0x19c(0x04)
	bool ; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float ; // 0x1a4(0x04)

	void (struct FVector& ); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Initialize(); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void OnMovementBlocked(struct FHitResult& BlockingHit); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.OnMovementBlocked // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

