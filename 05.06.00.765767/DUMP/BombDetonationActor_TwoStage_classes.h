// BlueprintGeneratedClass BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C
// Size: 0x479 (Inherited: 0x434)
struct ABombDetonationActor_TwoStage_C : ABombDetonationActor_C {
	char pad_434[0x4]; // 0x434(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x440(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit Players; // 0x448(0x10)
	float Kill timer; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FTimerHandle Killsphere Timer; // 0x460(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit PlayersKillSphere; // 0x468(0x10)
	bool Expanding; // 0x478(0x01)
};

