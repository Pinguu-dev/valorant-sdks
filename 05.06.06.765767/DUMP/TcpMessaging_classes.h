// Class TcpMessaging.TcpMessagingSettings
// Size: 0x60 (Inherited: 0x30)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ListenEndpoint; // 0x38(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x48(0x10)
	int32_t ConnectionRetryDelay; // 0x58(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

