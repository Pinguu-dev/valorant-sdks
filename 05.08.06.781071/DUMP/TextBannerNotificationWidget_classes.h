// WidgetBlueprintGeneratedClass TextBannerNotificationWidget.TextBannerNotificationWidget_C
// Size: 0x368 (Inherited: 0x310)
struct UTextBannerNotificationWidget_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UImage* Background; // 0x318(0x08)
	struct UTextBlock* Text; // 0x320(0x08)
	struct FText BannerText; // 0x328(0x18)
	struct FSlateColor BackgroundColor; // 0x340(0x28)

	void PreConstruct(bool IsDesignTime); // Function TextBannerNotificationWidget.TextBannerNotificationWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_TextBannerNotificationWidget(int32_t EntryPoint); // Function TextBannerNotificationWidget.TextBannerNotificationWidget_C.ExecuteUbergraph_TextBannerNotificationWidget // (Final|UbergraphFunction) // @ game+0x3520f50
};

