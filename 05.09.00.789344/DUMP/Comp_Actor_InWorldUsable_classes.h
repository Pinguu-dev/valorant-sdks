// BlueprintGeneratedClass Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C
// Size: 0x18b (Inherited: 0xe8)
struct UComp_Actor_InWorldUsable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AShooterCharacter* CurrentLocalShooterCharacter; // 0xf0(0x08)
	struct UUserWidget* InWorldWidgetClass; // 0xf8(0x08)
	struct FTransform RelativeOffsetTransform; // 0x100(0x30)
	struct UWidgetComponent_InWorldUsable_C* WidgetComponent; // 0x130(0x08)
	struct UUserWidget* Widget; // 0x138(0x08)
	struct TArray<struct UAresOutlineComponent*> CurrentlyOutlinedComponents; // 0x140(0x10)
	struct FMulticastInlineDelegate SelectedOnLocalClient; // 0x150(0x10)
	struct FMulticastInlineDelegate DeselectedOnLocalClient; // 0x160(0x10)
	bool ShowUsableTime; // 0x170(0x01)
	bool ShowThirds; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	struct FVector WorldLocationOffset; // 0x174(0x0c)
	struct USceneComponent* PivotComponent; // 0x180(0x08)
	bool ShowProgressBar; // 0x188(0x01)
	bool ShowOwnerName; // 0x189(0x01)
	bool ShowCannotUseText; // 0x18a(0x01)

	void HandleUpdatePlayerHasInteractable(bool HasInteractable); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.HandleUpdatePlayerHasInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UsabilityUpdated(bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsabilityUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TouchUsableWidgetCreation(bool L in Use, struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.TouchUsableWidgetCreation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetWidget(struct UUserWidget*& Widget); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SelectionActive(bool& IsActive); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SelectionActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ClearOutlines(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ClearOutlines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetOutlinedComponents(struct TArray<struct UPrimitiveComponent*>& OutOutlinedComponents); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.GetOutlinedComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void UsableSelected(bool InUse, struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsableSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UsableDeselected(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UsableDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void SetPivotComponent(struct USceneComponent* PivotComponent); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SetPivotComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Selected(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Unselected(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.Unselected // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UseStarted(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UseStopped(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UseCompleted(struct UInteractableUserComponent* User); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.UseCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnUsabilityUpdated_Event_1(struct UInteractableUserComponent* User, bool NewUsability); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.OnUsabilityUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BindSelectionDelegates(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.BindSelectionDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_Actor_InWorldUsable(int32_t EntryPoint); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.ExecuteUbergraph_Comp_Actor_InWorldUsable // (Final|UbergraphFunction) // @ game+0x32f73d0
	void DeselectedOnLocalClient__DelegateSignature(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.DeselectedOnLocalClient__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SelectedOnLocalClient__DelegateSignature(); // Function Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C.SelectedOnLocalClient__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

