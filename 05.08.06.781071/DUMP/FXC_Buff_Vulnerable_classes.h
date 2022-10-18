// BlueprintGeneratedClass FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C
// Size: 0x590 (Inherited: 0x530)
struct AFXC_Buff_Vulnerable_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x538(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x540(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	float Timeline_1_Opacity_7FD3158E4BB4A5DC4798E1AD2A0C4F05; // 0x558(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7FD3158E4BB4A5DC4798E1AD2A0C4F05; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x560(0x08)
	float Timeline_0_Opacity_B38A8C8D45CB03B87A2CE382D1BADAAD; // 0x568(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B38A8C8D45CB03B87A2CE382D1BADAAD; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x570(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x578(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3P_Materials; // 0x580(0x10)

	void UnbindToDamageTaken(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UnbindToDamageTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BindToDamageTaken(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.BindToDamageTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Timeline_0__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3520f50
	void Timeline_0__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3520f50
	void Timeline_1__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x3520f50
	void Timeline_1__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnDamaged_Event_1(struct UDamageResponse* Response); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.OnDamaged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Buff_Vulnerable(int32_t EntryPoint); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ExecuteUbergraph_FXC_Buff_Vulnerable // (Final|UbergraphFunction) // @ game+0x3520f50
};

