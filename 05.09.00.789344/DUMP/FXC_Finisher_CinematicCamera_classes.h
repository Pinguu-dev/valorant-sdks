// BlueprintGeneratedClass FXC_Finisher_CinematicCamera.FXC_Finisher_CinematicCamera_C
// Size: 0x580 (Inherited: 0x530)
struct AFXC_Finisher_CinematicCamera_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCameraComponent* Camera; // 0x538(0x08)
	struct USpringArmComponent* SpringArm; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	float CameraSwapDelayTime; // 0x550(0x04)
	enum class EViewTargetBlendFunction ViewTarget Blend; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	float Blend Time; // 0x558(0x04)
	float Blend Exp; // 0x55c(0x04)
	struct AShooterCharacter* Victim; // 0x560(0x08)
	struct AShooterCharacter* Killer; // 0x568(0x08)
	bool Reverse Camera Direction; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float Relative Distance Between Targets; // 0x574(0x04)
	float Max Camera Distance; // 0x578(0x04)
	float Min Camera Distance; // 0x57c(0x04)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_CinematicCamera.FXC_Finisher_CinematicCamera_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void SetNewViewTarget(); // Function FXC_Finisher_CinematicCamera.FXC_Finisher_CinematicCamera_C.SetNewViewTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_CinematicCamera.FXC_Finisher_CinematicCamera_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_Finisher_CinematicCamera(int32_t EntryPoint); // Function FXC_Finisher_CinematicCamera.FXC_Finisher_CinematicCamera_C.ExecuteUbergraph_FXC_Finisher_CinematicCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

