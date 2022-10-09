// BlueprintGeneratedClass BaseDetachedTracer.BaseDetachedTracer_C
// Size: 0x648 (Inherited: 0x630)
struct ABaseDetachedTracer_C : AAresDetachedTracer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct TArray<float> IntensityCycleArray; // 0x638(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function BaseDetachedTracer.BaseDetachedTracer_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseDetachedTracer(int32_t EntryPoint); // Function BaseDetachedTracer.BaseDetachedTracer_C.ExecuteUbergraph_BaseDetachedTracer // (Final|UbergraphFunction) // @ game+0x3511190
};

