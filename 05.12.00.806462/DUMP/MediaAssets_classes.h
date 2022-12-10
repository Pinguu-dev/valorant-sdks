// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
struct UMediaSource : UObject {
	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c039a0
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4709600
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4709510
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4709420
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4709330
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4708da0
};

// Class MediaAssets.BaseMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MediaAssets.FileMediaSource
// Size: 0xc0 (Inherited: 0x98)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x98(0x10)
	bool PrecacheFile; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0x4704020
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x47022a0
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4702170
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4702040
};

// Class MediaAssets.MediaComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xe8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xf0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ad6b80
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ad6f40
};

// Class MediaAssets.MediaTimeStampInfo
// Size: 0x40 (Inherited: 0x30)
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; // 0x30(0x08)
	int64_t SequenceIndex; // 0x38(0x08)
};

// Class MediaAssets.MediaPlayer
// Size: 0x140 (Inherited: 0x30)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x90(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0xa0(0x10)
	struct FTimespan CacheAhead; // 0xb0(0x08)
	struct FTimespan CacheBehind; // 0xb8(0x08)
	struct FTimespan CacheBehindGame; // 0xc0(0x08)
	bool NativeAudioOut; // 0xc8(0x01)
	bool PlayOnOpen; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	char Shuffle : 1; // 0xcc(0x01)
	char Loop : 1; // 0xcc(0x01)
	char pad_CC_2 : 6; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UMediaPlaylist* Playlist; // 0xd0(0x08)
	int32_t PlaylistIndex; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FTimespan TimeDelay; // 0xe0(0x08)
	float HorizontalFieldOfView; // 0xe8(0x04)
	float VerticalFieldOfView; // 0xec(0x04)
	struct FRotator ViewRotation; // 0xf0(0x0c)
	char pad_FC[0x2c]; // 0xfc(0x2c)
	struct FGuid PlayerGuid; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47048c0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4704890
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47047c0
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47046e0
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|Native|Public|BlueprintCallable) // @ game+0x47045c0
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x47044b0
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x47043a0
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4704320
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x4704290
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x4704200
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x4704170
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x47040d0
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|Native|Public|BlueprintCallable) // @ game+0x4703f80
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4703ef0
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|Native|Public|BlueprintCallable) // @ game+0x4703e20
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4703d80
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x4703d50
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|Native|Public|BlueprintCallable) // @ game+0x4703d20
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0x4703cf0
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|Native|Public|BlueprintCallable) // @ game+0x4703cd0
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x4703ca0
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x4703c70
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x4703bb0
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4703aa0
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47038b0
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|Native|Public|BlueprintCallable) // @ game+0x4703810
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x4703740
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x47036a0
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|Native|Public|BlueprintCallable) // @ game+0x47035e0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x47035b0
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703580
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703550
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703520
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47034f0
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47034c0
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703490
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703460
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703430
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703400
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x47033c0
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47032a0
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47031d0
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703100
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4703020
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702f50
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702f20
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702ee0
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702dc0
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702cf0
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702be0
	struct UMediaTimeStampInfo* GetTimestamp(); // Function MediaAssets.MediaPlayer.GetTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702bb0
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702b70
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702b30
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702a30
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47029a0
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702970
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702950
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2de5910
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702910
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702880
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47027b0
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702740
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702710
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x47026d0
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702690
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4702570
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47024a0
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47023d0
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x4702020
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x4701f60
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|Native|Public|BlueprintCallable) // @ game+0x4701ec0
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4701e90
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // @ game+0x4709070
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // @ game+0x4708fd0
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x4708f30
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x2d352f0
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // @ game+0x4708e60
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4708c70
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4708bd0
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4708aa0
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // @ game+0x4708940
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x4708610
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|Native|Public|BlueprintCallable) // @ game+0x4708550
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x47084b0
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x980 (Inherited: 0x760)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x760(0x04)
	bool DynamicRateAdjustment; // 0x764(0x01)
	char pad_765[0x3]; // 0x765(0x03)
	float RateAdjustmentFactor; // 0x768(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x76c(0x10)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x780(0x08)
	char pad_788[0x1f8]; // 0x788(0x1f8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x4709830
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x4709710
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|Native|Public|BlueprintCallable) // @ game+0x4709260
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|Native|Public|BlueprintCallable) // @ game+0x47091d0
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x4709140
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x4708d10
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x4708b40
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4708a40
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4708a10
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x47086d0
};

// Class MediaAssets.MediaTexture
// Size: 0x1c8 (Inherited: 0xf0)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xf0(0x01)
	enum class TextureAddress AddressY; // 0xf1(0x01)
	bool AutoClear; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	struct FLinearColor ClearColor; // 0xf4(0x10)
	bool EnableGenMips; // 0x104(0x01)
	char NumMips; // 0x105(0x01)
	bool NewStyleOutput; // 0x106(0x01)
	enum class MediaTextureOutputFormat OutputFormat; // 0x107(0x01)
	float CurrentAspectRatio; // 0x108(0x04)
	enum class MediaTextureOrientation CurrentOrientation; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x110(0x08)
	char pad_118[0xb0]; // 0x118(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x47097a0
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4708e30
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4708a70
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d6d860
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47089e0
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x90 (Inherited: 0x88)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x88(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0xa8 (Inherited: 0x98)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x98(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xa8 (Inherited: 0x98)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t FrameDelay; // 0x9c(0x04)
	double TimeDelay; // 0xa0(0x08)
};

