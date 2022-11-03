// BlueprintGeneratedClass AresHUD.AresHUD_C
// Size: 0xa90 (Inherited: 0xa60)
struct AAresHUD_C : AShooterHUD {
	struct USceneComponent* DefaultSceneRoot; // 0xa60(0x08)
	float LastHitTime; // 0xa68(0x04)
	float HitEffectFadeTimeSeconds; // 0xa6c(0x04)
	float LastHealedTime; // 0xa70(0x04)
	float HealEffectFadeTimeSeconds; // 0xa74(0x04)
	float LastHealedAmount; // 0xa78(0x04)
	char pad_A7C[0x4]; // 0xa7c(0x04)
	struct TArray<struct AShooterCharacter*> spottedCharacters; // 0xa80(0x10)
};

