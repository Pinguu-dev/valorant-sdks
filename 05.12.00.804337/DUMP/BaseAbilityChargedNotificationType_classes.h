// BlueprintGeneratedClass BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C
// Size: 0x90 (Inherited: 0x70)
struct UBaseAbilityChargedNotificationType_C : UBaseGameplayNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	struct AAbility_Base_C* Ability; // 0x78(0x08)
	struct FMulticastInlineDelegate ; // 0x80(0x10)

	void (struct AShooterCharacter* Character); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* InHUDModel); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void HandleSpawnedCharacterChanged(struct AShooterCharacter* Character); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.HandleSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C. // (Final|UbergraphFunction) // @ game+0x3322a90
	void (struct AAbility_Base_C* Ability); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

