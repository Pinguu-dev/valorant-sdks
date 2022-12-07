// WidgetBlueprintGeneratedClass BaseGameplayNotificationWidget.
// Size: 0x310 (Inherited: 0x2f0)
struct U : UGameplayNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)

	void StartFadeIn(); // Function BaseGameplayNotificationWidget..StartFadeIn // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StartFadeOut(); // Function BaseGameplayNotificationWidget..StartFadeOut // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseGameplayNotificationWidget..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseGameplayNotificationWidget.. // (Final|UbergraphFunction) // @ game+0x3322a90
};

