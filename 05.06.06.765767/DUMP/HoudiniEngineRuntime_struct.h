// Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8 {
	RawMesh = 0,
	FMeshDescription = 1,
	UHoudiniStaticMesh = 2,
	EHoudiniStaticMeshMethod_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8 {
	None = 0,
	Working = 1,
	Success = 2,
	FinishedWithError = 3,
	FinishedWithFatalError = 4,
	Aborted = 5,
	EHoudiniAssetStateResult_MAX = 6
};

// Enum HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8 {
	NeedInstantiation = 0,
	NewHDA = 1,
	PreInstantiation = 2,
	Instantiating = 3,
	PreCook = 4,
	Cooking = 5,
	PostCook = 6,
	PreProcess = 7,
	Processing = 8,
	None = 9,
	NeedRebuild = 10,
	NeedDelete = 11,
	Deleting = 12,
	ProcessTemplate = 13,
	EHoudiniAssetState_MAX = 14
};

// Enum HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : int32 {
	Invalid = -1,
	Vertex = 0,
	Point = 1,
	Prim = 2,
	Detail = 3,
	EAttribOwner_MAX = 4
};

// Enum HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : int32 {
	Invalid = -1,
	INT = 0,
	INT64 = 1,
	FLOAT = 2,
	FLOAT64 = 3,
	STRING = 4,
	EAttribStorageType_MAX = 5
};

// Enum HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : int32 {
	Invalid = -1,
	CVs = 0,
	Breakpoints = 1,
	Freehand = 2,
	EHoudiniCurveMethod_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : int32 {
	Invalid = -1,
	Polygon = 0,
	Nurbs = 1,
	Bezier = 2,
	Points = 3,
	EHoudiniCurveType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8 {
	Invalid = 0,
	ObjectInstancer = 1,
	PackedPrimitive = 2,
	AttributeInstancer = 3,
	OldSchoolAttributeInstancer = 4,
	EHoudiniInstancerType_MAX = 5
};

// Enum HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8 {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Curve = 3,
	Volume = 4,
	EHoudiniPartType_MAX = 5
};

// Enum HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8 {
	Invalid = 0,
	Default = 1,
	Intermediate = 2,
	Input = 3,
	Curve = 4,
	EHoudiniGeoType_MAX = 5
};

// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8 {
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3
};

// Enum HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8 {
	TX = 0,
	TY = 1,
	TZ = 2,
	RX = 3,
	RY = 4,
	RZ = 5,
	SX = 6,
	SY = 7,
	SZ = 8,
	COUNT = 9,
	EXformParameter_MAX = 10
};

// Enum HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8 {
	Invalid = 0,
	Object = 1,
	StaticMesh = 2,
	SkeletalMesh = 3,
	SceneComponent = 4,
	StaticMeshComponent = 5,
	InstancedStaticMeshComponent = 6,
	SplineComponent = 7,
	HoudiniSplineComponent = 8,
	HoudiniAssetComponent = 9,
	Actor = 10,
	Landscape = 11,
	Brush = 12,
	CameraComponent = 13,
	DataTable = 14,
	HoudiniAssetActor = 15,
	FoliageType_InstancedStaticMesh = 16,
	EHoudiniInputObjectType_MAX = 17
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8 {
	Heightfield = 0,
	Mesh = 1,
	Points = 2,
	EHoudiniLandscapeExportType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8 {
	None = 0,
	IntoThisObject = 1,
	Auto = 2,
	EHoudiniXformType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8 {
	Invalid = 0,
	Geometry = 1,
	Curve = 2,
	Asset = 3,
	Landscape = 4,
	World = 5,
	Skeletal = 6,
	EHoudiniInputType_MAX = 7
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8 {
	Detachment = 0,
	BakeToImage = 1,
	BakeToWorld = 2,
	InValid = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8 {
	UnrealSpline = 0,
	HoudiniSpline = 1,
	EHoudiniCurveOutputType_MAX = 2
};

// Enum HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8 {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Landscape = 3,
	Curve = 4,
	Skeletal = 5,
	EHoudiniOutputType_MAX = 6
};

// Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : int32 {
	InValid = -1,
	CONSTANT = 0,
	LINEAR = 1,
	CATMULL_ROM = 2,
	MONOTONE_CUBIC = 3,
	BEZIER = 4,
	BSPLINE = 5,
	HERMITE = 6,
	EHoudiniRampInterpolationType_MAX = 7
};

// Enum HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8 {
	Invalid = 0,
	Button = 1,
	ButtonStrip = 2,
	Color = 3,
	ColorRamp = 4,
	File = 5,
	FileDir = 6,
	FileGeo = 7,
	FileImage = 8,
	Float = 9,
	FloatRamp = 10,
	Folder = 11,
	FolderList = 12,
	Input = 13,
	Int = 14,
	IntChoice = 15,
	Label = 16,
	MultiParm = 17,
	Separator = 18,
	String = 19,
	StringChoice = 20,
	StringAssetRef = 21,
	Toggle = 22,
	EHoudiniParameterType_MAX = 23
};

// Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8 {
	Invalid = 0,
	Collapsible = 1,
	Simple = 2,
	Tabs = 3,
	Radio = 4,
	Other = 5,
	EHoudiniFolderParameterType_MAX = 6
};

// Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8 {
	None = 0,
	Inserted = 1,
	Removed = 2,
	Modified = 3,
	EHoudiniMultiParmModificationType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8 {
	None = 0,
	INITIALIZED = 1,
	POSITION_INSERTED = 2,
	VALUE_INSERTED = 3,
	INTERPTYPE_INSERTED = 4,
	EHoudiniRampPointConstructStatus_MAX = 5
};

// Enum HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8 {
	None = 0,
	ToLoad = 1,
	Loading = 2,
	Loaded = 3,
	ToDelete = 4,
	Deleting = 5,
	Deleted = 6,
	NotLoaded = 7,
	EPDGWorkResultState_MAX = 8
};

// Enum HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8 {
	None = 0,
	Dirtied = 1,
	Dirtying = 2,
	Cooking = 3,
	Cook_Complete = 4,
	Cook_Failed = 5,
	EPDGNodeState_MAX = 6
};

// Enum HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8 {
	Inactive = 0,
	Linking = 1,
	Linked = 2,
	Error_Not_Linked = 3,
	EPDGLinkState_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8 {
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Never = 2,
	HRSRF_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8 {
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_None = 3,
	HRSST_MAX = 4
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
// Size: 0x120 (Inherited: 0x68)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData {
	struct UHoudiniAsset* HoudiniAsset; // 0x68(0x08)
	int32_t AssetId; // 0x70(0x04)
	enum class EHoudiniAssetState AssetState; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	uint32_t SubAssetIndex; // 0x78(0x04)
	uint32_t AssetCookCount; // 0x7c(0x04)
	bool bHasBeenLoaded; // 0x80(0x01)
	bool bHasBeenDuplicated; // 0x81(0x01)
	bool bPendingDelete; // 0x82(0x01)
	bool bRecookRequested; // 0x83(0x01)
	bool bRebuildRequested; // 0x84(0x01)
	bool bEnableCooking; // 0x85(0x01)
	bool bForceNeedUpdate; // 0x86(0x01)
	bool bLastCookSuccess; // 0x87(0x01)
	struct FGuid ComponentGUID; // 0x88(0x10)
	struct FGuid HapiGUID; // 0x98(0x10)
	bool bRegisteredComponentTemplate; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString SourceName; // 0xb0(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs; // 0xc0(0x50)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x110(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
// Size: 0x40 (Inherited: 0x00)
struct FHoudiniOutputObjectIdentifier {
	int32_t ObjectId; // 0x00(0x04)
	int32_t GeoId; // 0x04(0x04)
	int32_t PartId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SplitIdentifier; // 0x10(0x10)
	struct FString PartName; // 0x20(0x10)
	int32_t PrimitiveIndex; // 0x30(0x04)
	int32_t PointIndex; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
// Size: 0xf0 (Inherited: 0x00)
struct FHoudiniAssetBlueprintOutput {
	int32_t OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FHoudiniOutputObject OutputObject; // 0x08(0xe8)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
// Size: 0xe8 (Inherited: 0x00)
struct FHoudiniOutputObject {
	struct UObject* OutputObject; // 0x00(0x08)
	struct UObject* OutputComponent; // 0x08(0x08)
	struct UObject* ProxyObject; // 0x10(0x08)
	struct UObject* ProxyComponent; // 0x18(0x08)
	bool bProxyIsCurrent; // 0x20(0x01)
	bool bIsImplicit; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString BakeName; // 0x28(0x10)
	struct FHoudiniCurveOutputProperties CurveOutputProperty; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FString, struct FString> CachedAttributes; // 0x48(0x50)
	struct TMap<struct FString, struct FString> CachedTokens; // 0x98(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
// Size: 0x0c (Inherited: 0x00)
struct FHoudiniCurveOutputProperties {
	enum class EHoudiniCurveOutputType CurveOutputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NumPoints; // 0x04(0x04)
	bool bClosed; // 0x08(0x01)
	enum class EHoudiniCurveType CurveType; // 0x09(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniGenericAttribute {
	struct FString AttributeName; // 0x00(0x10)
	enum class EAttribStorageType AttributeType; // 0x10(0x01)
	enum class EAttribOwner AttributeOwner; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t AttributeCount; // 0x14(0x04)
	int32_t AttributeTupleSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<double> DoubleValues; // 0x20(0x10)
	struct TArray<int64_t> IntValues; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
// Size: 0x220 (Inherited: 0x00)
struct FHoudiniGeoPartObject {
	int32_t AssetId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AssetName; // 0x08(0x10)
	int32_t ObjectId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ObjectName; // 0x20(0x10)
	int32_t GeoId; // 0x30(0x04)
	int32_t PartId; // 0x34(0x04)
	struct FString PartName; // 0x38(0x10)
	bool bHasCustomPartName; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FString> SplitGroups; // 0x50(0x10)
	struct FTransform TransformMatrix; // 0x60(0x30)
	struct FString NodePath; // 0x90(0x10)
	enum class EHoudiniPartType Type; // 0xa0(0x01)
	enum class EHoudiniInstancerType InstancerType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString VolumeName; // 0xa8(0x10)
	int32_t VolumeTileIndex; // 0xb8(0x04)
	bool bIsVisible; // 0xbc(0x01)
	bool bIsEditable; // 0xbd(0x01)
	bool bIsTemplated; // 0xbe(0x01)
	bool bIsInstanced; // 0xbf(0x01)
	bool bHasGeoChanged; // 0xc0(0x01)
	bool bHasPartChanged; // 0xc1(0x01)
	bool bHasTransformChanged; // 0xc2(0x01)
	bool bHasMaterialsChanged; // 0xc3(0x01)
	char pad_C4[0x14c]; // 0xc4(0x14c)
	struct TArray<struct FHoudiniMeshSocket> AllMeshSockets; // 0x210(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
// Size: 0x60 (Inherited: 0x00)
struct FHoudiniMeshSocket {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
// Size: 0x1c (Inherited: 0x00)
struct FHoudiniCurveInfo {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
// Size: 0x80 (Inherited: 0x00)
struct FHoudiniVolumeInfo {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
// Size: 0x48 (Inherited: 0x00)
struct FHoudiniPartInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
// Size: 0x30 (Inherited: 0x00)
struct FHoudiniGeoInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
// Size: 0x28 (Inherited: 0x00)
struct FHoudiniObjectInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
// Size: 0x70 (Inherited: 0x00)
struct FHoudiniBrushInfo {
	struct TWeakObjectPtr<struct ABrush> BrushActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform CachedTransform; // 0x10(0x30)
	struct FVector CachedOrigin; // 0x40(0x0c)
	struct FVector CachedExtent; // 0x4c(0x0c)
	enum class EBrushType CachedBrushType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	uint64_t CachedSurfaceHash; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniBakedOutput {
	struct TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects; // 0x00(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
// Size: 0x18 (Inherited: 0x00)
struct FHoudiniBakedOutputObjectIdentifier {
	int32_t PartId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SplitIdentifier; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
// Size: 0x70 (Inherited: 0x00)
struct FHoudiniBakedOutputObject {
	struct FString Actor; // 0x00(0x10)
	struct FString Blueprint; // 0x10(0x10)
	struct FName ActorBakeName; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString BakedObject; // 0x30(0x10)
	struct FString BakedComponent; // 0x40(0x10)
	struct TArray<struct FString> InstancedActors; // 0x50(0x10)
	struct TArray<struct FString> InstancedComponents; // 0x60(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
// Size: 0x80 (Inherited: 0x00)
struct FHoudiniInstancedOutput {
	struct TSoftObjectPtr<UObject> OriginalObject; // 0x00(0x30)
	int32_t OriginalObjectIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTransform> OriginalTransforms; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> VariationObjects; // 0x48(0x10)
	struct TArray<struct FTransform> VariationTransformOffsets; // 0x58(0x10)
	struct TArray<int32_t> TransformVariationIndices; // 0x68(0x10)
	bool bChanged; // 0x78(0x01)
	bool bStale; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
// Size: 0x10 (Inherited: 0x00)
struct FHoudiniPDGWorkResultObjectBakedOutput {
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x00(0x10)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
// Size: 0x08 (Inherited: 0x00)
struct FWorkItemTallyBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
// Size: 0x28 (Inherited: 0x08)
struct FAggregatedWorkItemTally : FWorkItemTallyBase {
	int32_t TotalWorkItems; // 0x08(0x04)
	int32_t WaitingWorkItems; // 0x0c(0x04)
	int32_t ScheduledWorkItems; // 0x10(0x04)
	int32_t CookingWorkItems; // 0x14(0x04)
	int32_t CookedWorkItems; // 0x18(0x04)
	int32_t ErroredWorkItems; // 0x1c(0x04)
	int32_t CookCancelledWorkItems; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTally
// Size: 0x238 (Inherited: 0x08)
struct FWorkItemTally : FWorkItemTallyBase {
	struct TSet<int32_t> AllWorkItems; // 0x08(0x50)
	struct TSet<int32_t> WaitingWorkItems; // 0x58(0x50)
	struct TSet<int32_t> ScheduledWorkItems; // 0xa8(0x50)
	struct TSet<int32_t> CookingWorkItems; // 0xf8(0x50)
	struct TSet<int32_t> CookedWorkItems; // 0x148(0x50)
	struct TSet<int32_t> ErroredWorkItems; // 0x198(0x50)
	struct TSet<int32_t> CookCancelledWorkItems; // 0x1e8(0x50)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
// Size: 0x18 (Inherited: 0x00)
struct FTOPWorkResult {
	int32_t WorkItemIndex; // 0x00(0x04)
	int32_t WorkItemID; // 0x04(0x04)
	struct TArray<struct FTOPWorkResultObject> ResultObjects; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
// Size: 0x68 (Inherited: 0x00)
struct FTOPWorkResultObject {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString FilePath; // 0x18(0x10)
	enum class EPDGWorkResultState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t WorkItemResultInfoIndex; // 0x2c(0x04)
	struct TArray<struct UHoudiniOutput*> ResultOutputs; // 0x30(0x10)
	bool bAutoBakedSinceLastLoad; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UObject*> OutputObjectsToDelete; // 0x48(0x10)
	struct FOutputActorOwner OutputActorOwner; // 0x58(0x10)
};

// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
// Size: 0x10 (Inherited: 0x00)
struct FOutputActorOwner {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OutputActor; // 0x08(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
// Size: 0x1b0 (Inherited: 0x00)
struct FHoudiniStaticMeshGenerationProperties {
	char bGeneratedDoubleSidedGeometry : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x08(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x10(0x160)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t GeneratedLightMapResolution; // 0x174(0x04)
	float GeneratedLpvBiasMultiplier; // 0x178(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x17c(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x18c(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x190(0x01)
	char pad_190_1 : 7; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x194(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x198(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x1a0(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
// Size: 0x98 (Inherited: 0x68)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData {
	struct TArray<struct FTransform> CurvePoints; // 0x68(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x78(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x88(0x10)
};

