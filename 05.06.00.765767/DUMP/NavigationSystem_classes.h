// Class NavigationSystem.NavArea
// Size: 0x50 (Inherited: 0x38)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x44(0x04)
	char bSupportsAgent0 : 1; // 0x48(0x01)
	char bSupportsAgent1 : 1; // 0x48(0x01)
	char bSupportsAgent2 : 1; // 0x48(0x01)
	char bSupportsAgent3 : 1; // 0x48(0x01)
	char bSupportsAgent4 : 1; // 0x48(0x01)
	char bSupportsAgent5 : 1; // 0x48(0x01)
	char bSupportsAgent6 : 1; // 0x48(0x01)
	char bSupportsAgent7 : 1; // 0x48(0x01)
	char bSupportsAgent8 : 1; // 0x49(0x01)
	char bSupportsAgent9 : 1; // 0x49(0x01)
	char bSupportsAgent10 : 1; // 0x49(0x01)
	char bSupportsAgent11 : 1; // 0x49(0x01)
	char bSupportsAgent12 : 1; // 0x49(0x01)
	char bSupportsAgent13 : 1; // 0x49(0x01)
	char bSupportsAgent14 : 1; // 0x49(0x01)
	char bSupportsAgent15 : 1; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x50 (Inherited: 0x50)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x50 (Inherited: 0x30)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class NavigationSystem.NavigationData
// Size: 0x5f0 (Inherited: 0x3d0)
struct ANavigationData : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x3d8(0x08)
	struct FNavDataConfig NavDataConfig; // 0x3e0(0x90)
	char bEnableDrawing : 1; // 0x470(0x01)
	char bForceRebuildOnLoad : 1; // 0x470(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x470(0x01)
	char bCanBeMainNavData : 1; // 0x470(0x01)
	char bCanSpawnOnRebuild : 1; // 0x470(0x01)
	char bRebuildAtRuntime : 1; // 0x470(0x01)
	char pad_470_6 : 2; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	float ObservedPathsTickInterval; // 0x478(0x04)
	uint32_t DataVersion; // 0x47c(0x04)
	char pad_480[0x108]; // 0x480(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x588(0x10)
	char pad_598[0x58]; // 0x598(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x5f0 (Inherited: 0x5f0)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x30 (Inherited: 0x30)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xd0 (Inherited: 0x50)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x50(0x08)
	struct UNavArea* Agent1Area; // 0x58(0x08)
	struct UNavArea* Agent2Area; // 0x60(0x08)
	struct UNavArea* Agent3Area; // 0x68(0x08)
	struct UNavArea* Agent4Area; // 0x70(0x08)
	struct UNavArea* Agent5Area; // 0x78(0x08)
	struct UNavArea* Agent6Area; // 0x80(0x08)
	struct UNavArea* Agent7Area; // 0x88(0x08)
	struct UNavArea* Agent8Area; // 0x90(0x08)
	struct UNavArea* Agent9Area; // 0x98(0x08)
	struct UNavArea* Agent10Area; // 0xa0(0x08)
	struct UNavArea* Agent11Area; // 0xa8(0x08)
	struct UNavArea* Agent12Area; // 0xb0(0x08)
	struct UNavArea* Agent13Area; // 0xb8(0x08)
	struct UNavArea* Agent14Area; // 0xc0(0x08)
	struct UNavArea* Agent15Area; // 0xc8(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xe0 (Inherited: 0x78)
struct UNavCollision : UNavCollisionBase {
	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UNavArea* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x2f]; // 0xb1(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x5f0 (Inherited: 0x5f0)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x3d0 (Inherited: 0x3d0)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2b0 (Inherited: 0x290)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x288(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x2a0(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x2a8(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xe8(0x04)
	float TileRemovalRadius; // 0xec(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x90 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x30 (Inherited: 0x30)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x15f8 (Inherited: 0x30)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x50(0x30)
	char bAutoCreateNavigationData : 1; // 0x80(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x80(0x01)
	char bAllowClientSideNavigation : 1; // 0x80(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x80(0x01)
	char bTickWhilePaused : 1; // 0x80(0x01)
	char bSupportRebuilding : 1; // 0x80(0x01)
	char bInitialBuildingLocked : 1; // 0x80(0x01)
	char pad_80_7 : 1; // 0x80(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x81(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x81(0x01)
	char pad_81_2 : 6; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float ActiveTilesUpdateInterval; // 0x84(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x8c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x90(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0xa8(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xe8(0x10)
	char pad_F8[0xdc]; // 0xf8(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1d4(0x01)
	char pad_1D5[0x13ff]; // 0x1d5(0x13ff)
	float DirtyAreasUpdateFreq; // 0x15d4(0x04)
	char pad_15D8[0x20]; // 0x15d8(0x20)
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x70 (Inherited: 0x68)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x68(0x01)
	char bCreateOnClient : 1; // 0x68(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x4c8 (Inherited: 0x3d0)
struct ANavigationTestingActor : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x3e0(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x3e8(0x08)
	char bActAsNavigationInvoker : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x3f8(0x38)
	struct FVector QueryingExtent; // 0x430(0x0c)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct ANavigationData* MyNavData; // 0x440(0x08)
	struct FVector ProjectedLocation; // 0x448(0x0c)
	char bProjectedLocationValid : 1; // 0x454(0x01)
	char bSearchStart : 1; // 0x454(0x01)
	char pad_454_2 : 6; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float CostLimitFactor; // 0x458(0x04)
	float MinimumCostLimit; // 0x45c(0x04)
	char bBacktracking : 1; // 0x460(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x460(0x01)
	char bGatherDetailedInfo : 1; // 0x460(0x01)
	char bDrawDistanceToWall : 1; // 0x460(0x01)
	char bShowNodePool : 1; // 0x460(0x01)
	char bShowBestPath : 1; // 0x460(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x460(0x01)
	char bShouldBeVisibleInGame : 1; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FVector2D TextCanvasOffset; // 0x468(0x08)
	char bPathExist : 1; // 0x470(0x01)
	char bPathIsPartial : 1; // 0x470(0x01)
	char bPathSearchOutOfNodes : 1; // 0x470(0x01)
	char pad_470_3 : 5; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float PathfindingTime; // 0x474(0x04)
	float PathCost; // 0x478(0x04)
	int32_t PathfindingSteps; // 0x47c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x480(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x488(0x08)
	int32_t ShowStepIndex; // 0x490(0x04)
	float OffsetFromCornersDistance; // 0x494(0x04)
	char pad_498[0x30]; // 0x498(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x560 (Inherited: 0x550)
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x550(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x118 (Inherited: 0xe8)
struct UNavRelevantComponent : UActorComponent {
	char pad_E8[0x24]; // 0xe8(0x24)
	char bAttachToOwnersRoot : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct UObject* CachedNavParent; // 0x110(0x08)
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1c8 (Inherited: 0x118)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_118[0x8]; // 0x118(0x08)
	uint32_t NavLinkUserId; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UNavArea* EnabledAreaClass; // 0x128(0x08)
	struct UNavArea* DisabledAreaClass; // 0x130(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x138(0x04)
	struct FVector LinkRelativeStart; // 0x13c(0x0c)
	struct FVector LinkRelativeEnd; // 0x148(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	char bLinkEnabled : 1; // 0x158(0x01)
	char bNotifyWhenEnabled : 1; // 0x158(0x01)
	char bNotifyWhenDisabled : 1; // 0x158(0x01)
	char bCreateBoxObstacle : 1; // 0x158(0x01)
	char pad_158_4 : 4; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FVector ObstacleOffset; // 0x15c(0x0c)
	struct FVector ObstacleExtent; // 0x168(0x0c)
	char pad_174[0x4]; // 0x174(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x178(0x08)
	float BroadcastRadius; // 0x180(0x04)
	float BroadcastInterval; // 0x184(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x188(0x01)
	char pad_189[0x3f]; // 0x189(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x550 (Inherited: 0x550)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x58 (Inherited: 0x58)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x410 (Inherited: 0x408)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x560 (Inherited: 0x550)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_550[0x10]; // 0x550(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x180 (Inherited: 0x118)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0x118(0x08)
	struct FVector FailsafeExtent; // 0x120(0x0c)
	char bIncludeAgentHeight : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x53]; // 0x12d(0x53)
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x420 (Inherited: 0x408)
struct ANavModifierVolume : AVolume {
	char pad_408[0x8]; // 0x408(0x08)
	struct UNavArea* AreaClass; // 0x410(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x3e0 (Inherited: 0x3d0)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x3d0(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x3d8(0x01)
	char bLoadOnClient : 1; // 0x3d9(0x01)
	char pad_3D9_1 : 7; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x550 (Inherited: 0x550)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x50 (Inherited: 0x50)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x6a0 (Inherited: 0x5f0)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x5f0(0x01)
	char bDrawPolyEdges : 1; // 0x5f0(0x01)
	char bDrawFilledPolys : 1; // 0x5f0(0x01)
	char bDrawNavMeshEdges : 1; // 0x5f0(0x01)
	char bDrawTileBounds : 1; // 0x5f0(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x5f0(0x01)
	char bDrawTileLabels : 1; // 0x5f0(0x01)
	char bDrawPolygonLabels : 1; // 0x5f0(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x5f1(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x5f1(0x01)
	char bDrawNavLinks : 1; // 0x5f1(0x01)
	char bDrawFailedNavLinks : 1; // 0x5f1(0x01)
	char bDrawClusters : 1; // 0x5f1(0x01)
	char bDrawOctree : 1; // 0x5f1(0x01)
	char bDrawOctreeDetails : 1; // 0x5f1(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x5f1(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x5f2(0x01)
	char pad_5F2_1 : 7; // 0x5f2(0x01)
	char pad_5F3[0x1]; // 0x5f3(0x01)
	float DrawOffset; // 0x5f4(0x04)
	char bFixedTilePoolSize : 1; // 0x5f8(0x01)
	char pad_5F8_1 : 7; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	int32_t TilePoolSize; // 0x5fc(0x04)
	float TileSizeUU; // 0x600(0x04)
	float CellSize; // 0x604(0x04)
	float CellHeight; // 0x608(0x04)
	float AgentRadius; // 0x60c(0x04)
	float AgentHeight; // 0x610(0x04)
	float AgentMaxSlope; // 0x614(0x04)
	float AgentMaxStepHeight; // 0x618(0x04)
	float MinRegionArea; // 0x61c(0x04)
	float MergeRegionSize; // 0x620(0x04)
	float MaxSimplificationError; // 0x624(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x628(0x04)
	int32_t TileNumberHardLimit; // 0x62c(0x04)
	int32_t PolyRefTileBits; // 0x630(0x04)
	int32_t PolyRefNavPolyBits; // 0x634(0x04)
	int32_t PolyRefSaltBits; // 0x638(0x04)
	struct FVector NavMeshOriginOffset; // 0x63c(0x0c)
	float DefaultDrawDistance; // 0x648(0x04)
	float DefaultMaxSearchNodes; // 0x64c(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x650(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x654(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x655(0x01)
	char pad_656[0x2]; // 0x656(0x02)
	int32_t RegionChunkSplits; // 0x658(0x04)
	int32_t LayerChunkSplits; // 0x65c(0x04)
	char bSortNavigationAreasByCost : 1; // 0x660(0x01)
	char bPerformVoxelFiltering : 1; // 0x660(0x01)
	char bMarkLowHeightAreas : 1; // 0x660(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x660(0x01)
	char bFilterLowSpanSequences : 1; // 0x660(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x660(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x660(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x660(0x01)
	char bStoreEmptyTileLayers : 1; // 0x661(0x01)
	char bUseVirtualFilters : 1; // 0x661(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x661(0x01)
	char bUseVoxelCache : 1; // 0x661(0x01)
	char pad_661_4 : 4; // 0x661(0x01)
	char pad_662[0x2]; // 0x662(0x02)
	float TileSetUpdateInterval; // 0x664(0x04)
	float HeuristicScale; // 0x668(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x66c(0x04)
	char pad_670[0x30]; // 0x670(0x30)
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x50 (Inherited: 0x40)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_40[0x10]; // 0x40(0x10)
};

