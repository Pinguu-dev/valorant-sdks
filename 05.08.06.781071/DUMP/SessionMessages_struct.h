// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x40 (Inherited: 0x00)
struct FSessionServiceLog {
	struct FName Category; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Data; // 0x10(0x10)
	struct FGuid InstanceId; // 0x20(0x10)
	double TimeSeconds; // 0x30(0x08)
	char Verbosity; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x00)
struct FSessionServicePong {
	bool Authorized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x00)
struct FSessionServicePing {
	struct FString Username; // 0x00(0x10)
};

