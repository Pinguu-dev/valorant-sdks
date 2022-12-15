// BlueprintGeneratedClass FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C
// Size: 0x596 (Inherited: 0x550)
struct AFXC_Gun_WhileEquipped_1P_Base_C : AFXC_Equippable_WhileEquipped_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	float Timeline_0_Alpha_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x558(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x560(0x08)
	struct UParticleSystem* SmokeEffect; // 0x568(0x08)
	struct UParticleSystemComponent* ParticleEffect; // 0x570(0x08)
	bool CurrentlyFiring; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float Stability Threshold; // 0x57c(0x04)
	float StopTimestamp; // 0x580(0x04)
	float StopDelay; // 0x584(0x04)
	struct FName AttachPoint; // 0x588(0x0c)
	bool Attach To VFX_Camera; // 0x594(0x01)
	enum class Variant_Color_Enum Variant Color; // 0x595(0x01)

	void Override Variant Color(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Override Variant Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Timeline_0__FinishedFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x33231a0
	void Timeline_0__UpdateFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveTick(float DeltaSeconds); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void StartFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void TickFiringEffect(float DeltaTime, struct AAresEquippable* Equippable); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.TickFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void FadeInEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.FadeInEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ResetEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base(int32_t EntryPoint); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

