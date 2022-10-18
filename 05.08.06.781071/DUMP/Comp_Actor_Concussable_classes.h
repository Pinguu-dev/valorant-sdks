// BlueprintGeneratedClass Comp_Actor_Concussable.Comp_Actor_Concussable_C
// Size: 0x12c (Inherited: 0xf0)
struct UComp_Actor_Concussable_C : UBaseConcussComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TArray<struct FStruct_ConcussRequest> ActiveConcussArray; // 0xf8(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x108(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x110(0x08)
	bool IsBuffActive; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ConcussLevel; // 0x11c(0x04)
	bool OwnerBegunPlay; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float PostConcussAssistDuration; // 0x124(0x04)
	float PostConcussAssistDurationV2; // 0x128(0x04)

	void ApplyConcuss(float Duration, struct AActor* Owner); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ApplyConcuss // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateConcussBuff(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.UpdateConcussBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	float GetConcussLevelForRequest(struct FStruct_ConcussRequest& Struct_ConcussRequest); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.GetConcussLevelForRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void HasConcussRequestExpired(struct FStruct_ConcussRequest& Concuss, bool& HasExpired); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.HasConcussRequestExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void TickConcussArray(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.TickConcussArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void DelayStartTicking(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.DelayStartTicking // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_Actor_Concussable(int32_t EntryPoint); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ExecuteUbergraph_Comp_Actor_Concussable // (Final|UbergraphFunction) // @ game+0x3520f50
};

