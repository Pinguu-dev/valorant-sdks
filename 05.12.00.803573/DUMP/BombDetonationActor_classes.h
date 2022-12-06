// BlueprintGeneratedClass BombDetonationActor.BombDetonationActor_C
// Size: 0x434 (Inherited: 0x400)
struct ABombDetonationActor_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* Sphere; // 0x408(0x08)
	struct UParticleSystemComponent* ; // 0x410(0x08)
	struct TArray<struct APawn*> ; // 0x418(0x10)
	float ; // 0x428(0x04)
	float ; // 0x42c(0x04)
	float Damage; // 0x430(0x04)

	void (struct AShooterCharacter* ); // Function BombDetonationActor.BombDetonationActor_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function BombDetonationActor.BombDetonationActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BombDetonationActor.BombDetonationActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombDetonationActor.BombDetonationActor_C. // (HasOutParms|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BombDetonationActor.BombDetonationActor_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

