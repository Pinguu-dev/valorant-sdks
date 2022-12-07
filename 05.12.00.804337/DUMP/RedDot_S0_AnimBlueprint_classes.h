// AnimBlueprintGeneratedClass RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C
// Size: 0x5c8 (Inherited: 0x300)
struct URedDot_S0_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root ; // 0x308(0x38)
	struct FAnimNode_Slot ; // 0x340(0x50)
	struct FAnimNode_TransitionResult _2; // 0x390(0x28)
	struct FAnimNode_TransitionResult ; // 0x3b8(0x28)
	struct FAnimNode_StateResult _2; // 0x3e0(0x38)
	struct FAnimNode_SequencePlayer ; // 0x418(0x80)
	struct FAnimNode_StateResult ; // 0x498(0x38)
	struct FAnimNode_StateMachine ; // 0x4d0(0xe8)
	bool Status; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct UAnimSequence* ; // 0x5c0(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

