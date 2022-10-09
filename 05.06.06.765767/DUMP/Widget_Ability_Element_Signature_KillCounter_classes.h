// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C
// Size: 0x3f4 (Inherited: 0x360)
struct UWidget_Ability_Element_Signature_KillCounter_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* SignatureCharge; // 0x368(0x08)
	struct UWidgetAnimation* Equipped; // 0x370(0x08)
	struct UWidgetAnimation* Ready; // 0x378(0x08)
	struct UWidgetAnimation* Normal; // 0x380(0x08)
	struct USignatureKillHUDElement_C* SignatureElement1; // 0x388(0x08)
	struct USignatureKillHUDElement_C* SignatureElement2; // 0x390(0x08)
	struct USignatureKillHUDElement_C* SignatureElement3; // 0x398(0x08)
	struct USignatureKillHUDElement_C* SignatureElement4; // 0x3a0(0x08)
	struct FLinearColor EquippedTextColor; // 0x3a8(0x10)
	struct FLinearColor UnEquippedTextColor; // 0x3b8(0x10)
	struct FLinearColor disabledIconColor; // 0x3c8(0x10)
	struct UImage* BackgroundImage_1; // 0x3d8(0x08)
	struct TArray<struct USignatureKillHUDElement_C*> SignatureChargeArray; // 0x3e0(0x10)
	int32_t SignatureChargeAmount; // 0x3f0(0x04)
};

