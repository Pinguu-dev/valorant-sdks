// BlueprintGeneratedClass Comp_Actor_InWorldUsable.Comp_Actor_InWorldUsable_C
// Size: 0x18b (Inherited: 0xe8)
struct UComp_Actor_InWorldUsable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AShooterCharacter* CurrentLocalShooterCharacter; // 0xf0(0x08)
	struct UUserWidget* InWorldWidgetClass; // 0xf8(0x08)
	struct FTransform RelativeOffsetTransform; // 0x100(0x30)
	struct UWidgetComponent_InWorldUsable_C* WidgetComponent; // 0x130(0x08)
	struct UUserWidget* Widget; // 0x138(0x08)
	struct TArray<struct UAresOutlineComponent*> CurrentlyOutlinedComponents; // 0x140(0x10)
	struct FMulticastInlineDelegate SelectedOnLocalClient; // 0x150(0x10)
	struct FMulticastInlineDelegate DeselectedOnLocalClient; // 0x160(0x10)
	bool ShowUsableTime; // 0x170(0x01)
	bool ShowThirds; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	struct FVector WorldLocationOffset; // 0x174(0x0c)
	struct USceneComponent* PivotComponent; // 0x180(0x08)
	bool ShowProgressBar; // 0x188(0x01)
	bool ShowOwnerName; // 0x189(0x01)
	bool ShowCannotUseText; // 0x18a(0x01)
};

