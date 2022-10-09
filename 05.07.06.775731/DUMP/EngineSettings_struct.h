// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8 {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8 {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteCommand {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.GameModeName
// Size: 0x30 (Inherited: 0x00)
struct FGameModeName {
	struct FString Name; // 0x00(0x10)
	struct FSoftClassPath GameMode; // 0x10(0x20)
};

