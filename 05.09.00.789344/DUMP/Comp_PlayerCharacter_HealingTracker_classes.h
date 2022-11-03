// BlueprintGeneratedClass Comp_PlayerCharacter_HealingTracker.Comp_PlayerCharacter_HealingTracker_C
// Size: 0xf0 (Inherited: 0xe8)
struct UComp_PlayerCharacter_HealingTracker_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)

	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_HealingTracker.Comp_PlayerCharacter_HealingTracker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnHealed_Event_1(float Health, struct AActor* HealedActor, struct TArray<struct UDamageSectionComponent*>& Components, struct AController* EventInstigator, struct APawn* EventInstigatorPawn, struct AActor* HealCauser); // Function Comp_PlayerCharacter_HealingTracker.Comp_PlayerCharacter_HealingTracker_C.OnHealed_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_PlayerCharacter_HealingTracker(int32_t EntryPoint); // Function Comp_PlayerCharacter_HealingTracker.Comp_PlayerCharacter_HealingTracker_C.ExecuteUbergraph_Comp_PlayerCharacter_HealingTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

