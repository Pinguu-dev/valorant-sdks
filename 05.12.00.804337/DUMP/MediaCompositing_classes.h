// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0x100 (Inherited: 0xf0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xf0(0x08)
	bool bLoop; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x120 (Inherited: 0xf0)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xf0(0x08)
	bool bLooping; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FFrameNumber StartFrameOffset; // 0xfc(0x04)
	struct UMediaTexture* MediaTexture; // 0x100(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x108(0x08)
	bool bUseExternalMediaPlayer; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x118(0x08)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x88(0x10)
};

