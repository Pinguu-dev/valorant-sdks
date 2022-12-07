// WidgetBlueprintGeneratedClass AnimatedSpriteWidget.
// Size: 0x3b8 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USizeBox* ; // 0x2d0(0x08)
	struct UImage* ; // 0x2d8(0x08)
	float FramesPerSecond; // 0x2e0(0x04)
	bool Looping; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FTimerHandle ; // 0x2e8(0x08)
	struct UPaperFlipbook* ; // 0x2f0(0x08)
	struct TMap<struct FString, struct UPaperFlipbook*> AnimationStates; // 0x2f8(0x50)
	float CurrentTime; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UPaperSprite* ; // 0x350(0x08)
	struct FMulticastInlineDelegate ; // 0x358(0x10)
	struct FMulticastInlineDelegate ; // 0x368(0x10)
	struct FLinearColor ; // 0x378(0x10)
	enum class ESlateVisibility ; // 0x388(0x01)
	bool IsPaused; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FString CurrentState; // 0x390(0x10)
	struct UPaperSprite* ; // 0x3a0(0x08)
	struct FVector2D ; // 0x3a8(0x08)
	bool ; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t ; // 0x3b4(0x04)

	void (struct FString StateName, struct UPaperFlipbook* flipbook); // Function AnimatedSpriteWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ChangeSize(struct FVector2D Size, bool , int32_t ); // Function AnimatedSpriteWidget..ChangeSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class ESlateVisibility ); // Function AnimatedSpriteWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool PlayAnimation, bool Looping); // Function AnimatedSpriteWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnimatedSpriteWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FString StateName, bool Loop, bool& Success); // Function AnimatedSpriteWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor ); // Function AnimatedSpriteWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool PlayAnimation, bool Loop); // Function AnimatedSpriteWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnimatedSpriteWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnimatedSpriteWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Loop(); // Function AnimatedSpriteWidget..Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Looping); // Function AnimatedSpriteWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedSpriteWidget..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function AnimatedSpriteWidget..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function AnimatedSpriteWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

