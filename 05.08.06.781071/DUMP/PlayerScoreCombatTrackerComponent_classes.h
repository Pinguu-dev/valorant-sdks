// BlueprintGeneratedClass PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C
// Size: 0x14c (Inherited: 0xf0)
struct UPlayerScoreCombatTrackerComponent_C : UPlayerScoreCombatTrackerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct FClassInclusionExclusionFilter CharacterFilter; // 0xf8(0x50)
	int32_t EnemiesAlive; // 0x148(0x04)

	void ScoredKill(struct FScoreKillData& ScoreKillData); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredKill // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void ScoredAssist(struct UDamageResponse* KillingBlow, struct FAresAssist& AssistInfo, struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Assister); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredAssist // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void ScoredDeath(struct UDamageResponse* Response, struct AOwnerExclusivePlayerInfo* Killer, struct TArray<struct FAresAssist>& AssistsList); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void DealtDamage(struct UDamageResponse* Response); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.DealtDamage // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceivedDamage(struct UDamageResponse* Response); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ReceivedDamage // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_PlayerScoreCombatTrackerComponent(int32_t EntryPoint); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ExecuteUbergraph_PlayerScoreCombatTrackerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

