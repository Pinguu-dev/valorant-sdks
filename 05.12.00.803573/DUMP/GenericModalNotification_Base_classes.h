// WidgetBlueprintGeneratedClass GenericModalNotification_Base.
// Size: 0x478 (Inherited: 0x2c8)
struct U : UModalNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ; // 0x2d0(0x08)
	struct FMulticastInlineDelegate ; // 0x2d8(0x10)
	struct FMulticastInlineDelegate ; // 0x2e8(0x10)
	struct FMulticastInlineDelegate ; // 0x2f8(0x10)
	struct FText ; // 0x308(0x18)
	struct FText ; // 0x320(0x18)
	struct FText ; // 0x338(0x18)
	struct FText ; // 0x350(0x18)
	struct FText TitleText; // 0x368(0x18)
	bool ; // 0x380(0x01)
	bool ; // 0x381(0x01)
	bool ; // 0x382(0x01)
	char pad_383[0x1]; // 0x383(0x01)
	struct FLinearColor ; // 0x384(0x10)
	struct FLinearColor ; // 0x394(0x10)
	struct FLinearColor ; // 0x3a4(0x10)
	struct FLinearColor ; // 0x3b4(0x10)
	struct FLinearColor ; // 0x3c4(0x10)
	struct FLinearColor ; // 0x3d4(0x10)
	struct FLinearColor ; // 0x3e4(0x10)
	enum class ButtonColors ; // 0x3f4(0x01)
	enum class ButtonColors ; // 0x3f5(0x01)
	enum class ButtonColors ; // 0x3f6(0x01)
	enum class TextColors ; // 0x3f7(0x01)
	enum class FillColors FillColor; // 0x3f8(0x01)
	enum class TextColors ; // 0x3f9(0x01)
	bool ; // 0x3fa(0x01)
	bool ; // 0x3fb(0x01)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UImage* ; // 0x400(0x08)
	struct UTextBlock* ; // 0x408(0x08)
	struct UWidgetSwitcher* ; // 0x410(0x08)
	struct UNamedSlot* ; // 0x418(0x08)
	struct UTextBlock* ; // 0x420(0x08)
	struct USpacer* ; // 0x428(0x08)
	struct U* ; // 0x430(0x08)
	struct U* ; // 0x438(0x08)
	struct USpacer* ; // 0x440(0x08)
	struct USizeBox* ; // 0x448(0x08)
	struct U* ; // 0x450(0x08)
	struct U* ; // 0x458(0x08)
	struct USizeBox* ; // 0x460(0x08)
	struct USizeBox* ; // 0x468(0x08)
	struct UVerticalBox* NewVar_1; // 0x470(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function GenericModalNotification_Base..GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	bool HandleBackRequest(); // Function GenericModalNotification_Base..HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresNotificationType NotificationType, struct UModalNotificationColors_C*& Colors); // Function GenericModalNotification_Base.. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresNotificationType NotificationType); // Function GenericModalNotification_Base.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UGenericNotification* ); // Function GenericModalNotification_Base.. // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UNotificationAction* Action, struct FText , struct FText& Text); // Function GenericModalNotification_Base.. // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UImage*& BackgroundImage, struct UTextBlock* Title, struct UWidgetSwitcher* , struct UNamedSlot* CustomBody, struct UTextBlock* Message, struct USpacer* , struct U* , struct U* , struct USpacer* , struct U* , struct U* SharedBackButton, struct USizeBox* , struct USizeBox* , struct USizeBox* ); // Function GenericModalNotification_Base.. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility (); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (enum class FillColors FillColor, struct FLinearColor& Color); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (enum class FillColors FillColor); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class TextColors ); // Function GenericModalNotification_Base.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class TextColors TextColor); // Function GenericModalNotification_Base.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class TextColors , struct FLinearColor& ); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility (); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FText Text); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class ButtonColors , struct FSharedButtonStyle& ); // Function GenericModalNotification_Base.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility (); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FText Text); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FText Text); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FText Text); // Function GenericModalNotification_Base.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FText Text); // Function GenericModalNotification_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility (); // Function GenericModalNotification_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void Launch(bool ); // Function GenericModalNotification_Base..Launch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function GenericModalNotification_Base..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Destruct(); // Function GenericModalNotification_Base..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnSynchronizeProperties(); // Function GenericModalNotification_Base..OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (BlueprintEvent) // @ game+0x3322a60
	void SetNotificationConfig(struct UGenericNotification* ModalNotification); // Function GenericModalNotification_Base..SetNotificationConfig // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function GenericModalNotification_Base.. // (Final|UbergraphFunction) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericModalNotification_Base.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

