// BlueprintGeneratedClass DeathForceModule.DeathForceModule_C
// Size: 0x184 (Inherited: 0x168)
struct UDeathForceModule_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float MaxForce; // 0x170(0x04)
	struct FRootMotionData CurrentRootMotion; // 0x174(0x10)

	bool TickForceModule(float DeltaTime); // Function DeathForceModule.DeathForceModule_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function DeathForceModule.DeathForceModule_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Initialize(); // Function DeathForceModule.DeathForceModule_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void Shutdown(); // Function DeathForceModule.DeathForceModule_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_DeathForceModule(int32_t EntryPoint); // Function DeathForceModule.DeathForceModule_C.ExecuteUbergraph_DeathForceModule // (Final|UbergraphFunction) // @ game+0x3520f50
};

