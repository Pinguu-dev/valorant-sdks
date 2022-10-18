// BlueprintGeneratedClass Comp_GameMode_KillVO.Comp_GameMode_KillVO_C
// Size: 0xf0 (Inherited: 0xe8)
struct UComp_GameMode_KillVO_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)

	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.OnPlayerKilled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_GameMode_KillVO(int32_t EntryPoint); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.ExecuteUbergraph_Comp_GameMode_KillVO // (Final|UbergraphFunction) // @ game+0x3520f50
};

