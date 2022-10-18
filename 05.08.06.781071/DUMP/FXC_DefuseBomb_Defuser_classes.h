// BlueprintGeneratedClass FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C
// Size: 0x570 (Inherited: 0x530)
struct AFXC_DefuseBomb_Defuser_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UStaticMeshComponent* geo_defuserScreen_01; // 0x538(0x08)
	struct UParticleSystemComponent* ps_defuse_rays_01; // 0x540(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct UMaterialInstanceDynamic* DynamicScreenMaterial; // 0x558(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x560(0x08)
	struct AAresEquippable* Equippable; // 0x568(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_DefuseBomb_Defuser(int32_t EntryPoint); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ExecuteUbergraph_FXC_DefuseBomb_Defuser // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

