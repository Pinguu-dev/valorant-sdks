// BlueprintGeneratedClass DangerCompassActor.DangerCompassActor_C
// Size: 0x428 (Inherited: 0x3d0)
struct ADangerCompassActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct UParticleSystemComponent* PingEmitter; // 0x3e0(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x3e8(0x08)
	float StateTimer; // 0x3f0(0x04)
	bool bDestroyOnEnteringCooldownState; // 0x3f4(0x01)
	enum class InWorldTeamVisionActorState CurrentState; // 0x3f5(0x01)
	bool bDisplayDebug; // 0x3f6(0x01)
	char pad_3F7[0x1]; // 0x3f7(0x01)
	struct FVector PingLocation; // 0x3f8(0x0c)
	struct FRotator pingRotation; // 0x404(0x0c)
	float enterVisibilityTime; // 0x410(0x04)
	bool onEnterShouldRenderParticle; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct TArray<float> KilledAlliesThatHadTeamSightTimeStamps; // 0x418(0x10)

	void GetTimeSinceKilledEnemySawShooterCharacter(bool& IsValid, float& TimeInSeconds); // Function DangerCompassActor.DangerCompassActor_C.GetTimeSinceKilledEnemySawShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void RefreshParticleLocation(); // Function DangerCompassActor.DangerCompassActor_C.RefreshParticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TickDebug(float DeltaTime); // Function DangerCompassActor.DangerCompassActor_C.TickDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetCurrentState(enum class InWorldTeamVisionActorState NewState); // Function DangerCompassActor.DangerCompassActor_C.SetCurrentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void RefreshParticle(); // Function DangerCompassActor.DangerCompassActor_C.RefreshParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ShouldRenderParticle(bool& Return); // Function DangerCompassActor.DangerCompassActor_C.ShouldRenderParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function DangerCompassActor.DangerCompassActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void AssociatedCharacterDied(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function DangerCompassActor.DangerCompassActor_C.AssociatedCharacterDied // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void RoundEnded(int32_t RoundNumberEnded); // Function DangerCompassActor.DangerCompassActor_C.RoundEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_DangerCompassActor(int32_t EntryPoint); // Function DangerCompassActor.DangerCompassActor_C.ExecuteUbergraph_DangerCompassActor // (Final|UbergraphFunction) // @ game+0x32f73d0
};

