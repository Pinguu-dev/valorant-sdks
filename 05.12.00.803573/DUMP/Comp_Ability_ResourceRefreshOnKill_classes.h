// BlueprintGeneratedClass Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C
// Size: 0xfc (Inherited: 0xe8)
struct UComp_Ability_ResourceRefreshOnKill_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	int32_t ; // 0xf0(0x04)
	int32_t ; // 0xf4(0x04)
	int32_t ; // 0xf8(0x04)

	void (); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t& ); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

