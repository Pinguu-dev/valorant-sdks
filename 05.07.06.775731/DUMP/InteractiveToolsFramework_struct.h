// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8 {
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8 {
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int32 {
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int32 {
	None = 0,
	TranslateAxisX = 2,
	TranslateAxisY = 4,
	TranslateAxisZ = 8,
	TranslateAllAxes = 14,
	TranslatePlaneXY = 16,
	TranslatePlaneXZ = 32,
	TranslatePlaneYZ = 64,
	TranslateAllPlanes = 112,
	RotateAxisX = 128,
	RotateAxisY = 256,
	RotateAxisZ = 512,
	RotateAllAxes = 896,
	ScaleAxisX = 1024,
	ScaleAxisY = 2048,
	ScaleAxisZ = 4096,
	ScaleAllAxes = 7168,
	ScalePlaneYZ = 8192,
	ScalePlaneXZ = 16384,
	ScalePlaneXY = 32768,
	ScaleAllPlanes = 57344,
	ScaleUniform = 65536,
	StandardTranslateRotate = 1022,
	TranslateRotateUniformScale = 66558,
	FullTranslateRotateScale = 131070,
	ETransformGizmoSubElements_MAX = 131071
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8 {
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8 {
	Left = 1,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Enum InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8 {
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8 {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8 {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8 {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8 {
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8 {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	All = 7,
	ESceneSnapQueryTargetType_MAX = 8
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8 {
	Position = 1,
	Rotation = 2,
	ESceneSnapQueryType_MAX = 3
};

// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xb4 (Inherited: 0x00)
struct FBrushStampData {
	char pad_0[0xb4]; // 0x00(0xb4)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x00)
struct FBehaviorInfo {
	struct UInputBehavior* Behavior; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28 (Inherited: 0x00)
struct FInputRayHit {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x00)
struct FActiveGizmo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x08 (Inherited: 0x00)
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x00(0x04)
	float CurrentValue; // 0x04(0x04)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10 (Inherited: 0x00)
struct FGizmoVec2ParameterChange {
	struct FVector2D InitialValue; // 0x00(0x08)
	struct FVector2D CurrentValue; // 0x08(0x08)
};

