// BlueprintGeneratedClass BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C
// Size: 0x479 (Inherited: 0x434)
struct ABombDetonationActor_TwoStage_C : ABombDetonationActor_C {
	char pad_434[0x4]; // 0x434(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x440(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit Players; // 0x448(0x10)
	float Kill timer; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FTimerHandle Killsphere Timer; // 0x460(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit PlayersKillSphere; // 0x468(0x10)
	bool Expanding; // 0x478(0x01)

	void ReceiveBeginPlay(); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnCharacterKilledByBomb(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.OnCharacterKilledByBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BombDetonationActor_TwoStage(int32_t EntryPoint); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ExecuteUbergraph_BombDetonationActor_TwoStage // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

