// BlueprintGeneratedClass FXC_CriticalDanger.FXC_CriticalDanger_C
// Size: 0x548 (Inherited: 0x530)
struct AFXC_CriticalDanger_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_HUD_C* Comp_FXC_HUD; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)

	void AdjustLayoutForDevice(); // Function FXC_CriticalDanger.FXC_CriticalDanger_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function FXC_CriticalDanger.FXC_CriticalDanger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_CriticalDanger(int32_t EntryPoint); // Function FXC_CriticalDanger.FXC_CriticalDanger_C.ExecuteUbergraph_FXC_CriticalDanger // (Final|UbergraphFunction) // @ game+0x3520f50
};

