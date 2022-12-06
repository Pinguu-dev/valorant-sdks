// WidgetBlueprintGeneratedClass KillBanner_Base.
// Size: 0x488 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UTextBlock* ; // 0x2e8(0x08)
	struct UTextBlock* ; // 0x2f0(0x08)
	struct UTextBlock* ; // 0x2f8(0x08)
	struct UTextBlock* ; // 0x300(0x08)
	struct UTextBlock* ; // 0x308(0x08)
	struct UVerticalBox* ; // 0x310(0x08)
	struct UTextBlock* ; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct U* FrameMaterial; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UOverlay* ; // 0x338(0x08)
	struct U* HeadShot_Base; // 0x340(0x08)
	struct UOverlay* ; // 0x348(0x08)
	struct U* HeadShotParticles; // 0x350(0x08)
	struct UImage* ; // 0x358(0x08)
	struct U* ; // 0x360(0x08)
	struct U* KillBanner_FX; // 0x368(0x08)
	struct U* KillBanner_Wheel; // 0x370(0x08)
	struct UOverlay* ; // 0x378(0x08)
	struct UImage* shadow; // 0x380(0x08)
	struct U* ; // 0x388(0x08)
	struct U* ; // 0x390(0x08)
	int32_t ; // 0x398(0x04)
	bool IsHeadshot; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	int32_t ; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FKillBannerStruct KillBannerData; // 0x3a8(0xb0)
	struct U* ; // 0x458(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x460(0x10)
	bool IsPreview; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TArray<struct FAresAssist> ; // 0x478(0x10)

	void _5(); // Function KillBanner_Base.._5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _4(); // Function KillBanner_Base.._4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _3(); // Function KillBanner_Base.._3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _2(); // Function KillBanner_Base.._2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function KillBanner_Base.._1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FAresAssist Assist, struct FText& ); // Function KillBanner_Base.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool , int32_t ); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FKillBannerStruct EquippableSkinUIData, int32_t , int32_t , bool , bool , struct TArray<struct FAresAssist>& ); // Function KillBanner_Base.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnInitialized(); // Function KillBanner_Base..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Base..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function KillBanner_Base..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (float Delay, bool , int32_t ); // Function KillBanner_Base.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Base..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function KillBanner_Base.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function KillBanner_Base.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

