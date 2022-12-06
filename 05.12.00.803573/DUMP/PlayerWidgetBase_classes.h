// WidgetBlueprintGeneratedClass PlayerWidgetBase.
// Size: 0x46b (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USizeBox* ; // 0x2d0(0x08)
	struct UProgressBar* ; // 0x2d8(0x08)
	struct USizeBox* ; // 0x2e0(0x08)
	struct UProgressBar* ; // 0x2e8(0x08)
	struct USizeBox* ; // 0x2f0(0x08)
	struct UProgressBar* ; // 0x2f8(0x08)
	struct USizeBox* ; // 0x300(0x08)
	struct UProgressBar* ; // 0x308(0x08)
	struct USizeBox* Armor; // 0x310(0x08)
	struct USizeBox* ; // 0x318(0x08)
	struct USizeBox* ; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	struct UImage* Image_139; // 0x330(0x08)
	struct UImage* Image_901; // 0x338(0x08)
	struct UImage* Image_1018; // 0x340(0x08)
	struct UImage* Image_1127; // 0x348(0x08)
	struct UImage* Image_1145; // 0x350(0x08)
	struct UTextBlock* ; // 0x358(0x08)
	struct UTextBlock* PlayerName; // 0x360(0x08)
	struct UImage* ; // 0x368(0x08)
	struct USizeBox* Primary; // 0x370(0x08)
	struct UImage* ; // 0x378(0x08)
	struct USizeBox* ; // 0x380(0x08)
	struct UImage* ; // 0x388(0x08)
	struct UImage* ; // 0x390(0x08)
	struct AShooterPlayerState* PlayerState; // 0x398(0x08)
	struct AAresItem* NewVar_1; // 0x3a0(0x08)
	struct FSlateColor ; // 0x3a8(0x28)
	struct FSlateColor ; // 0x3d0(0x28)
	bool ; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FMulticastInlineDelegate ; // 0x400(0x10)
	struct UCharacterUIData* UIData; // 0x410(0x08)
	struct FMulticastInlineDelegate ; // 0x418(0x10)
	struct FMulticastInlineDelegate Update; // 0x428(0x10)
	float ; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FSlateColor ; // 0x440(0x28)
	bool ; // 0x468(0x01)
	bool ; // 0x469(0x01)
	bool ; // 0x46a(0x01)

	void UpdateVisibility(); // Function PlayerWidgetBase..UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UProgressBar* , struct AAresItem* item, struct UCharacterUIData* CharacterUIData, struct AShooterCharacter* Character, int32_t CurrentCharges, int32_t MaxCharges, bool , bool , bool ); // Function PlayerWidgetBase.. // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UImage* , struct AAresItem* item, bool , struct UCharacterUIData* CharacterUIData, struct AShooterCharacter* Character); // Function PlayerWidgetBase.. // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UCharacterUIData* CharacterUIData); // Function PlayerWidgetBase.. // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function PlayerWidgetBase..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterPlayerState* ShooterPlayerState, struct AShooterCharacter* ShooterCharacter); // Function PlayerWidgetBase.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UCharacterHandle* CharacterHandle); // Function PlayerWidgetBase.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerWidgetBase.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Release(); // Function PlayerWidgetBase..Release // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PhaseChange(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function PlayerWidgetBase..PhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerWidgetBase..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function PlayerWidgetBase.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function PlayerWidgetBase.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function PlayerWidgetBase..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function PlayerWidgetBase.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function PlayerWidgetBase.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerWidgetBase.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerWidgetBase.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

