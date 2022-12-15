// BlueprintGeneratedClass OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C
// Size: 0x268 (Inherited: 0x230)
struct UOrbGameMode_PrimaryAsset_C : UGameModeDataAsset {
	struct TArray<struct TSoftClassPtr<UObject>> SpecialOrbTypes; // 0x230(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> BasicOrbTypes; // 0x240(0x10)
	int32_t OrbCount; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> DebuffOrbTypes; // 0x258(0x10)

	void GetAllOrbTypes(struct TArray<struct TSoftClassPtr<UObject>>& AllOrbTypes); // Function OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C.GetAllOrbTypes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void ComputeOrbRandomSeed(struct FString MatchID, int32_t& Seed); // Function OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C.ComputeOrbRandomSeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void ComputeSimpleStringHash(struct FString String, int32_t& Hash); // Function OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C.ComputeSimpleStringHash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x33231a0
	void GetOrbsForMatch(struct FString MatchID, struct TArray<struct TSoftClassPtr<UObject>>& SelectedOrbs); // Function OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C.GetOrbsForMatch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33231a0
	struct TArray<struct FSoftObjectPath> GetAssetPathsToPreloadForMatch(struct FString MatchID); // Function OrbGameMode_PrimaryAsset.OrbGameMode_PrimaryAsset_C.GetAssetPathsToPreloadForMatch // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x33231a0
};

