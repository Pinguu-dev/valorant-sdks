// BlueprintGeneratedClass FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C
// Size: 0x558 (Inherited: 0x530)
struct AFXC_LoadoutWidget_TEMP_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UWidgetComponent* Widget; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct UCurveFloat* OffsetCurve; // 0x548(0x08)
	struct UCurveFloat* SizeCurve; // 0x550(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ResetEffect(); // Function FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FXC_LoadoutWidget_TEMP(int32_t EntryPoint); // Function FXC_LoadoutWidget_TEMP.FXC_LoadoutWidget_TEMP_C.ExecuteUbergraph_FXC_LoadoutWidget_TEMP // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

