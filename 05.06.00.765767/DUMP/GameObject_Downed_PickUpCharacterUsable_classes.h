// BlueprintGeneratedClass GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C
// Size: 0x452 (Inherited: 0x400)
struct AGameObject_Downed_PickUpCharacterUsable_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UUsableComponent* Usable; // 0x408(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x410(0x08)
	struct UComp_PlayerCharacter_Downed_C* DownedComponent; // 0x418(0x08)
	struct FTransform DownedCharacterTransformOffset; // 0x420(0x30)
	bool bAttachToDownedCharacter; // 0x450(0x01)
	bool bServerCanUse; // 0x451(0x01)
};

