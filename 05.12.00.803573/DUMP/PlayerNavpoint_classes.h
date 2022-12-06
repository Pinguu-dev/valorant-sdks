// WidgetBlueprintGeneratedClass PlayerNavpoint.
// Size: 0x3d0 (Inherited: 0x2d8)
struct U : UNavPointWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UWidgetAnimation* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct U* BaseVoiceActivationWidget; // 0x2f8(0x08)
	struct UImage* ; // 0x300(0x08)
	struct UImage* Image_3; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UMaterial* ; // 0x320(0x08)
	struct UMaterialInstanceDynamic* ; // 0x328(0x08)
	struct TMap<struct FString, struct UTexture*> ; // 0x330(0x50)
	struct TMap<struct FString, struct UTexture*> ; // 0x380(0x50)

	void Construct(); // Function PlayerNavpoint..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct UCharacterHandle* CharacterHandle); // Function PlayerNavpoint.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t InRoundNumberBeginning); // Function PlayerNavpoint.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void NewRound(int32_t RoundNumberBeginning); // Function PlayerNavpoint..NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function PlayerNavpoint.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

