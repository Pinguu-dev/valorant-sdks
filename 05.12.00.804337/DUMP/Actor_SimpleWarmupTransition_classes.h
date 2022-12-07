// BlueprintGeneratedClass Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C
// Size: 0x40c (Inherited: 0x3d0)
struct AActor_SimpleWarmupTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UPostProcessComponent* ; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	float ; // 0x3e8(0x04)
	enum class ETimelineDirection ; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UTimelineComponent* ; // 0x3f0(0x08)
	float FadeInDuration; // 0x3f8(0x04)
	float FadeOutDuration; // 0x3fc(0x04)
	bool ; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float ; // 0x404(0x04)
	float ; // 0x408(0x04)

	void GetFadeInDuration(float& FadeInDuration); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.GetFadeInDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C. // (BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool IsWarmupRound); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

