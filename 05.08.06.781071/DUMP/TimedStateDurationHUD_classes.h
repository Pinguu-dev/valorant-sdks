// WidgetBlueprintGeneratedClass TimedStateDurationHUD.TimedStateDurationHUD_C
// Size: 0x388 (Inherited: 0x2d8)
struct UTimedStateDurationHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2e0(0x08)
	struct UTextBlock* Subtitle; // 0x2e8(0x08)
	struct UHorizontalBox* SubTitleContainer; // 0x2f0(0x08)
	struct UUniversalChargeBar_C* UniversalChargeBar; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x300(0x08)
	struct UTimedStateComponent* TimedState; // 0x308(0x08)
	struct FText TitleText; // 0x310(0x18)
	bool CanEndEarly; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FText Subtext; // 0x330(0x18)
	bool HideWhenUnequipped; // 0x348(0x01)
	bool FillBar; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct FMulticastInlineDelegate ReadyForRemovalTimedState; // 0x350(0x10)
	bool Ready; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float StartTimeStamp; // 0x364(0x04)
	bool AllowThirdPerson; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FWidgetTransform TouchOffset; // 0x36c(0x1c)

	void SetUniveralChargeBarFillColor(struct FLinearColor InColor); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.SetUniveralChargeBarFillColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AdjustLayoutForDevice(struct FWidgetTransform InTransform); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.AdjustLayoutForDevice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	enum class ESlateVisibility GetVisibility_1(); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	enum class ESlateVisibility GetEndEarlyVisibility(); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.GetEndEarlyVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetUp(struct UTimedStateComponent* State, struct FText Title, bool ShowSubText, struct FText Subtext, bool HideWhenUnequipped, struct FWidgetTransform TransformOffset, bool FillBar, float StartTimeOffset, bool AllowThirdPerson); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.SetUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnCinemtaticModeChanged(); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_TimedStateDurationHUD(int32_t EntryPoint); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.ExecuteUbergraph_TimedStateDurationHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void ReadyForRemovalTimedState__DelegateSignature(); // Function TimedStateDurationHUD.TimedStateDurationHUD_C.ReadyForRemovalTimedState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

