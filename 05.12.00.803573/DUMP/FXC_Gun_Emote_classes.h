// BlueprintGeneratedClass FXC_Gun_Emote.FXC_Gun_Emote_C
// Size: 0x572 (Inherited: 0x530)
struct AFXC_Gun_Emote_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* ; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* ; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct AAresEquippable* Equippable; // 0x550(0x08)
	struct UScriptStateComponent* ; // 0x558(0x08)
	struct UWeapon_Skin_Base_C* ; // 0x560(0x08)
	struct UMelee_Skin_Base_C* ; // 0x568(0x08)
	bool ; // 0x570(0x01)
	bool ; // 0x571(0x01)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Gun_Emote.FXC_Gun_Emote_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

