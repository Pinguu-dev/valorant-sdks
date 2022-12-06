// BlueprintGeneratedClass ForceModule_TagBase.ForceModule_TagBase_C
// Size: 0x188 (Inherited: 0x168)
struct UForceModule_TagBase_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float ; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AShooterCharacter* ShooterCharacter; // 0x178(0x08)
	bool ; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float ; // 0x184(0x04)

	float (); // Function ForceModule_TagBase.ForceModule_TagBase_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_TagBase.ForceModule_TagBase_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool TickForceModule(float DeltaTime); // Function ForceModule_TagBase.ForceModule_TagBase_C.TickForceModule // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Initialize(); // Function ForceModule_TagBase.ForceModule_TagBase_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void _1(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function ForceModule_TagBase.ForceModule_TagBase_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Shutdown(); // Function ForceModule_TagBase.ForceModule_TagBase_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function ForceModule_TagBase.ForceModule_TagBase_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

