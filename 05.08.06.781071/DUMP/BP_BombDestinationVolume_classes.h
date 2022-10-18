// BlueprintGeneratedClass BP_BombDestinationVolume.BP_BombDestinationVolume_C
// Size: 0x418 (Inherited: 0x400)
struct ABP_BombDestinationVolume_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UStaticMeshComponent* TriggerBox; // 0x408(0x08)
	struct UBillboardComponent* Billboard; // 0x410(0x08)

	void IsOverlappingShooterCharacter(struct AShooterCharacter* ShooterCharacter, bool& Overlapping); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.IsOverlappingShooterCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BP_BombDestinationVolume(int32_t EntryPoint); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.ExecuteUbergraph_BP_BombDestinationVolume // (Final|UbergraphFunction) // @ game+0x3520f50
};

