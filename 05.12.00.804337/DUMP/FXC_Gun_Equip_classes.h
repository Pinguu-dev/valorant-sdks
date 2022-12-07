// BlueprintGeneratedClass FXC_Gun_Equip.FXC_Gun_Equip_C
// Size: 0x570 (Inherited: 0x530)
struct AFXC_Gun_Equip_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* ; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* ; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct UWeapon_Skin_Base_C* ; // 0x550(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x558(0x08)
	enum class EEquipSpeed ; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UReadyingStateComponent* ; // 0x568(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_Gun_Equip.FXC_Gun_Equip_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

