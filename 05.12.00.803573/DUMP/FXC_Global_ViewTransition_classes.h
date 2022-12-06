// BlueprintGeneratedClass FXC_Global_ViewTransition.FXC_Global_ViewTransition_C
// Size: 0x570 (Inherited: 0x530)
struct AFXC_Global_ViewTransition_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct AShooterPlayerController* ; // 0x548(0x08)
	struct UParticleSystemComponent* ; // 0x550(0x08)
	float ; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct AShooterCharacter* ; // 0x560(0x08)
	struct UMaterialInstanceDynamic* ; // 0x568(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

