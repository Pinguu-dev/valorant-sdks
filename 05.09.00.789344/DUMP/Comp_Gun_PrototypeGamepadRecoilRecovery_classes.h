// BlueprintGeneratedClass Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C
// Size: 0x130 (Inherited: 0xe8)
struct UComp_Gun_PrototypeGamepadRecoilRecovery_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	enum class GunFiringState GunState; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float PreviousStabilityIndex; // 0xf4(0x04)
	struct UStabilityVisualizationComponent* ActiveVisualizationComponent; // 0xf8(0x08)
	struct UStabilityComponent* ActiveStabilityComponent; // 0x100(0x08)
	float PreviousPitchRecoil; // 0x108(0x04)
	float PreviousYawRecoil; // 0x10c(0x04)
	float ShootingStartPitch; // 0x110(0x04)
	float RecoilCompensationPercentage; // 0x114(0x04)
	struct AGun_C* OwnerGun; // 0x118(0x08)
	float RemainingRecoveryAmount; // 0x120(0x04)
	enum class GunFiringState PreviousGunState; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float MaximumADSRecoveryPercentage; // 0x128(0x04)
	float PreviousControlPitch; // 0x12c(0x04)

	void UpdateEventBindings(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.UpdateEventBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool ShouldEnableTick(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ShouldEnableTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TickWeaponShooting(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.TickWeaponShooting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	float ShiftPitchToZeroAtFeet(float Pitch); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ShiftPitchToZeroAtFeet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void UpdateTickEnabled(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.UpdateTickEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	float ApplyRecoilRecoveryToDegrees(float UnmodifiedDegrees, float PreviousTickRecoil, float CurrentTickRecoil); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ApplyRecoilRecoveryToDegrees // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void TrackRecoilCompensationOnStateChange(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.TrackRecoilCompensationOnStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TickRecoilRecovery(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.TickRecoilRecovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TickGunState(bool& DidStateChange); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.TickGunState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnItemEquippedChanged_Event_1(); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.OnItemEquippedChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthItemOnSetOwner_Event_1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.AuthItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnGameFeatureFloatConfigChanged_NotifyBlueprint_Event_1(enum class EGameFeatureFloatConfigName GameFeatureFloatConfigName, float ConfigValue); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.OnGameFeatureFloatConfigChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_Gun_PrototypeGamepadRecoilRecovery(int32_t EntryPoint); // Function Comp_Gun_PrototypeGamepadRecoilRecovery.Comp_Gun_PrototypeGamepadRecoilRecovery_C.ExecuteUbergraph_Comp_Gun_PrototypeGamepadRecoilRecovery // (Final|UbergraphFunction) // @ game+0x32f73d0
};

