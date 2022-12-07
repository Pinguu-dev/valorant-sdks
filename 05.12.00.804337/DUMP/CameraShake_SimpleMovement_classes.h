// BlueprintGeneratedClass CameraShake_SimpleMovement.CameraShake_SimpleMovement_C
// Size: 0x228 (Inherited: 0x190)
struct UCameraShake_SimpleMovement_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	struct UShooterCharacterMovement* ShooterCharacterMovement; // 0x198(0x08)
	struct FExplicitFloatCurve ; // 0x1a0(0x88)

	float (); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceivePlayShake(float Scale); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

