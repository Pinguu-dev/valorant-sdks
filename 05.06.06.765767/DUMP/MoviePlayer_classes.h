// Class MoviePlayer.MoviePlayerSettings
// Size: 0x48 (Inherited: 0x30)
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x30(0x01)
	bool bMoviesAreSkippable; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FString> StartupMovies; // 0x38(0x10)
};

