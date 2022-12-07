// Enum PlayerFeedbackToolModule.EPlayerFeedbackQuestionType
enum class EPlayerFeedbackQuestionType : uint8 {
	UNKNOWN = 0,
	LIKERT = 1,
	FREE_RESPONSE = 2,
	EPlayerFeedbackQuestionType_MAX = 3
};

// ScriptStruct PlayerFeedbackToolModule.PlayerFeedbackSurvey
// Size: 0x68 (Inherited: 0x00)
struct FPlayerFeedbackSurvey {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Title; // 0x08(0x10)
	struct FString Caption; // 0x18(0x10)
	struct FString URL; // 0x28(0x10)
	struct TArray<struct FPlayerFeedbackQuestion> Questions; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct PlayerFeedbackToolModule.PlayerFeedbackQuestion
// Size: 0x38 (Inherited: 0x00)
struct FPlayerFeedbackQuestion {
	int32_t ID; // 0x00(0x04)
	enum class EPlayerFeedbackQuestionType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Question; // 0x08(0x10)
	struct FString ResponseKey; // 0x18(0x10)
	struct FString ResponseValue; // 0x28(0x10)
};

