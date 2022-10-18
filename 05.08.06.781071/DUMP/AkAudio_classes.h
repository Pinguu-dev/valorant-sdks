// Class AkAudio.AkAcousticPortal
// Size: 0x498 (Inherited: 0x408)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float ObstructionRefreshInterval; // 0x40c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x410(0x01)
	bool bValidForOcclusionPaths; // 0x411(0x01)
	char pad_412[0x86]; // 0x412(0x86)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x2198780
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21982c0
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x2198170
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

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2199a30
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2199a10
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	bool IsLocalized(); // Function AkAudio.AkAudioEvent.IsLocalized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198650
	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198380
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198350
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198320
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21982f0
	enum class EAkAudioEventDurationType DurationType(); // Function AkAudio.AkAudioEvent.DurationType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198190
};

// Class AkAudio.AkGameObject
// Size: 0x2b0 (Inherited: 0x290)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x288(0x08)
	struct FString EventName; // 0x290(0x10)
	bool bIsPersistent; // 0x2a0(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21ae1e0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21acfb0
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21acde0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21acb00
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21ac8a0
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

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2199c60
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x2199a50
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2199830
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21997a0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkComponent.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21995e0
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2199560
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21994b0
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21993a0
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21992f0
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21991f0
	void SeekOnEvent(int32_t Milliseconds, int32_t PlayingID); // Function AkAudio.AkComponent.SeekOnEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2198fd0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2198e90
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2198cb0
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2198b40
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2198950
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21987a0
	int32_t NumActiveEvents(); // Function AkAudio.AkComponent.NumActiveEvents // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198750
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkComponent.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21983b0
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198260
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x480 (Inherited: 0x470)
struct UAkAudioInputComponent : UAkComponent {
	char pad_470[0x10]; // 0x470(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2198e60
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

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x2199420
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x2199270
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2199150
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x21990a0
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198690
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198620
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198290
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2198200
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x21981c0
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae560
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ae470
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ae2e0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae2c0
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae2a0
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae220
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae200
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae140
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae0a0
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ae020
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21adef0
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21add90
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21adb70
	void SetRandomSeed(int32_t Seed); // Function AkAudio.AkGameplayStatics.SetRandomSeed // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21add10
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21adb00
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ad9a0
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ad7a0
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ad5a0
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ad490
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ad340
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ad250
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ac7a0
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ac700
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ac610
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ac480
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ac3f0
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ac3c0
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ac220
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21abfd0
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21abe40
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21abaf0
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ab870
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ab7a0
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x21ab7a0
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ab660
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ab490
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ab470
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21ab3c0
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x21ab320
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

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x21ac390
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abf20
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abe70
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abd90
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abce0
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abc30
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21abb80
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21aba40
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x21aba10
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21ab960
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

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x21b6860
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x21b6790
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x21b65c0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b64e0
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b63f0
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21b67b0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21b6670
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21b65e0
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b64e0
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b63f0
};

// Class AkAudio.AkItemProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21b67b0
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21b6700
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21b65e0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21bcfd0
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

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd4b0
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd430
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x21bd3a0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x21bd310
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd280
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd1f0
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd140
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x21bd0a0
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21bcfa0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21bcf40
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x21bcf00
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

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd530
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd080
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x21bd060
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c6190
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5ed0
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5e00
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5010
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4f50
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4ec0
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21c42b0
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21c41d0
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c3d30
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b64e0
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b63f0
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5bf0
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c59a0
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c57a0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5590
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c5340
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c50d0
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4d20
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4a30
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c48d0
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4770
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4610
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c4380
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x21c40b0
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x21c3f80
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b64e0
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b63f0
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x21b67b0
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21c4bf0
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x21b65e0
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

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x21986c0
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

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x21c7990
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x21c7950
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x88 (Inherited: 0x38)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x21c7c40
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x21c7970
};

