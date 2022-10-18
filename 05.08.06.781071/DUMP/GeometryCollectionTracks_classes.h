// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x128 (Inherited: 0xf0)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xf0(0x38)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	char pad_80[0x8]; // 0x80(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x88(0x10)
};

