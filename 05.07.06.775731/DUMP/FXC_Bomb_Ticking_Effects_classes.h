// BlueprintGeneratedClass FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C
// Size: 0x5b0 (Inherited: 0x530)
struct AFXC_Bomb_Ticking_Effects_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic6; // 0x538(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic5; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic4; // 0x548(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic3; // 0x550(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic2; // 0x558(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic1; // 0x560(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x568(0x08)
	float VFX_Start_01; // 0x570(0x04)
	float VFX_Start_02; // 0x574(0x04)
	float VFX_Start_03; // 0x578(0x04)
	float VFX_Start_04; // 0x57c(0x04)
	float VFX_Charge_Finish; // 0x580(0x04)
	float VFX_Bomb_TurnOn; // 0x584(0x04)
	float VFX_Start_GroundTear; // 0x588(0x04)
	float Explosion Delay; // 0x58c(0x04)
	struct FTimerHandle Blow up timer; // 0x590(0x08)
	float Windup; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FTimerHandle WindUp Timer; // 0x5a0(0x08)
	float RandomTimeVarMIN; // 0x5a8(0x04)
	float RandomTimeVarMAX; // 0x5ac(0x04)

	void TimeRandomizer(float Time to Modify, float& Final Time); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.TimeRandomizer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void Slpode(); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.Slpode // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void WindupBurst(); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.WindupBurst // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FXC_Bomb_Ticking_Effects(int32_t EntryPoint); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.ExecuteUbergraph_FXC_Bomb_Ticking_Effects // (Final|UbergraphFunction) // @ game+0x3511190
};

