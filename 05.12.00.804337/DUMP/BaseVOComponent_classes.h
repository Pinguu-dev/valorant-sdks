// BlueprintGeneratedClass BaseVOComponent.BaseVOComponent_C
// Size: 0x178 (Inherited: 0xe8)
struct UBaseVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FQueuedVOLine> Queue; // 0xf0(0x10)
	enum class VOPriorityEnum ; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UAresAudioComponent* AudioComponent; // 0x108(0x08)
	struct UBaseVOComponent_C* ; // 0x110(0x08)
	struct UAudBasePawnVOComponent_C* NewVar_1; // 0x118(0x08)
	struct AEffectContainer* ; // 0x120(0x08)
	struct FEffectID ; // 0x128(0x20)
	bool IsPlaying; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate ; // 0x150(0x10)
	struct FMulticastInlineDelegate ; // 0x160(0x10)
	struct UAkAudioEvent* ; // 0x170(0x08)

	void (struct UAudBasePawnVOComponent_C* Character VO Component, struct UDamageType* , struct UDamageResponse* , struct UBaseGunSkinVOComponent_C*& , struct UAudBasePawnVOComponent_C*& , bool& ); // Function BaseVOComponent.BaseVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function BaseVOComponent.BaseVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PlayAudio(struct UAkAudioEvent* Event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseVOComponent.BaseVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& ); // Function BaseVOComponent.BaseVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float , struct TArray<struct FAkSwitch>& , bool WaitsOnAnnouncer, bool , struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PlayEvent(struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent* , struct UAresAudioComponent*& AudioComponent); // Function BaseVOComponent.BaseVOComponent_C.PlayEvent // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool IsLineCurrentlyPlaying(); // Function BaseVOComponent.BaseVOComponent_C.IsLineCurrentlyPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void ShouldInterrupt(enum class VOPriorityEnum New, enum class VOPriorityEnum Current, bool& Should Interrupt); // Function BaseVOComponent.BaseVOComponent_C.ShouldInterrupt // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (enum class VOPriorityEnum Priority, float , float QueueTimeout, bool WaitsOnAnnouncer, struct UBaseVOComponent_C* , bool& ); // Function BaseVOComponent.BaseVOComponent_C. // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed); // Function BaseVOComponent.BaseVOComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float , struct TArray<struct FAkSwitch>& , bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C. // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AudibleToMe(bool ToSelf, bool ToAllies, bool ToEnemies, float Must Be In Range To Start, bool& ShouldPlay); // Function BaseVOComponent.BaseVOComponent_C.AudibleToMe // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void PlayVOLine(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float , bool WaitsOnAnnouncer, bool , struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C.PlayVOLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function BaseVOComponent.BaseVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function BaseVOComponent.BaseVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float , struct TArray<struct FAkSwitch>& , bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C. // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, bool ToSelf, bool ToAllies, bool ToEnemies, float QueueTimeout, float Must Be In Range To Start, struct TArray<struct FAkSwitch>& , bool WaitsOnAnnouncer, int32_t RandomSeed, struct UBaseVOComponent_C* ); // Function BaseVOComponent.BaseVOComponent_C. // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseVOComponent.BaseVOComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UAkAudioEvent* AkAudioEvent); // Function BaseVOComponent.BaseVOComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

