// BlueprintGeneratedClass FXC_Vector_BurstFire.FXC_Vector_BurstFire_C
// Size: 0x588 (Inherited: 0x580)
struct AFXC_Vector_BurstFire_C : AFXC_Gun_Fire_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)

	void ReceiveBeginPlay(); // Function FXC_Vector_BurstFire.FXC_Vector_BurstFire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Vector_BurstFire.FXC_Vector_BurstFire_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_Vector_BurstFire(int32_t EntryPoint); // Function FXC_Vector_BurstFire.FXC_Vector_BurstFire_C.ExecuteUbergraph_FXC_Vector_BurstFire // (Final|UbergraphFunction) // @ game+0x33231a0
};

