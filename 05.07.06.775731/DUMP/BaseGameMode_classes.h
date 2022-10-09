// BlueprintGeneratedClass BaseGameMode.BaseGameMode_C
// Size: 0xa88 (Inherited: 0x938)
struct ABaseGameMode_C : AShooterGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x938(0x08)
	struct UComp_GameMode_KillVO_C* Comp_GameMode_KillVO; // 0x940(0x08)
	struct UGameStateGameOverComponent_C* GameStateGameOverComponent; // 0x948(0x08)
	struct UGameStateSetupComponent_C* GameStateSetupComponent; // 0x950(0x08)
	struct UGameStateIntroComponent_C* GameStateIntroComponent; // 0x958(0x08)
	struct UGameStateLoadInComponent_C* GameStateLoadInComponent; // 0x960(0x08)
	struct UBombTeamComponent* RedBombTeam; // 0x968(0x08)
	struct UBombTeamComponent* BlueBombTeam; // 0x970(0x08)
	struct UBaseGameStateComponent* GameStateAwaitingShutdown; // 0x978(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x980(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponentClass; // 0x988(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponent; // 0x990(0x08)
	struct TArray<struct AShooterPlayerState*> PlayersToSpawn; // 0x998(0x10)
	struct TArray<float> PlayerSpawnTimes; // 0x9a8(0x10)
	float RespawnDelay; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct USpawnPointPlayerSpawner* SpawnPointSpawn; // 0x9c0(0x08)
	float CorpseLifetime; // 0x9c8(0x04)
	char pad_9CC[0x4]; // 0x9cc(0x04)
	struct TArray<struct AGameObject*> Domes; // 0x9d0(0x10)
	struct TArray<struct AGameObject*> SoundBarriers; // 0x9e0(0x10)
	struct TArray<struct AGameObject*> BarrierVFX; // 0x9f0(0x10)
	struct FMulticastInlineDelegate OnLevelStreamingComplete; // 0xa00(0x10)
	struct TSet<struct AShooterPlayerState*> SuccessfullySpawnedPlayers; // 0xa10(0x50)
	enum class EMatchCompletionState MatchCompletionState; // 0xa60(0x01)
	bool IsGameEnding; // 0xa61(0x01)
	char pad_A62[0x6]; // 0xa62(0x06)
	struct UBaseTeamComponent* WinningTeam; // 0xa68(0x08)
	bool bPlayCharDeathmatchWinVO; // 0xa70(0x01)
	bool bIsNPE; // 0xa71(0x01)
	bool bAllowAbilitySharing; // 0xa72(0x01)
	char pad_A73[0x5]; // 0xa73(0x05)
	struct FMulticastInlineDelegate AuthWinRoundEvent2; // 0xa78(0x10)

	void ShouldSpawnPlayer(struct AShooterPlayerState* Player, bool& ShouldSpawn); // Function BaseGameMode.BaseGameMode_C.ShouldSpawnPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BaseGameMode.BaseGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BaseGameMode.BaseGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BaseGameMode.BaseGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
	void StopScoreboardUpdating(); // Function BaseGameMode.BaseGameMode_C.StopScoreboardUpdating // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BaseGameMode.BaseGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void FinalizeEndOfGame(); // Function BaseGameMode.BaseGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void InitiateEndOfGame(struct UBaseTeamComponent* WinningTeam, enum class EMatchCompletionState CompletionState); // Function BaseGameMode.BaseGameMode_C.InitiateEndOfGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ResetAllPlayers(); // Function BaseGameMode.BaseGameMode_C.ResetAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void EndOfMatchSlowTime(); // Function BaseGameMode.BaseGameMode_C.EndOfMatchSlowTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ForceGameOverState(); // Function BaseGameMode.BaseGameMode_C.ForceGameOverState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CleanDomes(); // Function BaseGameMode.BaseGameMode_C.CleanDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SpawnDomes(); // Function BaseGameMode.BaseGameMode_C.SpawnDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecutePlayerSpawns(bool& Finished); // Function BaseGameMode.BaseGameMode_C.ExecutePlayerSpawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetupPlayerSpawns(bool ShouldAddSpawnDelay, bool RespawnSuccessfullySpawnedPlayers); // Function BaseGameMode.BaseGameMode_C.SetupPlayerSpawns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AudSetupComponents(); // Function BaseGameMode.BaseGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void CheatAdvanceToOvertime(); // Function BaseGameMode.BaseGameMode_C.CheatAdvanceToOvertime // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CheatAdvanceToRoundStarting(); // Function BaseGameMode.BaseGameMode_C.CheatAdvanceToRoundStarting // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void DrawGameEvent(); // Function BaseGameMode.BaseGameMode_C.DrawGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void RemakeGameEvent(); // Function BaseGameMode.BaseGameMode_C.RemakeGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void WinGameEvent(struct UBaseTeamComponent* Team); // Function BaseGameMode.BaseGameMode_C.WinGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CheatWinGame(struct UBaseTeamComponent* WinningTeam); // Function BaseGameMode.BaseGameMode_C.CheatWinGame // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BaseGameMode.BaseGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseGameMode(int32_t EntryPoint); // Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode // (Final|UbergraphFunction) // @ game+0x3511190
	void AuthWinRoundEvent2__DelegateSignature(struct UBaseTeamComponent* Winning Team); // Function BaseGameMode.BaseGameMode_C.AuthWinRoundEvent2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnLevelStreamingComplete__DelegateSignature(); // Function BaseGameMode.BaseGameMode_C.OnLevelStreamingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

