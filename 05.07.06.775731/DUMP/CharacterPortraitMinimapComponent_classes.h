// BlueprintGeneratedClass CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C
// Size: 0x551 (Inherited: 0x540)
struct UCharacterPortraitMinimapComponent_C : UShooterCharacterMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UTexture* CharacterIcon; // 0x548(0x08)
	bool Enable; // 0x550(0x01)

	void ReceiveBeginPlay(); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnDowned_Event_1(); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.OnDowned_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRecovered_Event_1(struct AShooterPlayerState* RecoveredByPlayer); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.OnRecovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_CharacterPortraitMinimapComponent(int32_t EntryPoint); // Function CharacterPortraitMinimapComponent.CharacterPortraitMinimapComponent_C.ExecuteUbergraph_CharacterPortraitMinimapComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

