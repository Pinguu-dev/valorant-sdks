// BlueprintGeneratedClass FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C
// Size: 0x588 (Inherited: 0x530)
struct AFXC_Sarge_StimBuff_Visuals_Fade_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter_Glow; // 0x538(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	float Timeline_FadeOut_HUDErosion_65A078624958FF20AD21E49D60154043; // 0x550(0x04)
	float Timeline_FadeOut_HUDAlpha_65A078624958FF20AD21E49D60154043; // 0x554(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_65A078624958FF20AD21E49D60154043; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x560(0x08)
	float Timeline_FadeIn_HUDErosion_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x568(0x04)
	float Timeline_FadeIn_HUDAlpha_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x56c(0x04)
	enum class ETimelineDirection Timeline_FadeIn__Direction_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UTimelineComponent* Timeline_FadeIn; // 0x578(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x580(0x08)

	void Timeline_FadeIn__FinishedFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x32f73d0
	void Timeline_FadeIn__UpdateFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x32f73d0
	void Timeline_FadeOut__FinishedFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x32f73d0
	void Timeline_FadeOut__UpdateFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopFadeIn(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void StopFadeOut(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_Sarge_StimBuff_Visuals_Fade(int32_t EntryPoint); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ExecuteUbergraph_FXC_Sarge_StimBuff_Visuals_Fade // (Final|UbergraphFunction) // @ game+0x32f73d0
};

