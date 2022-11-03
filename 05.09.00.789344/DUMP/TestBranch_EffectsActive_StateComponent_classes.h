// BlueprintGeneratedClass TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C
// Size: 0x32a (Inherited: 0x300)
struct UTestBranch_EffectsActive_StateComponent_C : UTestBranch_StateComponent_C {
	struct TArray<struct UGameplayEffect*> RequiredEffects; // 0x300(0x10)
	bool RequireAllEffects; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct UGameplayEffect*> ForceFailEffects; // 0x318(0x10)
	bool bMustBeValidAndAlive; // 0x328(0x01)
	bool bIncludeDerivedEffectTypes; // 0x329(0x01)

	void TryGetTargetActor(struct UStateTransitionContext* TransitionContext, struct AActor*& Actor); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.TryGetTargetActor // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool HasEffect(struct UGameplayEffect* InputPin, struct AActor* Target); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.HasEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void CheckFailEffects(struct AActor* TargetActor, bool& NoFailEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckFailEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CheckRequiredEffects(struct AActor* TargetActor, bool& HasRequiredEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckRequiredEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool StateTest(struct UStateTransitionContext* StateTransitionContext); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.StateTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
};

