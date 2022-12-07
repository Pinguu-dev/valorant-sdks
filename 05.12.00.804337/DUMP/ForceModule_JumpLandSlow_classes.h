// BlueprintGeneratedClass ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C
// Size: 0x204 (Inherited: 0x168)
struct UForceModule_JumpLandSlow_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float ; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FExplicitFloatCurve ; // 0x178(0x88)
	float ; // 0x200(0x04)

	void (); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	float GetAttributeModifier(enum class EForceModuleAttribute Type, float Time); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.GetAttributeModifier // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool TickForceModule(float DeltaTime); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Initialize(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

