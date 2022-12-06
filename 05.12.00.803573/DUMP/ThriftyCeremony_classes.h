// BlueprintGeneratedClass ThriftyCeremony.ThriftyCeremony_C
// Size: 0x408 (Inherited: 0x3f0)
struct AThriftyCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBaseTeamComponent* ; // 0x3f8(0x08)
	int32_t ; // 0x400(0x04)
	int32_t ; // 0x404(0x04)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function ThriftyCeremony.ThriftyCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function ThriftyCeremony.ThriftyCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void UserConstructionScript_1(); // Function ThriftyCeremony.ThriftyCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function ThriftyCeremony.ThriftyCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function ThriftyCeremony.ThriftyCeremony_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

