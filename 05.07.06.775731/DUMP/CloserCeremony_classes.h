// BlueprintGeneratedClass CloserCeremony.CloserCeremony_C
// Size: 0x408 (Inherited: 0x3f0)
struct ACloserCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	float MinTimeForOneVsOne; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct AShooterPlayerState* CloserPlayer; // 0x400(0x08)

	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function CloserCeremony.CloserCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function CloserCeremony.CloserCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UserConstructionScript_1(); // Function CloserCeremony.CloserCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function CloserCeremony.CloserCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_CloserCeremony(int32_t EntryPoint); // Function CloserCeremony.CloserCeremony_C.ExecuteUbergraph_CloserCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

