// BlueprintGeneratedClass ThrottledMapPingComponent.ThrottledMapPingComponent_C
// Size: 0x158 (Inherited: 0xf8)
struct UThrottledMapPingComponent_C : UMapPingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	float NearbyPingClearDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TMap<int32_t, enum class NonVerbalCommTypesEnum> SelectedPingToCommStringMap; // 0x108(0x50)

	bool ValidateNewPing(struct FMapPingData& PingData, struct FVector& Location, struct TArray<struct FActivePingData>& ActivePings, struct FEffectData& NewPingEffectData); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.ValidateNewPing // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnNewPing(enum class EMapPingType PingType, int32_t PingIndex, struct FVector& Location); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.OnNewPing // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ThrottledMapPingComponent(int32_t EntryPoint); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.ExecuteUbergraph_ThrottledMapPingComponent // (Final|UbergraphFunction) // @ game+0x32f73d0
};

