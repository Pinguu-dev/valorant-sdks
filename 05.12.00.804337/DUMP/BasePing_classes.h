// BlueprintGeneratedClass BasePing.BasePing_C
// Size: 0x6b8 (Inherited: 0x530)
struct ABasePing_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x538(0x08)
	struct UStaticMeshComponent* ; // 0x540(0x08)
	struct UStaticMeshComponent* ; // 0x548(0x08)
	struct UStaticMeshComponent* ; // 0x550(0x08)
	struct UStaticMeshComponent* ; // 0x558(0x08)
	struct UWidgetComponent* ; // 0x560(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x568(0x08)
	struct USphereComponent* CalloutCollider; // 0x570(0x08)
	struct USimpleMinimapComponent_C* SimpleMinimapComponent; // 0x578(0x08)
	struct UActorVisibilityComponent* ; // 0x580(0x08)
	struct UActorMinimapDisplayComponentDeprecated* ; // 0x588(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x590(0x08)
	struct UTexture* IconImage; // 0x598(0x08)
	struct FLinearColor IconColor; // 0x5a0(0x10)
	bool ShowOwnerName; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct UTextBlock* ; // 0x5b8(0x08)
	struct UTextBlock* ; // 0x5c0(0x08)
	bool Danger; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct UTextBlock* ; // 0x5d0(0x08)
	struct UCurveFloat* ; // 0x5d8(0x08)
	struct UCurveFloat* ; // 0x5e0(0x08)
	struct UCurveFloat* TextSizeCurve; // 0x5e8(0x08)
	struct UMaterialInstanceDynamic* PingIconMaterial; // 0x5f0(0x08)
	enum class NonVerbalCommTypesEnum VOToPlay; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct FString PlayerName; // 0x600(0x10)
	struct FText CharacterName; // 0x610(0x18)
	bool ; // 0x628(0x01)
	char pad_629[0x3]; // 0x629(0x03)
	float ; // 0x62c(0x04)
	struct UMaterialInstanceDynamic* ; // 0x630(0x08)
	struct TMap<enum class NonVerbalCommTypesEnum, struct FString> ; // 0x638(0x50)
	float ; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct UCurveFloat* ; // 0x690(0x08)
	float ; // 0x698(0x04)
	int32_t ; // 0x69c(0x04)
	bool ; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UObject* ; // 0x6a8(0x08)
	struct UTextBlock* ; // 0x6b0(0x08)

	bool (struct UObject* Object); // Function BasePing.BasePing_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText& ); // Function BasePing.BasePing_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BasePing.BasePing_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UserConstructionScript(); // Function BasePing.BasePing_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UCharacterHandle* CharacterHandle); // Function BasePing.BasePing_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function BasePing.BasePing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function BasePing.BasePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BasePing.BasePing_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BasePing.BasePing_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function BasePing.BasePing_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BasePing.BasePing_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

