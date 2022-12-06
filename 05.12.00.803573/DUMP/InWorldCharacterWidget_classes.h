// WidgetBlueprintGeneratedClass InWorldCharacterWidget.
// Size: 0x310 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UBackgroundBlur* BackgroundBlur_73; // 0x2e0(0x08)
	struct UTextBlock* CharacterName; // 0x2e8(0x08)
	struct UProgressBar* HealthBar; // 0x2f0(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x2f8(0x08)
	struct AAresPlayerStateBase* OwningPlayerState; // 0x300(0x08)
	struct AShooterCharacter* FirstPersonShooterCharacter; // 0x308(0x08)

	bool IsObserver(); // Function InWorldCharacterWidget..IsObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (float& Percent); // Function InWorldCharacterWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* ); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InWorldCharacterWidget..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function InWorldCharacterWidget.. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AAresPlayerStateBase* Player State); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function InWorldCharacterWidget..OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function InWorldCharacterWidget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function InWorldCharacterWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function InWorldCharacterWidget..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnSpawnedCharacterChanged(struct AShooterCharacter* ); // Function InWorldCharacterWidget..OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function InWorldCharacterWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

