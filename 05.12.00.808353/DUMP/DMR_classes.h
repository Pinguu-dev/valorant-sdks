// BlueprintGeneratedClass DMR.DMR_C
// Size: 0x13c8 (Inherited: 0x1360)
struct ADMR_C : AGun_Zoomable_C {
	struct FEffectID NewVar_0_1; // 0x1360(0x20)
	struct FEffectID FXCRef; // 0x1380(0x20)
	struct FEffectID FXCRef1; // 0x13a0(0x20)
	struct UFiringStateComponent* ReturnFiringState; // 0x13c0(0x08)

	void CanCycleZoom(bool& CanZoom); // Function DMR.DMR_C.CanCycleZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	void GetIdleReloadState(struct UReloadStateComponent*& ReloadState); // Function DMR.DMR_C.GetIdleReloadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function DMR.DMR_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
};

