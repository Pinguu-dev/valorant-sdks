// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x486f4f0
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486f3a0
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486f210
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486f0c0
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486efc0
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486ee80
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486ed10
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486ebf0
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486eb40
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486e9f0
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486e910
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486e830
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486e740
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486e6a0
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486e530
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486e2d0
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486e050
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486df20
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486dd90
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486dc00
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486daf0
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486da00
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x486d810
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486d6c0
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486d5c0
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x486d4c0
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486d350
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x486d220
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x486d0e0
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x486cfc0
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x486e470
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x486e1f0
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x486de40
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x486dcc0
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0xa0 (Inherited: 0x30)
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x30 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x218 (Inherited: 0x30)
struct UGameplayTagsManager : UObject {
	char pad_30[0x98]; // 0x30(0x98)
	struct TArray<struct FGameplayTagSource> TagSources; // 0xc8(0x10)
	char pad_D8[0xe0]; // 0xd8(0xe0)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x1b8(0x10)
	char pad_1C8[0x50]; // 0x1c8(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct URestrictedGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xd0 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	bool FastReplication; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString InvalidTagCharacters; // 0x58(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x78(0x10)
	struct TArray<struct FSoftObjectPath> DevOnlyGameplayTagTableList; // 0x88(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x98(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0xa8(0x10)
	int32_t NumBitsForContainerSize; // 0xb8(0x04)
	int32_t NetIndexFirstBitSegment; // 0xbc(0x04)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xc0(0x10)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x68 (Inherited: 0x48)
struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	struct FString DeveloperConfigName; // 0x48(0x10)
	struct FName FavoriteTagSource; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

