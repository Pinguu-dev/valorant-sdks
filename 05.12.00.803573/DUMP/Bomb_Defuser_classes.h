// BlueprintGeneratedClass Bomb_Defuser.Bomb_Defuser_C
// Size: 0xf28 (Inherited: 0xef0)
struct ABomb_Defuser_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipStateComponent; // 0xef8(0x08)
	struct UTimedStateComponent* ; // 0xf00(0x08)
	struct UTimedStateComponent* ; // 0xf08(0x08)
	struct UWhileUsingUsableStateComponent* ; // 0xf10(0x08)
	struct UEquipStateComponent* EquipState; // 0xf18(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0xf20(0x08)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Bomb_Defuser.Bomb_Defuser_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Bomb_Defuser.Bomb_Defuser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Bomb_Defuser.Bomb_Defuser_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

