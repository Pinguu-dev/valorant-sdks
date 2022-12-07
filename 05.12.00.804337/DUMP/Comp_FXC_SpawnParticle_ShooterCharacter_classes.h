// BlueprintGeneratedClass Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C
// Size: 0x209 (Inherited: 0xf8)
struct UComp_FXC_SpawnParticle_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UParticleSystemComponent* ; // 0x100(0x08)
	struct UParticleSystemComponent* ; // 0x108(0x08)
	struct UParticleSystem* ; // 0x110(0x08)
	struct FName ; // 0x118(0x0c)
	struct FVector ; // 0x124(0x0c)
	struct FRotator ; // 0x130(0x0c)
	struct FVector ; // 0x13c(0x0c)
	bool ; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float ; // 0x14c(0x04)
	float ; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FTimerHandle ; // 0x158(0x08)
	struct UParticleSystem* ; // 0x160(0x08)
	struct FName ; // 0x168(0x0c)
	struct FVector ; // 0x174(0x0c)
	struct FRotator ; // 0x180(0x0c)
	struct FVector ; // 0x18c(0x0c)
	float ; // 0x198(0x04)
	float ; // 0x19c(0x04)
	struct FTimerHandle ; // 0x1a0(0x08)
	enum class Struct_ParticleStopBehavior ; // 0x1a8(0x01)
	bool ; // 0x1a9(0x01)
	bool ; // 0x1aa(0x01)
	bool ; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FMulticastInlineDelegate ; // 0x1b0(0x10)
	struct FMulticastInlineDelegate ; // 0x1c0(0x10)
	struct FMulticastInlineDelegate ; // 0x1d0(0x10)
	struct FMulticastInlineDelegate ; // 0x1e0(0x10)
	bool ; // 0x1f0(0x01)
	bool ; // 0x1f1(0x01)
	bool ; // 0x1f2(0x01)
	char pad_1F3[0x5]; // 0x1f3(0x05)
	struct AActor* Target; // 0x1f8(0x08)
	struct UObject* Context; // 0x200(0x08)
	bool ; // 0x208(0x01)

	void (struct AActor* Actor, bool& Valid); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Target, struct UObject* Context, struct AShooterCharacter*& Character); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Target, struct UObject* Context, struct USceneComponent*& ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Target, struct UObject* Context, struct USceneComponent*& ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct USceneComponent* , bool bNewVisibility); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UParticleSystemComponent*& ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UParticleSystemComponent*& ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UParticleSystemComponent* ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UParticleSystemComponent* ); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

