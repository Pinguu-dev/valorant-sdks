// BlueprintGeneratedClass FXC_Ascender_OnRope.FXC_Ascender_OnRope_C
// Size: 0x5dd (Inherited: 0x530)
struct AFXC_Ascender_OnRope_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x538(0x08)
	struct UStaticMeshComponent* ZipLine_Attachment_VFX; // 0x540(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct ABP_RopeAscender_C* Ascender; // 0x558(0x08)
	struct FVector DesiredOffset; // 0x560(0x0c)
	struct FVector ; // 0x56c(0x0c)
	struct FVector ; // 0x578(0x0c)
	char pad_584[0x4]; // 0x584(0x04)
	struct UMaterialInstanceDynamic* ; // 0x588(0x08)
	struct UMaterial* ; // 0x590(0x08)
	struct UMaterialInterface* ; // 0x598(0x08)
	bool ; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct UStaticMeshComponent* ; // 0x5a8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x5b0(0x08)
	float StartTime; // 0x5b8(0x04)
	float ; // 0x5bc(0x04)
	float ; // 0x5c0(0x04)
	struct FVector ; // 0x5c4(0x0c)
	struct FName ; // 0x5d0(0x0c)
	bool ; // 0x5dc(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

