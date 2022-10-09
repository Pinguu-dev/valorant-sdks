// Enum RemoteSession.ERemoteSessionConnectionChange
enum class ERemoteSessionConnectionChange : uint8 {
	Connected = 0,
	Disconnected = 1,
	ERemoteSessionConnectionChange_MAX = 2
};

// Enum RemoteSession.ERemoteSessionChannelChange
enum class ERemoteSessionChannelChange : uint8 {
	Created = 0,
	Destroyed = 1,
	ERemoteSessionChannelChange_MAX = 2
};

// Enum RemoteSession.ERemoteSessionChannelMode
enum class ERemoteSessionChannelMode : uint8 {
	Unknown = 0,
	Read = 1,
	Write = 2,
	MaxValue = 3,
	ERemoteSessionChannelMode_MAX = 4
};

// ScriptStruct RemoteSession.RemoteSessionChannelInfo
// Size: 0x18 (Inherited: 0x00)
struct FRemoteSessionChannelInfo {
	struct FString Type; // 0x00(0x10)
	enum class ERemoteSessionChannelMode Mode; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

