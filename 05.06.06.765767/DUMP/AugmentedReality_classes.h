// Class AugmentedReality.ARActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct AARActor : AActor {
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x38)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x68)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xb0 (Inherited: 0x68)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x28]; // 0x88(0x28)
};

// Class AugmentedReality.ARComponent
// Size: 0x310 (Inherited: 0x290)
struct UARComponent : USceneComponent {
	struct FGuid NativeID; // 0x288(0x10)
	char pad_2A0[0x28]; // 0x2a0(0x28)
	bool bUseDefaultReplication; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x2d0(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x2d8(0x08)
	struct UMRMeshComponent* MRMeshComponent; // 0x2e0(0x08)
	struct UARTrackedGeometry* MyTrackedGeometry; // 0x2e8(0x08)
	char pad_2F0[0x20]; // 0x2f0(0x20)
};

// Class AugmentedReality.ARPlaneComponent
// Size: 0x390 (Inherited: 0x310)
struct UARPlaneComponent : UARComponent {
	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x310(0x80)
};

// Class AugmentedReality.ARPointComponent
// Size: 0x310 (Inherited: 0x310)
struct UARPointComponent : UARComponent {
	struct FARPointUpdatePayload ReplicatedPayload; // 0x308(0x01)
};

// Class AugmentedReality.ARFaceComponent
// Size: 0x370 (Inherited: 0x310)
struct UARFaceComponent : UARComponent {
	enum class EARFaceTransformMixing TransformSetting; // 0x308(0x01)
	bool bUpdateVertexNormal; // 0x309(0x01)
	bool bFaceOutOfScreen; // 0x30a(0x01)
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x310(0x40)
	char pad_353[0x1d]; // 0x353(0x1d)
};

// Class AugmentedReality.ARImageComponent
// Size: 0x370 (Inherited: 0x310)
struct UARImageComponent : UARComponent {
	struct FARImageUpdatePayload ReplicatedPayload; // 0x310(0x60)
};

// Class AugmentedReality.ARQRCodeComponent
// Size: 0x380 (Inherited: 0x310)
struct UARQRCodeComponent : UARComponent {
	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x310(0x70)
};

// Class AugmentedReality.ARPoseComponent
// Size: 0x350 (Inherited: 0x310)
struct UARPoseComponent : UARComponent {
	struct FARPoseUpdatePayload ReplicatedPayload; // 0x310(0x40)
};

// Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x340 (Inherited: 0x310)
struct UAREnvironmentProbeComponent : UARComponent {
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x310(0x30)
};

// Class AugmentedReality.ARObjectComponent
// Size: 0x340 (Inherited: 0x310)
struct UARObjectComponent : UARComponent {
	struct FARObjectUpdatePayload ReplicatedPayload; // 0x310(0x30)
};

// Class AugmentedReality.ARMeshComponent
// Size: 0x370 (Inherited: 0x310)
struct UARMeshComponent : UARComponent {
	struct FARMeshUpdatePayload ReplicatedPayload; // 0x310(0x60)
};

// Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x380 (Inherited: 0x310)
struct UARGeoAnchorComponent : UARComponent {
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x310(0x70)
};

// Class AugmentedReality.ARDependencyHandler
// Size: 0x30 (Inherited: 0x30)
struct UARDependencyHandler : UObject {
};

// Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x30 (Inherited: 0x30)
struct UARGeoTrackingSupport : UObject {
};

// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xb8 (Inherited: 0x68)
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)
};

// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xb8 (Inherited: 0x68)
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78(0x10)
	char pad_88[0x30]; // 0x88(0x30)
};

// Class AugmentedReality.ARLifeCycleComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UARLifeCycleComponent : USceneComponent {
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x288(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x298(0x10)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x30 (Inherited: 0x30)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x48 (Inherited: 0x30)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x30(0x04)
	float AmbientColorTemperatureKelvin; // 0x34(0x04)
	struct FLinearColor AmbientColor; // 0x38(0x10)
};

// Class AugmentedReality.AROriginActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x30)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x30(0x08)
	struct USceneComponent* PinnedComponent; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x27]; // 0xa1(0x27)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AugmentedReality.ARSessionConfig
// Size: 0x118 (Inherited: 0x38)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x38(0x01)
	bool bGenerateCollisionForMeshData; // 0x39(0x01)
	bool bGenerateNavMeshForMeshData; // 0x3a(0x01)
	bool bUseMeshDataForOcclusion; // 0x3b(0x01)
	bool bRenderMeshDataInWireframe; // 0x3c(0x01)
	bool bTrackSceneObjects; // 0x3d(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x3e(0x01)
	bool bUseSceneDepthForOcclusion; // 0x3f(0x01)
	bool bUseAutomaticImageScaleEstimation; // 0x40(0x01)
	bool bUseStandardOnboardingUX; // 0x41(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x42(0x01)
	enum class EARSessionType SessionType; // 0x43(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x44(0x01)
	bool bHorizontalPlaneDetection; // 0x45(0x01)
	bool bVerticalPlaneDetection; // 0x46(0x01)
	bool bEnableAutoFocus; // 0x47(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x48(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x49(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x4a(0x01)
	bool bEnableAutomaticCameraTracking; // 0x4b(0x01)
	bool bResetCameraTracking; // 0x4c(0x01)
	bool bResetTrackedObjects; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x50(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x60(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<char> WorldMapData; // 0x68(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x78(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x88(0x0c)
	bool bUseOptimalVideoFormat; // 0x94(0x01)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x95(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	int32_t MaxNumberOfTrackedFaces; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0xa0(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xb0(0x01)
	enum class EARSceneReconstruction SceneReconstructionMethod; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UARPlaneComponent* PlaneComponentClass; // 0xb8(0x08)
	struct UARPointComponent* PointComponentClass; // 0xc0(0x08)
	struct UARFaceComponent* FaceComponentClass; // 0xc8(0x08)
	struct UARImageComponent* ImageComponentClass; // 0xd0(0x08)
	struct UARQRCodeComponent* QRCodeComponentClass; // 0xd8(0x08)
	struct UARPoseComponent* PoseComponentClass; // 0xe0(0x08)
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe8(0x08)
	struct UARObjectComponent* ObjectComponentClass; // 0xf0(0x08)
	struct UARMeshComponent* MeshComponentClass; // 0xf8(0x08)
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; // 0x100(0x08)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x108(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x110(0x08)
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x528 (Inherited: 0x4c0)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x4c0(0x04)
	char pad_4C4[0x64]; // 0x4c4(0x64)
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x490 (Inherited: 0x458)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x458(0x10)
	struct TArray<char> ARWorldData; // 0x468(0x10)
	int32_t PreviewImageBytesTotal; // 0x478(0x04)
	int32_t ARWorldBytesTotal; // 0x47c(0x04)
	int32_t PreviewImageBytesDelivered; // 0x480(0x04)
	int32_t ARWorldBytesDelivered; // 0x484(0x04)
	char pad_488[0x8]; // 0x488(0x08)
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x740 (Inherited: 0x738)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_738[0x8]; // 0x738(0x08)
};

// Class AugmentedReality.ARSkyLight
// Size: 0x3f0 (Inherited: 0x3e0)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class AugmentedReality.ARTexture
// Size: 0x108 (Inherited: 0xe8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float Timestamp; // 0xec(0x04)
	struct FGuid ExternalTextureGuid; // 0xf0(0x10)
	struct FVector2D Size; // 0x100(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0x108 (Inherited: 0x108)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x110 (Inherited: 0x108)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0x108(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0x109(0x01)
	bool bIsTemporallySmoothed; // 0x10a(0x01)
	char pad_10B[0x5]; // 0x10b(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x160 (Inherited: 0x140)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float Timestamp; // 0x144(0x04)
	struct FGuid ExternalTextureGuid; // 0x148(0x10)
	struct FVector2D Size; // 0x158(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x30 (Inherited: 0x30)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0x100 (Inherited: 0x30)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x30(0x10)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x0c)
	char pad_EC[0x14]; // 0xec(0x14)
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x140 (Inherited: 0x100)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector Center; // 0x104(0x0c)
	struct FVector Extent; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FVector> BoundaryPolygon; // 0x120(0x10)
	struct UARPlaneGeometry* SubsumedBy; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0x100(0x08)
	struct FVector2D EstimatedSize; // 0x108(0x08)
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x130 (Inherited: 0x110)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0x110(0x10)
	int32_t Version; // 0x120(0x04)
	char pad_124[0xc]; // 0x124(0x0c)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1f0 (Inherited: 0x100)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0x100(0x0c)
	bool bIsTracked; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0x110(0x50)
	char pad_160[0x30]; // 0x160(0x30)
	struct FTransform LeftEyeTransform; // 0x190(0x30)
	struct FTransform RightEyeTransform; // 0x1c0(0x30)
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x120 (Inherited: 0x100)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct FVector Extent; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
};

// Class AugmentedReality.ARTrackedObject
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x150 (Inherited: 0x100)
struct UARTrackedPose : UARTrackedGeometry {
	struct FARPose3D TrackedPose; // 0x100(0x50)
};

// Class AugmentedReality.ARMeshGeometry
// Size: 0x100 (Inherited: 0x100)
struct UARMeshGeometry : UARTrackedGeometry {
};

// Class AugmentedReality.ARGeoAnchor
// Size: 0x110 (Inherited: 0x100)
struct UARGeoAnchor : UARTrackedGeometry {
	char pad_100[0x10]; // 0x100(0x10)
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x238 (Inherited: 0xe8)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x108(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x118(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x128(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x138(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x148(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x158(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x168(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x178(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x188(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x198(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x208(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x218(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x228(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x30 (Inherited: 0x30)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x60 (Inherited: 0x38)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x38(0x08)
	struct FString FriendlyName; // 0x40(0x10)
	float Width; // 0x50(0x04)
	float Height; // 0x54(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x78 (Inherited: 0x38)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	struct FBox BoundingBox; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)
};

