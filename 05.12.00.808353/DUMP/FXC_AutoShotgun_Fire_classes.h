// BlueprintGeneratedClass FXC_AutoShotgun_Fire.FXC_AutoShotgun_Fire_C
// Size: 0x590 (Inherited: 0x580)
struct AFXC_AutoShotgun_Fire_C : AFXC_Gun_Fire_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UComp_FXC_Gun_Firing_VFX_C* Comp_FXC_Gun_Firing_VFX1; // 0x588(0x08)

	void ReceiveBeginPlay(); // Function FXC_AutoShotgun_Fire.FXC_AutoShotgun_Fire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_AutoShotgun_Fire.FXC_AutoShotgun_Fire_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_AutoShotgun_Fire(int32_t EntryPoint); // Function FXC_AutoShotgun_Fire.FXC_AutoShotgun_Fire_C.ExecuteUbergraph_FXC_AutoShotgun_Fire // (Final|UbergraphFunction) // @ game+0x33231a0
};

