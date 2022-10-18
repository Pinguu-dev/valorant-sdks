// BlueprintGeneratedClass FXC_Reflex_Base.FXC_Reflex_Base_C
// Size: 0x548 (Inherited: 0x530)
struct AFXC_Reflex_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x538(0x08)
	struct UAnimMontage* RedDot_Montage; // 0x540(0x08)

	float GetMontagePlayRate(struct UActorComponent* EffectContxt); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.GetMontagePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void OnNotifyEnd_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnNotifyEnd_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnNotifyBegin_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnNotifyBegin_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInterrupted_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnInterrupted_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnBlendOut_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnBlendOut_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnCompleted_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnCompleted_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Reflex_Base(int32_t EntryPoint); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.ExecuteUbergraph_FXC_Reflex_Base // (Final|UbergraphFunction) // @ game+0x3520f50
};

