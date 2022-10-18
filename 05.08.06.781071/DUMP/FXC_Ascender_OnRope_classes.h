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
	struct FVector VisualOffset; // 0x56c(0x0c)
	struct FVector RopeOffset; // 0x578(0x0c)
	char pad_584[0x4]; // 0x584(0x04)
	struct UMaterialInstanceDynamic* BendingRopeMaterial; // 0x588(0x08)
	struct UMaterial* BaseBendingRopeMaterial; // 0x590(0x08)
	struct UMaterialInterface* OriginalRopeMaterial; // 0x598(0x08)
	bool MaterialApplied; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct UStaticMeshComponent* BendableRopeMesh; // 0x5a8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x5b0(0x08)
	float StartTime; // 0x5b8(0x04)
	float StartLerpTime; // 0x5bc(0x04)
	float StopTime; // 0x5c0(0x04)
	struct FVector AttacherOffset; // 0x5c4(0x0c)
	struct FName BeamSocket; // 0x5d0(0x0c)
	bool VerticalRope; // 0x5dc(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void FirstPersonRopeUpdate(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.FirstPersonRopeUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void InitializeRopeActor(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.InitializeRopeActor // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ResetVisuals(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ResetVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ResetEffect(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void UpdateAttacher(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateAttacher // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateParticleSystem(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateParticleSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Ascender_OnRope(int32_t EntryPoint); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ExecuteUbergraph_FXC_Ascender_OnRope // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

