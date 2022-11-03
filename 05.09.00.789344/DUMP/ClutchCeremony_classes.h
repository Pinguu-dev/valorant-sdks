// BlueprintGeneratedClass ClutchCeremony.ClutchCeremony_C
// Size: 0x408 (Inherited: 0x3f0)
struct AClutchCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	float MinTimeForOneVsMany; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct AShooterPlayerState* ClutchPlayer; // 0x400(0x08)

	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function ClutchCeremony.ClutchCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function ClutchCeremony.ClutchCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UserConstructionScript_1(); // Function ClutchCeremony.ClutchCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function ClutchCeremony.ClutchCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ClutchCeremony(int32_t EntryPoint); // Function ClutchCeremony.ClutchCeremony_C.ExecuteUbergraph_ClutchCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

