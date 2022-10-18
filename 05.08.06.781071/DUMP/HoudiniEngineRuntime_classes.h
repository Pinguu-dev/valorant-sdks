// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString AssetFileName; // 0x30(0x10)
	struct TArray<char> AssetBytes; // 0x40(0x10)
	uint32_t AssetBytesCount; // 0x50(0x04)
	bool bAssetLimitedCommercial; // 0x54(0x01)
	bool bAssetNonCommercial; // 0x55(0x01)
	bool bAssetExpanded; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3d0(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x990 (Inherited: 0x550)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	struct UHoudiniAsset* HoudiniAsset; // 0x550(0x08)
	bool bCookOnParameterChange; // 0x558(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x559(0x01)
	bool bCookOnTransformChange; // 0x55a(0x01)
	bool bCookOnAssetInputCook; // 0x55b(0x01)
	bool bOutputless; // 0x55c(0x01)
	bool bOutputTemplateGeos; // 0x55d(0x01)
	char pad_55E[0x2]; // 0x55e(0x02)
	struct FDirectoryPath TemporaryCookFolder; // 0x560(0x10)
	struct FDirectoryPath BakeFolder; // 0x570(0x10)
	enum class EHoudiniStaticMeshMethod StaticMeshMethod; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties; // 0x588(0x1b0)
	struct FMeshBuildSettings StaticMeshBuildSettings; // 0x738(0x30)
	bool bOverrideGlobalProxyStaticMeshSettings; // 0x768(0x01)
	bool bEnableProxyStaticMeshOverride; // 0x769(0x01)
	bool bEnableProxyStaticMeshRefinementByTimerOverride; // 0x76a(0x01)
	char pad_76B[0x1]; // 0x76b(0x01)
	float ProxyMeshAutoRefineTimeoutSecondsOverride; // 0x76c(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x770(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x771(0x01)
	char pad_772[0x2]; // 0x772(0x02)
	int32_t AssetId; // 0x774(0x04)
	struct TSet<struct UHoudiniAssetComponent*> DownstreamHoudiniAssets; // 0x778(0x50)
	struct FGuid ComponentGUID; // 0x7c8(0x10)
	struct FGuid HapiGUID; // 0x7d8(0x10)
	struct FString HapiAssetName; // 0x7e8(0x10)
	enum class EHoudiniAssetState AssetState; // 0x7f8(0x01)
	enum class EHoudiniAssetState DebugLastAssetState; // 0x7f9(0x01)
	enum class EHoudiniAssetStateResult AssetStateResult; // 0x7fa(0x01)
	char pad_7FB[0x1]; // 0x7fb(0x01)
	uint32_t SubAssetIndex; // 0x7fc(0x04)
	int32_t AssetCookCount; // 0x800(0x04)
	bool bHasBeenLoaded; // 0x804(0x01)
	bool bHasBeenDuplicated; // 0x805(0x01)
	bool bPendingDelete; // 0x806(0x01)
	bool bRecookRequested; // 0x807(0x01)
	bool bRebuildRequested; // 0x808(0x01)
	bool bEnableCooking; // 0x809(0x01)
	bool bForceNeedUpdate; // 0x80a(0x01)
	bool bLastCookSuccess; // 0x80b(0x01)
	bool bParameterDefinitionUpdateNeeded; // 0x80c(0x01)
	bool bBlueprintStructureModified; // 0x80d(0x01)
	bool bBlueprintModified; // 0x80e(0x01)
	char pad_80F[0x1]; // 0x80f(0x01)
	struct TArray<struct UHoudiniParameter*> Parameters; // 0x810(0x10)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x820(0x10)
	struct TArray<struct UHoudiniOutput*> Outputs; // 0x830(0x10)
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x840(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> UntrackedOutputs; // 0x850(0x10)
	struct TArray<struct UHoudiniHandleComponent*> HandleComponents; // 0x860(0x10)
	bool bHasComponentTransformChanged; // 0x870(0x01)
	bool bFullyLoaded; // 0x871(0x01)
	char pad_872[0x6]; // 0x872(0x06)
	struct UHoudiniPDGAssetLink* PDGAssetLink; // 0x878(0x08)
	struct FTimerHandle RefineMeshesTimer; // 0x880(0x08)
	char pad_888[0x18]; // 0x888(0x18)
	bool bNoProxyMeshNextCookRequested; // 0x8a0(0x01)
	char pad_8A1[0x7]; // 0x8a1(0x07)
	struct TMap<struct UObject*, int32_t> InputPresets; // 0x8a8(0x50)
	bool bBakeAfterNextCook; // 0x8f8(0x01)
	char pad_8F9[0x5f]; // 0x8f9(0x5f)
	bool bCachedIsPreview; // 0x958(0x01)
	char pad_959[0xf]; // 0x959(0x0f)
	double LastTickTime; // 0x968(0x08)
	char pad_970[0x20]; // 0x970(0x20)
};

// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// Size: 0xa80 (Inherited: 0x990)
struct UHoudiniAssetBlueprintComponent : UHoudiniAssetComponent {
	char pad_990[0x40]; // 0x990(0x40)
	bool FauxBPProperty; // 0x9d0(0x01)
	bool bHoudiniAssetChanged; // 0x9d1(0x01)
	bool bUpdatedFromTemplate; // 0x9d2(0x01)
	bool bIsInBlueprintEditor; // 0x9d3(0x01)
	bool bCanDeleteHoudiniNodes; // 0x9d4(0x01)
	bool bHasRegisteredComponentTemplate; // 0x9d5(0x01)
	char pad_9D6[0xa]; // 0x9d6(0x0a)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes; // 0x9e0(0x50)
	struct TMap<struct FGuid, struct FGuid> CachedInputNodes; // 0xa30(0x50)

	void SetToggleValueAt(struct FString Name, bool Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt // (Final|Native|Public|BlueprintCallable) // @ game+0x223e630
	void SetFloatParameter(struct FString Name, float Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x223e4b0
	bool HasParameter(struct FString Name); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x223e3a0
};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0x88 (Inherited: 0x30)
struct UHoudiniAssetParameter : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xc0 (Inherited: 0x88)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter {
	char pad_88[0x38]; // 0x88(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xb0 (Inherited: 0x88)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter {
	char pad_88[0x28]; // 0x88(0x28)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xc0 (Inherited: 0x88)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter {
	char pad_88[0x38]; // 0x88(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xb8 (Inherited: 0x88)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter {
	char pad_88[0x30]; // 0x88(0x30)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0x90 (Inherited: 0x88)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0xa0 (Inherited: 0x88)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameter {
	char pad_88[0x18]; // 0x88(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// Size: 0xd0 (Inherited: 0x30)
struct UHoudiniAssetComponentMaterials_V1 : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// Size: 0x320 (Inherited: 0x290)
struct UHoudiniHandleComponent_V1 : USceneComponent {
	char pad_290[0x90]; // 0x290(0x90)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// Size: 0x380 (Inherited: 0x290)
struct UHoudiniSplineComponent_V1 : USceneComponent {
	char pad_290[0xf0]; // 0x290(0xf0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x1b0 (Inherited: 0x88)
struct UHoudiniAssetInput : UHoudiniAssetParameter {
	char pad_88[0x128]; // 0x88(0x128)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x170 (Inherited: 0x88)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter {
	char pad_88[0xe8]; // 0x88(0xe8)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x190 (Inherited: 0x30)
struct UHoudiniAssetInstanceInputField : UObject {
	char pad_30[0x160]; // 0x30(0x160)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// Size: 0xa70 (Inherited: 0x550)
struct UHoudiniAssetComponent_V1 : UPrimitiveComponent {
	char bGeneratedDoubleSidedGeometry : 1; // 0x548(0x01)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x550(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x558(0x160)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x6b8(0x01)
	char pad_6B9_1 : 7; // 0x6b9(0x01)
	char pad_6BA[0x2]; // 0x6ba(0x02)
	int32_t GeneratedLightMapResolution; // 0x6bc(0x04)
	float GeneratedLpvBiasMultiplier; // 0x6c0(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x6c4(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x6c8(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x6d8(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x6dc(0x01)
	char pad_6DC_1 : 7; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x6e0(0x04)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x6e8(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x6f0(0x10)
	struct FText BakeFolder; // 0x700(0x18)
	struct FText TempCookFolder; // 0x718(0x18)
	char pad_730[0x340]; // 0x730(0x340)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// Size: 0x2a0 (Inherited: 0x290)
struct UHoudiniInstancedActorComponent_V1 : USceneComponent {
	char pad_290[0x10]; // 0x290(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// Size: 0x2b0 (Inherited: 0x290)
struct UHoudiniMeshSplitInstancerComponent_V1 : USceneComponent {
	char pad_290[0x20]; // 0x290(0x20)
};

// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// Size: 0x30 (Inherited: 0x30)
struct UHoudiniEngineCopyPropertiesInterface : UInterface {
};

// Class HoudiniEngineRuntime.HoudiniHandleParameter
// Size: 0x40 (Inherited: 0x30)
struct UHoudiniHandleParameter : UObject {
	struct UHoudiniParameter* AssetParameter; // 0x30(0x08)
	int32_t TupleIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UHoudiniHandleComponent : USceneComponent {
	struct TArray<struct UHoudiniHandleParameter*> XformParms; // 0x288(0x10)
	struct UHoudiniHandleParameter* RSTParm; // 0x298(0x08)
	struct UHoudiniHandleParameter* RotOrderParm; // 0x2a0(0x08)
	enum class EHoudiniHandleType HandleType; // 0x2a8(0x01)
	struct FString HandleName; // 0x2b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInput
// Size: 0x160 (Inherited: 0x30)
struct UHoudiniInput : UObject {
	struct FString Name; // 0x30(0x10)
	struct FString Label; // 0x40(0x10)
	enum class EHoudiniInputType Type; // 0x50(0x01)
	enum class EHoudiniInputType PreviousType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t AssetNodeId; // 0x54(0x04)
	int32_t InputNodeId; // 0x58(0x04)
	int32_t InputIndex; // 0x5c(0x04)
	int32_t ParmId; // 0x60(0x04)
	bool bIsObjectPathParameter; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<int32_t> CreatedDataNodeIds; // 0x68(0x10)
	bool bHasChanged; // 0x78(0x01)
	bool bNeedsToTriggerUpdate; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FString Help; // 0x80(0x10)
	enum class EHoudiniXformType KeepWorldTransform; // 0x90(0x01)
	bool bPackBeforeMerge; // 0x91(0x01)
	bool bImportAsReference; // 0x92(0x01)
	bool bExportLODs; // 0x93(0x01)
	bool bExportSockets; // 0x94(0x01)
	bool bExportColliders; // 0x95(0x01)
	bool bCookOnCurveChanged; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	struct TArray<struct UHoudiniInputObject*> GeometryInputObjects; // 0x98(0x10)
	bool bStaticMeshChanged; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct UHoudiniInputObject*> AssetInputObjects; // 0xb0(0x10)
	bool bInputAssetConnectedInHoudini; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UHoudiniInputObject*> CurveInputObjects; // 0xc8(0x10)
	float DefaultCurveOffset; // 0xd8(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct TArray<struct UHoudiniInputObject*> LandscapeInputObjects; // 0xe0(0x10)
	bool bLandscapeHasExportTypeChanged; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct UHoudiniInputObject*> WorldInputObjects; // 0xf8(0x10)
	struct TArray<struct AActor*> WorldInputBoundSelectorObjects; // 0x108(0x10)
	bool bIsWorldInputBoundSelector; // 0x118(0x01)
	bool bWorldInputBoundSelectorAutoUpdate; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float UnrealSplineResolution; // 0x11c(0x04)
	struct TArray<struct UHoudiniInputObject*> SkeletalInputObjects; // 0x120(0x10)
	struct TArray<struct UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs; // 0x130(0x10)
	struct TArray<struct UHoudiniInputObject*> LastUndoDeletedInputs; // 0x140(0x10)
	bool bUpdateInputLandscape; // 0x150(0x01)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x151(0x01)
	bool bLandscapeExportSelectionOnly; // 0x152(0x01)
	bool bLandscapeAutoSelectComponent; // 0x153(0x01)
	bool bLandscapeExportMaterials; // 0x154(0x01)
	bool bLandscapeExportLighting; // 0x155(0x01)
	bool bLandscapeExportNormalizedUVs; // 0x156(0x01)
	bool bLandscapeExportTileUVs; // 0x157(0x01)
	bool bCanDeleteHoudiniNodes; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// Class HoudiniEngineRuntime.HoudiniInputObject
// Size: 0xc0 (Inherited: 0x30)
struct UHoudiniInputObject : UObject {
	struct TSoftObjectPtr<UObject> InputObject; // 0x30(0x30)
	struct FTransform Transform; // 0x60(0x30)
	enum class EHoudiniInputObjectType Type; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t InputNodeId; // 0x94(0x04)
	int32_t InputObjectNodeId; // 0x98(0x04)
	struct FGuid Guid; // 0x9c(0x10)
	bool bHasChanged; // 0xac(0x01)
	bool bNeedsToTriggerUpdate; // 0xad(0x01)
	bool bTransformChanged; // 0xae(0x01)
	bool bImportAsReference; // 0xaf(0x01)
	bool bCanDeleteHoudiniNodes; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// Size: 0xd0 (Inherited: 0xc0)
struct UHoudiniInputStaticMesh : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputStaticMesh*> BlueprintStaticMeshes; // 0xb8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// Size: 0xc0 (Inherited: 0xc0)
struct UHoudiniInputSkeletalMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// Size: 0xf0 (Inherited: 0xc0)
struct UHoudiniInputSceneComponent : UHoudiniInputObject {
	struct FTransform ActorTransform; // 0xc0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// Size: 0x130 (Inherited: 0xf0)
struct UHoudiniInputMeshComponent : UHoudiniInputSceneComponent {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0xf0(0x30)
	struct TArray<struct FString> MeshComponentsMaterials; // 0x120(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// Size: 0x140 (Inherited: 0x130)
struct UHoudiniInputInstancedMeshComponent : UHoudiniInputMeshComponent {
	struct TArray<struct FTransform> InstanceTransforms; // 0x130(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// Size: 0x110 (Inherited: 0xf0)
struct UHoudiniInputSplineComponent : UHoudiniInputSceneComponent {
	int32_t NumberOfSplineControlPoints; // 0xf0(0x04)
	float SplineLength; // 0xf4(0x04)
	float SplineResolution; // 0xf8(0x04)
	bool SplineClosed; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct TArray<struct FTransform> SplineControlPoints; // 0x100(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UHoudiniInputHoudiniSplineComponent : UHoudiniInputObject {
	enum class EHoudiniCurveType CurveType; // 0xb8(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0xb9(0x01)
	bool Reversed; // 0xba(0x01)
	struct UHoudiniSplineComponent* CachedComponent; // 0xc0(0x08)
	char pad_CB[0x5]; // 0xcb(0x05)
};

// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// Size: 0x110 (Inherited: 0xf0)
struct UHoudiniInputCameraComponent : UHoudiniInputSceneComponent {
	float FOV; // 0xf0(0x04)
	float AspectRatio; // 0xf4(0x04)
	bool bIsOrthographic; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float OrthoWidth; // 0xfc(0x04)
	float OrthoNearClipPlane; // 0x100(0x04)
	float OrthoFarClipPlane; // 0x104(0x04)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// Size: 0xc0 (Inherited: 0xc0)
struct UHoudiniInputHoudiniAsset : UHoudiniInputObject {
	int32_t AssetOutputIndex; // 0xb8(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputActor
// Size: 0x120 (Inherited: 0xc0)
struct UHoudiniInputActor : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputSceneComponent*> ActorComponents; // 0xb8(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> ActorSceneComponents; // 0xc8(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x118(0x04)
	int32_t LastUpdateNumComponentsRemoved; // 0x11c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputLandscape
// Size: 0x150 (Inherited: 0x120)
struct UHoudiniInputLandscape : UHoudiniInputActor {
	struct FTransform CachedInputLandscapeTraqnsform; // 0x120(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputBrush
// Size: 0x140 (Inherited: 0x120)
struct UHoudiniInputBrush : UHoudiniInputActor {
	struct TArray<struct FHoudiniBrushInfo> BrushesInfo; // 0x120(0x10)
	struct UModel* CombinedModel; // 0x130(0x08)
	bool bIgnoreInputObject; // 0x138(0x01)
	enum class EBrushType CachedInputBrushType; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
};

// Class HoudiniEngineRuntime.HoudiniInputDataTable
// Size: 0xc0 (Inherited: 0xc0)
struct UHoudiniInputDataTable : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// Size: 0xd0 (Inherited: 0xd0)
struct UHoudiniInputFoliageType_InstancedStaticMesh : UHoudiniInputStaticMesh {
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x2a0 (Inherited: 0x290)
struct UHoudiniInstancedActorComponent : USceneComponent {
	struct UObject* InstancedObject; // 0x288(0x08)
	struct TArray<struct AActor*> InstancedActors; // 0x290(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x2b0 (Inherited: 0x290)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x288(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x298(0x10)
	struct UStaticMesh* InstancedMesh; // 0x2a8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// Size: 0x68 (Inherited: 0x30)
struct UHoudiniLandscapePtr : UObject {
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x30(0x30)
	enum class EHoudiniLandscapeOutputBakeType BakeType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
// Size: 0x70 (Inherited: 0x30)
struct UHoudiniLandscapeEditLayer : UObject {
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x30(0x30)
	struct FString LayerName; // 0x60(0x10)
};

// Class HoudiniEngineRuntime.HoudiniOutput
// Size: 0x1b8 (Inherited: 0x30)
struct UHoudiniOutput : UObject {
	enum class EHoudiniOutputType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FHoudiniGeoPartObject> HoudiniGeoPartObjects; // 0x38(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects; // 0x48(0x50)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs; // 0x98(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> AssignementMaterials; // 0xe8(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> ReplacementMaterials; // 0x138(0x50)
	char pad_188[0x4]; // 0x188(0x04)
	bool bLandscapeWorldComposition; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct TArray<struct AActor*> HoudiniCreatedSocketActors; // 0x190(0x10)
	struct TArray<struct AActor*> HoudiniAttachedSocketActors; // 0x1a0(0x10)
	bool bIsEditableNode; // 0x1b0(0x01)
	bool bHasEditableNodeBuilt; // 0x1b1(0x01)
	bool bIsUpdating; // 0x1b2(0x01)
	bool bCanDeleteHoudiniNodes; // 0x1b3(0x01)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameter
// Size: 0x110 (Inherited: 0x30)
struct UHoudiniParameter : UObject {
	struct FString Name; // 0x30(0x10)
	struct FString Label; // 0x40(0x10)
	enum class EHoudiniParameterType ParmType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	uint32_t TupleSize; // 0x54(0x04)
	int32_t NodeId; // 0x58(0x04)
	int32_t ParmId; // 0x5c(0x04)
	int32_t ParentParmId; // 0x60(0x04)
	int32_t ChildIndex; // 0x64(0x04)
	bool bIsVisible; // 0x68(0x01)
	bool bIsDisabled; // 0x69(0x01)
	bool bHasChanged; // 0x6a(0x01)
	bool bNeedsToTriggerUpdate; // 0x6b(0x01)
	bool bIsDefault; // 0x6c(0x01)
	bool bIsSpare; // 0x6d(0x01)
	bool bJoinNext; // 0x6e(0x01)
	bool bIsChildOfMultiParm; // 0x6f(0x01)
	bool bIsDirectChildOfMultiParm; // 0x70(0x01)
	bool bPendingRevertToDefault; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<int32_t> TuplePendingRevertToDefault; // 0x78(0x10)
	struct FString Help; // 0x88(0x10)
	uint32_t TagCount; // 0x98(0x04)
	int32_t ValueIndex; // 0x9c(0x04)
	bool bHasExpression; // 0xa0(0x01)
	bool bShowExpression; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString ParamExpression; // 0xa8(0x10)
	struct TMap<struct FString, struct FString> Tags; // 0xb8(0x50)
	bool bAutoUpdate; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterButton
// Size: 0x110 (Inherited: 0x110)
struct UHoudiniParameterButton : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// Size: 0x138 (Inherited: 0x110)
struct UHoudiniParameterButtonStrip : UHoudiniParameter {
	int32_t Count; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FString> Labels; // 0x118(0x10)
	struct TArray<int32_t> Values; // 0x128(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterChoice
// Size: 0x170 (Inherited: 0x110)
struct UHoudiniParameterChoice : UHoudiniParameter {
	int32_t IntValue; // 0x110(0x04)
	int32_t DefaultIntValue; // 0x114(0x04)
	struct FString StringValue; // 0x118(0x10)
	struct FString DefaultStringValue; // 0x128(0x10)
	struct TArray<struct FString> StringChoiceValues; // 0x138(0x10)
	struct TArray<struct FString> StringChoiceLabels; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
	bool bIsChildOfRamp; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterColor
// Size: 0x138 (Inherited: 0x110)
struct UHoudiniParameterColor : UHoudiniParameter {
	struct FLinearColor Color; // 0x110(0x10)
	struct FLinearColor DefaultColor; // 0x120(0x10)
	bool bIsChildOfRamp; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFile
// Size: 0x148 (Inherited: 0x110)
struct UHoudiniParameterFile : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x110(0x10)
	struct TArray<struct FString> DefaultValues; // 0x120(0x10)
	struct FString Filters; // 0x130(0x10)
	bool bIsReadOnly; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFloat
// Size: 0x160 (Inherited: 0x110)
struct UHoudiniParameterFloat : UHoudiniParameter {
	struct TArray<float> Values; // 0x110(0x10)
	struct TArray<float> DefaultValues; // 0x120(0x10)
	struct FString Unit; // 0x130(0x10)
	bool bNoSwap; // 0x140(0x01)
	bool bHasMin; // 0x141(0x01)
	bool bHasMax; // 0x142(0x01)
	bool bHasUIMin; // 0x143(0x01)
	bool bHasUIMax; // 0x144(0x01)
	bool bIsLogarithmic; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float Min; // 0x148(0x04)
	float Max; // 0x14c(0x04)
	float UIMin; // 0x150(0x04)
	float UIMax; // 0x154(0x04)
	bool bIsChildOfRamp; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolder
// Size: 0x120 (Inherited: 0x110)
struct UHoudiniParameterFolder : UHoudiniParameter {
	enum class EHoudiniFolderParameterType FolderType; // 0x110(0x01)
	bool bExpanded; // 0x111(0x01)
	bool bChosen; // 0x112(0x01)
	char pad_113[0x1]; // 0x113(0x01)
	int32_t ChildCounter; // 0x114(0x04)
	bool bIsContentShown; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// Size: 0x128 (Inherited: 0x110)
struct UHoudiniParameterFolderList : UHoudiniParameter {
	bool bIsTabMenu; // 0x110(0x01)
	bool bIsTabsShown; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct TArray<struct UHoudiniParameterFolder*> TabFolders; // 0x118(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterInt
// Size: 0x158 (Inherited: 0x110)
struct UHoudiniParameterInt : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x110(0x10)
	struct TArray<int32_t> DefaultValues; // 0x120(0x10)
	struct FString Unit; // 0x130(0x10)
	bool bHasMin; // 0x140(0x01)
	bool bHasMax; // 0x141(0x01)
	bool bHasUIMin; // 0x142(0x01)
	bool bHasUIMax; // 0x143(0x01)
	bool bIsLogarithmic; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	int32_t Min; // 0x148(0x04)
	int32_t Max; // 0x14c(0x04)
	int32_t UIMin; // 0x150(0x04)
	int32_t UIMax; // 0x154(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterLabel
// Size: 0x120 (Inherited: 0x110)
struct UHoudiniParameterLabel : UHoudiniParameter {
	struct TArray<struct FString> LabelStrings; // 0x110(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// Size: 0x158 (Inherited: 0x110)
struct UHoudiniParameterMultiParm : UHoudiniParameter {
	bool bIsShown; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t Value; // 0x114(0x04)
	struct FString TemplateName; // 0x118(0x10)
	int32_t MultiparmValue; // 0x128(0x04)
	uint32_t MultiParmInstanceNum; // 0x12c(0x04)
	uint32_t MultiParmInstanceLength; // 0x130(0x04)
	uint32_t MultiParmInstanceCount; // 0x134(0x04)
	uint32_t InstanceStartOffset; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray; // 0x140(0x10)
	int32_t DefaultInstanceCount; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// Size: 0x118 (Inherited: 0x110)
struct UHoudiniParameterOperatorPath : UHoudiniParameter {
	struct TWeakObjectPtr<struct UHoudiniInput> HoudiniInput; // 0x110(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniParameterRampModificationEvent : UObject {
	bool bIsInsertEvent; // 0x30(0x01)
	bool bIsFloatRamp; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t DeleteInstanceIndex; // 0x34(0x04)
	float InsertPosition; // 0x38(0x04)
	float InsertFloat; // 0x3c(0x04)
	struct FLinearColor InsertColor; // 0x40(0x10)
	enum class EHoudiniRampInterpolationType InsertInterpolation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniParameterRampFloatPoint : UObject {
	float Position; // 0x30(0x04)
	float Value; // 0x34(0x04)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t InstanceIndex; // 0x3c(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x40(0x08)
	struct UHoudiniParameterFloat* ValueParentParm; // 0x48(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x50(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// Size: 0x68 (Inherited: 0x30)
struct UHoudiniParameterRampColorPoint : UObject {
	float Position; // 0x30(0x04)
	struct FLinearColor Value; // 0x34(0x10)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t InstanceIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x50(0x08)
	struct UHoudiniParameterColor* ValueParentParm; // 0x58(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x60(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// Size: 0x1c0 (Inherited: 0x158)
struct UHoudiniParameterRampFloat : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampFloatPoint*> Points; // 0x158(0x10)
	struct TArray<struct UHoudiniParameterRampFloatPoint*> CachedPoints; // 0x168(0x10)
	struct TArray<float> DefaultPositions; // 0x178(0x10)
	struct TArray<float> DefaultValues; // 0x188(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x198(0x10)
	int32_t NumDefaultPoints; // 0x1a8(0x04)
	bool bCaching; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// Size: 0x1c8 (Inherited: 0x158)
struct UHoudiniParameterRampColor : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampColorPoint*> Points; // 0x158(0x10)
	bool bCaching; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct UHoudiniParameterRampColorPoint*> CachedPoints; // 0x170(0x10)
	struct TArray<float> DefaultPositions; // 0x180(0x10)
	struct TArray<struct FLinearColor> DefaultValues; // 0x190(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x1a0(0x10)
	int32_t NumDefaultPoints; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// Size: 0x110 (Inherited: 0x110)
struct UHoudiniParameterSeparator : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterString
// Size: 0x148 (Inherited: 0x110)
struct UHoudiniParameterString : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x110(0x10)
	struct TArray<struct FString> DefaultValues; // 0x120(0x10)
	struct TArray<struct UObject*> ChosenAssets; // 0x130(0x10)
	bool bIsAssetRef; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterToggle
// Size: 0x130 (Inherited: 0x110)
struct UHoudiniParameterToggle : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x110(0x10)
	struct TArray<int32_t> DefaultValues; // 0x120(0x10)
};

// Class HoudiniEngineRuntime.TOPNode
// Size: 0x430 (Inherited: 0x30)
struct UTOPNode : UObject {
	int32_t NodeId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NodeName; // 0x38(0x10)
	struct FString NodePath; // 0x48(0x10)
	struct FString ParentName; // 0x58(0x10)
	struct UObject* WorkResultParent; // 0x68(0x08)
	struct TArray<struct FTOPWorkResult> WorkResult; // 0x70(0x10)
	bool bHidden; // 0x80(0x01)
	bool bAutoLoad; // 0x81(0x01)
	enum class EPDGNodeState NodeState; // 0x82(0x01)
	bool bCachedHaveNotLoadedWorkResults; // 0x83(0x01)
	bool bCachedHaveLoadedWorkResults; // 0x84(0x01)
	bool bHasChildNodes; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct TSet<struct FString> ClearedLandscapeLayers; // 0x88(0x50)
	char pad_D8[0x88]; // 0xd8(0x88)
	bool bShow; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x168(0x50)
	struct FWorkItemTally WorkItemTally; // 0x1b8(0x238)
	struct FAggregatedWorkItemTally AggregatedWorkItemTally; // 0x3f0(0x28)
	bool bHasReceivedCookCompleteEvent; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FOutputActorOwner OutputActorOwner; // 0x420(0x10)
};

// Class HoudiniEngineRuntime.TOPNetwork
// Size: 0xa0 (Inherited: 0x30)
struct UTOPNetwork : UObject {
	int32_t NodeId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NodeName; // 0x38(0x10)
	struct FString NodePath; // 0x48(0x10)
	struct TArray<struct UTOPNode*> AllTOPNodes; // 0x58(0x10)
	int32_t SelectedTOPIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString ParentName; // 0x70(0x10)
	bool bShowResults; // 0x80(0x01)
	bool bAutoLoadResults; // 0x81(0x01)
	char pad_82[0x1e]; // 0x82(0x1e)
};

// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// Size: 0x138 (Inherited: 0x30)
struct UHoudiniPDGAssetLink : UObject {
	struct FString AssetName; // 0x30(0x10)
	struct FString AssetNodePath; // 0x40(0x10)
	int32_t AssetId; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct UTOPNetwork*> AllTOPNetworks; // 0x58(0x10)
	int32_t SelectedTOPNetworkIndex; // 0x68(0x04)
	enum class EPDGLinkState LinkState; // 0x6c(0x01)
	bool bAutoCook; // 0x6d(0x01)
	bool bUseTOPNodeFilter; // 0x6e(0x01)
	bool bUseTOPOutputFilter; // 0x6f(0x01)
	struct FString TOPNodeFilter; // 0x70(0x10)
	struct FString TOPOutputFilter; // 0x80(0x10)
	int32_t NumWorkitems; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FAggregatedWorkItemTally WorkItemTally; // 0x98(0x28)
	struct FString OutputCachePath; // 0xc0(0x10)
	bool bNeedsUIRefresh; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct AActor* OutputParentActor; // 0xd8(0x08)
	struct FDirectoryPath BakeFolder; // 0xe0(0x10)
	char pad_F0[0x48]; // 0xf0(0x48)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x300 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServerHost; // 0x38(0x10)
	int32_t ServerPort; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ServerPipeName; // 0x50(0x10)
	bool bStartAutomaticServer; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AutomaticServerTimeout; // 0x64(0x04)
	bool bSyncWithHoudiniCook; // 0x68(0x01)
	bool bCookUsingHoudiniTime; // 0x69(0x01)
	bool bSyncViewport; // 0x6a(0x01)
	bool bSyncHoudiniViewport; // 0x6b(0x01)
	bool bSyncUnrealViewport; // 0x6c(0x01)
	bool bShowMultiAssetDialog; // 0x6d(0x01)
	bool bPreferHdaMemoryCopyOverHdaSourceFile; // 0x6e(0x01)
	bool bPauseCookingOnStart; // 0x6f(0x01)
	bool bDisplaySlateCookingNotifications; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString DefaultTemporaryCookFolder; // 0x78(0x10)
	struct FString DefaultBakeFolder; // 0x88(0x10)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x98(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x99(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x9a(0x01)
	char pad_9B[0x1]; // 0x9b(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x9c(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0xa0(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float MarshallingSplineResolution; // 0xa8(0x04)
	bool bEnableProxyStaticMesh; // 0xac(0x01)
	bool bShowDefaultMesh; // 0xad(0x01)
	bool bEnableProxyStaticMeshRefinementByTimer; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	float ProxyMeshAutoRefineTimeoutSeconds; // 0xb0(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld; // 0xb4(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	char bDoubleSidedGeometry : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UPhysicalMaterial* PhysMaterial; // 0xc0(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0xc8(0x160)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t LightMapResolution; // 0x22c(0x04)
	float LpvBiasMultiplier; // 0x230(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x234(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x238(0x10)
	int32_t LightMapCoordinateIndex; // 0x248(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float StreamingDistanceMultiplier; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x258(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x260(0x10)
	bool bUseFullPrecisionUVs; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t SrcLightmapIndex; // 0x274(0x04)
	int32_t DstLightmapIndex; // 0x278(0x04)
	int32_t MinLightmapResolution; // 0x27c(0x04)
	bool bRemoveDegenerates; // 0x280(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x281(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x282(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x283(0x01)
	bool bUseMikkTSpace; // 0x284(0x01)
	bool bBuildAdjacencyBuffer; // 0x285(0x01)
	char bComputeWeightedNormals : 1; // 0x286(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x286(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x286(0x01)
	char pad_286_3 : 5; // 0x286(0x01)
	char pad_287[0x1]; // 0x287(0x01)
	float DistanceFieldResolutionScale; // 0x288(0x04)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x28c(0x01)
	char bSupportFaceRemap : 1; // 0x28c(0x01)
	char pad_28C_2 : 6; // 0x28c(0x01)
	bool bPDGAsyncCommandletImportEnabled; // 0x28d(0x01)
	bool bEnableBackwardCompatibility; // 0x28e(0x01)
	bool bAutomaticLegacyHDARebuild; // 0x28f(0x01)
	bool bUseCustomHoudiniLocation; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FDirectoryPath CustomHoudiniLocation; // 0x298(0x10)
	int32_t CookingThreadStackSize; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x2b0(0x10)
	struct FString OtlSearchPath; // 0x2c0(0x10)
	struct FString DsoSearchPath; // 0x2d0(0x10)
	struct FString ImageDsoSearchPath; // 0x2e0(0x10)
	struct FString AudioDsoSearchPath; // 0x2f0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x520 (Inherited: 0x290)
struct UHoudiniSplineComponent : USceneComponent {
	struct TArray<struct FTransform> CurvePoints; // 0x290(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x2a0(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x2b0(0x10)
	struct FString HoudiniSplineName; // 0x2c0(0x10)
	bool bClosed; // 0x2d0(0x01)
	bool bReversed; // 0x2d1(0x01)
	bool bIsHoudiniSplineVisible; // 0x2d2(0x01)
	enum class EHoudiniCurveType CurveType; // 0x2d3(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x2d4(0x01)
	bool bIsOutputCurve; // 0x2d5(0x01)
	bool bCookOnCurveChanged; // 0x2d6(0x01)
	char pad_2D7[0x229]; // 0x2d7(0x229)
	bool bHasChanged; // 0x500(0x01)
	bool bNeedsToTriggerUpdate; // 0x501(0x01)
	bool bIsInputCurve; // 0x502(0x01)
	bool bIsEditableOutputCurve; // 0x503(0x01)
	int32_t NodeId; // 0x504(0x04)
	struct FString PartName; // 0x508(0x10)
	char pad_518[0x8]; // 0x518(0x08)
};

// Class HoudiniEngineRuntime.HoudiniStaticMesh
// Size: 0xd0 (Inherited: 0x30)
struct UHoudiniStaticMesh : UObject {
	bool bHasNormals; // 0x30(0x01)
	bool bHasTangents; // 0x31(0x01)
	bool bHasColors; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	uint32_t NumUVLayers; // 0x34(0x04)
	bool bHasPerFaceMaterials; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FVector> VertexPositions; // 0x40(0x10)
	struct TArray<struct FIntVector> TriangleIndices; // 0x50(0x10)
	struct TArray<struct FColor> VertexInstanceColors; // 0x60(0x10)
	struct TArray<struct FVector> VertexInstanceNormals; // 0x70(0x10)
	struct TArray<struct FVector> VertexInstanceUTangents; // 0x80(0x10)
	struct TArray<struct FVector> VertexInstanceVTangents; // 0x90(0x10)
	struct TArray<struct FVector2D> VertexInstanceUVs; // 0xa0(0x10)
	struct TArray<int32_t> MaterialIDsPerTriangle; // 0xb0(0x10)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0xc0(0x10)

	void SetVertexPosition(uint32_t InVertexIndex, struct FVector& InPosition); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x2254570
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InVTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x2254450
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, struct FVector2D& InUV); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x22542f0
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InUTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x22541d0
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector& InNormal); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x22540b0
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, struct FIntVector& InTriangleVertexIndices); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x2253fe0
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FColor& InColor); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x2253ec0
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID // (Final|Native|Public) // @ game+0x2253df0
	void SetStaticMaterial(uint32_t InMaterialIndex, struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x2253ce0
	void SetNumUVLayers(uint32_t InNumUVLayers); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers // (Final|Native|Public) // @ game+0x2253c50
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials // (Final|Native|Public) // @ game+0x2253bc0
	void SetHasTangents(bool bInHasTangents); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents // (Final|Native|Public) // @ game+0x2253b30
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials // (Final|Native|Public) // @ game+0x2253aa0
	void SetHasNormals(bool bInHasNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals // (Final|Native|Public) // @ game+0x2253a10
	void SetHasColors(bool bInHasColors); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors // (Final|Native|Public) // @ game+0x2253980
	void Optimize(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize // (Final|Native|Public) // @ game+0x2253960
	bool IsValid(bool bInSkipVertexIndicesCheck); // Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid // (Final|Native|Public|Const) // @ game+0x22538c0
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize // (Final|Native|Public) // @ game+0x2253650
	bool HasTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents // (Final|Native|Public|Const) // @ game+0x2253630
	bool HasPerFaceMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials // (Final|Native|Public|Const) // @ game+0x2253610
	bool HasNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals // (Final|Native|Public|Const) // @ game+0x22535f0
	bool HasColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors // (Final|Native|Public|Const) // @ game+0x22535d0
	struct TArray<struct FVector> GetVertexPositions(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions // (Final|Native|Public|Const) // @ game+0x22535a0
	struct TArray<struct FVector> GetVertexInstanceVTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents // (Final|Native|Public|Const) // @ game+0x2253570
	struct TArray<struct FVector2D> GetVertexInstanceUVs(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs // (Final|Native|Public|Const) // @ game+0x22534e0
	struct TArray<struct FVector> GetVertexInstanceUTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents // (Final|Native|Public|Const) // @ game+0x22534b0
	struct TArray<struct FVector> GetVertexInstanceNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals // (Final|Native|Public|Const) // @ game+0x2253480
	struct TArray<struct FColor> GetVertexInstanceColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors // (Final|Native|Public|Const) // @ game+0x22533f0
	struct TArray<struct FIntVector> GetTriangleIndices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices // (Final|Native|Public|Const) // @ game+0x2253360
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials // (Final|Native|Public|Const) // @ game+0x22532d0
	uint32_t GetNumVertices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices // (Final|Native|Public|Const) // @ game+0x22532b0
	uint32_t GetNumVertexInstances(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances // (Final|Native|Public|Const) // @ game+0x2253290
	uint32_t GetNumUVLayers(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers // (Final|Native|Public|Const) // @ game+0x2253270
	uint32_t GetNumTriangles(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles // (Final|Native|Public|Const) // @ game+0x2253250
	uint32_t GetNumStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials // (Final|Native|Public|Const) // @ game+0x2253230
	int32_t GetMaterialIndex(struct FName InMaterialSlotName); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex // (Final|Native|Public|Const) // @ game+0x2253180
	struct TArray<int32_t> GetMaterialIDsPerTriangle(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle // (Final|Native|Public|Const) // @ game+0x2253150
	struct UMaterialInterface* GetMaterial(int32_t InMaterialIndex); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial // (Final|Native|Public) // @ game+0x22530b0
	struct FBox CalcBounds(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds // (Final|Native|Public|HasDefaults|Const) // @ game+0x2253060
	uint32_t AddStaticMaterial(struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x2252f40
};

// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// Size: 0x5b0 (Inherited: 0x590)
struct UHoudiniStaticMeshComponent : UMeshComponent {
	struct UHoudiniStaticMesh* Mesh; // 0x588(0x08)
	struct FBox LocalBounds; // 0x590(0x1c)
	bool bHoudiniIconVisible; // 0x5ac(0x01)

	void SetMesh(struct UHoudiniStaticMesh* InMesh); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh // (Final|Native|Public) // @ game+0x2254f50
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible // (Final|Native|Public) // @ game+0x2254ec0
	void NotifyMeshUpdated(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated // (Final|Native|Public) // @ game+0x2254ea0
	bool IsHoudiniIconVisible(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible // (Final|Native|Public|Const) // @ game+0x2254e80
	struct UHoudiniStaticMesh* GetMesh(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh // (Final|Native|Public) // @ game+0x2254e60
};

// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// Size: 0x30 (Inherited: 0x30)
struct UHoudiniAssetStateEvents : UInterface {
};

