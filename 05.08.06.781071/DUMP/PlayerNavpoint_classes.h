// WidgetBlueprintGeneratedClass PlayerNavpoint.PlayerNavpoint_C
// Size: 0x3d0 (Inherited: 0x2d8)
struct UPlayerNavpoint_C : UNavPointWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* talking Animation; // 0x2e0(0x08)
	struct UWidgetAnimation* takingDamageAnimation; // 0x2e8(0x08)
	struct UImage* allyIndicatorImage; // 0x2f0(0x08)
	struct UBaseVoiceActivationWidget_C* BaseVoiceActivationWidget; // 0x2f8(0x08)
	struct UImage* healthBarFill; // 0x300(0x08)
	struct UImage* Image_3; // 0x308(0x08)
	struct UImage* lowHealthIndicator; // 0x310(0x08)
	struct UImage* voiceActivityImage; // 0x318(0x08)
	struct UMaterial* Base Fill Material; // 0x320(0x08)
	struct UMaterialInstanceDynamic* healthBarMaterial; // 0x328(0x08)
	struct TMap<struct FString, struct UTexture*> roleIconsMap; // 0x330(0x50)
	struct TMap<struct FString, struct UTexture*> roleIconsMapNEW; // 0x380(0x50)

	void Construct(); // Function PlayerNavpoint.PlayerNavpoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void GotRoleData(struct UCharacterHandle* CharacterHandle); // Function PlayerNavpoint.PlayerNavpoint_C.GotRoleData // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void RoundPlayStarting(int32_t InRoundNumberBeginning); // Function PlayerNavpoint.PlayerNavpoint_C.RoundPlayStarting // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void NewRound(int32_t RoundNumberBeginning); // Function PlayerNavpoint.PlayerNavpoint_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_PlayerNavpoint(int32_t EntryPoint); // Function PlayerNavpoint.PlayerNavpoint_C.ExecuteUbergraph_PlayerNavpoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

