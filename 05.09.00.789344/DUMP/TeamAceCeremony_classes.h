// BlueprintGeneratedClass TeamAceCeremony.TeamAceCeremony_C
// Size: 0x400 (Inherited: 0x3f0)
struct ATeamAceCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBaseTeamComponent* TeamAcingTeam; // 0x3f8(0x08)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function TeamAceCeremony.TeamAceCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function TeamAceCeremony.TeamAceCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UserConstructionScript_1(); // Function TeamAceCeremony.TeamAceCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function TeamAceCeremony.TeamAceCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_TeamAceCeremony(int32_t EntryPoint); // Function TeamAceCeremony.TeamAceCeremony_C.ExecuteUbergraph_TeamAceCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

