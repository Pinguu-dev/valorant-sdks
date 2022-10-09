// WidgetBlueprintGeneratedClass KillBanner_Wheel.KillBanner_Wheel_C
// Size: 0x3c4 (Inherited: 0x2c8)
struct UKillBanner_Wheel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ReverseSpin; // 0x2d0(0x08)
	struct UAnimatedMaterialWidget_C* AnimatedMaterialWidget; // 0x2d8(0x08)
	struct UImage* Ring; // 0x2e0(0x08)
	struct UOverlay* SpinHolder; // 0x2e8(0x08)
	int32_t TotalKills; // 0x2f0(0x04)
	float GoalAngle; // 0x2f4(0x04)
	struct FKillBannerStruct KillBannerData; // 0x2f8(0xb0)
	float PreviewRadius; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct UKillBanner_PieSlice_C*> Slices; // 0x3b0(0x10)
	int32_t CurrentShownSliceIndex; // 0x3c0(0x04)

	void MockupSlices(int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.MockupSlices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void InitializeKillWheel(struct FKillBannerStruct KillBannerData, int32_t TotalSlices); // Function KillBanner_Wheel.KillBanner_Wheel_C.InitializeKillWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GenerateSlices(int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.GenerateSlices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayAnimationForKill(int32_t Kills, int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.PlayAnimationForKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Wheel.KillBanner_Wheel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function KillBanner_Wheel.KillBanner_Wheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Wheel.KillBanner_Wheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void DelayedSpin(); // Function KillBanner_Wheel.KillBanner_Wheel_C.DelayedSpin // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_KillBanner_Wheel(int32_t EntryPoint); // Function KillBanner_Wheel.KillBanner_Wheel_C.ExecuteUbergraph_KillBanner_Wheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

