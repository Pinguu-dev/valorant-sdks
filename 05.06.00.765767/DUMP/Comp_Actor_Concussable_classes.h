// BlueprintGeneratedClass Comp_Actor_Concussable.Comp_Actor_Concussable_C
// Size: 0x12c (Inherited: 0xf0)
struct UComp_Actor_Concussable_C : UBaseConcussComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct FStruct_ConcussRequest> ActiveConcussArray; // 0xf8(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x108(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x110(0x08)
	bool IsBuffActive; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ConcussLevel; // 0x11c(0x04)
	bool OwnerBegunPlay; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float PostConcussAssistDuration; // 0x124(0x04)
	float PostConcussAssistDurationV2; // 0x128(0x04)
};

