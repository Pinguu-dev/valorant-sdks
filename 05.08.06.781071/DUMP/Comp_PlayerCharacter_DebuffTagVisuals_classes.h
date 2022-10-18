// BlueprintGeneratedClass Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C
// Size: 0x230 (Inherited: 0xe8)
struct UComp_PlayerCharacter_DebuffTagVisuals_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> BuffTagAndFXC; // 0xf0(0x50)
	struct TMap<struct FGameplayTag, struct FEffectID> TagsAndEffectIDs; // 0x140(0x50)
	struct TMap<struct FGameplayTag, struct FName> BuffTagAndParameterName; // 0x190(0x50)
	struct UStaticMeshComponent* FrameMesh; // 0x1e0(0x08)
	struct UStaticMesh* FrameMeshTemplate; // 0x1e8(0x08)
	struct UMaterialInterface* FrameMaterial; // 0x1f0(0x08)
	struct TArray<struct FGameplayTag> FadingGameplayTags; // 0x1f8(0x10)
	struct UCurveFloat* FadeFloatCurve; // 0x208(0x08)
	struct TArray<struct FGameplayTag> ActiveParameterTags; // 0x210(0x10)
	struct UAresAbilitySystemComponent* OwnerAbilitySystem; // 0x220(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0x228(0x08)

	void UpdateVisibility(); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AttemptToStopTick(); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.AttemptToStopTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetFrameDynamicMaterialValue(struct FName ParamName, float ParamValue); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.SetFrameDynamicMaterialValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetFrameMesh(struct UStaticMeshComponent*& FrameMesh); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.GetFrameMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HandleTagUpdate(struct FGameplayTag GameplayTag, bool Active); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.HandleTagUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void GameplayTagAdded(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.GameplayTagAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void HandlePerspectiveChanged(struct AShooterCharacter* Character); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.HandlePerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_PlayerCharacter_DebuffTagVisuals(int32_t EntryPoint); // Function Comp_PlayerCharacter_DebuffTagVisuals.Comp_PlayerCharacter_DebuffTagVisuals_C.ExecuteUbergraph_Comp_PlayerCharacter_DebuffTagVisuals // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

