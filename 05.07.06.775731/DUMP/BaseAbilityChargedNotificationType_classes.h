// BlueprintGeneratedClass BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C
// Size: 0x90 (Inherited: 0x70)
struct UBaseAbilityChargedNotificationType_C : UBaseGameplayNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	struct AAbility_Base_C* Ability; // 0x78(0x08)
	struct FMulticastInlineDelegate OnAbilityChanged; // 0x80(0x10)

	void SetupAbilityBindings(struct AShooterCharacter* Character); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.SetupAbilityBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UnbindEvents(); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.UnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetHUDModel(struct UCoordinatedHUDModel* InHUDModel); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleSpawnedCharacterChanged(struct AShooterCharacter* Character); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.HandleSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleAbilityCharged(); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.HandleAbilityCharged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseAbilityChargedNotificationType(int32_t EntryPoint); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.ExecuteUbergraph_BaseAbilityChargedNotificationType // (Final|UbergraphFunction) // @ game+0x3511190
	void OnAbilityChanged__DelegateSignature(struct AAbility_Base_C* Ability); // Function BaseAbilityChargedNotificationType.BaseAbilityChargedNotificationType_C.OnAbilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

