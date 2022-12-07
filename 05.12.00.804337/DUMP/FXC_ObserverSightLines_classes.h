// BlueprintGeneratedClass FXC_ObserverSightLines.FXC_ObserverSightLines_C
// Size: 0x55c (Inherited: 0x530)
struct AFXC_ObserverSightLines_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* EndPoint; // 0x538(0x08)
	struct UParticleSystemComponent* beam; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct FVector ; // 0x550(0x0c)

	void (bool& Visible); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

