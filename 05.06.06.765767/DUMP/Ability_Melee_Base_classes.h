// BlueprintGeneratedClass Ability_Melee_Base.Ability_Melee_Base_C
// Size: 0x1141 (Inherited: 0xfd1)
struct AAbility_Melee_Base_C : AAbility_Base_C {
	char pad_FD1[0x7]; // 0xfd1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfd8(0x08)
	struct USkeletalMeshComponent* Offhand_Mesh1P; // 0xfe0(0x08)
	struct UEffectManagerComponent* EffectManager; // 0xfe8(0x08)
	struct UEquipStateComponent* GhostEquipState; // 0xff0(0x08)
	struct UTimedStateComponent* WaitForAltAttack; // 0xff8(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState_Alt; // 0x1000(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState_Alt; // 0x1008(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1010(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1018(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1020(0x08)
	struct UTimedStateComponent* WaitForComboInput4; // 0x1028(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState4; // 0x1030(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState4; // 0x1038(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState3; // 0x1040(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState3; // 0x1048(0x08)
	struct UTimedStateComponent* WaitForComboInput3; // 0x1050(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState2; // 0x1058(0x08)
	struct UTimedStateComponent* WaitForComboInput2; // 0x1060(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState2; // 0x1068(0x08)
	struct UTimedStateComponent* WaitForComboInput1; // 0x1070(0x08)
	struct UEquipStateComponent* EquipState; // 0x1078(0x08)
	struct UMeleeAttackStateComponent* MeleeAttackState1; // 0x1080(0x08)
	struct UAnimTriggeredStateComponent* AnimTriggeredState1; // 0x1088(0x08)
	struct URespondToEventStateComponent* FirstAttackIdle; // 0x1090(0x08)
	float AttackTime1; // 0x1098(0x04)
	float AttackDuration1; // 0x109c(0x04)
	float ComboTime1; // 0x10a0(0x04)
	char pad_10A4[0x4]; // 0x10a4(0x04)
	struct AEffectContainer* Inspect; // 0x10a8(0x08)
	float AltAttackDuration; // 0x10b0(0x04)
	float AltAttackTime; // 0x10b4(0x04)
	struct FEffectID InspectAnim; // 0x10b8(0x20)
	int32_t ComboNumber; // 0x10d8(0x04)
	char pad_10DC[0x4]; // 0x10dc(0x04)
	struct AEffectContainer* EquippedEffect; // 0x10e0(0x08)
	struct FEffectData EffectData; // 0x10e8(0x58)
	bool InspectAnimationActive; // 0x1140(0x01)
};

