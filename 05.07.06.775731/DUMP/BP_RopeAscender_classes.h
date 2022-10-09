// BlueprintGeneratedClass BP_RopeAscender.BP_RopeAscender_C
// Size: 0x595 (Inherited: 0x3d0)
struct ABP_RopeAscender_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UStaticMeshComponent* MovementThresholdPlane; // 0x3d8(0x08)
	struct UUsableComponent* DetachUsable; // 0x3e0(0x08)
	struct USplineComponent* Spline; // 0x3e8(0x08)
	struct UUsableComponent* AttachUsable; // 0x3f0(0x08)
	struct UBoxComponent* UsableVolume; // 0x3f8(0x08)
	struct ABasePlayerCharacter_C* UsingCharacter; // 0x400(0x08)
	struct AActor* RopeVisualActor; // 0x408(0x08)
	float MinimumAttachTime; // 0x410(0x04)
	float MinimumDetachTime; // 0x414(0x04)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> PlayerDetachTime; // 0x418(0x50)
	struct FName TelemetryLabel; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> PlayerAttachTime; // 0x478(0x50)
	enum class Enum_AscenderMovementType ForwardMovementType; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float RunSpeed; // 0x4cc(0x04)
	float WalkSpeed; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TSet<struct AShooterCharacter*> AttachedPlayers; // 0x4d8(0x50)
	float LateralForce; // 0x528(0x04)
	float AccelerationForce; // 0x52c(0x04)
	float BrakingForce; // 0x530(0x04)
	float GameplayStartTime; // 0x534(0x04)
	bool CanUsePreRound; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	struct FGameplayTag DisableAscenderTag; // 0x53c(0x0c)
	struct UForceModule* ForceModuleType; // 0x548(0x08)
	struct UDebuff_RopeAscender_C* NormalDebuff; // 0x550(0x08)
	bool AutoZipline; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UDebuff_AutoZipline_C* AutoZipDebuff; // 0x560(0x08)
	struct TArray<struct ABP_BlockingVolume_C*> VolumeBlockersToIgnoreWhileOnAscender; // 0x568(0x10)
	bool RepelNearbyCharacters; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct UForceModule* RepelCharactersForceModuleType; // 0x580(0x08)
	bool PushSlowCharactersOnSameAscender; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	struct FForceModuleHandle ForceModuleHandle; // 0x58c(0x08)
	bool AllowDetachAnywhere; // 0x594(0x01)

	void HandleForceModuleRemoved(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.HandleForceModuleRemoved // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleForceModuleAdded(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.HandleForceModuleAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ShouldRepelActor(struct AActor* ActorOnRope, struct AActor* CollidingActor, bool& bShouldRepel); // Function BP_RopeAscender.BP_RopeAscender_C.ShouldRepelActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void RecordAscenderUse(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.RecordAscenderUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__DetachUsable_K2Node_ComponentBoundEvent_4_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__DetachUsable_K2Node_ComponentBoundEvent_4_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__DetachUsable_K2Node_ComponentBoundEvent_5_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__DetachUsable_K2Node_ComponentBoundEvent_5_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void OnRoundBegin_Event_1(int32_t RoundNumberBeginning); // Function BP_RopeAscender.BP_RopeAscender_C.OnRoundBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleCharacterCollision(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_RopeAscender.BP_RopeAscender_C.HandleCharacterCollision // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function BP_RopeAscender.BP_RopeAscender_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void OnTeleported_Event_1(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C.OnTeleported_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BP_RopeAscender(int32_t EntryPoint); // Function BP_RopeAscender.BP_RopeAscender_C.ExecuteUbergraph_BP_RopeAscender // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

