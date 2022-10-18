// BlueprintGeneratedClass BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C
// Size: 0x663 (Inherited: 0x500)
struct UBaseMinimapComponent_Parent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	bool Parameters Changed; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	struct FVector2D Size; // 0x50c(0x08)
	struct FLinearColor ColorAndOpacity; // 0x514(0x10)
	struct FLinearColor EnemyColorAndOpacity; // 0x524(0x10)
	char pad_534[0x4]; // 0x534(0x04)
	struct FSlateBrush IconBrush; // 0x538(0x90)
	struct FSlateBrush EnemyIcon; // 0x5c8(0x90)
	struct UVisibilityComponent* VisibilityComp; // 0x658(0x08)
	bool ActiveOnMinimap; // 0x660(0x01)
	bool StartActive; // 0x661(0x01)
	bool UseTeamColorAndBrush; // 0x662(0x01)

	void IsOwnerTeamValid(bool& IsValid); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.IsOwnerTeamValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void PushLegacySize(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.PushLegacySize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateTeamParameters(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateTeamParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateEnemyBrush(struct FSlateBrush EnemyIcon); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateEnemyBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateAlignment(struct FVector2D Alignment); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateLayer(enum class EAresMinimapLayer MinimapLayer); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateLayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	struct FLinearColor GetColor(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.GetColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	struct FSlateBrush GetBrush(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.GetBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateSizeSpace(enum class EAresMinimapSizeSpace SizeSpace); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateSizeSpace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldBeVisible(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateVisibility(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateBrush(struct FSlateBrush IconBrush); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateSize(struct FVector2D Size); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateColor(struct FLinearColor ColorAndOpacity); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnOwnerEnteredTeamSight_Event_1(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnOwnerEnteredTeamSight_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnOwnerExitedTeamSight_Event_1(struct AActor* ActorThatExitedTeamSight); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnOwnerExitedTeamSight_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTeamChanged_Event_1(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetActiveOnMinimap(bool Active); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.SetActiveOnMinimap // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseMinimapComponent_Parent(int32_t EntryPoint); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ExecuteUbergraph_BaseMinimapComponent_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

