// BlueprintGeneratedClass Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C
// Size: 0x260 (Inherited: 0x1e1)
struct UAttachment_Base_Reflex_RedDot_C : UAttachment_Base_Reflex_C {
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	bool TransitionActive?; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct AEffectContainer* Red Dot Idle VFX; // 0x1f8(0x08)
	struct AEffectContainer* Red Dot VFX; // 0x200(0x08)
	struct AEffectContainer* Red Dot Close; // 0x208(0x08)
	struct AEffectContainer* Red Dot Open; // 0x210(0x08)
	struct UAnimSequence* Idle Sequence; // 0x218(0x08)
	struct FEffectID ADS Continuous Effect; // 0x220(0x20)
	struct FEffectID Idle Effect; // 0x240(0x20)
};

