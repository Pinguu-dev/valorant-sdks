// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0xb8 (Inherited: 0x98)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t AdditionalSlotIndex; // 0x9c(0x04)
	struct FText SlotDisplayName; // 0xa0(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x670 (Inherited: 0x670)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x668(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b8d0
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b810
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b700
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b660
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b5b0
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b580
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b4b0
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3d0(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0x5d0 (Inherited: 0x590)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* SourceFlipbook; // 0x588(0x08)
	struct UMaterialInterface* Material; // 0x590(0x08)
	float PlayRate; // 0x598(0x04)
	char bLooping : 1; // 0x59c(0x01)
	char bReversePlayback : 1; // 0x59c(0x01)
	char bPlaying : 1; // 0x59c(0x01)
	float AccumulatedTime; // 0x5a0(0x04)
	int32_t CachedFrameIndex; // 0x5a4(0x04)
	struct FLinearColor SpriteColor; // 0x5a8(0x10)
	struct UBodySetup* CachedBodySetup; // 0x5b8(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x5c0(0x10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x208c180
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x208c060
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x208be30
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x208bf90
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x208beb0
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime // (Final|Native|Public|BlueprintCallable) // @ game+0x208bdb0
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x208bd20
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook // (Native|Public|BlueprintCallable) // @ game+0x208bc70
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x208bc50
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // (Final|Native|Public|BlueprintCallable) // @ game+0x208bc30
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x208bb70
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x208bb50
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // (Final|Native|Protected) // @ game+0x208bac0
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b8a0
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b870
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b840
	struct FLinearColor GetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.GetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b7e0
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b5d0
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b630
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b600
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b2f0
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b2c0
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b290
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x208b250
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct APaperGroupedSpriteActor : AActor {
	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x3d0(0x08)
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x5c0 (Inherited: 0x590)
struct UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x588(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x598(0x10)
	char pad_5B0[0x10]; // 0x5b0(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x208c2d0
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x208c1a0
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x208c0f0
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance // (Native|Public|BlueprintCallable) // @ game+0x208bb90
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b350
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208b320
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances // (Native|Public|BlueprintCallable) // @ game+0x208b220
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x208b050
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x38 (Inherited: 0x30)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x30(0x01)
	bool bEnableTerrainSplineEditing; // 0x31(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xb0 (Inherited: 0x30)
struct UPaperSprite : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x40(0x10)
	struct FVector2D BakedSourceUV; // 0x50(0x08)
	struct FVector2D BakedSourceDimension; // 0x58(0x08)
	struct UTexture2D* BakedSourceTexture; // 0x60(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x68(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x70(0x08)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x78(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float PixelsPerUnrealUnit; // 0x8c(0x04)
	struct UBodySetup* BodySetup; // 0x90(0x08)
	int32_t AlternateMaterialSplitIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FVector4> BakedRenderData; // 0xa0(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3d0(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x208b970
};

// Class Paper2D.PaperSpriteComponent
// Size: 0x5b0 (Inherited: 0x590)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0x588(0x08)
	struct UMaterialInterface* MaterialOverride; // 0x590(0x08)
	struct FLinearColor SpriteColor; // 0x598(0x10)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2092c20
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite // (Native|Public|BlueprintCallable) // @ game+0x208bc70
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x208b250
};

// Class Paper2D.PaperTerrainActor
// Size: 0x3e8 (Inherited: 0x3d0)
struct APaperTerrainActor : AActor {
	struct USceneComponent* DummyRoot; // 0x3d0(0x08)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x3d8(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x3e0(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x5a0 (Inherited: 0x550)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x548(0x08)
	bool bClosedSpline; // 0x550(0x01)
	bool bFilledSpline; // 0x551(0x01)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x558(0x08)
	int32_t RandomSeed; // 0x560(0x04)
	float SegmentOverlapAmount; // 0x564(0x04)
	struct FLinearColor TerrainColor; // 0x568(0x10)
	int32_t ReparamStepsPerSegment; // 0x578(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x57c(0x01)
	char pad_57F[0x1]; // 0x57f(0x01)
	float CollisionThickness; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct UBodySetup* CachedBodySetup; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2092cb0
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x38(0x10)
	struct UPaperSprite* InteriorFill; // 0x48(0x08)
};

// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x650 (Inherited: 0x640)
struct UPaperTerrainSplineComponent : USplineComponent {
	char pad_640[0x10]; // 0x640(0x10)
};

// Class Paper2D.PaperTileLayer
// Size: 0xa0 (Inherited: 0x30)
struct UPaperTileLayer : UObject {
	struct FText LayerName; // 0x30(0x18)
	int32_t LayerWidth; // 0x48(0x04)
	int32_t LayerHeight; // 0x4c(0x04)
	char bHiddenInGame : 1; // 0x50(0x01)
	char bLayerCollides : 1; // 0x50(0x01)
	char bOverrideCollisionThickness : 1; // 0x50(0x01)
	char bOverrideCollisionOffset : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CollisionThicknessOverride; // 0x54(0x04)
	float CollisionOffsetOverride; // 0x58(0x04)
	struct FLinearColor LayerColor; // 0x5c(0x10)
	int32_t AllocatedWidth; // 0x6c(0x04)
	int32_t AllocatedHeight; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x78(0x10)
	struct UPaperTileSet* TileSet; // 0x88(0x08)
	struct TArray<int32_t> AllocatedGrid; // 0x90(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xb8 (Inherited: 0x30)
struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x30(0x04)
	int32_t MapHeight; // 0x34(0x04)
	int32_t TileWidth; // 0x38(0x04)
	int32_t TileHeight; // 0x3c(0x04)
	float PixelsPerUnrealUnit; // 0x40(0x04)
	float SeparationPerTileX; // 0x44(0x04)
	float SeparationPerTileY; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x50(0x30)
	struct UMaterialInterface* Material; // 0x80(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x88(0x10)
	float CollisionThickness; // 0x98(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x9c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	int32_t HexSideLength; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32_t LayerNameIndex; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3d0(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0x5e0 (Inherited: 0x590)
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x588(0x04)
	int32_t MapHeight; // 0x58c(0x04)
	int32_t TileWidth; // 0x590(0x04)
	int32_t TileHeight; // 0x594(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x598(0x08)
	struct UMaterialInterface* Material; // 0x5a0(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x5a8(0x10)
	struct FLinearColor TileMapColor; // 0x5b8(0x10)
	int32_t UseSingleLayerIndex; // 0x5c8(0x04)
	bool bUseSingleLayer; // 0x5cc(0x01)
	struct UPaperTileMap* TileMap; // 0x5d0(0x08)
	char pad_5DD[0x3]; // 0x5dd(0x03)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2092ec0
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap // (Native|Public|BlueprintCallable) // @ game+0x208bc70
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile // (Final|Native|Public|BlueprintCallable) // @ game+0x2092d40
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2092b50
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x2092910
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness // (Final|Native|Public|BlueprintCallable) // @ game+0x2092830
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap // (Final|Native|Public|BlueprintCallable) // @ game+0x2092760
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x2092740
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2092710
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable // (Final|Native|Public|BlueprintCallable) // @ game+0x20926f0
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2092520
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x20924e0
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2092370
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2092200
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20920e0
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2091fa0
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2091f00
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // (Final|Native|Public|BlueprintCallable) // @ game+0x2091d30
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2091d00
};

// Class Paper2D.PaperTileSet
// Size: 0xb0 (Inherited: 0x30)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x40(0x10)
	struct FIntMargin BorderMargin; // 0x50(0x10)
	struct FIntPoint PerTileSpacing; // 0x60(0x08)
	struct FIntPoint DrawingOffset; // 0x68(0x08)
	int32_t WidthInTiles; // 0x70(0x04)
	int32_t HeightInTiles; // 0x74(0x04)
	int32_t AllocatedWidth; // 0x78(0x04)
	int32_t AllocatedHeight; // 0x7c(0x04)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x80(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x90(0x10)
	int32_t TileWidth; // 0xa0(0x04)
	int32_t TileHeight; // 0xa4(0x04)
	int32_t Margin; // 0xa8(0x04)
	int32_t Spacing; // 0xac(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2093800
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2093750
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2093670
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2093440
};

