// WidgetBlueprintGeneratedClass Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C
// Size: 0x394 (Inherited: 0x358)
struct UWidget_Ability_Element_RechargeBar_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBorder* Border_167; // 0x360(0x08)
	struct UProgressBar* ChargeBar; // 0x368(0x08)
	struct UImage* FullyChargedImage; // 0x370(0x08)
	struct FTimerHandle ChargeTimerHandle; // 0x378(0x08)
	float TotalChargeTime; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FTimerHandle ChargeBarUpdateTimer; // 0x388(0x08)
	float ChargeBarUpdateFrequency; // 0x390(0x04)
};

