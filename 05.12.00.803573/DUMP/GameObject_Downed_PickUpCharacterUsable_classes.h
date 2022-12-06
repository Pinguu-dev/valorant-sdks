// BlueprintGeneratedClass GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C
// Size: 0x452 (Inherited: 0x400)
struct AGameObject_Downed_PickUpCharacterUsable_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UUsableComponent* Usable; // 0x408(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x410(0x08)
	struct UComp_PlayerCharacter_Downed_C* ; // 0x418(0x08)
	struct FTransform ; // 0x420(0x30)
	bool ; // 0x450(0x01)
	bool ; // 0x451(0x01)

	void ReceiveBeginPlay(); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void OnRecovered(struct AShooterPlayerState* RecoveredByPlayer); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.OnRecovered // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.OnCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C. // (BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

