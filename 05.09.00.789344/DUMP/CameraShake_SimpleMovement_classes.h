// BlueprintGeneratedClass CameraShake_SimpleMovement.CameraShake_SimpleMovement_C
// Size: 0x228 (Inherited: 0x190)
struct UCameraShake_SimpleMovement_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	struct UShooterCharacterMovement* ShooterCharacterMovement; // 0x198(0x08)
	struct FExplicitFloatCurve VelocityFrequencyCurve; // 0x1a0(0x88)

	float GetDesiredFrequency(); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.GetDesiredFrequency // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceivePlayShake(float Scale); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_CameraShake_SimpleMovement(int32_t EntryPoint); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.ExecuteUbergraph_CameraShake_SimpleMovement // (Final|UbergraphFunction) // @ game+0x32f73d0
};

