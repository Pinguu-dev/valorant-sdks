// Enum AISpatialAwareness.ELayerBlockBehavior
enum class ELayerBlockBehavior : uint8 {
	AffectNone = 0,
	AffectBlockID = 1,
	AffectOtherBlockIDs = 2,
	AffectAllBlockIDs = 3,
	Count = 4,
	ELayerBlockBehavior_MAX = 5
};

// Enum AISpatialAwareness.EInfluenceLayerTag
enum class EInfluenceLayerTag : uint8 {
	Hazard = 0,
	Position = 1,
	AllyThreat = 2,
	Count = 3,
	EInfluenceLayerTag_MAX = 4
};

// Enum AISpatialAwareness.EInfluenceSourceTag
enum class EInfluenceSourceTag : uint8 {
	TestTagA = 0,
	Count = 1,
	EInfluenceSourceTag_MAX = 2
};

// Enum AISpatialAwareness.EPropagationModifierTag
enum class EPropagationModifierTag : uint8 {
	Count = 0,
	EPropagationModifierTag_MAX = 1
};

// Enum AISpatialAwareness.EEnvTestWaypointSortMode
enum class EEnvTestWaypointSortMode : uint8 {
	InfluenceOnly = 0,
	InfluenceAndSimpleDistance = 1,
	InfluenceAndNavMeshDistance = 2,
	EEnvTestWaypointSortMode_MAX = 3
};

// Enum AISpatialAwareness.EEnvTestWaypointVisCheckMode
enum class EEnvTestWaypointVisCheckMode : uint8 {
	Skip = 0,
	Perception = 1,
	EEnvTestWaypointVisCheckMode_MAX = 2
};

// Enum AISpatialAwareness.ENodeOperation
enum class ENodeOperation : uint8 {
	Set = 0,
	SetWithModulation = 1,
	Increment = 2,
	Decrement = 3,
	Clear = 4,
	ENodeOperation_MAX = 5
};

// ScriptStruct AISpatialAwareness.InfluenceSourceRegistrationData
// Size: 0xe0 (Inherited: 0x00)
struct FInfluenceSourceRegistrationData {
	struct FPropagationParameters PropagationParameters; // 0x00(0x10)
	enum class EPropagationModifierTag PropagationTag; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FInfluenceIdentifiers InfluenceIdentifiers; // 0x18(0x28)
	struct TMap<int32_t, struct FStampedValue> StampedNodes; // 0x40(0x50)
	struct TMap<int32_t, float> InitialStampedNodeValues; // 0x90(0x50)
};

// ScriptStruct AISpatialAwareness.StampedValue
// Size: 0x18 (Inherited: 0x00)
struct FStampedValue {
	struct TArray<int32_t> StampedLayers; // 0x00(0x10)
	float StampedValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceIdentifiers
// Size: 0x28 (Inherited: 0x00)
struct FInfluenceIdentifiers {
	struct TArray<enum class EInfluenceSourceTag> SourceTags; // 0x00(0x10)
	struct AActor* SourceActor; // 0x10(0x08)
	enum class EInfluenceLayerTag LayerTag; // 0x18(0x01)
	enum class ELayerBlockBehavior LayerBlockBehavior; // 0x19(0x01)
	char pad_1A[0xe]; // 0x1a(0x0e)
};

// ScriptStruct AISpatialAwareness.PropagationParameters
// Size: 0x10 (Inherited: 0x00)
struct FPropagationParameters {
	float MovementSpeed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* ValueModulationCurve; // 0x08(0x08)
};

// ScriptStruct AISpatialAwareness.InfluenceMapDebugData
// Size: 0x50 (Inherited: 0x00)
struct FInfluenceMapDebugData {
	int32_t FocusedNodeIndex; // 0x00(0x04)
	int32_t NumHopsToShow; // 0x04(0x04)
	int32_t BlockID; // 0x08(0x04)
	int32_t LayerID; // 0x0c(0x04)
	struct TArray<int32_t> NodeIndicesToDebugDraw; // 0x10(0x10)
	struct TArray<struct FInfluenceNodeDebugValue> InfluenceNodeDebugValues; // 0x20(0x10)
	struct TArray<struct FInfluenceNodeDebugInfo> InfluenceNodeDebugData; // 0x30(0x10)
	struct TArray<struct FInfluenceNodeNeighborDebugInfo> InfluenceNodeNeighborDebugInfo; // 0x40(0x10)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeNeighborDebugInfo
// Size: 0x20 (Inherited: 0x00)
struct FInfluenceNodeNeighborDebugInfo {
	int32_t NodeIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> NodeNeighborIndices; // 0x08(0x10)
	int32_t NumHopsToOriginNode; // 0x18(0x04)
	float DistanceToOriginNode; // 0x1c(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeDebugInfo
// Size: 0x40 (Inherited: 0x00)
struct FInfluenceNodeDebugInfo {
	int32_t NodeIndex; // 0x00(0x04)
	int32_t SeedNumber; // 0x04(0x04)
	float PropagatedToTimestamp; // 0x08(0x04)
	float ClearedTimestamp; // 0x0c(0x04)
	bool bPropagationFrontierNode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString WaypointName; // 0x18(0x10)
	float WaypointValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FPropagationProgressDebugInfo> PropagationProgress; // 0x30(0x10)
};

// ScriptStruct AISpatialAwareness.PropagationProgressDebugInfo
// Size: 0x08 (Inherited: 0x00)
struct FPropagationProgressDebugInfo {
	int32_t NodeNeighborIndex; // 0x00(0x04)
	float DistanceTravelled; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeDebugValue
// Size: 0x0c (Inherited: 0x00)
struct FInfluenceNodeDebugValue {
	int32_t NodeIndex; // 0x00(0x04)
	float Value; // 0x04(0x04)
	bool bRecentlyCleared; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct AISpatialAwareness.SavedInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FSavedInfoMap {
	struct TMap<int32_t, struct FPropagationSavedInfo> LayerToPropagationSavedInfo; // 0x00(0x50)
};

// ScriptStruct AISpatialAwareness.PropagationSavedInfo
// Size: 0x08 (Inherited: 0x00)
struct FPropagationSavedInfo {
	float PropagatedToTimestamp; // 0x00(0x04)
	float ClearedTimestamp; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceMapLayer
// Size: 0x38 (Inherited: 0x00)
struct FInfluenceMapLayer {
	struct TArray<struct UInfluenceSourceComponentBase*> ActiveSources; // 0x00(0x10)
	struct TArray<enum class EInfluenceSourceTag> SourceTags; // 0x10(0x10)
	enum class EInfluenceLayerTag Tag; // 0x20(0x01)
	char pad_21[0xb]; // 0x21(0x0b)
	enum class EPropagationModifierTag PropagationTag; // 0x2c(0x01)
	bool bPropagates; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32_t SeedNumber; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceLayerID
// Size: 0x04 (Inherited: 0x00)
struct FInfluenceLayerID {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceLayerBlockID
// Size: 0x04 (Inherited: 0x00)
struct FInfluenceLayerBlockID {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceMapNode
// Size: 0x30 (Inherited: 0x00)
struct FInfluenceMapNode {
	struct FVector NodeLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FLayerValue> LayerValueMap; // 0x10(0x10)
	struct TArray<struct FNodeConnectionInfo> NodeConnectionInfo; // 0x20(0x10)
};

// ScriptStruct AISpatialAwareness.NodeConnectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FNodeConnectionInfo {
	int32_t NodeIndex; // 0x00(0x04)
	float Distance; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.LayerValue
// Size: 0x18 (Inherited: 0x00)
struct FLayerValue {
	int32_t SeedNumber; // 0x00(0x04)
	float Value; // 0x04(0x04)
	float ModulationStartTimestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ModulationCurve; // 0x10(0x08)
};

// ScriptStruct AISpatialAwareness.CachedWaypointInfo
// Size: 0x10 (Inherited: 0x00)
struct FCachedWaypointInfo {
	struct AMapMarkupWaypoint* MapMarkupWaypoint; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AISpatialAwareness.NodeOperationsList
// Size: 0x10 (Inherited: 0x00)
struct FNodeOperationsList {
	struct TArray<struct FNodeOperation> Operations; // 0x00(0x10)
};

// ScriptStruct AISpatialAwareness.NodeOperation
// Size: 0x28 (Inherited: 0x00)
struct FNodeOperation {
	enum class ENodeOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	int32_t SeedNumber; // 0x08(0x04)
	float ModulationTimestamp; // 0x0c(0x04)
	struct UCurveFloat* ModulationCurve; // 0x10(0x08)
	struct TArray<int32_t> AffectedLayerIndices; // 0x18(0x10)
};

// ScriptStruct AISpatialAwareness.InfluenceMapQuery
// Size: 0x0c (Inherited: 0x00)
struct FInfluenceMapQuery {
	struct FVector SourcePosition; // 0x00(0x0c)
};

// ScriptStruct AISpatialAwareness.MovementLayerPropagationInfo
// Size: 0x78 (Inherited: 0x00)
struct FMovementLayerPropagationInfo {
	int32_t SeedNumber; // 0x00(0x04)
	bool bPaused; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FPropagationParameters PropagationParameters; // 0x08(0x10)
	struct TArray<struct FFrontierNodePropagationInfo> FrontierNodePropagationInfo; // 0x18(0x10)
	struct TMap<int32_t, float> ClearedNodeTimestamps; // 0x28(0x50)
};

// ScriptStruct AISpatialAwareness.FrontierNodePropagationInfo
// Size: 0x08 (Inherited: 0x00)
struct FFrontierNodePropagationInfo {
	int32_t NodeIndex; // 0x00(0x04)
	float PropagatedToTimestamp; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.WaypointsForNavMeshPoly
// Size: 0x10 (Inherited: 0x00)
struct FWaypointsForNavMeshPoly {
	struct TArray<struct AMapMarkupWaypoint*> Waypoints; // 0x00(0x10)
};

// ScriptStruct AISpatialAwareness.NodeInfo
// Size: 0x28 (Inherited: 0x00)
struct FNodeInfo {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AMapMarkupWaypoint* Waypoint; // 0x10(0x08)
	struct TArray<struct FNeighboringNodeInfo> NeighboringNodesInfo; // 0x18(0x10)
};

// ScriptStruct AISpatialAwareness.NeighboringNodeInfo
// Size: 0x10 (Inherited: 0x00)
struct FNeighboringNodeInfo {
	struct FVector Location; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

