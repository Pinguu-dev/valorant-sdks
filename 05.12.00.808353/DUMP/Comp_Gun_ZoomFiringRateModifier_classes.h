// BlueprintGeneratedClass Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C
// Size: 0x108 (Inherited: 0xe8)
struct UComp_Gun_ZoomFiringRateModifier_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AGun_Zoomable_C* OwningGun; // 0xf0(0x08)
	struct UFiringStateComponent* FiringState; // 0xf8(0x08)
	float ZoomFiringRateMultiplier; // 0x100(0x04)
	float DefaultFiringRate; // 0x104(0x04)

	bool IsCurrentlyZoomed(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.IsCurrentlyZoomed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	void Initialize Equippable Variables(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Initialize Equippable Variables // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Bind Event Handlers(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Bind Event Handlers // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void OnItemEquipped_Event_1(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnItemEquipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnZoomLevelReached_Event_1(float ZoomLevel); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnZoomLevelReached_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnZoomStateReset_Event_1(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnZoomStateReset_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Update Firing Rate(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Update Firing Rate // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Comp_Gun_ZoomFiringRateModifier(int32_t EntryPoint); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.ExecuteUbergraph_Comp_Gun_ZoomFiringRateModifier // (Final|UbergraphFunction) // @ game+0x33231a0
};

