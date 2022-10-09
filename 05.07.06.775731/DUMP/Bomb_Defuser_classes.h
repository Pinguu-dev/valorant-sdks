// BlueprintGeneratedClass Bomb_Defuser.Bomb_Defuser_C
// Size: 0xf08 (Inherited: 0xed0)
struct ABomb_Defuser_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xed0(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipStateComponent; // 0xed8(0x08)
	struct UTimedStateComponent* CancelCommitState; // 0xee0(0x08)
	struct UTimedStateComponent* CompleteCommitState; // 0xee8(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0xef0(0x08)
	struct UEquipStateComponent* EquipState; // 0xef8(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0xf00(0x08)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Bomb_Defuser.Bomb_Defuser_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Bomb_Defuser.Bomb_Defuser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Bomb_Defuser(int32_t EntryPoint); // Function Bomb_Defuser.Bomb_Defuser_C.ExecuteUbergraph_Bomb_Defuser // (Final|UbergraphFunction) // @ game+0x3511190
};

