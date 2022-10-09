// BlueprintGeneratedClass BombDetonationActor.BombDetonationActor_C
// Size: 0x434 (Inherited: 0x400)
struct ABombDetonationActor_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* Sphere; // 0x408(0x08)
	struct UParticleSystemComponent* SonarEffect; // 0x410(0x08)
	struct TArray<struct APawn*> PingedPawns; // 0x418(0x10)
	float ExpandMaxSize; // 0x428(0x04)
	float ExpandTime; // 0x42c(0x04)
	float Damage; // 0x430(0x04)

	void ReplicateBombHit(struct AShooterCharacter* HitCharacter); // Function BombDetonationActor.BombDetonationActor_C.ReplicateBombHit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function BombDetonationActor.BombDetonationActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function BombDetonationActor.BombDetonationActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_228_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombDetonationActor.BombDetonationActor_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_228_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BombDetonationActor(int32_t EntryPoint); // Function BombDetonationActor.BombDetonationActor_C.ExecuteUbergraph_BombDetonationActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

