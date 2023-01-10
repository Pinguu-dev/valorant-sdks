// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8 {
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4
};

// Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8 {
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2
};

// Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8 {
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2
};

// Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8 {
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2
};

// Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8 {
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2
};

// Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8 {
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4
};

// Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8 {
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3
};

// Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8 {
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3
};

// Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8 {
	None = 0,
	GenerateMeshData = 1,
	RenderMeshDataInWireframe = 2,
	GenerateCollisionForMeshData = 4,
	GenerateNavMeshForMeshData = 8,
	UseMeshDataForOcclusion = 16,
	EARSessionConfigFlags_MAX = 17
};

// Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8 {
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2
};

// Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8 {
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4
};

// Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8 {
	UnknownError = 0,
	UnknownChecking = 1,
	UnknownTimedOut = 2,
	UnsupportedDeviceNotCapable = 3,
	SupportedNotInstalled = 4,
	SupportedVersionTooOld = 5,
	SupportedInstalled = 6,
	EARServiceAvailability_MAX = 7
};

// Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8 {
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4
};

// Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8 {
	None = 0,
	NotAvailableAtLocation = 1,
	NeedLocationPermissions = 2,
	DevicePointedTooLow = 3,
	WorldTrackingUnstable = 4,
	WaitingForLocation = 5,
	GeoDataNotLoaded = 6,
	VisualLocalizationFailed = 7,
	WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason_MAX = 9
};

// Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8 {
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4
};

// Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8 {
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3
};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8 {
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6
};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8 {
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2
};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8 {
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};

// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8 {
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2
};

// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8 {
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3
};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8 {
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3
};

// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8 {
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	GeoTracking = 7,
	EARSessionType_MAX = 8
};

// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8 {
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3
};

// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8 {
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3
};

// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8 {
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3
};

// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8 {
	Unknown = 0,
	CameraImage = 1,
	CameraDepth = 2,
	EnvironmentCapture = 3,
	PersonSegmentationImage = 4,
	PersonSegmentationDepth = 5,
	SceneDepthMap = 6,
	SceneDepthConfidenceMap = 7,
	EARTextureType_MAX = 8
};

// Enum AugmentedReality.EAREye
enum class EAREye : uint8 {
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2
};

// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8 {
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8 {
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2
};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8 {
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2
};

// Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8 {
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4
};

// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8 {
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2
};

// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8 {
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	Door = 12,
	Window = 13,
	EARObjectClassification_MAX = 14
};

// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3
};

// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8 {
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4
};

// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8 {
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7
};

// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8 {
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	InsufficientLight = 5,
	BadState = 6,
	EARTrackingQualityReason_MAX = 7
};

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8 {
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3
};

// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8 {
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9
};

// Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8 {
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	EARCaptureType_MAX = 4
};

// ScriptStruct AugmentedReality.TrackedGeometryGroup
// Size: 0x18 (Inherited: 0x00)
struct FTrackedGeometryGroup {
	struct AARActor* ARActor; // 0x00(0x08)
	struct UARComponent* ARComponent; // 0x08(0x08)
	struct UARTrackedGeometry* TrackedGeometry; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0x70 (Inherited: 0x00)
struct FARGeoAnchorUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	float Longitude; // 0x50(0x04)
	float Latitude; // 0x54(0x04)
	float AltitudeMeters; // 0x58(0x04)
	enum class EARAltitudeSource AltitudeSource; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FString AnchorName; // 0x60(0x10)
};

// ScriptStruct AugmentedReality.ARSessionPayload
// Size: 0x18 (Inherited: 0x00)
struct FARSessionPayload {
	int32_t ConfigFlags; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x08(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARMeshUpdatePayload
// Size: 0x60 (Inherited: 0x00)
struct FARMeshUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	enum class EARObjectClassification ObjectClassification; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct AugmentedReality.ARObjectUpdatePayload
// Size: 0x30 (Inherited: 0x00)
struct FARObjectUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
};

// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// Size: 0x30 (Inherited: 0x00)
struct FAREnvironmentProbeUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
};

// ScriptStruct AugmentedReality.ARPoseUpdatePayload
// Size: 0x40 (Inherited: 0x00)
struct FARPoseUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
	struct TArray<struct FTransform> JointTransforms; // 0x30(0x10)
};

// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// Size: 0x70 (Inherited: 0x00)
struct FARQRCodeUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Extents; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString QRCode; // 0x60(0x10)
};

// ScriptStruct AugmentedReality.ARImageUpdatePayload
// Size: 0x60 (Inherited: 0x00)
struct FARImageUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct UARCandidateImage* DetectedImage; // 0x50(0x08)
	struct FVector2D EstimatedSize; // 0x58(0x08)
};

// ScriptStruct AugmentedReality.ARFaceUpdatePayload
// Size: 0x40 (Inherited: 0x00)
struct FARFaceUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	struct FVector LeftEyePosition; // 0x18(0x0c)
	struct FVector RightEyePosition; // 0x24(0x0c)
	struct FVector LookAtTarget; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AugmentedReality.ARPointUpdatePayload
// Size: 0x01 (Inherited: 0x00)
struct FARPointUpdatePayload {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// Size: 0x80 (Inherited: 0x00)
struct FARPlaneUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Center; // 0x50(0x0c)
	struct FVector Extents; // 0x5c(0x0c)
	struct TArray<struct FVector> BoundaryVertices; // 0x68(0x10)
	enum class EARObjectClassification ObjectClassification; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x08 (Inherited: 0x00)
struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x00(0x04)
	int32_t ARWorldOffset; // 0x04(0x04)
};

// ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60 (Inherited: 0x00)
struct FARTraceResult {
	float DistanceFromCamera; // 0x00(0x04)
	enum class EARLineTraceChannels TraceChannel; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct FTransform LocalTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct AugmentedReality.ARCameraIntrinsics
// Size: 0x18 (Inherited: 0x00)
struct FARCameraIntrinsics {
	struct FIntPoint ImageResolution; // 0x00(0x08)
	struct FVector2D FocalLength; // 0x08(0x08)
	struct FVector2D PrincipalPoint; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50 (Inherited: 0x00)
struct FARPose3D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28 (Inherited: 0x00)
struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> JointNames; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x00)
struct FARPose2D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
};

// ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0x0c (Inherited: 0x00)
struct FARVideoFormat {
	int32_t FPS; // 0x00(0x04)
	int32_t Width; // 0x04(0x04)
	int32_t Height; // 0x08(0x04)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18 (Inherited: 0x00)
struct FARSessionStatus {
	struct FString AdditionalInfo; // 0x00(0x10)
	enum class EARSessionStatus Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

