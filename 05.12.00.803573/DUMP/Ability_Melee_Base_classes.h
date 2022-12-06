// BlueprintGeneratedClass Ability_Melee_Base.Ability_Melee_Base_C
// Size: 0x1161 (Inherited: 0xff1)
struct AAbility_Melee_Base_C : AAbility_Base_C {
	char pad_FF1[0x7]; // 0xff1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff8(0x08)
	struct USkeletalMeshComponent* ; // 0x1000(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1008(0x08)
	struct UEquipStateComponent* ; // 0x1010(0x08)
	struct UTimedStateComponent* ; // 0x1018(0x08)
	struct UMeleeAttackStateComponent* ; // 0x1020(0x08)
	struct UAnimTriggeredStateComponent* ; // 0x1028(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1030(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1038(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1040(0x08)
	struct UTimedStateComponent* ; // 0x1048(0x08)
	struct UMeleeAttackStateComponent* ; // 0x1050(0x08)
	struct UAnimTriggeredStateComponent* ; // 0x1058(0x08)
	struct UMeleeAttackStateComponent* ; // 0x1060(0x08)
	struct UAnimTriggeredStateComponent* ; // 0x1068(0x08)
	struct UTimedStateComponent* ; // 0x1070(0x08)
	struct UAnimTriggeredStateComponent* ; // 0x1078(0x08)
	struct UTimedStateComponent* ; // 0x1080(0x08)
	struct UMeleeAttackStateComponent* ; // 0x1088(0x08)
	struct UTimedStateComponent* ; // 0x1090(0x08)
	struct UEquipStateComponent* EquipState; // 0x1098(0x08)
	struct UMeleeAttackStateComponent* ; // 0x10a0(0x08)
	struct UAnimTriggeredStateComponent* ; // 0x10a8(0x08)
	struct URespondToEventStateComponent* ; // 0x10b0(0x08)
	float ; // 0x10b8(0x04)
	float ; // 0x10bc(0x04)
	float ; // 0x10c0(0x04)
	char pad_10C4[0x4]; // 0x10c4(0x04)
	struct AEffectContainer* Inspect; // 0x10c8(0x08)
	float ; // 0x10d0(0x04)
	float ; // 0x10d4(0x04)
	struct FEffectID ; // 0x10d8(0x20)
	int32_t ; // 0x10f8(0x04)
	char pad_10FC[0x4]; // 0x10fc(0x04)
	struct AEffectContainer* EquippedEffect; // 0x1100(0x08)
	struct FEffectData EffectData; // 0x1108(0x58)
	bool ; // 0x1160(0x01)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Ability_Melee_Base.Ability_Melee_Base_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Ability_Melee_Base.Ability_Melee_Base_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ClientItemEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ClientItemUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Ability_Melee_Base.Ability_Melee_Base_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void CancelInspect(); // Function Ability_Melee_Base.Ability_Melee_Base_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void AuthOnUnEquipped(); // Function Ability_Melee_Base.Ability_Melee_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Ability_Melee_Base.Ability_Melee_Base_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintEvent) // @ game+0x3322a60
	void (); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Ability_Melee_Base.Ability_Melee_Base_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

