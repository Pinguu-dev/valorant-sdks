// BlueprintGeneratedClass FXC_CorpseReplace.FXC_CorpseReplace_C
// Size: 0x5ac (Inherited: 0x530)
struct AFXC_CorpseReplace_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x538(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	float ; // 0x550(0x04)
	float ; // 0x554(0x04)
	enum class ETimelineDirection ; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UTimelineComponent* Timeline_1; // 0x560(0x08)
	float ; // 0x568(0x04)
	float ; // 0x56c(0x04)
	float ; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UCurveFloat* ; // 0x578(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x580(0x08)
	float ; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FTimerHandle ; // 0x590(0x08)
	float ; // 0x598(0x04)
	float ; // 0x59c(0x04)
	struct AShooterCharacter* NewVar_1; // 0x5a0(0x08)
	float ; // 0x5a8(0x04)

	void (); // Function FXC_CorpseReplace.FXC_CorpseReplace_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float AdditionalTime); // Function FXC_CorpseReplace.FXC_CorpseReplace_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Timeline_0__FinishedFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3322a60
	void Timeline_0__UpdateFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_CorpseReplace.FXC_CorpseReplace_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UCorpseExploitationComponent* ExploitationComponent); // Function FXC_CorpseReplace.FXC_CorpseReplace_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_CorpseReplace.FXC_CorpseReplace_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_CorpseReplace.FXC_CorpseReplace_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

