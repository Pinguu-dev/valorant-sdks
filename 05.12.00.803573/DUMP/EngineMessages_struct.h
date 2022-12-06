// ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x18 (Inherited: 0x00)
struct FEngineServiceNotification {
	struct FString Text; // 0x00(0x10)
	double TimeSeconds; // 0x10(0x08)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x10 (Inherited: 0x00)
struct FEngineServiceTerminate {
	struct FString Username; // 0x00(0x10)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceExecuteCommand {
	struct FString Command; // 0x00(0x10)
	struct FString Username; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceAuthGrant {
	struct FString Username; // 0x00(0x10)
	struct FString UserToGrant; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceAuthDeny {
	struct FString Username; // 0x00(0x10)
	struct FString UserToDeny; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServicePong
// Size: 0x50 (Inherited: 0x00)
struct FEngineServicePong {
	struct FString CurrentLevel; // 0x00(0x10)
	int32_t EngineVersion; // 0x10(0x04)
	bool HasBegunPlay; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FGuid InstanceId; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct EngineMessages.EngineServicePing
// Size: 0x01 (Inherited: 0x00)
struct FEngineServicePing {
	char pad_0[0x1]; // 0x00(0x01)
};

