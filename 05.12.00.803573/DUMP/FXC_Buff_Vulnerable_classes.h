// BlueprintGeneratedClass FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C
// Size: 0x590 (Inherited: 0x530)
struct AFXC_Buff_Vulnerable_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x538(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x540(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	float ; // 0x558(0x04)
	enum class ETimelineDirection ; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x560(0x08)
	float ; // 0x568(0x04)
	enum class ETimelineDirection ; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x570(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x578(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ; // 0x580(0x10)

	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Timeline_0__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3322a60
	void Timeline_0__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UDamageResponse* Response); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

