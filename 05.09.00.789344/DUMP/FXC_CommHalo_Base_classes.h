// BlueprintGeneratedClass FXC_CommHalo_Base.FXC_CommHalo_Base_C
// Size: 0x623 (Inherited: 0x530)
struct AFXC_CommHalo_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UStaticMeshComponent* BillboardStaticMeshVoice; // 0x538(0x08)
	struct UStaticMeshComponent* BillboardStaticMesh; // 0x540(0x08)
	struct UWidgetComponent* Widget; // 0x548(0x08)
	struct USceneComponent* Scene; // 0x550(0x08)
	float Timeline_0_NewTrack_0_37C5AAB8491F8BC642FFAEB92BE365E5; // 0x558(0x04)
	enum class ETimelineDirection Timeline_0__Direction_37C5AAB8491F8BC642FFAEB92BE365E5; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x560(0x08)
	struct TMap<int32_t, struct UTexture*> FXCDataToTextureMap; // 0x568(0x50)
	struct UMaterialInstanceDynamic* NonVerbalMaterial; // 0x5b8(0x08)
	struct UTexture* DefaultMaterialTextureForNonVerbal; // 0x5c0(0x08)
	struct UTexture* HasBombIconTexture; // 0x5c8(0x08)
	struct UTexture* BasePlayerIconTexture; // 0x5d0(0x08)
	struct UMaterialInstanceDynamic* VoiceMaterial; // 0x5d8(0x08)
	struct UTexture* DefaultMaterialTextureForVoice; // 0x5e0(0x08)
	struct UCurveFloat* VoiceIconOffsetCurve; // 0x5e8(0x08)
	struct UCurveFloat* NonVerbalIconOffsetCurve; // 0x5f0(0x08)
	struct UTexture* SpeakingMaterialTextureForVoice; // 0x5f8(0x08)
	struct UCurveFloat* LoadoutOffsetCurve; // 0x600(0x08)
	struct UCurveFloat* LoadoutSizeCurve; // 0x608(0x08)
	struct AActor* Target; // 0x610(0x08)
	struct UCurveFloat* CommHaloScaleCurveScreenSpace; // 0x618(0x08)
	bool TeamVoice; // 0x620(0x01)
	bool PartyVoice; // 0x621(0x01)
	bool IsFirstPerson; // 0x622(0x01)

	void UpdateBombIcon(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateBombIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Timeline_0__FinishedFunc(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x32f73d0
	void Timeline_0__UpdateFunc(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void EffectDataUpdated(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ResetEffect(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void TeamSpeakingStateChange(bool NewValue); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.TeamSpeakingStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CustomEvent_1(struct UVoiceSessionParticipantModel* VoiceSessionParticipant); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnCinematicModeUpdated_Event(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.OnCinematicModeUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PartySpeakingStateChange(bool NewValue); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.PartySpeakingStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_CommHalo_Base(int32_t EntryPoint); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ExecuteUbergraph_FXC_CommHalo_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

