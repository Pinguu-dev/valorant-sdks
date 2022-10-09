// WidgetBlueprintGeneratedClass LoginQueue.LoginQueue_C
// Size: 0x308 (Inherited: 0x2c8)
struct ULoginQueue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* BackgroundTint; // 0x2d0(0x08)
	struct USharedButtonMaster_C* ExitButton; // 0x2d8(0x08)
	struct USharedButtonMaster_C* LogoutButton; // 0x2e0(0x08)
	struct UTextBlock* QueueInfoText; // 0x2e8(0x08)
	struct UTextBlock* QueueWaitText; // 0x2f0(0x08)
	int32_t QueuePosition; // 0x2f8(0x04)
	int32_t SecondsLeftInQueue; // 0x2fc(0x04)
	struct FTimerHandle QueueCountdownTimer; // 0x300(0x08)
};

