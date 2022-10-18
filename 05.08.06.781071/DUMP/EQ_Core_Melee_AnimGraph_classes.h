// AnimBlueprintGeneratedClass EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C
// Size: 0x390 (Inherited: 0x300)
struct UEQ_Core_Melee_AnimGraph_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x340(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_EQ_Core_Melee_AnimGraph(int32_t EntryPoint); // Function EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C.ExecuteUbergraph_EQ_Core_Melee_AnimGraph // (Final|UbergraphFunction) // @ game+0x3520f50
};

