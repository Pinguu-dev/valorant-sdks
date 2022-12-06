// BlueprintGeneratedClass BasicArmorItem.BasicArmorItem_C
// Size: 0x461 (Inherited: 0x440)
struct ABasicArmorItem_C : AAresItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UShieldArmorCharacterHudComponent_C* ShieldArmorCharacterHudComponent; // 0x448(0x08)
	struct UAttachedDamageSectionComponent* ; // 0x450(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x458(0x08)
	enum class ERoundPersistenceBehavior ; // 0x460(0x01)

	void (); // Function BasicArmorItem.BasicArmorItem_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BasicArmorItem.BasicArmorItem_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UCharacterHudComponent*& CharacterHudComponent); // Function BasicArmorItem.BasicArmorItem_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	int32_t GetSellPrice(int32_t BasePrice); // Function BasicArmorItem.BasicArmorItem_C.GetSellPrice // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void ReceiveClientSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientSetOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BasicArmorItem.BasicArmorItem_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BasicArmorItem.BasicArmorItem_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

