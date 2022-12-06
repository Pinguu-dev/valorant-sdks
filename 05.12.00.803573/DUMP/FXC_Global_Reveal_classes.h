// BlueprintGeneratedClass FXC_Global_Reveal.FXC_Global_Reveal_C
// Size: 0x5d5 (Inherited: 0x530)
struct AFXC_Global_Reveal_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct UMaterialInterface* Material; // 0x548(0x08)
	struct AShooterCharacter* ; // 0x550(0x08)
	bool ; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct AShooterCharacter* ; // 0x560(0x08)
	bool ; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct U* ; // 0x570(0x08)
	struct FText ; // 0x578(0x18)
	struct FText ; // 0x590(0x18)
	struct UAkAudioEvent* ; // 0x5a8(0x08)
	bool ; // 0x5b0(0x01)
	bool ; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct UMaterialInstanceDynamic* ; // 0x5b8(0x08)
	bool ; // 0x5c0(0x01)
	bool ; // 0x5c1(0x01)
	char pad_5C2[0x2]; // 0x5c2(0x02)
	int32_t ; // 0x5c4(0x04)
	struct FName ; // 0x5c8(0x0c)
	bool ; // 0x5d4(0x01)

	void (struct FString Message); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UMaterialInstanceDynamic*& ); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FText , struct FText ); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Global_Reveal.FXC_Global_Reveal_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

