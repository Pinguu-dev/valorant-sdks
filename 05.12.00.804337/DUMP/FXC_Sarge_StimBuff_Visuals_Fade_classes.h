// BlueprintGeneratedClass FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C
// Size: 0x588 (Inherited: 0x530)
struct AFXC_Sarge_StimBuff_Visuals_Fade_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* ; // 0x538(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	float ; // 0x550(0x04)
	float ; // 0x554(0x04)
	enum class ETimelineDirection ; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UTimelineComponent* ; // 0x560(0x08)
	float ; // 0x568(0x04)
	float ; // 0x56c(0x04)
	enum class ETimelineDirection ; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UTimelineComponent* ; // 0x578(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x580(0x08)

	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

