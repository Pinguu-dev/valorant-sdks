// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	UserMessage = 26,
	MAX = 27
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.EButtonInputPriority
enum class EButtonInputPriority : uint8 {
	AfterChildren = 0,
	BeforeChildren = 1,
	Never = 2,
	EButtonInputPriority_MAX = 3
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x00)
struct FInputEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x78 (Inherited: 0x18)
struct FPointerEvent : FInputEvent {
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x00)
struct FGeometry {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x00)
struct FSlateBrush {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector2D ImageSize; // 0x08(0x08)
	struct FMargin Margin; // 0x10(0x10)
	struct FSlateColor TintColor; // 0x20(0x28)
	struct UObject* ResourceObject; // 0x48(0x08)
	struct FName ResourceName; // 0x50(0x0c)
	struct FBox2D UVRegion; // 0x5c(0x14)
	enum class ESlateBrushDrawType DrawAs; // 0x70(0x01)
	enum class ESlateBrushTileType Tiling; // 0x71(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0x72(0x01)
	enum class ESlateBrushImageType ImageType; // 0x73(0x01)
	char pad_74[0x14]; // 0x74(0x14)
	char bIsDynamicallyLoaded : 1; // 0x88(0x01)
	char bHasUObject : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x18)
struct FKeyEvent : FInputEvent {
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x48 (Inherited: 0x40)
struct FAnalogInputEvent : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x60 (Inherited: 0x00)
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	char pad_30[0x10]; // 0x30(0x10)
	struct FName TypefaceFontName; // 0x40(0x0c)
	int32_t Size; // 0x4c(0x04)
	int32_t LetterSpacing; // 0x50(0x04)
	int32_t Tracking; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x00)
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x00(0x04)
	bool bSeparateFillAlpha; // 0x04(0x01)
	bool bApplyOutlineToDropShadows; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct UObject* OutlineMaterial; // 0x08(0x08)
	struct FLinearColor OutlineColor; // 0x10(0x10)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0x838 (Inherited: 0x08)
struct FTableRowStyle : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; // 0x08(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1b8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x28)
	struct FSlateColor SelectedTextColor; // 0x540(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x568(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x5f8(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x688(0x90)
	struct FSlateBrush ActiveHighlightedBrush; // 0x718(0x90)
	struct FSlateBrush InactiveHighlightedBrush; // 0x7a8(0x90)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x440 (Inherited: 0x08)
struct FComboBoxStyle : FSlateWidgetStyle {
	struct FComboButtonStyle ComboButtonStyle; // 0x08(0x3f8)
	struct FSlateSound PressedSlateSound; // 0x400(0x20)
	struct FSlateSound SelectionChangeSlateSound; // 0x420(0x20)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x20 (Inherited: 0x00)
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3f8 (Inherited: 0x08)
struct FComboButtonStyle : FSlateWidgetStyle {
	struct FButtonStyle ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FVector2D ShadowOffset; // 0x340(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x348(0x10)
	struct FSlateBrush MenuBorderBrush; // 0x358(0x90)
	struct FMargin MenuBorderPadding; // 0x3e8(0x10)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x2a8 (Inherited: 0x08)
struct FButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush Normal; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1b8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x20)
	struct FSlateSound HoveredSlateSound; // 0x288(0x20)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x240 (Inherited: 0x08)
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x90(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x120(0x90)
	struct FSlateBrush CaretImage; // 0x1b0(0x90)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x868 (Inherited: 0x08)
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; // 0x08(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1b8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x60)
	struct FSlateColor ForegroundColor; // 0x2b8(0x28)
	struct FSlateColor BackgroundColor; // 0x2e0(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x308(0x28)
	struct FMargin HScrollBarPadding; // 0x330(0x10)
	struct FMargin VScrollBarPadding; // 0x340(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x350(0x518)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x518 (Inherited: 0x08)
struct FScrollBarStyle : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; // 0x08(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1b8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2d8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3f8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x290 (Inherited: 0x08)
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x60)
	struct FSlateColor ColorAndOpacity; // 0x68(0x28)
	struct FVector2D ShadowOffset; // 0x90(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x98(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xa8(0x28)
	struct FLinearColor HighlightColor; // 0xd0(0x10)
	struct FSlateBrush HighlightShape; // 0xe0(0x90)
	struct FSlateBrush StrikeBrush; // 0x170(0x90)
	struct FSlateBrush UnderlineBrush; // 0x200(0x90)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x310 (Inherited: 0x08)
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent {
	char pad_18[0x30]; // 0x18(0x30)
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeFont {
	struct FTypeface DefaultTypeface; // 0x00(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x00)
struct FCompositeFallbackFont {
	struct FTypeface Typeface; // 0x00(0x10)
	float ScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x30 (Inherited: 0x00)
struct FTypefaceEntry {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FFontData Font; // 0x10(0x20)
};

// ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x00)
struct FFontData {
	struct FString FontFilename; // 0x00(0x10)
	enum class EFontHinting Hinting; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t SubFaceIndex; // 0x14(0x04)
	struct UObject* FontFaceAsset; // 0x18(0x08)
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x08 (Inherited: 0x00)
struct FCaptureLostEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1178 (Inherited: 0x08)
struct FWindowStyle : FSlateWidgetStyle {
	struct FButtonStyle MinimizeButtonStyle; // 0x08(0x2a8)
	struct FButtonStyle MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct FButtonStyle RestoreButtonStyle; // 0x558(0x2a8)
	struct FButtonStyle CloseButtonStyle; // 0x800(0x2a8)
	struct FTextBlockStyle TitleTextStyle; // 0xaa8(0x290)
	struct FSlateBrush ActiveTitleBrush; // 0xd38(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xdc8(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xe58(0x90)
	struct FSlateColor BackgroundColor; // 0xee8(0x28)
	struct FSlateBrush OutlineBrush; // 0xf10(0x90)
	struct FSlateColor OutlineColor; // 0xfa0(0x28)
	struct FSlateBrush BorderBrush; // 0xfc8(0x90)
	struct FSlateBrush BackgroundBrush; // 0x1058(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0x10e8(0x90)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x128 (Inherited: 0x08)
struct FScrollBorderStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x248 (Inherited: 0x08)
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0x770 (Inherited: 0x08)
struct FDockTabStyle : FSlateWidgetStyle {
	struct FButtonStyle CloseButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush NormalBrush; // 0x2b0(0x90)
	struct FSlateBrush ActiveBrush; // 0x340(0x90)
	struct FSlateBrush ColorOverlayTabBrush; // 0x3d0(0x90)
	struct FSlateBrush ColorOverlayIconBrush; // 0x460(0x90)
	struct FSlateBrush ForegroundBrush; // 0x4f0(0x90)
	struct FSlateBrush HoveredBrush; // 0x580(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x610(0x90)
	struct FSlateBrush TabWellBrush; // 0x6a0(0x90)
	struct FMargin TabPadding; // 0x730(0x10)
	float OverlapWidth; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct FSlateColor FlashColor; // 0x748(0x28)
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xc18 (Inherited: 0x08)
struct FHeaderRowStyle : FSlateWidgetStyle {
	struct FTableColumnHeaderStyle ColumnStyle; // 0x08(0x518)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x520(0x518)
	struct FSplitterStyle ColumnSplitterStyle; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x128 (Inherited: 0x08)
struct FSplitterStyle : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x518 (Inherited: 0x08)
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	struct FSlateBrush SortPrimaryAscendingImage; // 0x08(0x90)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x98(0x90)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x128(0x90)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1b8(0x90)
	struct FSlateBrush NormalBrush; // 0x248(0x90)
	struct FSlateBrush HoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush MenuDropdownImage; // 0x368(0x90)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8(0x90)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488(0x90)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xa0 (Inherited: 0x08)
struct FInlineTextImageStyle : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16_t Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x648 (Inherited: 0x08)
struct FVolumeControlStyle : FSlateWidgetStyle {
	struct FSliderStyle SliderStyle; // 0x08(0x370)
	struct FSlateBrush HighVolumeImage; // 0x378(0x90)
	struct FSlateBrush MidVolumeImage; // 0x408(0x90)
	struct FSlateBrush LowVolumeImage; // 0x498(0x90)
	struct FSlateBrush NoVolumeImage; // 0x528(0x90)
	struct FSlateBrush MutedImage; // 0x5b8(0x90)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x370 (Inherited: 0x08)
struct FSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush HoveredBarImage; // 0x98(0x90)
	struct FSlateBrush DisabledBarImage; // 0x128(0x90)
	struct FSlateBrush NormalThumbImage; // 0x1b8(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x248(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x2d8(0x90)
	float BarThickness; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xb28 (Inherited: 0x08)
struct FSearchBoxStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextBoxStyle; // 0x08(0x868)
	struct FSlateFontInfo ActiveFontInfo; // 0x870(0x60)
	struct FSlateBrush UpArrowImage; // 0x8d0(0x90)
	struct FSlateBrush DownArrowImage; // 0x960(0x90)
	struct FSlateBrush GlassImage; // 0x9f0(0x90)
	struct FSlateBrush ClearImage; // 0xa80(0x90)
	struct FMargin ImagePadding; // 0xb10(0x10)
	bool bLeftAlignButtons; // 0xb20(0x01)
	char pad_B21[0x7]; // 0xb21(0x07)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x130 (Inherited: 0x08)
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct FSlateBrush CollapsedImage; // 0x08(0x90)
	struct FSlateBrush ExpandedImage; // 0x98(0x90)
	float RolloutAnimationSeconds; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1b8 (Inherited: 0x08)
struct FProgressBarStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xb00 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x08(0x868)
	struct FTextBlockStyle TextStyle; // 0x870(0x290)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x550 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct FButtonStyle UnderlineStyle; // 0x08(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x2b0(0x290)
	struct FMargin Padding; // 0x540(0x10)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x5e0 (Inherited: 0x08)
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xa0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1c0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2e0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x558(0x28)
	struct FSlateSound CheckedSlateSound; // 0x580(0x20)
	struct FSlateSound UncheckedSlateSound; // 0x5a0(0x20)
	struct FSlateSound HoveredSlateSound; // 0x5c0(0x20)
};

