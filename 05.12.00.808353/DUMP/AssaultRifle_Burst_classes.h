// BlueprintGeneratedClass AssaultRifle_Burst.AssaultRifle_Burst_C
// Size: 0x13d0 (Inherited: 0x1360)
struct AAssaultRifle_Burst_C : AGun_Zoomable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360(0x08)
	struct UStabilityVisualizationComponent* SecondaryStabilityVisualization; // 0x1368(0x08)
	struct UCycleModeStateComponent* CycleModeState; // 0x1370(0x08)
	struct UModeComponent* SecondaryMode; // 0x1378(0x08)
	struct UStabilityComponent* SecondaryModeStability; // 0x1380(0x08)
	struct UFiringStateComponent* SecondaryModeFiringState; // 0x1388(0x08)
	struct FEffectID FXCRef; // 0x1390(0x20)
	struct FEffectID FXCRef1; // 0x13b0(0x20)

	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33231a0
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_AssaultRifle_Burst(int32_t EntryPoint); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.ExecuteUbergraph_AssaultRifle_Burst // (Final|UbergraphFunction) // @ game+0x33231a0
};

