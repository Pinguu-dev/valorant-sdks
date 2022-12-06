// BlueprintGeneratedClass Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C
// Size: 0x18b (Inherited: 0xe8)
struct UComp_Actor_InWorldUsable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AShooterCharacter* ; // 0xf0(0x08)
	struct UUserWidget* InWorldWidgetClass; // 0xf8(0x08)
	struct FTransform RelativeOffsetTransform; // 0x100(0x30)
	struct UWidgetComponent_InWorldUsable_C* WidgetComponent; // 0x130(0x08)
	struct UUserWidget* Widget; // 0x138(0x08)
	struct TArray<struct UAresOutlineComponent*> ; // 0x140(0x10)
	struct FMulticastInlineDelegate ; // 0x150(0x10)
	struct FMulticastInlineDelegate ; // 0x160(0x10)
	bool ShowUsableTime; // 0x170(0x01)
	bool ShowThirds; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	struct FVector WorldLocationOffset; // 0x174(0x0c)
	struct USceneComponent* PivotComponent; // 0x180(0x08)
	bool ShowProgressBar; // 0x188(0x01)
	bool ShowOwnerName; // 0x189(0x01)
	bool ShowCannotUseText; // 0x18a(0x01)

	void (bool ); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool , struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetWidget(struct UUserWidget*& Widget); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (bool& IsActive); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetOutlinedComponents(struct TArray<struct UPrimitiveComponent*>& OutOutlinedComponents); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetOutlinedComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (bool , struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct USceneComponent* PivotComponent); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UInteractableUserComponent* User, bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void BindSelectionDelegates(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.BindSelectionDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Final|UbergraphFunction) // @ game+0x3322a60
	void (); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

