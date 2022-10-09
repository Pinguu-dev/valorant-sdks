// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C
// Size: 0x152 (Inherited: 0xf8)
struct UComp_FXC_PlayAnimation_Equippable_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAnimMontage* 1P_Animation; // 0x100(0x08)
	struct UAnimMontage* 3P_Animation; // 0x108(0x08)
	struct UAnimMontage* 1P_Cosmetic_Animation; // 0x110(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float 1P_PlayRate; // 0x11c(0x04)
	float 3P_PlayRate; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct AShooterCharacter* OwningShooterCharacter; // 0x128(0x08)
	struct AAresEquippable* OwningEquippable; // 0x130(0x08)
	float TimeModifier; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FStruct_PlayingMontage> ActiveMontages; // 0x140(0x10)
	bool bManualStart; // 0x150(0x01)
	bool DestroyEffectIfEquippableUnequipped; // 0x151(0x01)
};

