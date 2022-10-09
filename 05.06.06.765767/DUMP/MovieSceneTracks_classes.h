// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xb8 (Inherited: 0x80)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x80(0x08)
	struct FMovieScenePropertyBinding PropertyBinding; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa8(0x10)
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTransformOrigin : UInterface {
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x118 (Inherited: 0xf0)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xf0(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x100(0x18)
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x140 (Inherited: 0x118)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	char pad_118[0x8]; // 0x118(0x08)
	struct FName AttachSocketName; // 0x120(0x0c)
	struct FName AttachComponentName; // 0x12c(0x0c)
	enum class EAttachmentRule AttachmentLocationRule; // 0x138(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x139(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x13a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x13b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x13c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x90 (Inherited: 0x80)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1c0 (Inherited: 0x118)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x118(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b9(0x01)
	char pad_1BA[0x2]; // 0x1ba(0x02)
	char bFollow : 1; // 0x1bc(0x01)
	char bReverse : 1; // 0x1bc(0x01)
	char bForceUpright : 1; // 0x1bc(0x01)
	char pad_1BC_3 : 5; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x58 (Inherited: 0x48)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x748 (Inherited: 0xf0)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x100(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2e0(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4c0(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x6a0(0xa0)
	bool bUseQuaternionInterpolation; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xb8 (Inherited: 0xb8)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x238 (Inherited: 0xf0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xf0(0xb8)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x1a8(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x228(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x350 (Inherited: 0xf0)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xf0(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf8(0x04)
	float StartOffset; // 0xfc(0x04)
	float AudioStartTime; // 0x100(0x04)
	float AudioDilationFactor; // 0x104(0x04)
	float AudioVolume; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x110(0xa0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1b0(0xa0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x250(0xb8)
	bool bLooping; // 0x308(0x01)
	bool bSuppressSubtitles; // 0x309(0x01)
	bool bOverrideAttenuation; // 0x30a(0x01)
	char pad_30B[0x5]; // 0x30b(0x05)
	struct USoundAttenuation* AttenuationSettings; // 0x310(0x08)
	struct FDelegate OnQueueSubtitles; // 0x318(0x14)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x330(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x340(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x188 (Inherited: 0xf0)
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; // 0xf0(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x130 (Inherited: 0xf0)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xf0(0x20)
	struct UCameraAnim* CameraAnim; // 0x110(0x08)
	float PlayRate; // 0x118(0x04)
	float PlayScale; // 0x11c(0x04)
	float BlendInTime; // 0x120(0x04)
	float BlendOutTime; // 0x124(0x04)
	bool bLooping; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x170 (Inherited: 0xf0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	bool bLockPreviousCamera; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FGuid CameraGuid; // 0xfc(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x10c(0x18)
	char pad_124[0xc]; // 0x124(0x0c)
	struct FTransform InitialCameraCutTransform; // 0x130(0x30)
	bool bHasInitialCameraCutTransform; // 0x160(0x01)
	char pad_161[0xf]; // 0x161(0x0f)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xc0 (Inherited: 0x58)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
	char pad_58[0x68]; // 0x58(0x68)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x130 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf0(0x20)
	struct UMatineeCameraShake* ShakeClass; // 0x110(0x08)
	float PlayScale; // 0x118(0x04)
	enum class ECameraShakePlaySpace PlaySpace; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x110 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf0(0x20)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x178 (Inherited: 0xf0)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xf0(0x88)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x190 (Inherited: 0x168)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x168(0x10)
	struct FText DisplayName; // 0x178(0x18)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x90 (Inherited: 0x90)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x370 (Inherited: 0xf0)
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; // 0xf0(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x190(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x230(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2d0(0xa0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	bool bIsSlateColor; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1c8 (Inherited: 0x48)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x180]; // 0x48(0x180)
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x228 (Inherited: 0x48)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x1e0]; // 0x48(0x1e0)
};

// Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
// Size: 0x1c8 (Inherited: 0x48)
struct UMovieScenePreAnimatedComponentTransformSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x180]; // 0x48(0x180)
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x188 (Inherited: 0xf0)
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; // 0xf0(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xb8 (Inherited: 0xb8)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xf0 (Inherited: 0xf0)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x120 (Inherited: 0xf0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneEvent Event; // 0xf8(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1f0 (Inherited: 0xf0)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xf0(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x168(0x88)
};

// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x98 (Inherited: 0x48)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
	char pad_48[0x50]; // 0x48(0x50)
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xa0 (Inherited: 0x80)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	char bFireEventsWhenForwards : 1; // 0x88(0x01)
	char bFireEventsWhenBackwards : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x180 (Inherited: 0xf0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneEventChannel EventChannel; // 0xf8(0x88)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1a8 (Inherited: 0xf0)
struct UMovieSceneFadeSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xa0)
	struct FLinearColor FadeColor; // 0x190(0x10)
	char bFadeAudio : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xb8 (Inherited: 0xb8)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x198 (Inherited: 0xf0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel FloatCurve; // 0xf8(0xa0)
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x180 (Inherited: 0xf0)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xf0(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1f0 (Inherited: 0x48)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x1a8]; // 0x48(0x1a8)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x110 (Inherited: 0xf0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	enum class ELevelVisibility Visibility; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FName> LevelNames; // 0x100(0x10)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1d0 (Inherited: 0x48)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
	char pad_48[0x188]; // 0x48(0x188)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x90 (Inherited: 0x80)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x90 (Inherited: 0x80)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct UMaterialParameterCollection* MPC; // 0x98(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	char pad_90[0x8]; // 0x90(0x08)
	int32_t MaterialIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1b8 (Inherited: 0xf0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xf0(0xc8)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UObject* PropertyClass; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x150 (Inherited: 0xf0)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xf0(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x100(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x110(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x120(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x130(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x140(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x188 (Inherited: 0xf0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xf0(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Size: 0x128 (Inherited: 0x68)
struct UMovieScenePiecewiseFloatBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0xc0]; // 0x68(0xc0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1b8 (Inherited: 0xf0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xf0(0xc8)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	int32_t MaterialIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x298 (Inherited: 0x48)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x250]; // 0x48(0x250)
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x280 (Inherited: 0xf0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xf0(0xd8)
	struct UAnimSequence* AnimSequence; // 0x1c8(0x08)
	struct UAnimSequenceBase* Animation; // 0x1d0(0x08)
	float StartOffset; // 0x1d8(0x04)
	float EndOffset; // 0x1dc(0x04)
	float PlayRate; // 0x1e0(0x04)
	char bReverse : 1; // 0x1e4(0x01)
	char pad_1E4_1 : 7; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct FName SlotName; // 0x1e8(0x0c)
	struct FVector StartLocationOffset; // 0x1f4(0x0c)
	struct FRotator StartRotationOffset; // 0x200(0x0c)
	bool bMatchWithPrevious; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	struct FName MatchedBoneName; // 0x210(0x0c)
	struct FVector MatchedLocationOffset; // 0x21c(0x0c)
	struct FRotator MatchedRotationOffset; // 0x228(0x0c)
	bool bMatchTranslation; // 0x234(0x01)
	bool bMatchIncludeZHeight; // 0x235(0x01)
	bool bMatchRotationYaw; // 0x236(0x01)
	bool bMatchRotationPitch; // 0x237(0x01)
	bool bMatchRotationRoll; // 0x238(0x01)
	char pad_239[0x47]; // 0x239(0x47)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xd8 (Inherited: 0x80)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x88(0x10)
	bool bUseLegacySectionIndexBlend; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xa0(0x30)
	bool bBlendFirstChildOfRoot; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x190 (Inherited: 0xf0)
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xa0)
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x190 (Inherited: 0xf0)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xf0(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x80 (Inherited: 0x48)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
	char pad_48[0x38]; // 0x48(0x38)
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xb8 (Inherited: 0xb8)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x378 (Inherited: 0xf0)
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xf0(0x280)
	int32_t ChannelsUsed; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xc8 (Inherited: 0xb8)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
	int32_t NumChannelsUsed; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x98 (Inherited: 0x48)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x50]; // 0x48(0x50)
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x80 (Inherited: 0x48)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x38]; // 0x48(0x38)
};

