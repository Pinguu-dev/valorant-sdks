// BlueprintGeneratedClass ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C
// Size: 0x204 (Inherited: 0x168)
struct UForceModule_JumpLandSlow_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float JumpSlowIntensity; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FExplicitFloatCurve IntensityByFallDistance; // 0x178(0x88)
	float LandSlowDuration; // 0x200(0x04)

	void CalculateJumpIntensity(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.CalculateJumpIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	float GetAttributeModifier(enum class EForceModuleAttribute Type, float Time); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.GetAttributeModifier // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool TickForceModule(float DeltaTime); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Initialize(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_ForceModule_JumpLandSlow(int32_t EntryPoint); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.ExecuteUbergraph_ForceModule_JumpLandSlow // (Final|UbergraphFunction) // @ game+0x3520f50
};

