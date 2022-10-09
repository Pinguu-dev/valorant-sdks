// BlueprintGeneratedClass PlantedBomb.PlantedBomb_C
// Size: 0x5d8 (Inherited: 0x400)
struct APlantedBomb_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* PingCollider; // 0x408(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x410(0x08)
	struct UTeamRoleComponent* TeamRole; // 0x418(0x08)
	struct UPlantedBombMinimapComponent_C* PlantedBombMinimapComponent; // 0x420(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x428(0x08)
	struct UPlantedBombVOComponent_C* BombPlantVOComponent; // 0x430(0x08)
	struct UStaticMeshComponent* DefuseRangeIndicator; // 0x438(0x08)
	struct UCapsuleComponent* Capsule; // 0x440(0x08)
	struct URelevantFogOfWarComponent* RelevantFogOfWar; // 0x448(0x08)
	struct UCameraComponent* Camera; // 0x450(0x08)
	struct USpringArmComponent* SpringArm; // 0x458(0x08)
	struct UAresOutlineComponent* OutlineComponentSpikeMesh; // 0x460(0x08)
	struct UGameObjectMinimapDisplayComponentDeprecated* GameObjectMinimapDisplay; // 0x468(0x08)
	struct UStaticMeshComponent* SuperGrid_Plane; // 0x470(0x08)
	struct USkeletalMeshComponent* Bomb_Spike; // 0x478(0x08)
	struct UAresTextRenderComponent* AresTextRenderGhost0:00; // 0x480(0x08)
	struct UAresTextRenderComponent* AresTextRenderLeading0; // 0x488(0x08)
	struct UAresTextRenderComponent* AresTextRender1; // 0x490(0x08)
	struct USphereComponent* ExplodeInnerRadiusVisualizer; // 0x498(0x08)
	struct USphereComponent* ExplodeRadiusVisualizer; // 0x4a0(0x08)
	struct UUsableComponent* Usable; // 0x4a8(0x08)
	bool BombHasExploded; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	float BombTickSecondsNormal; // 0x4b4(0x04)
	float BombTickSecondsFast; // 0x4b8(0x04)
	float BombTickSecondsFaster; // 0x4bc(0x04)
	float BombTickSecondsFastest; // 0x4c0(0x04)
	float BombTickSecondsDetonation; // 0x4c4(0x04)
	enum class EBombTickState BombTickState; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float BombExplodeOuterRadius; // 0x4cc(0x04)
	float BombExplodeInnerRadius; // 0x4d0(0x04)
	float TimeRemainingToExplode; // 0x4d4(0x04)
	float PlantedLocalTimeStamp; // 0x4d8(0x04)
	enum class BombSiteEnum PlantedAtSite; // 0x4dc(0x01)
	bool BombHasBeenDefused; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	struct FTimerHandle BombTickSpeed; // 0x4e0(0x08)
	enum class EBombTickState ClientPreviousBombTickState; // 0x4e8(0x01)
	enum class BombDefusingState BombDefuseState; // 0x4e9(0x01)
	char pad_4EA[0x6]; // 0x4ea(0x06)
	struct AShooterCharacter* CurrentDefuser; // 0x4f0(0x08)
	struct UAresAudioComponent* EventLongBeepSound; // 0x4f8(0x08)
	float DefuseProgress; // 0x500(0x04)
	float TimeUntilRemoveBombOutline; // 0x504(0x04)
	struct UMaterialInstanceDynamic* BombCoreMI; // 0x508(0x08)
	float BombExplodeTotalTime; // 0x510(0x04)
	int32_t CurrentDefuseSection; // 0x514(0x04)
	struct AEffectContainer* FXC Bomb While Defusing; // 0x518(0x08)
	struct AEffectContainer* FXC Bomb Defused; // 0x520(0x08)
	struct FMulticastInlineDelegate OnExploded; // 0x528(0x10)
	enum class EPlantedBombState PlantedBombState; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnDefused; // 0x540(0x10)
	bool BombInitializeComplete; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct AEffectContainer* BombBeepEffect; // 0x558(0x08)
	struct FEffectID FXC Bomb Defuse; // 0x560(0x20)
	float BombTickSpeed_Float; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct AEffectContainer* BombMinimapExplosion; // 0x588(0x08)
	struct FEffectID TickingEffectID; // 0x590(0x20)
	struct TArray<struct FRotator> PossibleSpringArmPositions; // 0x5b0(0x10)
	int32_t BestSpringArmIndex; // 0x5c0(0x04)
	float BestSpringArmDistance; // 0x5c4(0x04)
	float BombBeepAttenuationRadius; // 0x5c8(0x04)
	float PredictedDefuseProgress; // 0x5cc(0x04)
	struct FTimerHandle ClientCorrectionTimer; // 0x5d0(0x08)

	void GetDefuseProgress(float& LocalDefuseProgress); // Function PlantedBomb.PlantedBomb_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
	void OnRep_BombDefuseState(); // Function PlantedBomb.PlantedBomb_C.OnRep_BombDefuseState // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayDefuseSuccessEffects(); // Function PlantedBomb.PlantedBomb_C.PlayDefuseSuccessEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StopDefuseEffects(); // Function PlantedBomb.PlantedBomb_C.StopDefuseEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetBombTickState(enum class EBombTickState TickState); // Function PlantedBomb.PlantedBomb_C.SetBombTickState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthExplode(); // Function PlantedBomb.PlantedBomb_C.AuthExplode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void InitializeBomb(); // Function PlantedBomb.PlantedBomb_C.InitializeBomb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayDefuseEffects(); // Function PlantedBomb.PlantedBomb_C.PlayDefuseEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetCurrentBombSection(struct AShooterCharacter* Character, int32_t& Section, float& ProgressCheckpoint); // Function PlantedBomb.PlantedBomb_C.GetCurrentBombSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetBombSections(int32_t& BombSections); // Function PlantedBomb.PlantedBomb_C.GetBombSections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
	void OnRep_DefuseProgress(); // Function PlantedBomb.PlantedBomb_C.OnRep_DefuseProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CanDefuse(struct AShooterCharacter* NewUserCharacter, bool& CanDefuse, bool& Interrupts); // Function PlantedBomb.PlantedBomb_C.CanDefuse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UserConstructionScript(); // Function PlantedBomb.PlantedBomb_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_116_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_116_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_119_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_119_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function PlantedBomb.PlantedBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ClientTickEffects(); // Function PlantedBomb.PlantedBomb_C.ClientTickEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_115_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_115_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ClientBombExplode(); // Function PlantedBomb.PlantedBomb_C.ClientBombExplode // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Usable_K2Node_ComponentBoundEvent_266_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_266_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function PlantedBomb.PlantedBomb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void RepDefuse(); // Function PlantedBomb.PlantedBomb_C.RepDefuse // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnDefuseBegin(struct AShooterCharacter* ShooterCharacter); // Function PlantedBomb.PlantedBomb_C.OnDefuseBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthTickEffects(); // Function PlantedBomb.PlantedBomb_C.AuthTickEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function PlantedBomb.PlantedBomb_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3511190
	void OnPlayerViewTargetChanged_Event_1(); // Function PlantedBomb.PlantedBomb_C.OnPlayerViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void EvaluateDefuseProgressDisagreement(); // Function PlantedBomb.PlantedBomb_C.EvaluateDefuseProgressDisagreement // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_PlantedBomb(int32_t EntryPoint); // Function PlantedBomb.PlantedBomb_C.ExecuteUbergraph_PlantedBomb // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void OnDefused__DelegateSignature(struct AShooterCharacter* Defuser); // Function PlantedBomb.PlantedBomb_C.OnDefused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnExploded__DelegateSignature(struct ABombDetonationActor_C* Detonation); // Function PlantedBomb.PlantedBomb_C.OnExploded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

