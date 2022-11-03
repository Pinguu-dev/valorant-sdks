// Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation(); // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222dfe0
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name); // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222df30
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222d9a0
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222d9a0
	void ReleaseDownloadState(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222deb0
	void ReleaseAssetPackLocation(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222deb0
	int32_t GetTotalBytesToDownload(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222dc70
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222de20
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus& Status); // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x222dd90
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222dd00
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x222daa0
	int32_t GetBytesDownloaded(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222dc70
	struct FString GetAssetsPath(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222dba0
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x222daa0
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.CancelDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x222d9a0
};

