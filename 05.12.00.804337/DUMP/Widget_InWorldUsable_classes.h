// WidgetBlueprintGeneratedClass Widget_InWorldUsable.
// Size: 0x440 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct U* AnnotatedProgressBar; // 0x2e0(0x08)
	struct UImage* BG; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2f0(0x08)
	struct U* GamepadInputPromptSwitcher; // 0x2f8(0x08)
	struct UBorder* ; // 0x300(0x08)
	struct UImage* Image_117; // 0x308(0x08)
	struct UImage* Image_119; // 0x310(0x08)
	struct UImage* Image_120; // 0x318(0x08)
	struct UImage* Image_121; // 0x320(0x08)
	struct UImage* Image_122; // 0x328(0x08)
	struct UImage* Image_123; // 0x330(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x338(0x08)
	struct UTextBlock* ; // 0x340(0x08)
	struct UHorizontalBox* ; // 0x348(0x08)
	struct UOverlay* Overlay_1; // 0x350(0x08)
	struct UTextBlock* ; // 0x358(0x08)
	struct UTextBlock* _2; // 0x360(0x08)
	struct UTextBlock* ; // 0x368(0x08)
	struct UHorizontalBox* ; // 0x370(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x378(0x10)
	struct FText ; // 0x388(0x18)
	struct FText ; // 0x3a0(0x18)
	struct AActor* ; // 0x3b8(0x08)
	struct FEffectID ; // 0x3c0(0x20)
	struct TArray<struct UPrimitiveComponent*> OutlinedPrimitiveComponents; // 0x3e0(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x3f0(0x08)
	bool ; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct USceneComponent* PivotComponent; // 0x400(0x08)
	bool ShowCannotUseText; // 0x408(0x01)
	bool ShowProgressBar; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UCurveFloat* ; // 0x410(0x08)
	struct UCurveFloat* ; // 0x418(0x08)
	struct FText ; // 0x420(0x18)
	struct UGamepadInputIconBase* ; // 0x438(0x08)

	void (); // Function Widget_InWorldUsable.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool NewUsability); // Function Widget_InWorldUsable.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Widget_InWorldUsable.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Widget_InWorldUsable.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function Widget_InWorldUsable.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool bValue); // Function Widget_InWorldUsable.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdateRotation(); // Function Widget_InWorldUsable..UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _1(float CurrentUseTime, float TotalUseTime); // Function Widget_InWorldUsable.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable..UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function Widget_InWorldUsable..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable..UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UUsableComponent* UsableComponent); // Function Widget_InWorldUsable.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void CinematicModeUpdated(); // Function Widget_InWorldUsable..CinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnInitialized(); // Function Widget_InWorldUsable..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function Widget_InWorldUsable..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable..SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FName& Setting); // Function Widget_InWorldUsable.. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Widget_InWorldUsable.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void NewEventDispatcher_0__DelegateSignature(); // Function Widget_InWorldUsable..NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

