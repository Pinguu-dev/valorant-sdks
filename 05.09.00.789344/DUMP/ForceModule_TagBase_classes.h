// BlueprintGeneratedClass ForceModule_TagBase.ForceModule_TagBase_C
// Size: 0x188 (Inherited: 0x168)
struct UForceModule_TagBase_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float Tag Duration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AShooterCharacter* ShooterCharacter; // 0x178(0x08)
	bool IsInPostTagJump; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float PostTagJumpDragFactor; // 0x184(0x04)

	float GetTagDuration(); // Function ForceModule_TagBase.ForceModule_TagBase_C.GetTagDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_TagBase.ForceModule_TagBase_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool TickForceModule(float DeltaTime); // Function ForceModule_TagBase.ForceModule_TagBase_C.TickForceModule // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Initialize(); // Function ForceModule_TagBase.ForceModule_TagBase_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void MovementModeChangedDelegate_Event_1(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function ForceModule_TagBase.ForceModule_TagBase_C.MovementModeChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Shutdown(); // Function ForceModule_TagBase.ForceModule_TagBase_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ForceModule_TagBase(int32_t EntryPoint); // Function ForceModule_TagBase.ForceModule_TagBase_C.ExecuteUbergraph_ForceModule_TagBase // (Final|UbergraphFunction) // @ game+0x32f73d0
};

