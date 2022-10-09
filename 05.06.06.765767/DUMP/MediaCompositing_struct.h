// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x50 (Inherited: 0x40)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct UMediaSource* MediaSource; // 0x40(0x08)
	struct FFrameNumber SectionStartFrame; // 0x48(0x04)
	bool bLoop; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneMediaSectionParams Params; // 0x20(0x30)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneMediaSectionParams {
	struct UMediaSoundComponent* MediaSoundComponent; // 0x00(0x08)
	struct UMediaSource* MediaSource; // 0x08(0x08)
	struct UMediaTexture* MediaTexture; // 0x10(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x18(0x08)
	struct FFrameNumber SectionStartFrame; // 0x20(0x04)
	struct FFrameNumber SectionEndFrame; // 0x24(0x04)
	bool bLooping; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FFrameNumber StartFrameOffset; // 0x2c(0x04)
};

