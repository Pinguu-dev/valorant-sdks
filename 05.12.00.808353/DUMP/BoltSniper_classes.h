// BlueprintGeneratedClass BoltSniper.BoltSniper_C
// Size: 0x1980 (Inherited: 0x1368)
struct ABoltSniper_C : AGun_Sniper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1368(0x08)
	struct UFiringStateComponent* ZoomedFiringState; // 0x1370(0x08)
	struct UStabilityComponent* ZoomedStability; // 0x1378(0x08)
	struct FPostProcessSettings NewVar_0_1; // 0x1380(0x600)

	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function BoltSniper.BoltSniper_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function BoltSniper.BoltSniper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void CosmeticZoomPercentageReached(struct UZoomComponent* ZoomComponent); // Function BoltSniper.BoltSniper_C.CosmeticZoomPercentageReached // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_BoltSniper(int32_t EntryPoint); // Function BoltSniper.BoltSniper_C.ExecuteUbergraph_BoltSniper // (Final|UbergraphFunction) // @ game+0x33231a0
};

