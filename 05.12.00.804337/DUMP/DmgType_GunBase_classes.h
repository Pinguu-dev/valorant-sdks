// BlueprintGeneratedClass DmgType_GunBase.DmgType_GunBase_C
// Size: 0x158 (Inherited: 0x14f)
struct UDmgType_GunBase_C : UDmgType_Base_C {
	char pad_14F[0x1]; // 0x14f(0x01)
	struct UAkAudioEvent* ; // 0x150(0x08)

	void (struct AShooterCharacter* VictimCharacter, struct UDamageResponse* DamageResponse); // Function DmgType_GunBase.DmgType_GunBase_C. // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a90
	void (struct AActor* HitActor, struct UDamageResponse* DamageResponse, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, bool , float FalloffMultiplier); // Function DmgType_GunBase.DmgType_GunBase_C. // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a90
	void PlayHitConfirmSound(struct AShooterCharacter* FirstPersonShooterCharacter, struct AShooterCharacter* ShooterCharacterInstigator, struct AActor* HitActor, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, bool bLocalPlayerCanSeeVictim, float FalloffMultiplier, struct UDamageResponse* DamageResponse, bool bDied); // Function DmgType_GunBase.DmgType_GunBase_C.PlayHitConfirmSound // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a90
};

