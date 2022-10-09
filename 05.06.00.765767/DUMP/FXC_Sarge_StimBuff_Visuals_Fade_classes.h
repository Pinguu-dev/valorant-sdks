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
};

