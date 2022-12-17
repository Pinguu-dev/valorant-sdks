// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8 {
	NoResponse = 0,
	Success = 1,
	Failure = 2,
	EQosResponseType_MAX = 3
};

// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8 {
	Invalid = 0,
	Success = 1,
	Failure = 2,
	Canceled = 3,
	EQosCompletionResult_MAX = 4
};

// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8 {
	Invalid = 0,
	Success = 1,
	Incomplete = 2,
	EQosDatacenterResult_MAX = 3
};

// ScriptStruct Qos.RegionQosInstance
// Size: 0x40 (Inherited: 0x00)
struct FRegionQosInstance {
	struct FQosRegionInfo Definition; // 0x00(0x30)
	struct TArray<struct FDatacenterQosInstance> DatacenterOptions; // 0x30(0x10)
};

// ScriptStruct Qos.DatacenterQosInstance
// Size: 0x68 (Inherited: 0x00)
struct FDatacenterQosInstance {
	struct FQosDatacenterInfo Definition; // 0x00(0x38)
	enum class EQosDatacenterResult Result; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t AvgPingMs; // 0x3c(0x04)
	struct TArray<int32_t> PingResults; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct FDateTime LastCheckTimestamp; // 0x58(0x08)
	bool bUsable; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Qos.QosDatacenterInfo
// Size: 0x38 (Inherited: 0x00)
struct FQosDatacenterInfo {
	struct FString ID; // 0x00(0x10)
	struct FString RegionId; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FQosPingServerInfo> Servers; // 0x28(0x10)
};

// ScriptStruct Qos.QosPingServerInfo
// Size: 0x18 (Inherited: 0x00)
struct FQosPingServerInfo {
	struct FString Address; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Qos.QosRegionInfo
// Size: 0x30 (Inherited: 0x00)
struct FQosRegionInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FString RegionId; // 0x18(0x10)
	bool bEnabled; // 0x28(0x01)
	bool bVisible; // 0x29(0x01)
	bool bAutoAssignable; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

