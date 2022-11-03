// BlueprintGeneratedClass BasicArmorItem.BasicArmorItem_C
// Size: 0x461 (Inherited: 0x440)
struct ABasicArmorItem_C : AAresItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UShieldArmorCharacterHudComponent_C* ShieldArmorCharacterHudComponent; // 0x448(0x08)
	struct UAttachedDamageSectionComponent* AttachedDamageSection; // 0x450(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x458(0x08)
	enum class ERoundPersistenceBehavior PreBreakPersistenceBehavior; // 0x460(0x01)

	void RestorePreBreakPersistBehavior(); // Function BasicArmorItem.BasicArmorItem_C.RestorePreBreakPersistBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SavePreBreakPersistBehavior(); // Function BasicArmorItem.BasicArmorItem_C.SavePreBreakPersistBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetCharacterHudComponent(struct UCharacterHudComponent*& CharacterHudComponent); // Function BasicArmorItem.BasicArmorItem_C.GetCharacterHudComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	int32_t GetSellPrice(int32_t BasePrice); // Function BasicArmorItem.BasicArmorItem_C.GetSellPrice // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveClientSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientSetOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnArmorBreak(struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BasicArmorItem.BasicArmorItem_C.OnArmorBreak // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnSectionDamaged_Event_1(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C.AuthOnSectionDamaged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnSectionHealed_Event_1(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C.AuthOnSectionHealed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BasicArmorItem(int32_t EntryPoint); // Function BasicArmorItem.BasicArmorItem_C.ExecuteUbergraph_BasicArmorItem // (Final|UbergraphFunction) // @ game+0x32f73d0
};

