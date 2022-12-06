// BlueprintGeneratedClass AudBasePawnVOComponent.AudBasePawnVOComponent_C
// Size: 0x9da (Inherited: 0x178)
struct UAudBasePawnVOComponent_C : UBaseVOComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct TArray<float> ; // 0x180(0x10)
	float ; // 0x190(0x04)
	float ; // 0x194(0x04)
	float ; // 0x198(0x04)
	bool ; // 0x19c(0x01)
	bool ; // 0x19d(0x01)
	char pad_19E[0x2]; // 0x19e(0x02)
	int32_t ; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TMap<enum class MatchVOEnum, struct UAkAudioEvent*> ; // 0x1a8(0x50)
	struct TMap<enum class CharacterRelationMatchVOEnum, struct FCharacterRelationshipInstance> ; // 0x1f8(0x50)
	struct TMap<enum class MapRelationMatchVOEnum, struct FMapRelationshipInstance> ; // 0x248(0x50)
	struct TMap<enum class EmoteVOEnum, struct UAkAudioEvent*> ; // 0x298(0x50)
	struct TMap<enum class CharacterRelationEmoteVOEnum, struct FCharacterRelationshipInstance> ; // 0x2e8(0x50)
	struct TMap<enum class RoundStartVOEnum, struct UAkAudioEvent*> ; // 0x338(0x50)
	struct TMap<enum class CharacterRelationRoundStartVOEnum, struct FCharacterRelationshipInstance> ; // 0x388(0x50)
	struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*> BubbleDownVO; // 0x3d8(0x50)
	struct TMap<enum class CharacterRelationBubbleDownVOEnum, struct FCharacterRelationshipInstance> ; // 0x428(0x50)
	struct TMap<enum class EffortVOEnum, struct UAkAudioEvent*> ; // 0x478(0x50)
	struct TMap<enum class TacticalVOEnum, struct UAkAudioEvent*> ; // 0x4c8(0x50)
	struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*> RoundEndVO; // 0x518(0x50)
	struct TMap<enum class CharacterRelationRoundEndVOEnum, struct FCharacterRelationshipInstance> ; // 0x568(0x50)
	struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*> KillsVO; // 0x5b8(0x50)
	struct TMap<enum class CharacterRelationKillsVOEnum, struct FCharacterRelationshipInstance> ; // 0x608(0x50)
	struct TMap<enum class AbilitiesVOEnum, struct UAkAudioEvent*> ; // 0x658(0x50)
	struct TMap<struct UGameplayEffect*, struct UAkAudioEvent*> ; // 0x6a8(0x50)
	struct TMap<struct UDamageType*, struct UAkAudioEvent*> ; // 0x6f8(0x50)
	struct TMap<enum class TagAllianceVOEnum, struct FTagInstance> ; // 0x748(0x50)
	struct TMap<struct FName, struct UAkAudioEvent*> ; // 0x798(0x50)
	struct TMap<struct FName, struct UAkAudioEvent*> ; // 0x7e8(0x50)
	struct TMap<enum class CharacterRelationMatchVOEnum, struct FTagInstance> ; // 0x838(0x50)
	struct TMap<enum class CharacterRelationBubbleDownVOEnum, struct FTagInstance> ; // 0x888(0x50)
	struct TMap<enum class CharacterRelationRoundStartVOEnum, struct FTagInstance> ; // 0x8d8(0x50)
	struct TMap<enum class CharacterConvoVOEnum, struct FCharacterRelationshipInstance> ; // 0x928(0x50)
	float ; // 0x978(0x04)
	float ; // 0x97c(0x04)
	struct FTimerHandle ; // 0x980(0x08)
	struct TMap<enum class DeathMatchVOEnum, struct UAkAudioEvent*> ; // 0x988(0x50)
	bool ; // 0x9d8(0x01)
	bool ; // 0x9d9(0x01)

	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , bool& , struct UAkAudioEvent*& , enum class CharacterID& , struct UAudBasePawnVOComponent_C*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , bool& , struct UAkAudioEvent*& , enum class CharacterID& , struct UAudBasePawnVOComponent_C*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_DeathMatch_RunnerUp(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_DeathMatch_RunnerUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_DeathMatch_MatchWin(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_DeathMatch_MatchWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ShouldPlay); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* , struct UBaseVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class CharacterID , bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& , enum class CharacterID& , struct UAudBasePawnVOComponent_C*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& , enum class CharacterID& , struct UAudBasePawnVOComponent_C*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationBubbleDownVOEnum CharacterEvent, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationBubbleDownVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationMatchVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationMatchVOEnum CharacterEvent, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* Event); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Victim, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* , struct AShooterCharacter* Victim, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse, struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* , struct AShooterCharacter* Victim, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Victim, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , enum class TagAllianceVOEnum Event, enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& , struct AShooterCharacter*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class TagAllianceVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& , struct AShooterCharacter*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_RoundEnd(enum class RoundEndVOEnum Key); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_RoundEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool (struct UObject* Object, struct UGameplayEffect* EffectDefinition); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* , struct UDamageType* , struct UDamageResponse* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* VO Component); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse, struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* VO Component, struct UDamageType* , struct UDamageResponse* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Victim, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* , struct AShooterCharacter* Victim, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct FString MapName, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UAudBasePawnVOComponent_C* , struct FString MapName, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationBubbleDownVOEnum CharacterEvent, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationBubbleDownVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationMatchVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationMatchVOEnum CharacterEvent, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAudBasePawnVOComponent_C* , struct AShooterCharacter* Victim, bool& , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationRoundStartVOEnum CharacterEvent, struct UAudBasePawnVOComponent_C* , enum class EAresAlliance Alliance, bool& , struct UAkAudioEvent*& , struct AShooterCharacter*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, enum class CharacterRelationRoundStartVOEnum Event, enum class EAresAlliance Alliance, struct UAkAudioEvent*& , bool& , struct AShooterCharacter*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_OutOfAmmo(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_OutOfAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_DefuseResume(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_DefuseResume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_ObjectivePlanted(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_ObjectivePlanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool WaitsOnAnnouncer, struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class VOTacEnum VOTacEnum); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* Event); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* , struct UAkAudioEvent*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAkAudioEvent* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* Victim, struct UAkAudioEvent*& , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class CeremonyIdentifier Ceremony, struct UAudBasePawnVOComponent_C* , struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageType* DamageType, struct UDamageResponse* DamageResponse, struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_EnemiesSpotted(enum class ECalloutSuperRegion Region); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_EnemiesSpotted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_EnemySpotted(enum class ECalloutSuperRegion Region); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_EnemySpotted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class ECalloutSuperRegion Region); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t , struct UDamageResponse* , struct UDamageType* , struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FString , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class VOPriorityEnum Priority, float , float QueueTimeout, bool WaitsOnAnnouncer, struct UBaseVOComponent_C* , bool& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ShouldPlay); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct FAkSwitch>& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_EmoteSystem(enum class VOEmoteEnum VOEmoteEnum); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_EmoteSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_MatchStart(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_MatchStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_MatchWin(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_MatchWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_ObjectiveDefused(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_ObjectiveDefused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_DefuseOutofTime(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_DefuseOutofTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_Kill(struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, struct UAudBasePawnVOComponent_C* ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_Kill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnAuth_Char_Reloading(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.OnAuth_Char_Reloading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float , float ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct ABasePawn_C*& ); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void _1(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AOwnerExclusivePlayerInfo* Resurrector); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void CustomEvent_1(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* Character, struct APawn* KillerPawn); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function AudBasePawnVOComponent.AudBasePawnVOComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

