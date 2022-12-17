// BlueprintGeneratedClass Vector.Vector_C
// Size: 0x13e0 (Inherited: 0x1360)
struct AVector_C : AGun_Zoomable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360(0x08)
	struct UStabilityComponent* FlaggedBurstModeStability; // 0x1368(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStabilityBurstMode; // 0x1370(0x08)
	struct UStabilityVisualizationComponent* BurstModeStabilityVisualization; // 0x1378(0x08)
	struct UCycleModeStateComponent* CycleModeState; // 0x1380(0x08)
	struct UModeComponent* BurstMode; // 0x1388(0x08)
	struct UStabilityComponent* BurstModeStability; // 0x1390(0x08)
	struct UFiringStateComponent* BurstFiringState; // 0x1398(0x08)
	struct FEffectID FXCRef1; // 0x13a0(0x20)
	struct FEffectID FXCRef; // 0x13c0(0x20)

	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Vector.Vector_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function Vector.Vector_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function Vector.Vector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x33231a0
	void BndEvt__BurstMode_K2Node_ComponentBoundEvent_0_OnModeChangedSignature__DelegateSignature(struct UModeComponent* ModeComponent, int32_t OldModeNumber, int32_t NewModeNumber); // Function Vector.Vector_C.BndEvt__BurstMode_K2Node_ComponentBoundEvent_0_OnModeChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x33231a0
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTime); // Function Vector.Vector_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnIdleStateTick(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function Vector.Vector_C.OnIdleStateTick // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Vector(int32_t EntryPoint); // Function Vector.Vector_C.ExecuteUbergraph_Vector // (Final|UbergraphFunction) // @ game+0x33231a0
};

