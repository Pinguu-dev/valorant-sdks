// BlueprintGeneratedClass Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C
// Size: 0x19a (Inherited: 0xe8)
struct UComp_Gun_FlaggedZoomSettings_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> OriginalSettings; // 0xf0(0x50)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> PrototypeSettings; // 0x140(0x50)
	float ZoomTransitionDurationMultiplier; // 0x190(0x04)
	float CosmeticZoomInTriggerPercent; // 0x194(0x04)
	enum class EGameRuleBoolName GameRule; // 0x198(0x01)
	bool IsManuallyDisabled; // 0x199(0x01)

	float GetZoomTransitionDurationMultiplier(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.GetZoomTransitionDurationMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	bool IsEnabled(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.IsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void InitializeSettingsMapsForComponent(struct UZoomComponent* Component); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.InitializeSettingsMapsForComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InitializeSettingsMaps(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.InitializeSettingsMaps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateZoomTransitionSettings(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.UpdateZoomTransitionSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnGameRuleBoolChanged_NotifyBlueprint_Event_1(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.OnGameRuleBoolChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_Gun_FlaggedZoomSettings(int32_t EntryPoint); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.ExecuteUbergraph_Comp_Gun_FlaggedZoomSettings // (Final|UbergraphFunction) // @ game+0x3520f50
};

