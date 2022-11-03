// BlueprintGeneratedClass FXC_Global_Reveal.FXC_Global_Reveal_C
// Size: 0x5d5 (Inherited: 0x530)
struct AFXC_Global_Reveal_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct UMaterialInterface* Material; // 0x548(0x08)
	struct AShooterCharacter* RevealedCharacter; // 0x550(0x08)
	bool OnlyRevealForInstigator; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct AShooterCharacter* EffectInstigator; // 0x560(0x08)
	bool HideIfDead; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UWarningMessageHUD_C* HUD_Warning; // 0x570(0x08)
	struct FText WarningMessageText; // 0x578(0x18)
	struct FText WarningMessageSubtext; // 0x590(0x18)
	struct UAkAudioEvent* HUD_WarningPulse; // 0x5a8(0x08)
	bool ShowHUD_Warning; // 0x5b0(0x01)
	bool HideIfInvisible; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x5b8(0x08)
	bool RevealToAllies; // 0x5c0(0x01)
	bool Initialized; // 0x5c1(0x01)
	char pad_5C2[0x2]; // 0x5c2(0x02)
	int32_t ThrottlingDelayFrames; // 0x5c4(0x04)
	struct FName ThrottlingKey; // 0x5c8(0x0c)
	bool EnableDebugLogging; // 0x5d4(0x01)

	void LogDebugMessage(struct FString Message); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.LogDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TryInitialize(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.TryInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetDynamicMaterialInstance(struct UMaterialInstanceDynamic*& DynamicMaterialInstance); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.GetDynamicMaterialInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void UpdateWarningHUD_Text(struct FText MessageText, struct FText SubText); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateWarningHUD_Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ShouldBeHidden(bool& ShouldBeHidden); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ShouldBeHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SetupNewMeshMaterials(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.SetupNewMeshMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ResetEffect(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ManuallyUpdateEffectPerspective(bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ManuallyUpdateEffectPerspective // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_Global_Reveal(int32_t EntryPoint); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ExecuteUbergraph_FXC_Global_Reveal // (Final|UbergraphFunction) // @ game+0x32f73d0
};

