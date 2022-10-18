// WidgetBlueprintGeneratedClass Ceremony_Generic_Default.Ceremony_Generic_Default_C
// Size: 0x3f0 (Inherited: 0x2ce)
struct UCeremony_Generic_Default_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2d8(0x08)
	struct UImage* BottomGlitch; // 0x2e0(0x08)
	struct UImage* BottomLine; // 0x2e8(0x08)
	struct UCeremony_RoundOutcome_Default_C* Ceremony_RoundOutcome_Default; // 0x2f0(0x08)
	struct UImage* CeremonyIcon; // 0x2f8(0x08)
	struct UCanvasPanel* CharacterThumb_Canvas; // 0x300(0x08)
	struct UImage* CharacterThumbMask; // 0x308(0x08)
	struct UImage* EndCapBL; // 0x310(0x08)
	struct UImage* EndCapBR; // 0x318(0x08)
	struct UImage* EndCapTL; // 0x320(0x08)
	struct UImage* EndCapTR; // 0x328(0x08)
	struct UImage* glitchtexture; // 0x330(0x08)
	struct UImage* Image_55; // 0x338(0x08)
	struct UImage* Image_109; // 0x340(0x08)
	struct UTextBlock* PlayerName; // 0x348(0x08)
	struct UTextBlock* PrimaryText; // 0x350(0x08)
	struct UTextBlock* TeamInfo; // 0x358(0x08)
	struct UImage* Texture; // 0x360(0x08)
	struct UCanvasPanel* Tier0_Canvas; // 0x368(0x08)
	struct UCanvasPanel* Tier1_Canvas; // 0x370(0x08)
	struct UImage* TopGlitch; // 0x378(0x08)
	struct UImage* TopLine; // 0x380(0x08)
	struct UImage* WhiteBGBase; // 0x388(0x08)
	struct UTextBlock* WipeText; // 0x390(0x08)
	struct FText Event Text; // 0x398(0x18)
	struct AShooterPlayerState* PlayerState; // 0x3b0(0x08)
	struct UBaseTeamComponent* TeamInfoEnum; // 0x3b8(0x08)
	struct FText Sub Event Text; // 0x3c0(0x18)
	bool PlayerTeamWon; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	int32_t CurrentRoundNumber; // 0x3dc(0x04)
	enum class EAresRoundOutcome RoundOutcome; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32_t Tier; // 0x3e4(0x04)
	struct UTexture* InCeremonyIcon; // 0x3e8(0x08)

	struct FSlateBrush Get_CharacterThumbMask_Brush_1(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.Get_CharacterThumbMask_Brush_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetCharacterThumb(struct AShooterPlayerState* Player State); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.GetCharacterThumb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetTier(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.GetTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void Construct(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnAnimatingIn(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAnimatingOut(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayOutroAnim(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.PlayOutroAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Ceremony_Generic_Default(int32_t EntryPoint); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.ExecuteUbergraph_Ceremony_Generic_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

