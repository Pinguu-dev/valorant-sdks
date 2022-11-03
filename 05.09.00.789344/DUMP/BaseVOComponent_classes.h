// BlueprintGeneratedClass BaseVOComponent.BaseVOComponent_C
// Size: 0x178 (Inherited: 0xe8)
struct UBaseVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FQueuedVOLine> Queue; // 0xf0(0x10)
	enum class VOPriorityEnum CurrentVOLinePriority; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UAresAudioComponent* AudioComponent; // 0x108(0x08)
	struct UBaseVOComponent_C* EventFinishedListener; // 0x110(0x08)
	struct UAudBasePawnVOComponent_C* NewVar_1; // 0x118(0x08)
	struct AEffectContainer* PlayLineCosmeticEffect; // 0x120(0x08)
	struct FEffectID CurrentCosmeticEffect; // 0x128(0x20)
	bool IsPlaying; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate OnLineStart; // 0x150(0x10)
	struct FMulticastInlineDelegate OnLineEnd; // 0x160(0x10)
	struct UAkAudioEvent* CurrentVOLine; // 0x170(0x08)

	void GunSkinVO(struct UAudBasePawnVOComponent_C* Character VO Component, struct UDamageType* Damage Type, struct UDamageResponse* Damage Response, struct UBaseGunSkinVOComponent_C*& GunSkin VO Component, struct UAudBasePawnVOComponent_C*& Base Pawn VO Component, bool& IsGunSkinLine); // Function BaseVOComponent.BaseVOComponent_C.GunSkinVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnWaitOnCharacterEventFinished(struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.OnWaitOnCharacterEventFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnPostEventCallback(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function BaseVOComponent.BaseVOComponent_C.OnPostEventCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayAudio(struct UAkAudioEvent* Event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopCurrentLine(); // Function BaseVOComponent.BaseVOComponent_C.StopCurrentLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void IsLinePendingToPlay(bool& IsPending); // Function BaseVOComponent.BaseVOComponent_C.IsLinePendingToPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void PlayVOLineEx(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, bool ForceOutOfFogOfWar, struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.PlayVOLineEx // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayEvent(struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent* InAudioComponent, struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayEvent // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool IsLineCurrentlyPlaying(); // Function BaseVOComponent.BaseVOComponent_C.IsLineCurrentlyPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void ShouldInterrupt(enum class VOPriorityEnum New, enum class VOPriorityEnum Current, bool& Should Interrupt); // Function BaseVOComponent.BaseVOComponent_C.ShouldInterrupt // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void ShouldPlayImmediately(enum class VOPriorityEnum Priority, float TimeEnteredQueue, float QueueTimeout, bool WaitsOnAnnouncer, struct UBaseVOComponent_C* WaitOnCharacter, bool& Immediately); // Function BaseVOComponent.BaseVOComponent_C.ShouldPlayImmediately // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void StartLine(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed); // Function BaseVOComponent.BaseVOComponent_C.StartLine // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayAudioIfRelevent(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.PlayAudioIfRelevent // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AudibleToMe(bool ToSelf, bool ToAllies, bool ToEnemies, float Must Be In Range To Start, bool& ShouldPlay); // Function BaseVOComponent.BaseVOComponent_C.AudibleToMe // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void PlayVOLine(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float MustBeInRangeToStart, bool WaitsOnAnnouncer, bool ForceOutOfFogOfWar, struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.PlayVOLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function BaseVOComponent.BaseVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function BaseVOComponent.BaseVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void TriggerVOLineToTeam(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float MustBeInRangeToStart, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.TriggerVOLineToTeam // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TriggerVOLineToAll(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float Must Be In Range To Start, struct TArray<struct FAkSwitch>& AkSwitchArray, bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* WaitOnCharacter); // Function BaseVOComponent.BaseVOComponent_C.TriggerVOLineToAll // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BaseVOComponent(int32_t EntryPoint); // Function BaseVOComponent.BaseVOComponent_C.ExecuteUbergraph_BaseVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnLineStart__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C.OnLineStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnLineEnd__DelegateSignature(struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C.OnLineEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

