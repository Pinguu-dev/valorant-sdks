// BlueprintGeneratedClass AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C
// Size: 0x188 (Inherited: 0x178)
struct UAudBaseGameModeVOComponent_C : UBaseVOComponent_C {
	struct TArray<int32_t> ; // 0x178(0x10)

	void (struct FString , struct UAkAudioEvent*& AkEvent); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct FString>& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FString , struct UAkAudioEvent*& AkEvent); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct FString>& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* , struct UAkAudioEvent* , enum class VOPriorityEnum Priority, float QueueTimeout); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	bool (struct AShooterCharacter* Character); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct AShooterCharacter* , struct AShooterCharacter* , struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* , struct AShooterCharacter* , bool , bool , struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	int32_t (struct AShooterCharacter* Character); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct UObject* Viewer, bool& IsAlive); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_Kill(struct AShooterCharacter* , struct AShooterCharacter* , bool , bool , struct UDamageResponse* DamageResponse, struct UDamageType* DamageType); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_Char_Kill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UObject* Viewer, struct AShooterCharacter*& SelectedCharacter, struct UAudBasePawnVOComponent_C*& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UBaseTeamComponent*& Team); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct UBaseTeamComponent* , struct UBaseTeamComponent*& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (int32_t , struct FAkSwitch& , bool& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct TArray<struct FAresRoundResult>& RoundResults, struct FAkSwitch& , bool& , struct TArray<struct FAresRoundResult>& Results); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct AShooterCharacter* , struct UAudBasePawnVOComponent_C*& , struct TArray<struct FAkSwitch>& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void OnAuth_VOGameState(struct UBaseTeamComponent* Team, struct TArray<struct FAkSwitch>& , bool& ); // Function AudBaseGameModeVOComponent.AudBaseGameModeVOComponent_C.OnAuth_VOGameState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

