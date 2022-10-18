// BlueprintGeneratedClass FlawlessCeremony.FlawlessCeremony_C
// Size: 0x400 (Inherited: 0x3f0)
struct AFlawlessCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBaseTeamComponent* FlawlessTeam; // 0x3f8(0x08)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function FlawlessCeremony.FlawlessCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function FlawlessCeremony.FlawlessCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UserConstructionScript_1(); // Function FlawlessCeremony.FlawlessCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function FlawlessCeremony.FlawlessCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FlawlessCeremony(int32_t EntryPoint); // Function FlawlessCeremony.FlawlessCeremony_C.ExecuteUbergraph_FlawlessCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

