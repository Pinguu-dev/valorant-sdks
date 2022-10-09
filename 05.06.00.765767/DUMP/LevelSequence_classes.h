// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x60 (Inherited: 0x30)
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; // 0x30(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x40(0x20)
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x30)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x1d0 (Inherited: 0x68)
struct ULevelSequence : UMovieSceneSequence {
	char pad_68[0x8]; // 0x68(0x08)
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x78(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xc8(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x168(0x50)
	struct UObject* DirectorClass; // 0x1b8(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1c0(0x10)
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x60 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftClassPath BurnInClass; // 0x38(0x20)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x58(0x08)
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x458 (Inherited: 0x3d0)
struct ALevelSequenceActor : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x3e0(0x14)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x3f8(0x08)
	struct FSoftObjectPath LevelSequence; // 0x400(0x20)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x420(0x02)
	char pad_422[0x6]; // 0x422(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x428(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x430(0x08)
	char bAutoPlay : 1; // 0x438(0x01)
	char bOverrideInstanceData : 1; // 0x438(0x01)
	char bReplicatePlayback : 1; // 0x438(0x01)
	char pad_438_3 : 5; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UObject* DefaultInstanceData; // 0x440(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x448(0x08)
	bool bShowBurnin; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x40 (Inherited: 0x30)
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x30(0x10)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x390 (Inherited: 0x2c8)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x2c8(0xc0)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x388(0x08)
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x30)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x30(0x08)
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x7b0 (Inherited: 0x688)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x688(0x10)
	char pad_698[0x118]; // 0x698(0x118)
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x3f8 (Inherited: 0x3d0)
struct ALevelSequenceMediaController : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct ALevelSequenceActor* Sequence; // 0x3d8(0x08)
	struct UMediaComponent* MediaComponent; // 0x3e0(0x08)
	float ServerStartTimeSeconds; // 0x3e8(0x04)
	char pad_3EC[0xc]; // 0x3ec(0x0c)
};

