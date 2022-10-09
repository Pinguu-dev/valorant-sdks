// Class MovieScene.MovieSceneSignedObject
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class MovieScene.MovieSceneSection
// Size: 0xf0 (Inherited: 0x58)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x60(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x98(0x10)
	struct FFrameNumber PreRollFrames; // 0xa8(0x04)
	struct FFrameNumber PostRollFrames; // 0xac(0x04)
	int32_t RowIndex; // 0xb0(0x04)
	int32_t OverlapPriority; // 0xb4(0x04)
	char bIsActive : 1; // 0xb8(0x01)
	char bIsLocked : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float StartTime; // 0xbc(0x04)
	float EndTime; // 0xc0(0x04)
	float PrerollTime; // 0xc4(0x04)
	float PostrollTime; // 0xc8(0x04)
	char bIsInfinite : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	bool bSupportsInfiniteRange; // 0xd0(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd1(0x02)
	char pad_D3[0x1d]; // 0xd3(0x1d)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa7d0
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa740
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa6b0
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa4b0
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa420
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa390
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa0e0
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x44fa050
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9490
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9460
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24aae50
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f93d0
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f93b0
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9360
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9110
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f8fd0
};

// Class MovieScene.MovieSceneTrack
// Size: 0x80 (Inherited: 0x58)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x04)
	char pad_5C[0x1]; // 0x5c(0x01)
	bool bIsEvalDisabled; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FGuid EvaluationFieldGuid; // 0x60(0x10)
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x70(0x10)
};

// Class MovieScene.MovieSceneSequence
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct UMovieSceneCompiledData* CompiledData; // 0x58(0x08)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x60(0x01)
	bool bParentContextsAreSignificant; // 0x61(0x01)
	bool bPlayableDirectly; // 0x62(0x01)
	enum class EMovieSceneSequenceFlags SequenceFlags; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f8ee0
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f8e10
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x688 (Inherited: 0x30)
struct UMovieSceneSequencePlayer : UObject {
	char pad_30[0x3e8]; // 0x30(0x3e8)
	struct FMulticastInlineDelegate OnPlay; // 0x418(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x428(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x438(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x448(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x458(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	char bReversePlayback : 1; // 0x46c(0x01)
	char pad_46C_1 : 7; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct UMovieSceneSequence* Sequence; // 0x470(0x08)
	struct FFrameNumber StartTime; // 0x478(0x04)
	int32_t DurationFrames; // 0x47c(0x04)
	float DurationSubFrames; // 0x480(0x04)
	int32_t CurrentNumLoops; // 0x484(0x04)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488(0x14)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0(0xe8)
	char pad_588[0x68]; // 0x588(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x5f0(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x600(0x10)
	struct UMovieSceneSequenceTickManager* TickManager; // 0x610(0x08)
	char pad_618[0x70]; // 0x618(0x70)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa950
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa930
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa860
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa540
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa5c0
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa300
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa1f0
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x44fa160
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9fa0
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9e80
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9dd0
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9db0
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x44f9d10
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x44f9c30
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9b80
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9a60
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f99b0
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo // (Final|Native|Public|BlueprintCallable) // @ game+0x44f98c0
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x44f98a0
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9810
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x44f97f0
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x44f97d0
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9720
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9600
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9550
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9520
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f94f0
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f94c0
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9440
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f93f0
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9380
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9270
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x224f1f0
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9240
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f91e0
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f91a0
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9170
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44f9130
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x44f9000
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x44f8df0
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x168 (Inherited: 0xf0)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xf0(0x24)
	float StartOffset; // 0x114(0x04)
	float TimeScale; // 0x118(0x04)
	float PrerollTime; // 0x11c(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x120(0x08)
	LazyObjectProperty ActorToRecord; // 0x128(0x1c)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString TargetSequenceName; // 0x148(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x158(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x44ff4a0
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x44ff470
};

// Class MovieScene.MovieSceneEntitySystem
// Size: 0x48 (Inherited: 0x30)
struct UMovieSceneEntitySystem : UObject {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x80 (Inherited: 0x80)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x90 (Inherited: 0x80)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x44e73e0
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x44e7330
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x44e7280
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x44e7170
};

// Class MovieScene.MovieSceneEntityProvider
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEntityProvider : UInterface {
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTrackTemplateProducer : UInterface {
};

// Class MovieScene.NodeAndChannelMappings
// Size: 0x30 (Inherited: 0x30)
struct UNodeAndChannelMappings : UInterface {
};

// Class MovieScene.MovieSceneNodeGroup
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneNodeGroup : UObject {
};

// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneNodeGroupCollection : UObject {
};

// Class MovieScene.MovieScene
// Size: 0x158 (Inherited: 0x58)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x58(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x68(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x78(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x88(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd8(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe8(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xf0(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x100(0x10)
	struct FFrameRate TickResolution; // 0x110(0x08)
	struct FFrameRate DisplayRate; // 0x118(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x120(0x01)
	enum class EUpdateClockSource ClockSource; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x128(0x20)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x148(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 (Inherited: 0x30)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem {
	char pad_48[0x20]; // 0x48(0x20)
};

// Class MovieScene.MovieSceneBoolSection
// Size: 0x188 (Inherited: 0xf0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0xf8(0x90)
};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSceneComponentImpersonator
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneSceneComponentImpersonator : UInterface {
};

// Class MovieScene.MovieSceneCompiledData
// Size: 0x400 (Inherited: 0x30)
struct UMovieSceneCompiledData : UObject {
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x30(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x190(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2a8(0xf0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x398(0x30)
	struct TArray<struct FFrameTime> DeterminismFences; // 0x3c8(0x10)
	struct FGuid CompiledSignature; // 0x3d8(0x10)
	struct FGuid CompilerVersion; // 0x3e8(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f8(0x01)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f9(0x01)
	enum class EMovieSceneSequenceFlags AccumulatedFlags; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
};

// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x238 (Inherited: 0x30)
struct UMovieSceneCompiledDataManager : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xe0(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x130(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x180(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1d0(0x50)
	char pad_220[0x18]; // 0x220(0x18)
};

// Class MovieScene.MovieSceneFloatDecomposer
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneFloatDecomposer : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneEasingExternalCurve : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UCurveFloat* Curve; // 0x38(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
};

// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x460 (Inherited: 0x30)
struct UMovieSceneEntitySystemLinker : UObject {
	char pad_30[0x210]; // 0x30(0x210)
	struct FMovieSceneEntitySystemGraph SystemGraph; // 0x240(0x138)
	char pad_378[0xe8]; // 0x378(0xe8)
};

// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x58 (Inherited: 0x48)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class MovieScene.MovieSceneFolder
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x40(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x50(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePreAnimatedStateSystemInterface : UInterface {
};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0xd8 (Inherited: 0x30)
struct UMovieSceneSequenceTickManager : UObject {
	struct TArray<struct AActor*> SequenceActors; // 0x30(0x10)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x40(0x08)
	char pad_48[0x90]; // 0x48(0x90)
};

// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneSpawnSection
// Size: 0x190 (Inherited: 0x188)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
	char pad_188[0x8]; // 0x188(0x08)
};

// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xa0 (Inherited: 0x80)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
	struct FGuid ObjectGuid; // 0x90(0x10)
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0xa0 (Inherited: 0x80)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char pad_80[0x8]; // 0x80(0x08)
	bool bHighPassFilter; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x90(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xf0 (Inherited: 0xf0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x70 (Inherited: 0x68)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xa0 (Inherited: 0x90)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x90(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x168 (Inherited: 0x168)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

// Class MovieScene.MovieSceneTrackInstance
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneTrackInstance : UObject {
	struct UObject* AnimatedObject; // 0x30(0x08)
	bool bIsMasterTrackInstance; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x40(0x08)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x48(0x10)
};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xf8 (Inherited: 0x48)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0xb0]; // 0x48(0xb0)
};

// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x50 (Inherited: 0x48)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	struct UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x48(0x08)
};

