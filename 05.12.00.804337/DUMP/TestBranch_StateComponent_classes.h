// BlueprintGeneratedClass TestBranch_StateComponent.TestBranch_StateComponent_C
// Size: 0x300 (Inherited: 0x2c8)
struct UTestBranch_StateComponent_C : UScriptStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UStateComponent* FailState; // 0x2d0(0x08)
	struct FMulticastInlineDelegate ; // 0x2d8(0x10)
	struct AEffectContainer* ; // 0x2e8(0x08)
	struct FMulticastInlineDelegate ; // 0x2f0(0x10)

	bool (struct UStateTransitionContext* StateTransitionContext); // Function TestBranch_StateComponent.TestBranch_StateComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void SetFailState(struct UStateComponent* FailState); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.SetFailState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function TestBranch_StateComponent.TestBranch_StateComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function TestBranch_StateComponent.TestBranch_StateComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function TestBranch_StateComponent.TestBranch_StateComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function TestBranch_StateComponent.TestBranch_StateComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

