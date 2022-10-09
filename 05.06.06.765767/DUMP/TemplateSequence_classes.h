// Class TemplateSequence.TemplateSequence
// Size: 0x120 (Inherited: 0x68)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x70(0x30)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0xa0(0x30)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xd0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x120 (Inherited: 0x120)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// Size: 0x70 (Inherited: 0x30)
struct USequenceCameraShakeCameraStandIn : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float fieldOfView; // 0x38(0x04)
	char pad_3C[0x34]; // 0x3c(0x34)
};

// Class TemplateSequence.SequenceCameraShake
// Size: 0xe0 (Inherited: 0xb0)
struct USequenceCameraShake : UCameraShakeBase {
	struct UCameraAnimationSequence* Sequence; // 0xa8(0x08)
	float PlayRate; // 0xb0(0x04)
	float Scale; // 0xb4(0x04)
	float BlendInTime; // 0xb8(0x04)
	float BlendOutTime; // 0xbc(0x04)
	float RandomSegmentDuration; // 0xc0(0x04)
	bool bRandomSegment; // 0xc4(0x01)
	struct USequenceCameraShakeSequencePlayer* Player; // 0xc8(0x08)
	struct USequenceCameraShakeCameraStandIn* CameraStandIn; // 0xd0(0x08)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// Size: 0x5e0 (Inherited: 0x30)
struct USequenceCameraShakeSequencePlayer : UObject {
	char pad_30[0x458]; // 0x30(0x458)
	struct UObject* BoundObjectOverride; // 0x488(0x08)
	struct UMovieSceneSequence* Sequence; // 0x490(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x498(0xe8)
	char pad_580[0x60]; // 0x580(0x60)
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x428 (Inherited: 0x3d0)
struct ATemplateSequenceActor : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3d8(0x14)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x3f0(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x3f8(0x20)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x418(0x0c)
	char pad_424[0x4]; // 0x424(0x04)
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x690 (Inherited: 0x688)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_688[0x8]; // 0x688(0x08)
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x170 (Inherited: 0x168)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_168[0x8]; // 0x168(0x08)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb8 (Inherited: 0x48)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_48[0x70]; // 0x48(0x70)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x90 (Inherited: 0x90)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

