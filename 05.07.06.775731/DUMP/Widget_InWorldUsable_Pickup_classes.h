// WidgetBlueprintGeneratedClass Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C
// Size: 0x360 (Inherited: 0x2d8)
struct UWidget_InWorldUsable_Pickup_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* BlackBG; // 0x2e0(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_3; // 0x300(0x08)
	struct UTextBlock* TextBlock_SkinName; // 0x308(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x310(0x10)
	struct FString Owner; // 0x320(0x10)
	struct FString Equippable; // 0x330(0x10)
	struct AEquippableGroundPickup_C* GroundEquippable; // 0x340(0x08)
	struct TArray<struct UAresOutlineComponent*> OutlinedPrimitiveComponents; // 0x348(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x358(0x08)

	void UpdateRotation(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateVisiblity(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateVisiblity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnLoaded_94362B1844C5A0BBE5A85D80236AEFCE(struct UObject* Loaded); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.OnLoaded_94362B1844C5A0BBE5A85D80236AEFCE // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void CinematicModeUpdated(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.CinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Widget_InWorldUsable_Pickup(int32_t EntryPoint); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.ExecuteUbergraph_Widget_InWorldUsable_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void NewEventDispatcher_0__DelegateSignature(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

