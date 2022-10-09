// BlueprintGeneratedClass AceCeremony.AceCeremony_C
// Size: 0x400 (Inherited: 0x3f0)
struct AAceCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct AShooterPlayerState* AcePlayer; // 0x3f8(0x08)

	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function AceCeremony.AceCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UserConstructionScript_1(); // Function AceCeremony.AceCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function AceCeremony.AceCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function AceCeremony.AceCeremony_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function AceCeremony.AceCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_AceCeremony(int32_t EntryPoint); // Function AceCeremony.AceCeremony_C.ExecuteUbergraph_AceCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

