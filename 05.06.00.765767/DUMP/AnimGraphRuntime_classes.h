// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x310 (Inherited: 0x300)
struct UAnimSequencerInstance : UAnimInstance {
	char pad_300[0x10]; // 0x300(0x10)
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x30 (Inherited: 0x30)
struct USequencerAnimationSupport : UInterface {
};

