// Enum JsonUtilities.EJsonCasing
enum class EJsonCasing : uint8 {
	MatchSource = 0,
	Camel = 1,
	Snake = 2,
	EJsonCasing_MAX = 3
};

// ScriptStruct JsonUtilities.JsonObjectWrapper
// Size: 0x20 (Inherited: 0x00)
struct FJsonObjectWrapper {
	struct FString JsonString; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

