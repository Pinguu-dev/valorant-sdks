// BlueprintGeneratedClass PumpShotgun.PumpShotgun_C
// Size: 0x1268 (Inherited: 0x122c)
struct APumpShotgun_C : AGun_C {
	char pad_122C[0x4]; // 0x122c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1230(0x08)
	struct UReusableHitScanProjectileComponent* ReusableHitScanProjectile; // 0x1238(0x08)
	struct UStabilityComponent* StabilityPreBurst; // 0x1240(0x08)
	struct UFiringStateComponent* FiringStateAirBurst; // 0x1248(0x08)
	struct UStabilityComponent* StabilityAirBurst; // 0x1250(0x08)
	struct UFiringStateComponent* FiringStateReference; // 0x1258(0x08)
	struct AEffectContainer* FXC Air Burst; // 0x1260(0x08)

	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function PumpShotgun.PumpShotgun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x33231a0
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTime); // Function PumpShotgun.PumpShotgun_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function PumpShotgun.PumpShotgun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x33231a0
	void Custom_OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function PumpShotgun.PumpShotgun_C.Custom_OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function PumpShotgun.PumpShotgun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void Round Begin Custom(int32_t RoundNumberBeginning); // Function PumpShotgun.PumpShotgun_C.Round Begin Custom // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_PumpShotgun(int32_t EntryPoint); // Function PumpShotgun.PumpShotgun_C.ExecuteUbergraph_PumpShotgun // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

