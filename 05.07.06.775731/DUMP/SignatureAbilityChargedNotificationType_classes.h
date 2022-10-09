// BlueprintGeneratedClass SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C
// Size: 0xa1 (Inherited: 0x90)
struct USignatureAbilityChargedNotificationType_C : UBaseAbilityChargedNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UEquipmentChargeComponent* ChargeComponent; // 0x98(0x08)
	bool bLastUpdateWasEmpty; // 0xa0(0x01)

	void UnbindEvents(); // Function SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C.UnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateSignatureAbility(struct AShooterCharacter* Character); // Function SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C.UpdateSignatureAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetupAbilityBindings(struct AShooterCharacter* Character); // Function SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C.SetupAbilityBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleResourceChanged(struct UResourceComponent* ResourceComponent); // Function SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C.HandleResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_SignatureAbilityChargedNotificationType(int32_t EntryPoint); // Function SignatureAbilityChargedNotificationType.SignatureAbilityChargedNotificationType_C.ExecuteUbergraph_SignatureAbilityChargedNotificationType // (Final|UbergraphFunction) // @ game+0x3511190
};

