// Class Landscape.ControlPointMeshActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x3d0(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x600 (Inherited: 0x600)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x5f8(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x750 (Inherited: 0x3d0)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x3d0(0x08)
	struct FGuid LandscapeGuid; // 0x3d8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x3e8(0x08)
	int32_t MaxLODLevel; // 0x3f0(0x04)
	float LODDistanceFactor; // 0x3f4(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x3fc(0x04)
	float LOD0ScreenSize; // 0x400(0x04)
	float LOD0DistributionSetting; // 0x404(0x04)
	float LODDistributionSetting; // 0x408(0x04)
	float TessellationComponentScreenSize; // 0x40c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x414(0x04)
	int32_t OccluderGeometryLOD; // 0x418(0x04)
	int32_t StaticLightingLOD; // 0x41c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x420(0x08)
	float StreamingDistanceMultiplier; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x430(0x08)
	char pad_438[0x20]; // 0x438(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x458(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x460(0x10)
	bool bMeshHoles; // 0x470(0x01)
	char MeshHolesMaxLod; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x478(0x10)
	int32_t VirtualTextureNumLods; // 0x488(0x04)
	int32_t VirtualTextureLodBias; // 0x48c(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float NegativeZBoundsExtension; // 0x494(0x04)
	float PositiveZBoundsExtension; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x4a0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x4b0(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x4c0(0x10)
	char pad_4D0[0x64]; // 0x4d0(0x64)
	bool bHasLandscapeGrass; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	float StaticLightingResolution; // 0x538(0x04)
	char CastShadow : 1; // 0x53c(0x01)
	char bCastDynamicShadow : 1; // 0x53c(0x01)
	char bCastStaticShadow : 1; // 0x53c(0x01)
	char pad_53C_3 : 5; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	char bCastFarShadow : 1; // 0x540(0x01)
	char pad_540_1 : 7; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	char bCastHiddenShadow : 1; // 0x544(0x01)
	char pad_544_1 : 7; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	char bCastShadowAsTwoSided : 1; // 0x548(0x01)
	char pad_548_1 : 7; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x54c(0x01)
	char pad_54C_1 : 7; // 0x54c(0x01)
	struct FLightingChannels LightingChannels; // 0x54d(0x01)
	char pad_54E[0x2]; // 0x54e(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x550(0x01)
	char bRenderCustomDepth : 1; // 0x550(0x01)
	char pad_550_2 : 6; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	int32_t CustomDepthStencilValue; // 0x558(0x04)
	float LDMaxDrawDistance; // 0x55c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x560(0x1c)
	int32_t CollisionMipLevel; // 0x57c(0x04)
	int32_t SimpleCollisionMipLevel; // 0x580(0x04)
	float CollisionThickness; // 0x584(0x04)
	struct FBodyInstance BodyInstance; // 0x588(0x160)
	char bGenerateOverlapEvents : 1; // 0x6e8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x6e8(0x01)
	char pad_6E8_2 : 6; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	int32_t ComponentSizeQuads; // 0x6ec(0x04)
	int32_t SubsectionSizeQuads; // 0x6f0(0x04)
	int32_t NumSubsections; // 0x6f4(0x04)
	char bUsedForNavigation : 1; // 0x6f8(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x6f8(0x01)
	char pad_6F8_2 : 6; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	bool bUseDynamicMaterialInstance; // 0x6fc(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x6fd(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x6fe(0x01)
	bool bHasLayersContent; // 0x6ff(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x700(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x44668f0
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4466800
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x4466710
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x44665f0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x2cb4be0
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x4466250
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x44661b0
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x4466120
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x4466090
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x30bfc30
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x4466000
};

// Class Landscape.Landscape
// Size: 0x750 (Inherited: 0x750)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x3d0 (Inherited: 0x3d0)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1e6e7b0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x44622f0
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x4462160
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3520f50
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0x70 (Inherited: 0x68)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x770 (Inherited: 0x550)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x548(0x04)
	int32_t SectionBaseY; // 0x54c(0x04)
	int32_t ComponentSizeQuads; // 0x550(0x04)
	int32_t SubsectionSizeQuads; // 0x554(0x04)
	int32_t NumSubsections; // 0x558(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x560(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x568(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x570(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x580(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x590(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x5a0(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x5b0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x5c0(0x08)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct FVector4 WeightmapScaleBias; // 0x5d0(0x10)
	float WeightmapSubsectionOffset; // 0x5e0(0x04)
	char pad_5E4[0xc]; // 0x5e4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x5f0(0x10)
	struct FBox CachedLocalBox; // 0x600(0x1c)
	LazyObjectProperty CollisionComponent; // 0x61c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x638(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x640(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x650(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x660(0x08)
	struct FGuid MapBuildDataId; // 0x668(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x678(0x10)
	int32_t CollisionMipLevel; // 0x688(0x04)
	int32_t SimpleCollisionMipLevel; // 0x68c(0x04)
	float NegativeZBoundsExtension; // 0x690(0x04)
	float PositiveZBoundsExtension; // 0x694(0x04)
	float StaticLightingResolution; // 0x698(0x04)
	int32_t ForcedLOD; // 0x69c(0x04)
	int32_t LODBias; // 0x6a0(0x04)
	struct FGuid StateId; // 0x6a4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x6b4(0x10)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x6c8(0x08)
	char MobileBlendableLayerMask; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x6d8(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x6e0(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x6f0(0x10)
	char pad_700[0x70]; // 0x700(0x70)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4462090
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4461f80
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4461ea0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x420 (Inherited: 0x3d0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_3D0[0x50]; // 0x3d0(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x550 (Inherited: 0x550)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x68 (Inherited: 0x30)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x630 (Inherited: 0x550)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x548(0x10)
	int32_t SectionBaseX; // 0x558(0x04)
	int32_t SectionBaseY; // 0x55c(0x04)
	int32_t CollisionSizeQuads; // 0x560(0x04)
	float CollisionScale; // 0x564(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x568(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x570(0x10)
	struct FGuid HeightfieldGuid; // 0x580(0x10)
	struct FBox CachedLocalBox; // 0x590(0x1c)
	LazyObjectProperty RenderComponent; // 0x5ac(0x1c)
	char pad_5CC[0xc]; // 0x5cc(0x0c)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5d8(0x10)
	char pad_5E8[0x48]; // 0x5e8(0x48)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4462130
};

// Class Landscape.LandscapeInfo
// Size: 0x218 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x30(0x1c)
	struct FGuid LandscapeGuid; // 0x4c(0x10)
	int32_t ComponentSizeQuads; // 0x5c(0x04)
	int32_t SubsectionSizeQuads; // 0x60(0x04)
	int32_t ComponentNumSubsections; // 0x64(0x04)
	struct FVector DrawScale; // 0x68(0x0c)
	char pad_74[0xa4]; // 0x74(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0xf0]; // 0x128(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x88 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x40(0x08)
	float Hardness; // 0x48(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x3f0 (Inherited: 0x3d8)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x3d8(0x10)
	char bIsLayerThumbnail : 1; // 0x3e8(0x01)
	char bDisableTessellation : 1; // 0x3e8(0x01)
	char bMobile : 1; // 0x3e8(0x01)
	char bEditorToolUsage : 1; // 0x3e8(0x01)
	char pad_3E8_4 : 4; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x640 (Inherited: 0x630)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x628(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x3d0(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x620 (Inherited: 0x600)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x5f8(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x608(0x10)
	int8_t ProxyLOD; // 0x618(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x50 (Inherited: 0x48)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x580 (Inherited: 0x550)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x548(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x558(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x568(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x30e2020
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xb0 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float LayerWidthRatio; // 0x4c(0x04)
	float SideFalloff; // 0x50(0x04)
	float LeftSideFalloffFactor; // 0x54(0x04)
	float RightSideFalloffFactor; // 0x58(0x04)
	float LeftSideLayerFalloffFactor; // 0x5c(0x04)
	float RightSideLayerFalloffFactor; // 0x60(0x04)
	float EndFalloff; // 0x64(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x68(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa8(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x770 (Inherited: 0x750)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x750(0x1c)
	char pad_76C[0x4]; // 0x76c(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x60 (Inherited: 0x38)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_38[0x28]; // 0x38(0x28)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x48(0x10)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x48(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float MappingScale; // 0x4c(0x04)
	float MappingRotation; // 0x50(0x04)
	float MappingPanU; // 0x54(0x04)
	float MappingPanV; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x0c)
	float PreviewWeight; // 0x54(0x04)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xa0 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x48(0x10)
	char pad_58[0xc]; // 0x58(0x0c)
	struct FExpressionInput LayerNotUsed; // 0x64(0x10)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FName ParameterName; // 0x80(0x0c)
	char PreviewUsed : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FGuid ExpressionGUID; // 0x90(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xb0 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x48(0x10)
	char pad_58[0xc]; // 0x58(0x0c)
	struct FExpressionInput Layer; // 0x64(0x10)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FName ParameterName; // 0x80(0x0c)
	float PreviewWeight; // 0x8c(0x04)
	struct FVector ConstBase; // 0x90(0x0c)
	struct FGuid ExpressionGUID; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

