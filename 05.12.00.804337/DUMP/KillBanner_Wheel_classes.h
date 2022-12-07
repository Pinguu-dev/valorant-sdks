// WidgetBlueprintGeneratedClass KillBanner_Wheel.
// Size: 0x3c4 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ; // 0x2d0(0x08)
	struct U* AnimatedMaterialWidget; // 0x2d8(0x08)
	struct UImage* Ring; // 0x2e0(0x08)
	struct UOverlay* ; // 0x2e8(0x08)
	int32_t ; // 0x2f0(0x04)
	float ; // 0x2f4(0x04)
	struct FKillBannerStruct KillBannerData; // 0x2f8(0xb0)
	float ; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct U*> Slices; // 0x3b0(0x10)
	int32_t ; // 0x3c0(0x04)

	void (int32_t ); // Function KillBanner_Wheel.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FKillBannerStruct KillBannerData, int32_t ); // Function KillBanner_Wheel.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t ); // Function KillBanner_Wheel.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t Kills, int32_t ); // Function KillBanner_Wheel.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Wheel..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function KillBanner_Wheel..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Wheel..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function KillBanner_Wheel.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function KillBanner_Wheel.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

