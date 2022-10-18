// WidgetBlueprintGeneratedClass DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C
// Size: 0x334 (Inherited: 0x2c8)
struct UDirectionalIndicator_UpdateOwnerLocation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* hitAnimation; // 0x2d0(0x08)
	struct UWidgetAnimation* FadeAway; // 0x2d8(0x08)
	struct UImage* IndicatorImage; // 0x2e0(0x08)
	struct UInvalidationBox* InvalidationBox_DirectionalIndicator_UpdateOwnerLocation; // 0x2e8(0x08)
	struct FLinearColor Color; // 0x2f0(0x10)
	struct FVector Location; // 0x300(0x0c)
	float DurationSeconds; // 0x30c(0x04)
	float StartTime; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UCoordinatedHUDModel* HUDModel; // 0x318(0x08)
	struct FRotator ReverseDirectionRotator; // 0x320(0x0c)
	struct FVector2D Size; // 0x32c(0x08)

	void Update Widget(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Update Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation(int32_t EntryPoint); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

