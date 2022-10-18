// BlueprintGeneratedClass TimedBomb.TimedBomb_C
// Size: 0x5f0 (Inherited: 0x5d8)
struct ATimedBomb_C : APlantedBomb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	float FirstBombTickSpeedUpTimeRemaining; // 0x5e0(0x04)
	float SecondBombTickSpeedUpTimeRemaining; // 0x5e4(0x04)
	float ThirdBombTickSpeedUpTimeRemaining; // 0x5e8(0x04)
	float DetonationBombTickSpeedUpTimeRemaining; // 0x5ec(0x04)

	void UpdateBombTickState(); // Function TimedBomb.TimedBomb_C.UpdateBombTickState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function TimedBomb.TimedBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void AuthTickEffects(); // Function TimedBomb.TimedBomb_C.AuthTickEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_TimedBomb(int32_t EntryPoint); // Function TimedBomb.TimedBomb_C.ExecuteUbergraph_TimedBomb // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

