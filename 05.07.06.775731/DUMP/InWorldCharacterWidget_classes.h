// WidgetBlueprintGeneratedClass InWorldCharacterWidget.InWorldCharacterWidget_C
// Size: 0x310 (Inherited: 0x2d8)
struct UInWorldCharacterWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UBackgroundBlur* BackgroundBlur_73; // 0x2e0(0x08)
	struct UTextBlock* CharacterName; // 0x2e8(0x08)
	struct UProgressBar* HealthBar; // 0x2f0(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x2f8(0x08)
	struct AAresPlayerStateBase* OwningPlayerState; // 0x300(0x08)
	struct AShooterCharacter* FirstPersonShooterCharacter; // 0x308(0x08)

	bool IsObserver(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.IsObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetHealthPercent(float& Percent); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.GetHealthPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.UpdateHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HideHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.HideHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveOwningCharacter(struct AShooterCharacter* Shooter Character); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ReceiveOwningCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnCanSeeHealthBarsChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnCanSeeHealthBarsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ShowHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ShowHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveOwningPlayerState(struct AAresPlayerStateBase* Player State); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ReceiveOwningPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnDamageSectionDirtied(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnDamageSectionDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnCinemtaticModeChanged(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PreConstruct(bool IsDesignTime); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnSpawnedCharacterChanged(struct AShooterCharacter* New Value); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_InWorldCharacterWidget(int32_t EntryPoint); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ExecuteUbergraph_InWorldCharacterWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

