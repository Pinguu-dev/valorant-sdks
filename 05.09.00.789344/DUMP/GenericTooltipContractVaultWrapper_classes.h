// WidgetBlueprintGeneratedClass GenericTooltipContractVaultWrapper.GenericTooltipContractVaultWrapper_C
// Size: 0x308 (Inherited: 0x2c8)
struct UGenericTooltipContractVaultWrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Intro; // 0x2d0(0x08)
	struct UNamedSlot* Content; // 0x2d8(0x08)
	struct FString Subject; // 0x2e0(0x10)
	struct FText DisplayName; // 0x2f0(0x18)

	void PlayOutroAnimation(); // Function GenericTooltipContractVaultWrapper.GenericTooltipContractVaultWrapper_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function GenericTooltipContractVaultWrapper.GenericTooltipContractVaultWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_GenericTooltipContractVaultWrapper(int32_t EntryPoint); // Function GenericTooltipContractVaultWrapper.GenericTooltipContractVaultWrapper_C.ExecuteUbergraph_GenericTooltipContractVaultWrapper // (Final|UbergraphFunction) // @ game+0x32f73d0
};

