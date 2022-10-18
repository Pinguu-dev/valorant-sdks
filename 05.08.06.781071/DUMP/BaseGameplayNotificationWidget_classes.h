// WidgetBlueprintGeneratedClass BaseGameplayNotificationWidget.BaseGameplayNotificationWidget_C
// Size: 0x310 (Inherited: 0x2f0)
struct UBaseGameplayNotificationWidget_C : UGameplayNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)

	void StartFadeIn(); // Function BaseGameplayNotificationWidget.BaseGameplayNotificationWidget_C.StartFadeIn // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StartFadeOut(); // Function BaseGameplayNotificationWidget.BaseGameplayNotificationWidget_C.StartFadeOut // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseGameplayNotificationWidget.BaseGameplayNotificationWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseGameplayNotificationWidget(int32_t EntryPoint); // Function BaseGameplayNotificationWidget.BaseGameplayNotificationWidget_C.ExecuteUbergraph_BaseGameplayNotificationWidget // (Final|UbergraphFunction) // @ game+0x3520f50
};

