// BlueprintGeneratedClass Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C
// Size: 0x17e (Inherited: 0xe8)
struct UComp_Actor_MultiTargetHandler_Buff_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AShooterCharacter*, struct FActiveGameplayEffectHandle> ActorAndBuffID_Map; // 0xf0(0x50)
	bool RemoveAllActiveBuffsOnEndPlay; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t StacksRemoved; // 0x144(0x04)
	struct UAresGameplayBuff* BuffClass; // 0x148(0x08)
	float BuffLevel; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate AuthBuffApplied; // 0x158(0x10)
	struct FMulticastInlineDelegate AuthBuffRemoved; // 0x168(0x10)
	bool ShouldTrackStatistics; // 0x178(0x01)
	enum class ECharacterAbilityStatisticList Statistic; // 0x179(0x01)
	enum class EAresAlliance StatisticAlliance; // 0x17a(0x01)
	bool Allow Reapply; // 0x17b(0x01)
	bool CanApplyToDeadCharacters; // 0x17c(0x01)
	bool AllowReapplyIfBuffIsNotActive; // 0x17d(0x01)

	bool ShouldReapplyBuff(struct AActor* InActor); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ShouldReapplyBuff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void AuthApplyBuffToActor_New(struct AShooterCharacter* InShooterCharacter, struct AActor* DamageCauser, struct APawn* InstigatorPawn, struct FActiveGameplayEffectHandle& BuffHandle, bool& HandleFound); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthApplyBuffToActor_New // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthGetActorAndBuffIdMap(struct TMap<struct AShooterCharacter*, struct FActiveGameplayEffectHandle>& ActorAndBuffID_Map); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthGetActorAndBuffIdMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void AuthAppliedActors(struct TArray<struct AShooterCharacter*>& Keys); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthAppliedActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	int32_t AuthNumberOfActiveBuffs(); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthNumberOfActiveBuffs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void AuthRemoveAllActiveBuffs(); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthRemoveAllActiveBuffs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthBuffActiveOnActor(struct AShooterCharacter* InShooterCharacter, bool& BuffActive); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffActiveOnActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void AuthRemoveBuffFromActor(struct AShooterCharacter* InShooterCharacter); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthRemoveBuffFromActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthApplyBuffToActor(struct AShooterCharacter* InShooterCharacter, struct AActor* DamageCauser, struct AController* InstigatedByController); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthApplyBuffToActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_Actor_MultiTargetHandler_Buff(int32_t EntryPoint); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.ExecuteUbergraph_Comp_Actor_MultiTargetHandler_Buff // (Final|UbergraphFunction) // @ game+0x3520f50
	void AuthBuffRemoved__DelegateSignature(struct AShooterCharacter* ShooterCharacter, struct AActor* Causer, struct AActor* Instigator); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthBuffApplied__DelegateSignature(struct AShooterCharacter* ShooterCharacter); // Function Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C.AuthBuffApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

