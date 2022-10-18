// WidgetBlueprintGeneratedClass DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C
// Size: 0x31c (Inherited: 0x2d8)
struct UDirectionalIndicatorHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UOverlay* BuffIndicatorOverlay; // 0x2e0(0x08)
	struct UOverlay* DamageIndicatorOverlay; // 0x2e8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2f0(0x08)
	struct FLinearColor DamageNoShieldBaseColor; // 0x2f8(0x10)
	float MinDamageIndicatorAlpha; // 0x308(0x04)
	struct FLinearColor DamageWithShieldBaseColor; // 0x30c(0x10)

	void OnDamageEventNew(struct AActor* DamagedActor, float DamageTaken, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamageEventNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ClearIndicators(); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.ClearIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnDamageEvent(struct UDamageResponse* DamageResponse); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamageEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnDamaged_Event_2(struct UDamageResponse* Response); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamaged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_DirectionalIndicatorHUDElement(int32_t EntryPoint); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.ExecuteUbergraph_DirectionalIndicatorHUDElement // (Final|UbergraphFunction) // @ game+0x3520f50
};

