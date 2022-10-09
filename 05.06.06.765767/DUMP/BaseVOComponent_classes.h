// BlueprintGeneratedClass BaseVOComponent.BaseVOComponent_C
// Size: 0x178 (Inherited: 0xe8)
struct UBaseVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FQueuedVOLine> Queue; // 0xf0(0x10)
	enum class VOPriorityEnum CurrentVOLinePriority; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UAresAudioComponent* AudioComponent; // 0x108(0x08)
	struct UBaseVOComponent_C* EventFinishedListener; // 0x110(0x08)
	struct UAudBasePawnVOComponent_C* NewVar_1; // 0x118(0x08)
	struct AEffectContainer* PlayLineCosmeticEffect; // 0x120(0x08)
	struct FEffectID CurrentCosmeticEffect; // 0x128(0x20)
	bool IsPlaying; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate OnLineStart; // 0x150(0x10)
	struct FMulticastInlineDelegate OnLineEnd; // 0x160(0x10)
	struct UAkAudioEvent* CurrentVOLine; // 0x170(0x08)
};

