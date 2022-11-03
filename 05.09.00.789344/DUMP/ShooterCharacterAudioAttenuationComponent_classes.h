// BlueprintGeneratedClass ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C
// Size: 0x558 (Inherited: 0x500)
struct UShooterCharacterAudioAttenuationComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UFootstepsComponent* Footsteps Component; // 0x508(0x08)
	struct UUserWidget* Widget Class; // 0x510(0x08)
	float Radius; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FStruct_AttenuationInformation CurrentOneShotVisualization; // 0x520(0x18)
	float VisualizeDuration; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FTimerHandle ClearTimer; // 0x540(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x548(0x10)

	void PruneConstantArray(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.PruneConstantArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateVisualizations(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.UpdateVisualizations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Get Widgets(struct TArray<struct UUserWidget*>& Values); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.Get Widgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void RemoveAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* Actor); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.RemoveAttenuationVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddNewAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* OwningActor, float Radius, enum class Enum_AttenuationVisualization Type); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.AddNewAttenuationVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ClearCurrentOneShotVisualization(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ClearCurrentOneShotVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ShooterCharacterAudioAttenuationComponent(int32_t EntryPoint); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ExecuteUbergraph_ShooterCharacterAudioAttenuationComponent // (Final|UbergraphFunction) // @ game+0x32f73d0
};

