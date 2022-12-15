// BlueprintGeneratedClass LightMachineGun.LightMachineGun_C
// Size: 0x1374 (Inherited: 0x1360)
struct ALightMachineGun_C : AGun_Zoomable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360(0x08)
	struct FActiveGameplayEffectHandle BuffReference; // 0x1368(0x08)
	int32_t ShotCount; // 0x1370(0x04)

	void BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function LightMachineGun.LightMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x33231a0
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function LightMachineGun.LightMachineGun_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void AuthOnUnEquipped(); // Function LightMachineGun.LightMachineGun_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature(struct UFiringStateComponent* FiringState); // Function LightMachineGun.LightMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature // (BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_LightMachineGun(int32_t EntryPoint); // Function LightMachineGun.LightMachineGun_C.ExecuteUbergraph_LightMachineGun // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

