// BlueprintGeneratedClass CameraShake_Global_Concussed.CameraShake_Global_Concussed_C
// Size: 0x1c0 (Inherited: 0x190)
struct UCameraShake_Global_Concussed_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	struct UComp_Actor_Concussable_C* ConcussableComponent; // 0x198(0x08)
	float BaseYawAmplitude; // 0x1a0(0x04)
	float BaseRollAmplitude; // 0x1a4(0x04)
	float BasePitchAmplitude; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct AShooterCharacter* ShooterCharacter; // 0x1b0(0x08)
	float CurrentYawOffset; // 0x1b8(0x04)
	float YawFrequency; // 0x1bc(0x04)

	float GetCurrentConcussLevel(); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.GetCurrentConcussLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetScopeAdjustmentMultiplier(float& Multiplier); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.GetScopeAdjustmentMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceivePlayShake(float Scale); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_CameraShake_Global_Concussed(int32_t EntryPoint); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.ExecuteUbergraph_CameraShake_Global_Concussed // (Final|UbergraphFunction) // @ game+0x3511190
};

