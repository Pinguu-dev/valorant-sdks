// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8 {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18 (Inherited: 0x00)
struct FNavigationFilterArea {
	struct UNavArea* AreaClass; // 0x00(0x08)
	float TravelCostOverride; // 0x08(0x04)
	float EnteringCostOverride; // 0x0c(0x04)
	char bIsExcluded : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x18 (Inherited: 0x00)
struct FNavCollisionBox {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x14 (Inherited: 0x00)
struct FNavCollisionCylinder {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20 (Inherited: 0x00)
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x00(0x10)
	int32_t AreaID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* AreaClass; // 0x18(0x08)
};

// ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphNode {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphEdge {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x04 (Inherited: 0x00)
struct FNavigationFilterFlags {
	char bNavFlag0 : 1; // 0x00(0x01)
	char bNavFlag1 : 1; // 0x00(0x01)
	char bNavFlag2 : 1; // 0x00(0x01)
	char bNavFlag3 : 1; // 0x00(0x01)
	char bNavFlag4 : 1; // 0x00(0x01)
	char bNavFlag5 : 1; // 0x00(0x01)
	char bNavFlag6 : 1; // 0x00(0x01)
	char bNavFlag7 : 1; // 0x00(0x01)
	char bNavFlag8 : 1; // 0x01(0x01)
	char bNavFlag9 : 1; // 0x01(0x01)
	char bNavFlag10 : 1; // 0x01(0x01)
	char bNavFlag11 : 1; // 0x01(0x01)
	char bNavFlag12 : 1; // 0x01(0x01)
	char bNavFlag13 : 1; // 0x01(0x01)
	char bNavFlag14 : 1; // 0x01(0x01)
	char bNavFlag15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x70 (Inherited: 0x68)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40 (Inherited: 0x00)
struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x00(0x04)
	float TileSizeUU; // 0x04(0x04)
	float CellSize; // 0x08(0x04)
	float CellHeight; // 0x0c(0x04)
	float AgentRadius; // 0x10(0x04)
	float AgentHeight; // 0x14(0x04)
	float AgentMaxSlope; // 0x18(0x04)
	float AgentMaxStepHeight; // 0x1c(0x04)
	float MinRegionArea; // 0x20(0x04)
	float MergeRegionSize; // 0x24(0x04)
	float MaxSimplificationError; // 0x28(0x04)
	int32_t TileNumberHardLimit; // 0x2c(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x30(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t RegionChunkSplits; // 0x34(0x04)
	int32_t LayerChunkSplits; // 0x38(0x04)
	char bSortNavigationAreasByCost : 1; // 0x3c(0x01)
	char bPerformVoxelFiltering : 1; // 0x3c(0x01)
	char bMarkLowHeightAreas : 1; // 0x3c(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x3c(0x01)
	char bFilterLowSpanSequences : 1; // 0x3c(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x3c(0x01)
	char bFixedTilePoolSize : 1; // 0x3c(0x01)
	char pad_3C_7 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

