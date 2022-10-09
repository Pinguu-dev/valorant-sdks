// Class AkAudio.AkAcousticPortal
// Size: 0x498 (Inherited: 0x408)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float ObstructionRefreshInterval; // 0x40c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x410(0x01)
	bool bValidForOcclusionPaths; // 0x411(0x01)
	char pad_412[0x86]; // 0x412(0x86)
};

// Class AkAudio.AkPortalComponent
// Size: 0x290 (Inherited: 0x290)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAudioType
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x48 (Inherited: 0x48)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAmbientSound
// Size: 0x410 (Inherited: 0x3d0)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x3d0(0x08)
	struct UAkComponent* AkComponent; // 0x3d8(0x08)
	bool bDisableAkComponentTick; // 0x3e0(0x01)
	bool StopWhenOwnerIsDestroyed; // 0x3e1(0x01)
	bool AutoPost; // 0x3e2(0x01)
	char pad_3E3[0x2d]; // 0x3e3(0x2d)
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
};

// Class AkAudio.AkPlatformInfo
// Size: 0x78 (Inherited: 0x30)
struct UAkPlatformInfo : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x78 (Inherited: 0x30)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x30(0x04)
	char pad_34[0x44]; // 0x34(0x44)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x98 (Inherited: 0x78)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x38 (Inherited: 0x30)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x30(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x60 (Inherited: 0x48)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class AkAudio.AkAudioBank
// Size: 0x140 (Inherited: 0x60)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UAkAudioBank* RequiredMediaBank; // 0x68(0x08)
	struct UAkAudioBank* InitBank; // 0x70(0x08)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x78(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xc8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x118(0x08)
	char pad_120[0x20]; // 0x120(0x20)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x98 (Inherited: 0x30)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x30(0x30)
	struct UAkGroupValue* DefaultGroupValue; // 0x60(0x08)
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x68(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xc0 (Inherited: 0x98)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x98(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class AkAudio.AkAudioEventData
// Size: 0x290 (Inherited: 0xc0)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xc0(0x04)
	bool IsInfinite; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float MinimumDuration; // 0xc8(0x04)
	float MaximumDuration; // 0xcc(0x04)
	enum class EAkAudioEventDurationType DurationType; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xd8(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x128(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x178(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1c8(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x218(0x50)
	char pad_268[0x28]; // 0x268(0x28)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe0 (Inherited: 0x60)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct UAkAudioBank* RequiredBank; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)
};

// Class AkAudio.AkGameObject
// Size: 0x2b0 (Inherited: 0x290)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x288(0x08)
	struct FString EventName; // 0x290(0x10)
	bool bIsPersistent; // 0x2a0(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
};

// Class AkAudio.AkComponent
// Size: 0x470 (Inherited: 0x2b0)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x2a8(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x2b0(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	char EnableSpotReflectors : 1; // 0x2b4(0x01)
	char pad_2B4_1 : 7; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x2b8(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x2c0(0x10)
	int32_t EarlyReflectionOrder; // 0x2d0(0x04)
	float EarlyReflectionBusSendGain; // 0x2d4(0x04)
	float EarlyReflectionMaxPathLength; // 0x2d8(0x04)
	float roomReverbAuxBusGain; // 0x2dc(0x04)
	int32_t diffractionMaxEdges; // 0x2e0(0x04)
	int32_t diffractionMaxPaths; // 0x2e4(0x04)
	float diffractionMaxPathLength; // 0x2e8(0x04)
	char DrawFirstOrderReflections : 1; // 0x2ec(0x01)
	char DrawSecondOrderReflections : 1; // 0x2ec(0x01)
	char DrawHigherOrderReflections : 1; // 0x2ec(0x01)
	char DrawDiffraction : 1; // 0x2ec(0x01)
	char pad_2EC_4 : 4; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	bool StopWhenOwnerDestroyed; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float AttenuationScalingFactor; // 0x2f4(0x04)
	float OcclusionRefreshInterval; // 0x2f8(0x04)
	bool bUseReverbVolumes; // 0x2fc(0x01)
	char pad_2FD[0x173]; // 0x2fd(0x173)
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x480 (Inherited: 0x470)
struct UAkAudioInputComponent : UAkComponent {
	char pad_470[0x10]; // 0x470(0x10)
};

// Class AkAudio.AkAuxBus
// Size: 0x68 (Inherited: 0x60)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x60(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xbf0 (Inherited: 0x160)
struct UAkCheckBox : UContentWidget {
	char pad_160[0x3c0]; // 0x160(0x3c0)
	enum class ECheckBoxState CheckedState; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	struct FDelegate CheckedStateDelegate; // 0x524(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x538(0x5e0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xb18(0x01)
	bool IsFocusable; // 0xb19(0x01)
	char pad_B1A[0x6]; // 0xb1a(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xb20(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xb30(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb70(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xb80(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb90(0x10)
	char pad_BA0[0x50]; // 0xba0(0x50)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x30(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	int32_t EventID; // 0x3c(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x40)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x40(0x04)
	int32_t Position; // 0x44(0x04)
	struct FString Label; // 0x48(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaID; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x78 (Inherited: 0x38)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UserCueName; // 0x68(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x3c0 (Inherited: 0x290)
struct UAkGeometryComponent : USceneComponent {
	enum class AkMeshType MeshType; // 0x288(0x01)
	int32_t LOD; // 0x28c(0x04)
	float WeldingThreshold; // 0x290(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x298(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x2e8(0x10)
	char bEnableDiffraction : 1; // 0x2f8(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x2f8(0x01)
	char pad_2F9_2 : 6; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct AActor* AssociatedRoom; // 0x300(0x08)
	char pad_308[0x10]; // 0x308(0x10)
	struct FAkGeometryData GeometryData; // 0x318(0x50)
	char pad_368[0x58]; // 0x368(0x58)
};

// Class AkAudio.AkGroupValue
// Size: 0x60 (Inherited: 0x48)
struct UAkGroupValue : UAkAudioType {
	uint32_t GroupShortID; // 0x48(0x04)
	char pad_4C[0x14]; // 0x4c(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkHololensInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0xa8 (Inherited: 0x98)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x98(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x80 (Inherited: 0x60)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x60(0x10)
	struct FString DefaultLanguage; // 0x70(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x34)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkItemProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x288(0x01)
	struct UAkAuxBus* AuxBus; // 0x290(0x08)
	struct FString AuxBusName; // 0x298(0x10)
	float SendLevel; // 0x2a8(0x04)
	float FadeRate; // 0x2ac(0x04)
	float Priority; // 0x2b0(0x04)
	char pad_2B4_1 : 7; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkLuminInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
};

// Class AkAudio.AkLuminPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkLuminPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x48 (Inherited: 0x30)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x30(0x01)
	bool UseDeviceMemory; // 0x31(0x01)
	char pad_32[0x16]; // 0x32(0x16)
};

// Class AkAudio.AkMediaAsset
// Size: 0x60 (Inherited: 0x30)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x60 (Inherited: 0x60)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xc0 (Inherited: 0x60)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_60[0x60]; // 0x60(0x60)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x440 (Inherited: 0x408)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UAkAuxBus* AuxBus; // 0x410(0x08)
	struct FString AuxBusName; // 0x418(0x10)
	float SendLevel; // 0x428(0x04)
	float FadeRate; // 0x42c(0x04)
	float Priority; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x438(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x2e0 (Inherited: 0x2b0)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x2a8(0x01)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x2b0(0x08)
	float Priority; // 0x2b8(0x04)
	float WallOcclusion; // 0x2bc(0x04)
	float AuxSendLevel; // 0x2c0(0x04)
	bool AutoPost; // 0x2c4(0x01)
	char pad_2C5_1 : 7; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	struct UAkAudioEvent* AmbientEvent; // 0x2c8(0x08)
	float AuxSendLevelToSelf; // 0x2d0(0x04)
	char pad_2D4[0xc]; // 0x2d4(0x0c)
};

// Class AkAudio.AkRtpc
// Size: 0x48 (Inherited: 0x48)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x190 (Inherited: 0x30)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FFilePath TemporaryAudioFileStubPath; // 0x48(0x10)
	struct FFilePath ReportOutputPath; // 0x58(0x10)
	struct FFilePath ReportIgnoreListPath; // 0x68(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x78(0x10)
	bool bAutoConnectToWAAPI; // 0x88(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x90(0x50)
	bool SplitSwitchContainerMedia; // 0xe0(0x01)
	bool UseEventBasedPackaging; // 0xe1(0x01)
	bool EnableAutomaticAssetSynchronization; // 0xe2(0x01)
	char pad_E3[0x5]; // 0xe3(0x05)
	struct FString CommandletCommitMessage; // 0xe8(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xf8(0x50)
	bool AskedToUseNewAssetManagement; // 0x148(0x01)
	bool bEnableMultiCoreRendering; // 0x149(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x14a(0x01)
	bool FixupRedirectorsDuringMigration; // 0x14b(0x01)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x150(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x160(0x10)
	char pad_170[0x20]; // 0x170(0x20)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x68 (Inherited: 0x30)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x30(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x40(0x10)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool AutoSyncSelection; // 0x64(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x65(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// Class AkAudio.AkSlider
// Size: 0x5a0 (Inherited: 0x148)
struct UAkSlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x14)
	struct FSliderStyle WidgetStyle; // 0x160(0x370)
	enum class EOrientation Orientation; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	struct FLinearColor SliderBarColor; // 0x4d4(0x10)
	struct FLinearColor SliderHandleColor; // 0x4e4(0x10)
	bool IndentHandle; // 0x4f4(0x01)
	bool Locked; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	float StepSize; // 0x4f8(0x04)
	bool IsFocusable; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x500(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x510(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x550(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x560(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x570(0x10)
	char pad_580[0x20]; // 0x580(0x20)
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x418 (Inherited: 0x408)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkLateReverbComponent* LateReverb; // 0x408(0x08)
	struct UAkRoomComponent* Room; // 0x410(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x3f8 (Inherited: 0x3d0)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x3d0(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x3d8(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x3e8(0x08)
	float DistanceScalingFactor; // 0x3f0(0x04)
	float Level; // 0x3f4(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x60 (Inherited: 0x60)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x288(0x01)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x290(0x10)
	char bEnableDiffraction : 1; // 0x2a0(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x2a0(0x01)
	char pad_2A0_3 : 5; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct AActor* AssociatedRoom; // 0x2a8(0x08)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x60 (Inherited: 0x60)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x48 (Inherited: 0x48)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkTVOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x34)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x188 (Inherited: 0x148)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x1a8 (Inherited: 0x148)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x158(0x10)
	char pad_168[0x40]; // 0x168(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkXboxOneInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d8 (Inherited: 0xf0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_F0[0x40]; // 0xf0(0x40)
	struct UAkAudioEvent* Event; // 0x130(0x08)
	bool RetriggerEvent; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32_t ScrubTailLengthMs; // 0x13c(0x04)
	bool StopAtSectionEnd; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FString EventName; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)
	float MaxSourceDuration; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString MaxDurationSourceID; // 0x180(0x10)
	char pad_190[0x48]; // 0x190(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x98 (Inherited: 0x80)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
	char bIsAMasterTrack : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x258 (Inherited: 0xf0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xf0(0x08)
	struct FString Name; // 0xf8(0x10)
	struct FRichCurve FloatCurve; // 0x108(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x188(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PostEventAsync
// Size: 0xa8 (Inherited: 0x38)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x88 (Inherited: 0x38)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)
};

