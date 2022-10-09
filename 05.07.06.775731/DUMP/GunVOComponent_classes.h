// BlueprintGeneratedClass GunVOComponent.GunVOComponent_C
// Size: 0xf8 (Inherited: 0xe8)
struct UGunVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AGun_C* OwningGun; // 0xf0(0x08)

	void ReceiveBeginPlay(); // Function GunVOComponent.GunVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnReloadStateEntered(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function GunVOComponent.GunVOComponent_C.OnReloadStateEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function GunVOComponent.GunVOComponent_C.OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_GunVOComponent(int32_t EntryPoint); // Function GunVOComponent.GunVOComponent_C.ExecuteUbergraph_GunVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

