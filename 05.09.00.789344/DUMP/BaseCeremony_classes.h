// BlueprintGeneratedClass BaseCeremony.BaseCeremony_C
// Size: 0x3f0 (Inherited: 0x3d0)
struct ABaseCeremony_C : AAresCeremony {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	enum class CeremonyIdentifier CeremonyIdentifier; // 0x3d8(0x01)
	bool bShouldDisplayCeremony; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FMulticastInlineDelegate OnShouldDisplayCeremony; // 0x3e0(0x10)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function BaseCeremony.BaseCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function BaseCeremony.BaseCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRep_bShouldDisplayCeremony(); // Function BaseCeremony.BaseCeremony_C.OnRep_bShouldDisplayCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function BaseCeremony.BaseCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function BaseCeremony.BaseCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BaseCeremony(int32_t EntryPoint); // Function BaseCeremony.BaseCeremony_C.ExecuteUbergraph_BaseCeremony // (Final|UbergraphFunction) // @ game+0x32f73d0
	void OnShouldDisplayCeremony__DelegateSignature(struct AAresCeremony* ChosenCeremony); // Function BaseCeremony.BaseCeremony_C.OnShouldDisplayCeremony__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

