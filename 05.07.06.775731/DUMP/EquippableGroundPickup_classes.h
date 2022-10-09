// BlueprintGeneratedClass EquippableGroundPickup.EquippableGroundPickup_C
// Size: 0x4d0 (Inherited: 0x418)
struct AEquippableGroundPickup_C : AAresOnGroundEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UBoxComponent* VisibleBounds; // 0x420(0x08)
	struct USphereComponent* CalloutCollider; // 0x428(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x430(0x08)
	struct UBoxComponent* CollisionForPings; // 0x438(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x440(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x448(0x08)
	struct UComp_Actor_InWorldUsable_Pickup_C* Comp_Actor_InWorldUsable_Pickup; // 0x450(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x458(0x08)
	struct UGameObjectMinimapDisplayComponentDeprecated* GameObjectMinimapDisplay; // 0x460(0x08)
	struct UUsableComponent* Usable1; // 0x468(0x08)
	struct UTexture* MinimapDisplayTextureToUse; // 0x470(0x08)
	float MinimapDisplayTextureU; // 0x478(0x04)
	float MinimapDisplayTextureV; // 0x47c(0x04)
	float MinimapDisplayTextureUL; // 0x480(0x04)
	float MinimapDisplayTextureVL; // 0x484(0x04)
	struct FLinearColor MinimapDisplayColor; // 0x488(0x10)
	float MinimapDisplayScale; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FText DisplayName; // 0x4a0(0x18)
	bool isBomb; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UParticleSystem* CurrentBestUsableTemplate; // 0x4c0(0x08)
	struct UParticleSystem* NotCurrentBestUsableTemplate; // 0x4c8(0x08)

	void RefreshCanUseString(); // Function EquippableGroundPickup.EquippableGroundPickup_C.RefreshCanUseString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MyEquippableChanged(); // Function EquippableGroundPickup.EquippableGroundPickup_C.MyEquippableChanged // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_122_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_122_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function EquippableGroundPickup.EquippableGroundPickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_127_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_127_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_0_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_0_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_1_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_1_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void OnCinematicModeUpdated_Event(); // Function EquippableGroundPickup.EquippableGroundPickup_C.OnCinematicModeUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_EquippableGroundPickup(int32_t EntryPoint); // Function EquippableGroundPickup.EquippableGroundPickup_C.ExecuteUbergraph_EquippableGroundPickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

