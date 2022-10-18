// BlueprintGeneratedClass GlobalAudioManagerBP.GlobalAudioManagerBP_C
// Size: 0x140 (Inherited: 0xc0)
struct UGlobalAudioManagerBP_C : UGlobalAudioManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool TEMP_HasBoundPartyStuff; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAkInitBank* InitBank; // 0xd0(0x08)
	bool IsApplicationActive; // 0xd8(0x01)
	bool IsInPregame; // 0xd9(0x01)
	bool IsPregameObserver; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
	struct FString NewVar_1; // 0xe0(0x10)
	struct TMap<struct FString, struct UAkAudioEvent*> MapIntroStingers; // 0xf0(0x50)

	void UpdateMenuAudio(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdateMenuAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetMainMenuNavigationMusic(enum class EAresMainMenuTopNavigationState State, struct FMenuMusic& NewParam); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.GetMainMenuNavigationMusic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdatePregameMusic(struct UPregameViewModel* PregameViewModel); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdatePregameMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PartySizeChanged(struct UPartyPlayerModel* Player); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.PartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BeginPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginPregame // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BeginMainMenu(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginMainMenu // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnLockInChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnLockInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BeginTransitionToInGame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginTransitionToInGame // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BeginInGame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginInGame // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BeginInitialization(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginInitialization // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnWinningTeam(struct UBaseTeamComponent* WinningTeam); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnWinningTeam // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateMenuMusic(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdateMenuMusic // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnMatchFound(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnMatchFound // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BeginTransitionToPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginTransitionToPregame // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnMatchmakingChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void EndPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.EndPregame // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnApplicationActivationStateChange(bool bActive); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnApplicationActivationStateChange // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void HandleCurrentMenuMusicChanged(struct FMenuMusic& NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.HandleCurrentMenuMusicChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnIsObserverChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnIsObserverChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnEnableHRTFSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnEnableHRTFSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HandleNavStateChange(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.HandleNavStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_GlobalAudioManagerBP(int32_t EntryPoint); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.ExecuteUbergraph_GlobalAudioManagerBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

