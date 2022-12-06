// BlueprintGeneratedClass BP_RopeAscender.BP_RopeAscender_C
// Size: 0x595 (Inherited: 0x3d0)
struct ABP_RopeAscender_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UStaticMeshComponent* ; // 0x3d8(0x08)
	struct UUsableComponent* ; // 0x3e0(0x08)
	struct USplineComponent* ; // 0x3e8(0x08)
	struct UUsableComponent* ; // 0x3f0(0x08)
	struct UBoxComponent* ; // 0x3f8(0x08)
	struct ABasePlayerCharacter_C* ; // 0x400(0x08)
	struct AActor* ; // 0x408(0x08)
	float ; // 0x410(0x04)
	float ; // 0x414(0x04)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> ; // 0x418(0x50)
	struct FName ; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct TMap<struct AShooterCharacter*, struct FNetworkedMovementTimestamp> ; // 0x478(0x50)
	enum class Enum_AscenderMovementType ; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float ; // 0x4cc(0x04)
	float ; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TSet<struct AShooterCharacter*> ; // 0x4d8(0x50)
	float ; // 0x528(0x04)
	float ; // 0x52c(0x04)
	float ; // 0x530(0x04)
	float ; // 0x534(0x04)
	bool ; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	struct FGameplayTag ; // 0x53c(0x0c)
	struct UForceModule* ; // 0x548(0x08)
	struct UDebuff_RopeAscender_C* ; // 0x550(0x08)
	bool ; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UDebuff_AutoZipline_C* ; // 0x560(0x08)
	struct TArray<struct ABP_BlockingVolume_C*> ; // 0x568(0x10)
	bool ; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct UForceModule* ; // 0x580(0x08)
	bool ; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	struct FForceModuleHandle ForceModuleHandle; // 0x58c(0x08)
	bool ; // 0x594(0x01)

	void (struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AActor* , struct AActor* , bool& ); // Function BP_RopeAscender.BP_RopeAscender_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C. // (BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C. // (BlueprintEvent) // @ game+0x3322a60
	void _1(int32_t RoundNumberBeginning); // Function BP_RopeAscender.BP_RopeAscender_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_RopeAscender.BP_RopeAscender_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BP_RopeAscender.BP_RopeAscender_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (struct UInteractableUserComponent* User); // Function BP_RopeAscender.BP_RopeAscender_C. // (BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* Character); // Function BP_RopeAscender.BP_RopeAscender_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BP_RopeAscender.BP_RopeAscender_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

