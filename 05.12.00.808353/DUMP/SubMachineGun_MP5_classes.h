// BlueprintGeneratedClass SubMachineGun_MP5.SubMachineGun_MP5_C
// Size: 0x1378 (Inherited: 0x1360)
struct ASubMachineGun_MP5_C : AGun_Zoomable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360(0x08)
	struct UComp_Gun_ZoomFiringRateModifier_C* Comp_Gun_ZoomFiringRateModifier; // 0x1368(0x08)
	struct UAnimationAsset* NewVar_1_1; // 0x1370(0x08)

	void OnNotifyEnd_ACD1A5DC44FB005BB58A9D86BE807DA7(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnNotifyEnd_ACD1A5DC44FB005BB58A9D86BE807DA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnNotifyBegin_ACD1A5DC44FB005BB58A9D86BE807DA7(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnNotifyBegin_ACD1A5DC44FB005BB58A9D86BE807DA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnInterrupted_ACD1A5DC44FB005BB58A9D86BE807DA7(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnInterrupted_ACD1A5DC44FB005BB58A9D86BE807DA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnBlendOut_ACD1A5DC44FB005BB58A9D86BE807DA7(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnBlendOut_ACD1A5DC44FB005BB58A9D86BE807DA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnCompleted_ACD1A5DC44FB005BB58A9D86BE807DA7(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnCompleted_ACD1A5DC44FB005BB58A9D86BE807DA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void ClientItemUnEquipped(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ClientItemEquipped(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_SubMachineGun_MP5(int32_t EntryPoint); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ExecuteUbergraph_SubMachineGun_MP5 // (Final|UbergraphFunction) // @ game+0x33231a0
};

