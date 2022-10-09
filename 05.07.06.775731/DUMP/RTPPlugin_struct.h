// Enum RTPPlugin.ERTPEventFlags
enum class ERTPEventFlags : uint8 {
	None = 0,
	CollectClientIpAddress = 1,
	ERTPEventFlags_MAX = 2
};

// ScriptStruct RTPPlugin.RTPEventMetadataDefault
// Size: 0x70 (Inherited: 0x00)
struct FRTPEventMetadataDefault {
	struct FRTPEventMetadata MetaData; // 0x00(0x70)
};

// ScriptStruct RTPPlugin.RTPEventMetadata
// Size: 0x70 (Inherited: 0x00)
struct FRTPEventMetadata {
	struct FString schema; // 0x00(0x10)
	struct FRTPScopeMetadata Scope; // 0x10(0x50)
	struct FString Timestamp; // 0x60(0x10)
};

// ScriptStruct RTPPlugin.RTPScopeMetadata
// Size: 0x50 (Inherited: 0x00)
struct FRTPScopeMetadata {
	struct FString environment; // 0x00(0x10)
	struct FString datacenter; // 0x10(0x10)
	struct FString deployment; // 0x20(0x10)
	struct FString product; // 0x30(0x10)
	struct FString Component; // 0x40(0x10)
};

