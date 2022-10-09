// WidgetBlueprintGeneratedClass BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C
// Size: 0x360 (Inherited: 0x310)
struct UBaseTimerRingNotificationWidget_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UImage* TimerRing; // 0x318(0x08)
	float PreviewFillScalar; // 0x320(0x04)
	struct FLinearColor RingColorA; // 0x324(0x10)
	char pad_334[0x4]; // 0x334(0x04)
	struct UMaterialInstanceDynamic* RingMaterialInstance; // 0x338(0x08)
	struct FLinearColor RingColorB; // 0x340(0x10)
	struct FLinearColor RingColorC; // 0x350(0x10)

	void SetTimerProgress(float CurrentValue, float MaxValue); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.SetTimerProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PreConstruct(bool IsDesignTime); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseTimerRingNotificationWidget(int32_t EntryPoint); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.ExecuteUbergraph_BaseTimerRingNotificationWidget // (Final|UbergraphFunction) // @ game+0x3511190
};

