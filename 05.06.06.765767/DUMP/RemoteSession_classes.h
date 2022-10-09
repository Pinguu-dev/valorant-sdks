// Class RemoteSession.RemoteSessionMediaOutput
// Size: 0x48 (Inherited: 0x38)
struct URemoteSessionMediaOutput : UMediaOutput {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class RemoteSession.RemoteSessionMediaCapture
// Size: 0x120 (Inherited: 0x110)
struct URemoteSessionMediaCapture : UMediaCapture {
	char pad_110[0x10]; // 0x110(0x10)
};

// Class RemoteSession.RemoteSessionSettings
// Size: 0x70 (Inherited: 0x30)
struct URemoteSessionSettings : UObject {
	int32_t HostPort; // 0x30(0x04)
	int32_t ConnectionTimeout; // 0x34(0x04)
	int32_t ConnectionTimeoutWhenDebugging; // 0x38(0x04)
	int32_t PingTime; // 0x3c(0x04)
	bool bAllowInShipping; // 0x40(0x01)
	bool bAutoHostWithPIE; // 0x41(0x01)
	bool bAutoHostWithGame; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t ImageQuality; // 0x44(0x04)
	int32_t FrameRate; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FString> WhitelistedChannels; // 0x50(0x10)
	struct TArray<struct FString> BlacklistedChannels; // 0x60(0x10)
};

