// Class ImgMedia.ImgMediaSource
// Size: 0xc0 (Inherited: 0x98)
struct UImgMediaSource : UBaseMediaSource {
	struct FFrameRate FrameRateOverride; // 0x98(0x08)
	struct FString ProxyOverride; // 0xa0(0x10)
	struct FDirectoryPath SequencePath; // 0xb0(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0x23ea090
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23e9fe0
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x23e9f00
};

