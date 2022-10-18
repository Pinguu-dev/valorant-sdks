// Class Qos.QosBeaconClient
// Size: 0x4a0 (Inherited: 0x468)
struct AQosBeaconClient : AOnlineBeaconClient {
	char pad_468[0x38]; // 0x468(0x38)

	void ServerQosRequest(struct FString InSessionId); // Function Qos.QosBeaconClient.ServerQosRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1ec7a90
	void ClientQosResponse(enum class EQosResponseType Response); // Function Qos.QosBeaconClient.ClientQosResponse // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1ec7a00
};

// Class Qos.QosBeaconHost
// Size: 0x408 (Inherited: 0x3f8)
struct AQosBeaconHost : AOnlineBeaconHostObject {
	char pad_3F8[0x10]; // 0x3f8(0x10)
};

// Class Qos.QosEvaluator
// Size: 0x88 (Inherited: 0x30)
struct UQosEvaluator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	bool bInProgress; // 0x50(0x01)
	bool bCancelOperation; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x58(0x10)
	char pad_68[0x20]; // 0x68(0x20)
};

// Class Qos.QosRegionManager
// Size: 0xc8 (Inherited: 0x30)
struct UQosRegionManager : UObject {
	int32_t NumTestsPerRegion; // 0x30(0x04)
	float PingTimeout; // 0x34(0x04)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x38(0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x48(0x10)
	struct FDateTime LastCheckTimestamp; // 0x58(0x08)
	struct UQosEvaluator* Evaluator; // 0x60(0x08)
	enum class EQosCompletionResult QosEvalResult; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x70(0x10)
	struct FString ForceRegionId; // 0x80(0x10)
	bool bRegionForcedViaCommandline; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString SelectedRegionId; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
};

