// WidgetBlueprintGeneratedClass Announcement_Generic_Widget.Announcement_Generic_Widget_C
// Size: 0x340 (Inherited: 0x2ce)
struct UAnnouncement_Generic_Widget_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x2e0(0x08)
	struct UImage* bar_left; // 0x2e8(0x08)
	struct UImage* bar_right; // 0x2f0(0x08)
	struct UBombIcon_C* BombIcon; // 0x2f8(0x08)
	struct UImage* BrushNormal; // 0x300(0x08)
	struct UTextBlock* PrimaryText; // 0x308(0x08)
	struct UTextBlock* Sub_Text; // 0x310(0x08)
	struct AShooterCharacter* Character; // 0x318(0x08)
	struct FText Text; // 0x320(0x18)
	struct AActor* actorForLocationText; // 0x338(0x08)
};

