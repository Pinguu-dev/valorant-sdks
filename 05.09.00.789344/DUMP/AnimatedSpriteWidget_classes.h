// WidgetBlueprintGeneratedClass AnimatedSpriteWidget.AnimatedSpriteWidget_C
// Size: 0x3b8 (Inherited: 0x2c8)
struct UAnimatedSpriteWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USizeBox* AlternateSizer; // 0x2d0(0x08)
	struct UImage* FrameImage; // 0x2d8(0x08)
	float FramesPerSecond; // 0x2e0(0x04)
	bool Looping; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FTimerHandle LoopUpdateHandle; // 0x2e8(0x08)
	struct UPaperFlipbook* CurrentAnimation; // 0x2f0(0x08)
	struct TMap<struct FString, struct UPaperFlipbook*> AnimationStates; // 0x2f8(0x50)
	float CurrentTime; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UPaperSprite* CurentSprite; // 0x350(0x08)
	struct FMulticastInlineDelegate FinishedAnimation; // 0x358(0x10)
	struct FMulticastInlineDelegate FinishedLoop; // 0x368(0x10)
	struct FLinearColor ColorTint; // 0x378(0x10)
	enum class ESlateVisibility OverallVisible; // 0x388(0x01)
	bool IsPaused; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FString CurrentState; // 0x390(0x10)
	struct UPaperSprite* sptrimerlktre; // 0x3a0(0x08)
	struct FVector2D SizeOverride; // 0x3a8(0x08)
	bool SizeToFlipbook; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t FlibookSampleFrame; // 0x3b4(0x04)

	void AddNewAnimationState(struct FString StateName, struct UPaperFlipbook* flipbook); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.AddNewAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ChangeSize(struct FVector2D Size, bool SizeToFlipbook, int32_t FlipbookSampleFram); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ChangeVisibility(enum class ESlateVisibility OverallVisible); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ResetToDefault(bool PlayAnimation, bool Looping); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ResetToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetDefaultAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.SetDefaultAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayAnimationState(struct FString StateName, bool Loop, bool& Success); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PlayAnimationState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ChangeColor(struct FLinearColor ColorTint); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeColor // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopCurrentAnimation(bool PlayAnimation, bool Loop); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.StopCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PauseCurrentAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PauseCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ResumeCurrentAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ResumeCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Loop(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayCurrentAnimation(bool Looping); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PlayCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_AnimatedSpriteWidget(int32_t EntryPoint); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ExecuteUbergraph_AnimatedSpriteWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void FinishedLoop__DelegateSignature(struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.FinishedLoop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void FinishedAnimation__DelegateSignature(struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.FinishedAnimation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

