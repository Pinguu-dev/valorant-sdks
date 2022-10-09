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

	void UpdateChargeBarColor(bool ShouldUseChargedColor); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.UpdateChargeBarColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void SetStateCharged(bool TemporaryCharge); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.SetStateCharged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetStateEmpty(); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.SetStateEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetStateCharging(float TotalTime, float RemainingTime, bool ShouldUseChargedColor); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.SetStateCharging // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ChargeBarComplete(); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.ChargeBarComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateChargeBar(); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.UpdateChargeBar // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetWarningHilight(bool NewHilight); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.SetWarningHilight // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetStateInUse(); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.SetStateInUse // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Widget_Ability_Element_RechargeBar(int32_t EntryPoint); // Function Widget_Ability_Element_RechargeBar.Widget_Ability_Element_RechargeBar_C.ExecuteUbergraph_Widget_Ability_Element_RechargeBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

