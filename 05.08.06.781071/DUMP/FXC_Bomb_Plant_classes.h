// BlueprintGeneratedClass FXC_Bomb_Plant.FXC_Bomb_Plant_C
// Size: 0x570 (Inherited: 0x530)
struct AFXC_Bomb_Plant_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x538(0x08)
	struct UComp_FXC_Audio_Team_C* Comp_FXC_Audio_Friendly; // 0x540(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* Comp_FXC_PlayAnimation_Equippable; // 0x548(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	float Timeline_0_EmissivePower_74322124498433080CF5F5A3F1DCC4B0; // 0x560(0x04)
	enum class ETimelineDirection Timeline_0__Direction_74322124498433080CF5F5A3F1DCC4B0; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UTimelineComponent* Timeline_1; // 0x568(0x08)

	void Timeline_0__FinishedFunc(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x3520f50
	void Timeline_0__UpdateFunc(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Bomb_Plant(int32_t EntryPoint); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ExecuteUbergraph_FXC_Bomb_Plant // (Final|UbergraphFunction) // @ game+0x3520f50
};

