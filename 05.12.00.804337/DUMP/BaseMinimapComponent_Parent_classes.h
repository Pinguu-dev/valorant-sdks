// BlueprintGeneratedClass BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C
// Size: 0x663 (Inherited: 0x500)
struct UBaseMinimapComponent_Parent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	bool ; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	struct FVector2D Size; // 0x50c(0x08)
	struct FLinearColor ColorAndOpacity; // 0x514(0x10)
	struct FLinearColor ; // 0x524(0x10)
	char pad_534[0x4]; // 0x534(0x04)
	struct FSlateBrush ; // 0x538(0x90)
	struct FSlateBrush ; // 0x5c8(0x90)
	struct UVisibilityComponent* ; // 0x658(0x08)
	bool ; // 0x660(0x01)
	bool ; // 0x661(0x01)
	bool ; // 0x662(0x01)

	void (bool& IsValid); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FSlateBrush ); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector2D Alignment); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresMinimapLayer MinimapLayer); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct FLinearColor (); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	struct FSlateBrush (); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (enum class EAresMinimapSizeSpace SizeSpace); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void UpdateVisibility(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FSlateBrush ); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector2D Size); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor ColorAndOpacity); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C._1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AActor* ActorThatExitedTeamSight); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Active); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

