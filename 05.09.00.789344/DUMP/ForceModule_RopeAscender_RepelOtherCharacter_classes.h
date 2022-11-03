// BlueprintGeneratedClass ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C
// Size: 0x1a8 (Inherited: 0x178)
struct UForceModule_RopeAscender_RepelOtherCharacter_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	float RepelRadiusSquared; // 0x180(0x04)
	float RepelRadius; // 0x184(0x04)
	float RepelSpringiness; // 0x188(0x04)
	bool bRepelOtherHitCharacters; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FForceModuleHandle SourceCharacterAscenderForceModule; // 0x190(0x08)
	float ForceModuleActiveRadius; // 0x198(0x04)
	float ForceModuleActiveRadiusSquared; // 0x19c(0x04)
	bool bRepelForceIsActive; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float SourceToTargetDistSquared; // 0x1a4(0x04)

	void GetSourceToTargetVector(struct FVector& GetSourceToTargetVector); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetSourceToTargetVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Initialize(); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnMovementBlocked(struct FHitResult& BlockingHit); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.OnMovementBlocked // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter(int32_t EntryPoint); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

