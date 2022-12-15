// AnimBlueprintGeneratedClass TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C
// Size: 0x5bc (Inherited: 0x520)
struct UTP_Gun_Core_AnimGraph_C : UAresEquippableAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x528(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x560(0x50)
	struct FRotator Mag Rotator; // 0x5b0(0x0c)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_TP_Gun_Core_AnimGraph(int32_t EntryPoint); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.ExecuteUbergraph_TP_Gun_Core_AnimGraph // (Final|UbergraphFunction) // @ game+0x33231a0
};

