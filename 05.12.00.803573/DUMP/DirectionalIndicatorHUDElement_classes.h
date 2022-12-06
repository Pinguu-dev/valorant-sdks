// WidgetBlueprintGeneratedClass DirectionalIndicatorHUDElement.
// Size: 0x31c (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UOverlay* ; // 0x2e0(0x08)
	struct UOverlay* ; // 0x2e8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2f0(0x08)
	struct FLinearColor ; // 0x2f8(0x10)
	float ; // 0x308(0x04)
	struct FLinearColor ; // 0x30c(0x10)

	void (struct AActor* DamagedActor, float DamageTaken, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function DirectionalIndicatorHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function DirectionalIndicatorHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse); // Function DirectionalIndicatorHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function DirectionalIndicatorHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* NewValue); // Function DirectionalIndicatorHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _2(struct UDamageResponse* Response); // Function DirectionalIndicatorHUDElement.._2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function DirectionalIndicatorHUDElement.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

