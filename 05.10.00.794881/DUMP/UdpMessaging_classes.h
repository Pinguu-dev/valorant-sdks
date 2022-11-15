// Class UdpMessaging.UdpMessagingSettings
// Size: 0xa8 (Inherited: 0x30)
struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; // 0x30(0x01)
	bool EnableTransport; // 0x31(0x01)
	bool bAutoRepair; // 0x32(0x01)
	bool bStopServiceWhenAppDeactivates; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString UnicastEndpoint; // 0x38(0x10)
	struct FString MulticastEndpoint; // 0x48(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x58(0x01)
	char MulticastTimeToLive; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FString> StaticEndpoints; // 0x60(0x10)
	bool EnableTunnel; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString TunnelUnicastEndpoint; // 0x78(0x10)
	struct FString TunnelMulticastEndpoint; // 0x88(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x98(0x10)
};

