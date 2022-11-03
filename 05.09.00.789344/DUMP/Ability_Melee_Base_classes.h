// BlueprintGeneratedClass Ability_Melee_Base.Ability_Melee_Base_C
// Size: 0x1161 (Inherited: 0xff1)
struct AAbility_Melee_Base_C : AAbility_Base_C {
	char pad_FF1[0x7]; // 0xff1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff8(0x08)
	struct USkeletalMeshComponent* Offhand_Mesh1P; // 0x1000(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1008(0x08)
	struct UEquipStateComponent* GhostEquipState; // 0x1010(0x08)
	struct UTimedStateComponent* WaitForAltAttack; // 0x1018(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState_Alt; // 0x1020(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState_Alt; // 0x1028(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1030(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1038(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1040(0x08)
	struct UTimedStateComponent* WaitForComboInput4; // 0x1048(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState4; // 0x1050(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState4; // 0x1058(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState3; // 0x1060(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState3; // 0x1068(0x08)
	struct UTimedStateComponent* WaitForComboInput3; // 0x1070(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState2; // 0x1078(0x08)
	struct UTimedStateComponent* WaitForComboInput2; // 0x1080(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState2; // 0x1088(0x08)
	struct UTimedStateComponent* WaitForComboInput1; // 0x1090(0x08)
	struct UEquipStateComponent* EquipState; // 0x1098(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState1; // 0x10a0(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState1; // 0x10a8(0x08)
	struct URespondToEventStateComponent* FirstAttackIdle; // 0x10b0(0x08)
	float AttackTime1; // 0x10b8(0x04)
	float AttackDuration1; // 0x10bc(0x04)
	float ComboTime1; // 0x10c0(0x04)
	char pad_10C4[0x4]; // 0x10c4(0x04)
	struct AEffectContainer* Inspect; // 0x10c8(0x08)
	float AltAttackDuration; // 0x10d0(0x04)
	float AltAttackTime; // 0x10d4(0x04)
	struct FEffectID InspectAnim; // 0x10d8(0x20)
	int32_t ComboNumber; // 0x10f8(0x04)
	char pad_10FC[0x4]; // 0x10fc(0x04)
	struct AEffectContainer* EquippedEffect; // 0x1100(0x08)
	struct FEffectData EffectData; // 0x1108(0x58)
	bool InspectAnimationActive; // 0x1160(0x01)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x32f73d0
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void InitializeCombo(); // Function Ability_Melee_Base.Ability_Melee_Base_C.InitializeCombo // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ClientItemEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ClientItemUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void CancelInspect(); // Function Ability_Melee_Base.Ability_Melee_Base_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__FirstAttackIdle_K2Node_ComponentBoundEvent_0_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__FirstAttackIdle_K2Node_ComponentBoundEvent_0_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void AuthOnUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__AnimTriggeredState2_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState2_K2Node_ComponentBoundEvent_1_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__AnimTriggeredState3_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState3_K2Node_ComponentBoundEvent_2_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__AnimTriggeredState4_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState4_K2Node_ComponentBoundEvent_3_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__AnimTriggeredState_Alt_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState_Alt_K2Node_ComponentBoundEvent_4_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__AnimTriggeredState1_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C.BndEvt__AnimTriggeredState1_K2Node_ComponentBoundEvent_5_OnStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void Event Inspect(); // Function Ability_Melee_Base.Ability_Melee_Base_C.Event Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Ability_Melee_Base(int32_t EntryPoint); // Function Ability_Melee_Base.Ability_Melee_Base_C.ExecuteUbergraph_Ability_Melee_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

