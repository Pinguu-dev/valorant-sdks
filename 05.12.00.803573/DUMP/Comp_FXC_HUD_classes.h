// BlueprintGeneratedClass Comp_FXC_HUD.Comp_FXC_HUD_C
// Size: 0x134 (Inherited: 0xf8)
struct UComp_FXC_HUD_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct UUserWidget* ; // 0x108(0x08)
	int32_t ZOrder; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UUserWidget* ; // 0x118(0x08)
	struct FMulticastInlineDelegate ; // 0x120(0x10)
	bool ; // 0x130(0x01)
	bool ; // 0x131(0x01)
	bool ; // 0x132(0x01)
	bool ; // 0x133(0x01)

	void (bool ); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UUserWidget*& ); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UUserWidget* ); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_HUD.Comp_FXC_HUD_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (Final|UbergraphFunction) // @ game+0x3322a60
	void (struct UUserWidget* ); // Function Comp_FXC_HUD.Comp_FXC_HUD_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

