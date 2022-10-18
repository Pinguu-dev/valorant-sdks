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

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x491b300
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x491abc0
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491abc0
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x491abc0
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

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x491b700
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

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x491b8f0
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x491b860
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x491b7d0
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x491b5a0
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x491b440
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x491b420
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x491b370
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x491b210
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x491b110
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x3520f50
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491b0a0
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x491b080
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491b010
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491afc0
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491ae90
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491adc0
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x491aa90
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x491a940
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

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x491b040
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x30)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x30(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x3520f50
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

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491af80
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x491ac40
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x3f8 (Inherited: 0x3d0)
struct ALevelSequenceMediaController : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct ALevelSequenceActor* Sequence; // 0x3d8(0x08)
	struct UMediaComponent* MediaComponent; // 0x3e0(0x08)
	float ServerStartTimeSeconds; // 0x3e8(0x04)
	char pad_3EC[0xc]; // 0x3ec(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x491b910
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x491b0f0
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x491b0d0
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x491aff0
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4787580
};

