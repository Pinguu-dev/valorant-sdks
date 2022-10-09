// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayTagAssetInterface : UInterface {
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

