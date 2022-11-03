// BlueprintGeneratedClass Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C
// Size: 0xf0 (Inherited: 0xe8)
struct UComp_GameMode_Overtime_Base_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)

	void GetNumPointsToWinGame(int32_t& NumPoints); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.GetNumPointsToWinGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetOvertimeRoundNumber(int32_t& RoundNumber); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.GetOvertimeRoundNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetOvertimePeriod(int32_t& OTPeriod); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.GetOvertimePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetNumOvertimeRoundsForScoreboard(int32_t& NumRounds); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.GetNumOvertimeRoundsForScoreboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void PlayOvertimeAnnouncementVO(); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.PlayOvertimeAnnouncementVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthSetupOvertimeRound(); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.AuthSetupOvertimeRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ShouldSwitchSides(bool& ShouldSwitchSides); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void IsInOvertime(bool& IsInOvertime); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.IsInOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void HasTeamWonOvertime(struct UBaseTeamComponent* Team, bool& HasTeamWon); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.HasTeamWonOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnStateExit_Event_1(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.OnStateExit_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_GameMode_Overtime_Base(int32_t EntryPoint); // Function Comp_GameMode_Overtime_Base.Comp_GameMode_Overtime_Base_C.ExecuteUbergraph_Comp_GameMode_Overtime_Base // (Final|UbergraphFunction) // @ game+0x32f73d0
};

