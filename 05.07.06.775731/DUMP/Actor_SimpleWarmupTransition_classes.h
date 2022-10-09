// BlueprintGeneratedClass Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C
// Size: 0x40c (Inherited: 0x3d0)
struct AActor_SimpleWarmupTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	float FadeInTimeline_Alpha_6DE345CF45066CFED934EE870B0BBEE8; // 0x3e8(0x04)
	enum class ETimelineDirection FadeInTimeline__Direction_6DE345CF45066CFED934EE870B0BBEE8; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UTimelineComponent* FadeInTimeline; // 0x3f0(0x08)
	float FadeInDuration; // 0x3f8(0x04)
	float FadeOutDuration; // 0x3fc(0x04)
	bool ShouldDestroyOnFinish; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float FadeOutDelay; // 0x404(0x04)
	float FadeInDurationNoSlow; // 0x408(0x04)

	void GetFadeInDuration(float& FadeInDuration); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.GetFadeInDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void FadeInTimeline__FinishedFunc(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x3511190
	void FadeInTimeline__UpdateFunc(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void Event Fade Out(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.Event Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnWarmupRoundChanged_Event_1(bool IsWarmupRound); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.OnWarmupRoundChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Actor_SimpleWarmupTransition(int32_t EntryPoint); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ExecuteUbergraph_Actor_SimpleWarmupTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

