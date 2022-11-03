// BlueprintGeneratedClass GroundObjectMarker.GroundObjectMarker_C
// Size: 0x60c (Inherited: 0x530)
struct AGroundObjectMarker_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x538(0x08)
	struct USphereComponent* CalloutCollider; // 0x540(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x548(0x08)
	struct USimpleMinimapComponent_C* SimpleMinimapComponent; // 0x550(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x558(0x08)
	struct UWidgetComponent* Widget; // 0x560(0x08)
	struct UActorMinimapDisplayComponentDeprecated* ActorMinimapDisplay; // 0x568(0x08)
	struct UParticleSystemComponent* Icon; // 0x570(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x578(0x08)
	struct UTexture* IconImage; // 0x580(0x08)
	struct FLinearColor IconColor; // 0x588(0x10)
	bool ShowOwnerName; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float NewVar_1; // 0x59c(0x04)
	float EffectStartTime; // 0x5a0(0x04)
	float MinimapPulseTime; // 0x5a4(0x04)
	struct UCurveFloat* minimapDeadIconPulseCurve ; // 0x5a8(0x08)
	struct FString PlayerName; // 0x5b0(0x10)
	struct FText CharacterName; // 0x5c0(0x18)
	struct UCurveFloat* TextSizeCurve; // 0x5d8(0x08)
	struct UCurveFloat* OffsetCurve; // 0x5e0(0x08)
	struct UCurveFloat* IconSizeCurve; // 0x5e8(0x08)
	struct UTextBlock* SubjectTextObject; // 0x5f0(0x08)
	struct UTextBlock* RegionTextObject; // 0x5f8(0x08)
	struct UTextBlock* DistanceTextObject; // 0x600(0x08)
	int32_t CurrentShownDistance; // 0x608(0x04)

	void MakeChatMessage(struct AEquippableGroundPickup_C* EquippableGroundPickup[, struct FText& ChatText); // Function GroundObjectMarker.GroundObjectMarker_C.MakeChatMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetTextObjects(); // Function GroundObjectMarker.GroundObjectMarker_C.GetTextObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UserConstructionScript(); // Function GroundObjectMarker.GroundObjectMarker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function GroundObjectMarker.GroundObjectMarker_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function GroundObjectMarker.GroundObjectMarker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Got UI Data(struct UCharacterHandle* CharacterHandle); // Function GroundObjectMarker.GroundObjectMarker_C.Got UI Data // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_GroundObjectMarker(int32_t EntryPoint); // Function GroundObjectMarker.GroundObjectMarker_C.ExecuteUbergraph_GroundObjectMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

