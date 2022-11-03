// WidgetBlueprintGeneratedClass BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C
// Size: 0x38c (Inherited: 0x360)
struct UBombPlantTimerNotificationWidget_C : UBaseTimerRingNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct FLinearColor RingColorA_Half; // 0x368(0x10)
	struct FLinearColor RingColorA_Full; // 0x378(0x10)
	float LastProgress; // 0x388(0x04)

	void UpdateRingColor(float CurrentValue, float MaxValue); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.UpdateRingColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombPlantTimerNotificationWidget(int32_t EntryPoint); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.ExecuteUbergraph_BombPlantTimerNotificationWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

