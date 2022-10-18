// WidgetBlueprintGeneratedClass Widget_InWorldUsable.Widget_InWorldUsable_C
// Size: 0x440 (Inherited: 0x2d8)
struct UWidget_InWorldUsable_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x2e0(0x08)
	struct UImage* BG; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2f0(0x08)
	struct UGamepadInputPromptSwitcher_C* GamepadInputPromptSwitcher; // 0x2f8(0x08)
	struct UBorder* GamepadPromptBorder; // 0x300(0x08)
	struct UImage* Image_117; // 0x308(0x08)
	struct UImage* Image_119; // 0x310(0x08)
	struct UImage* Image_120; // 0x318(0x08)
	struct UImage* Image_121; // 0x320(0x08)
	struct UImage* Image_122; // 0x328(0x08)
	struct UImage* Image_123; // 0x330(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x338(0x08)
	struct UTextBlock* NotUsableText; // 0x340(0x08)
	struct UHorizontalBox* NotUsableTextBox; // 0x348(0x08)
	struct UOverlay* Overlay_1; // 0x350(0x08)
	struct UTextBlock* Text1; // 0x358(0x08)
	struct UTextBlock* Text1_2; // 0x360(0x08)
	struct UTextBlock* Text2; // 0x368(0x08)
	struct UHorizontalBox* UsableTextBox; // 0x370(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x378(0x10)
	struct FText UseText1; // 0x388(0x18)
	struct FText UseText2; // 0x3a0(0x18)
	struct AActor* UsableActor; // 0x3b8(0x08)
	struct FEffectID FXC_ID_PostProcess; // 0x3c0(0x20)
	struct TArray<struct UPrimitiveComponent*> OutlinedPrimitiveComponents; // 0x3e0(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x3f0(0x08)
	bool InUse; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct USceneComponent* PivotComponent; // 0x400(0x08)
	bool ShowCannotUseText; // 0x408(0x01)
	bool ShowProgressBar; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UCurveFloat* ScalingCurve; // 0x410(0x08)
	struct UCurveFloat* OffsetCurve; // 0x418(0x08)
	struct FText Cannot Use Text; // 0x420(0x18)
	struct UGamepadInputIconBase* GamepadKeyBTN; // 0x438(0x08)

	void AssignGamepadGlyphs(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.AssignGamepadGlyphs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetUsable(bool NewUsability); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateSize(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdatePivotRotation(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdatePivotRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetInUse(bool InUse); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetRenderDepthOnStoredComponents(bool bValue); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetRenderDepthOnStoredComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateRotation(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnCurrentUsingComponentTimeChanged_Event_1(float CurrentUseTime, float TotalUseTime); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.OnCurrentUsingComponentTimeChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnTextUpdated_Event_1(struct UUsableComponent* UsableComponent); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.OnTextUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CinematicModeUpdated(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.CinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInitialized(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnSettingUpdated(struct FName& Setting); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.OnSettingUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_InWorldUsable(int32_t EntryPoint); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.ExecuteUbergraph_Widget_InWorldUsable // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void NewEventDispatcher_0__DelegateSignature(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

