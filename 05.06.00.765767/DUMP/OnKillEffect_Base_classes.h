// BlueprintGeneratedClass OnKillEffect_Base.OnKillEffect_Base_C
// Size: 0x178 (Inherited: 0xe8)
struct UOnKillEffect_Base_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UParticleSystem* KillEffect; // 0xf0(0x08)
	bool ShouldDoTimeDilation; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct AEffectContainer* Victim FXC; // 0x100(0x08)
	float DestroyCorpseTime; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct AShooterCharacter* Victim; // 0x110(0x08)
	bool CancelMovement; // 0x118(0x01)
	bool BombPlanted & VictimIsDefender; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct AEffectContainer* VictimFXC_Planted; // 0x120(0x08)
	struct TMap<struct AShooterCharacter*, struct FTimerHandle> DestroyCorpseTimers; // 0x128(0x50)
};

