// BlueprintGeneratedClass FXC_Global_Deafened.FXC_Global_Deafened_C
// Size: 0x568 (Inherited: 0x530)
struct AFXC_Global_Deafened_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x538(0x08)
	bool ; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct AShooterCharacter* ; // 0x548(0x08)
	bool ; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UAkAudioEvent* ; // 0x558(0x08)
	struct UAkAudioEvent* ; // 0x560(0x08)

	void (bool ); // Function FXC_Global_Deafened.FXC_Global_Deafened_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_Deafened.FXC_Global_Deafened_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_Deafened.FXC_Global_Deafened_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_Deafened.FXC_Global_Deafened_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_Global_Deafened.FXC_Global_Deafened_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

