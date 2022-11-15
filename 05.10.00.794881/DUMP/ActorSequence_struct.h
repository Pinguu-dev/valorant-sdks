// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FActorSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; // 0x00(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FActorSequenceObjectReferences {
	struct TArray<struct FActorSequenceObjectReference> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x00)
struct FActorSequenceObjectReference {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ActorId; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PathToComponent; // 0x18(0x10)
};

