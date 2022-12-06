// BlueprintGeneratedClass Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C
// Size: 0x19a (Inherited: 0xe8)
struct UComp_Gun_FlaggedZoomSettings_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> ; // 0xf0(0x50)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> ; // 0x140(0x50)
	float ; // 0x190(0x04)
	float CosmeticZoomInTriggerPercent; // 0x194(0x04)
	enum class EGameRuleBoolName GameRule; // 0x198(0x01)
	bool ; // 0x199(0x01)

	float (); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	bool IsEnabled(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.IsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct UZoomComponent* Component); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnGameRuleBoolChanged_NotifyBlueprint_Event_1(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.OnGameRuleBoolChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

