// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8 {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x00)
struct FUdpMockMessage {
	struct TArray<char> Data; // 0x00(0x10)
};

