// BlueprintGeneratedClass FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C
// Size: 0x5f0 (Inherited: 0x596)
struct AFXC_HMG_WhileEquipped_1P_Smoke_C : AFXC_Gun_WhileEquipped_1P_Base_C {
	char pad_596[0x2]; // 0x596(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x598(0x08)
	struct UStaticMeshComponent* BarrelHeat; // 0x5a0(0x08)
	float Barrel_Heat_Heat_Up_3E6679F64AC0459984C89B8E6120221F; // 0x5a8(0x04)
	enum class ETimelineDirection Barrel_Heat__Direction_3E6679F64AC0459984C89B8E6120221F; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)
	struct UTimelineComponent* Barrel Heat; // 0x5b0(0x08)
	struct UParticleSystemComponent* Heat; // 0x5b8(0x08)
	struct UMaterialInstanceDynamic* Barrel Heat Material; // 0x5c0(0x08)
	struct FName BarrelHeat_SocketName; // 0x5c8(0x0c)
	enum class HMG_BarrelHeat_Attachment BarrelHeat_Attachment; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct FVector BarrelHeat_LocalPosition; // 0x5d8(0x0c)
	struct FRotator BarrelHeat_LocalRotation; // 0x5e4(0x0c)

	void GetBarrelHeatAttachment(struct USkeletalMeshComponent*& Mesh); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.GetBarrelHeatAttachment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Barrel Heat__FinishedFunc(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.Barrel Heat__FinishedFunc // (BlueprintEvent) // @ game+0x33231a0
	void Barrel Heat__UpdateFunc(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.Barrel Heat__UpdateFunc // (BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void EffectDataUpdated(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void StartFiringEffect(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StartFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopFiringEffect(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StopFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_HMG_WhileEquipped_1P_Smoke(int32_t EntryPoint); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.ExecuteUbergraph_FXC_HMG_WhileEquipped_1P_Smoke // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

