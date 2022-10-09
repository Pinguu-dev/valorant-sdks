// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	AdditiveFromBase = 8,
	EMovieSceneBlendType_MAX = 9
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8 {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 1,
	EMovieSceneSequenceFlags_MAX = 3
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8 {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvalTemplateBase {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class EMovieSceneCompletionMode CompletionMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x40 (Inherited: 0x20)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x20)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieScenePropertySectionData {
	struct FName PropertyName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PropertyPath; // 0x10(0x10)
};

// ScriptStruct MovieScene.TrackInstanceInputComponent
// Size: 0x10 (Inherited: 0x00)
struct FTrackInstanceInputComponent {
	struct UMovieSceneSection* Section; // 0x00(0x08)
	int32_t OutputIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackInstanceComponent {
	struct UMovieSceneSection* Owner; // 0x00(0x08)
	struct UMovieSceneTrackInstance* TrackInstanceClass; // 0x08(0x08)
};

// ScriptStruct MovieScene.EasingComponentData
// Size: 0x08 (Inherited: 0x00)
struct FEasingComponentData {
	struct UMovieSceneSection* Section; // 0x00(0x08)
};

// ScriptStruct MovieScene.MovieScenePropertyBinding
// Size: 0x1c (Inherited: 0x00)
struct FMovieScenePropertyBinding {
	struct FName PropertyName; // 0x00(0x0c)
	struct FName PropertyPath; // 0x0c(0x0c)
	bool bCanUseClassLookup; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSectionGroup {
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneObjectBindingIDs {
	struct TArray<struct FMovieSceneObjectBindingID> IDs; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackLabels {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xf0 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x00(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x08)
	double ViewEnd; // 0x68(0x08)
	double WorkStart; // 0x70(0x08)
	double WorkEnd; // 0x78(0x08)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xd0(0x10)
	struct FFloatRange ViewRange; // 0xe0(0x10)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneExpansionState {
	bool bExpanded; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneMarkedFrame {
	struct FFrameNumber FrameNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Label; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneTimecodeSource {
	struct FTimecode Timecode; // 0x00(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x04)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid ObjectGuid; // 0x00(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID ObjectBindingId; // 0x00(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x08)
	bool bOverridesDefault; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x02 (Inherited: 0x00)
struct FOptionalMovieSceneBlendType {
	enum class EMovieSceneBlendType BlendType; // 0x00(0x01)
	bool bIsValid; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneChannel {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90 (Inherited: 0x08)
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	bool DefaultValue; // 0x18(0x01)
	bool bHasDefaultValue; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<bool> Values; // 0x20(0x10)
	char pad_30[0x60]; // 0x30(0x60)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98 (Inherited: 0x08)
struct FMovieSceneByteChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	char DefaultValue; // 0x18(0x01)
	bool bHasDefaultValue; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<char> Values; // 0x20(0x10)
	struct UEnum* Enum; // 0x30(0x08)
	char pad_38[0x60]; // 0x38(0x60)
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable {
};

// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x00(0x01)
	char bEvaluationTemplate : 1; // 0x00(0x01)
	char bEvaluationTemplateField : 1; // 0x00(0x01)
	char bEntityComponentField : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// Size: 0x138 (Inherited: 0x00)
struct FMovieSceneEntitySystemGraph {
	char pad_0[0x80]; // 0x00(0x80)
	struct FMovieSceneEntitySystemGraphNodes Nodes; // 0x80(0x38)
	char pad_B8[0x80]; // 0xb8(0x80)
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneEntitySystemGraphNodes {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEntitySystemGraphNode {
	char pad_0[0x20]; // 0x00(0x20)
	struct UMovieSceneEntitySystem* System; // 0x20(0x08)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x00)
struct FMovieSceneEvalTemplatePtr {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneEmptyStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEvaluationField {
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x00(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationMetaData {
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x00(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneOrderedEvaluationKey {
	struct FMovieSceneEvaluationKey Key; // 0x00(0x0c)
	uint16_t SetupIndex; // 0x0c(0x02)
	uint16_t TearDownIndex; // 0x0e(0x02)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationKey {
	struct FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
	uint32_t SectionIndex; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEvaluationGroup {
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x00(0x10)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10(0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x00(0x02)
	enum class ESectionEvaluationFlags Flags; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FFrameNumber ForcedTime; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneFieldEntry_EvaluationTrack {
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x00(0x08)
	uint16_t NumChildren; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x00(0x04)
	int32_t NumEvalPtrs; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneFrameRange {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0x0c (Inherited: 0x08)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEntityComponentField
// Size: 0xf0 (Inherited: 0x00)
struct FMovieSceneEntityComponentField {
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x00(0x60)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60(0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities; // 0xc0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	struct FGuid ObjectBindingId; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationFieldEntityMetaData {
	struct FFrameNumber ForcedTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char bEvaluateInSequencePreRoll : 1; // 0x09(0x01)
	char bEvaluateInSequencePostRoll : 1; // 0x09(0x01)
	char pad_9_2 : 6; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldEntity {
	struct FMovieSceneEvaluationFieldEntityKey Key; // 0x00(0x0c)
	int32_t SharedMetaDataIndex; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationFieldEntityKey {
	struct TWeakObjectPtr<struct UObject> EntityOwner; // 0x00(0x08)
	uint32_t EntityID; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldEntityTree {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneEvaluationOperand {
	struct FGuid ObjectBindingId; // 0x00(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x160 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplate {
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct FGuid SequenceSignature; // 0xa0(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8(0xa8)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xa8 (Inherited: 0x00)
struct FMovieSceneTemplateGenerationLedger {
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x08(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x78 (Inherited: 0x00)
struct FMovieSceneEvaluationTrack {
	struct FGuid ObjectBindingId; // 0x00(0x10)
	uint16_t EvaluationPriority; // 0x10(0x02)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct TWeakObjectPtr<struct UMovieSceneTrack> SourceTrack; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30(0x38)
	struct FName EvaluationGroup; // 0x68(0x0c)
	char bEvaluateInPreroll : 1; // 0x74(0x01)
	char bEvaluateInPostroll : 1; // 0x74(0x01)
	char bTearDownPriority : 1; // 0x74(0x01)
	char pad_74_3 : 5; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneTrackImplementationPtr {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneSubSectionData {
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x00(0x08)
	struct FGuid ObjectBindingId; // 0x08(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0xe8 (Inherited: 0x00)
struct FMovieSceneRootEvaluationTemplateInstance {
	struct TWeakObjectPtr<struct UMovieSceneSequence> WeakRootSequence; // 0x00(0x08)
	struct UMovieSceneCompiledDataManager* CompiledDataManager; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18(0x08)
	char pad_20[0x70]; // 0x20(0x70)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x90(0x50)
	char pad_E0[0x8]; // 0xe0(0x08)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xa0 (Inherited: 0x08)
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x08(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x04)
	bool bHasDefaultValue; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x08)
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValue {
	float Value; // 0x00(0x04)
	struct FMovieSceneTangentData Tangent; // 0x04(0x14)
	enum class ERichCurveInterpMode InterpMode; // 0x18(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x19(0x01)
	char PaddingByte; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentData {
	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	float ArriveTangentWeight; // 0x08(0x04)
	float LeaveTangentWeight; // 0x0c(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90 (Inherited: 0x08)
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	int32_t DefaultValue; // 0x18(0x04)
	bool bHasDefaultValue; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<int32_t> Values; // 0x20(0x10)
	char pad_30[0x60]; // 0x30(0x60)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneKeyStruct {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x00)
struct FGeneratedMovieSceneKeyStruct {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xc8 (Inherited: 0x08)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	struct UObject* PropertyClass; // 0x08(0x08)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x38)
	char pad_68[0x60]; // 0x68(0x60)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneObjectPathChannelKeyValue {
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x00(0x30)
	struct UObject* HardPtr; // 0x30(0x08)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct TArray<struct FName> Tags; // 0x00(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct UObject* PossessedObjectClass; // 0x30(0x08)
	struct FGuid ParentGuid; // 0x38(0x10)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x00(0x04)
	int32_t AutoEaseOutDuration; // 0x04(0x04)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x08(0x10)
	bool bManualEaseIn; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ManualEaseInDuration; // 0x1c(0x04)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ManualEaseOutDuration; // 0x34(0x04)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x00(0x01)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneSectionParameters {
	struct FFrameNumber StartFrameOffset; // 0x00(0x04)
	bool bCanLoop; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FFrameNumber EndFrameOffset; // 0x08(0x04)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
	int32_t HierarchicalBias; // 0x14(0x04)
	float StartOffset; // 0x18(0x04)
	float PrerollTime; // 0x1c(0x04)
	float PostrollTime; // 0x20(0x04)
};

// ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x00)
struct FMovieSceneSegment {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct MovieScene.SectionEvaluationData
// Size: 0x0c (Inherited: 0x00)
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x00(0x04)
	struct FFrameNumber ForcedTime; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0x118 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchy {
	struct FMovieSceneSequenceHierarchyNode RootNode; // 0x00(0x18)
	struct FMovieSceneSubSequenceTree Tree; // 0x18(0x60)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x78(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8(0x50)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID ParentID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xf0 (Inherited: 0x00)
struct FMovieSceneSubSequenceData {
	struct FSoftObjectPath Sequence; // 0x00(0x20)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x20(0x20)
	struct FFrameRate TickResolution; // 0x40(0x08)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x48(0x04)
	struct FMovieSceneFrameRange PlayRange; // 0x4c(0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x5c(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x6c(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x7c(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x8c(0x10)
	int16_t HierarchicalBias; // 0x9c(0x02)
	bool bHasHierarchicalEasing; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xa0(0x18)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FGuid SubSectionSignature; // 0xc0(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xd0(0x20)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneNestedSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x00(0x0c)
	struct FMovieSceneTimeWarping Warping; // 0x0c(0x08)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneTimeWarping {
	struct FFrameNumber Start; // 0x00(0x04)
	struct FFrameNumber End; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneTimeTransform {
	float TimeScale; // 0x00(0x04)
	struct FFrameTime Offset; // 0x04(0x08)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceDataPtr {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceTree
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneSubSequenceTree {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSubSequenceTreeEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackParams {
	struct FFrameTime Frame; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString MarkedFrame; // 0x10(0x10)
	enum class EMovieScenePositionType PositionType; // 0x20(0x01)
	enum class EUpdatePositionMethod UpdateMethod; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	char bRandomStartTime : 1; // 0x10(0x01)
	char bRestoreState : 1; // 0x10(0x01)
	char bDisableMovementInput : 1; // 0x10(0x01)
	char bDisableLookAtInput : 1; // 0x10(0x01)
	char bHidePlayer : 1; // 0x10(0x01)
	char bHideHud : 1; // 0x10(0x01)
	char bDisableCameraCuts : 1; // 0x10(0x01)
	char bPauseAtEnd : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSequenceReplProperties {
	struct FFrameTime LastKnownPosition; // 0x00(0x08)
	enum class EMovieScenePlayerStatus LastKnownStatus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t LastKnownNumLoops; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneWarpCounter {
	struct TArray<uint32_t> WarpCounts; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x00)
struct FMovieSceneSpawnable {
	struct FTransform SpawnTransform; // 0x00(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x01)
	bool bEvaluateTracksWhenNotSpawned; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FGuid Guid; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x08)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName LevelName; // 0x84(0x0c)
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x20)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x00(0x01)
	char bEvalNearestSection : 1; // 0x00(0x01)
	char bEvaluateInPreroll : 1; // 0x00(0x01)
	char bEvaluateInPostroll : 1; // 0x00(0x01)
	char bEvaluateNearestSection : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackEvaluationField {
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneTrackEvaluationFieldEntry {
	struct UMovieSceneSection* Section; // 0x00(0x08)
	struct FFrameNumberRange Range; // 0x08(0x10)
	struct FFrameNumber ForcedTime; // 0x18(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x1c(0x01)
	char pad_1D[0x1]; // 0x1d(0x01)
	int16_t LegacySortOrder; // 0x1e(0x02)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackInstanceInput {
	struct UMovieSceneSection* Section; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackInstanceEntry {
	struct UObject* BoundObject; // 0x00(0x08)
	struct UMovieSceneTrackInstance* TrackInstance; // 0x08(0x08)
};

