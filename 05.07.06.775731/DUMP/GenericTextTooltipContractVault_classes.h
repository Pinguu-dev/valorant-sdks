// WidgetBlueprintGeneratedClass GenericTextTooltipContractVault.GenericTextTooltipContractVault_C
// Size: 0x2f8 (Inherited: 0x2c8)
struct UGenericTextTooltipContractVault_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UGenericTooltipContractVaultWrapper_C* GenericTooltipContractVault_72; // 0x2d0(0x08)
	struct UTextBlock* TooltipTextBlock; // 0x2d8(0x08)
	struct FText TooltipTextContent; // 0x2e0(0x18)

	void SetText(struct FText NewContent); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayOutroAnimation(); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_GenericTextTooltipContractVault(int32_t EntryPoint); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.ExecuteUbergraph_GenericTextTooltipContractVault // (Final|UbergraphFunction) // @ game+0x3511190
};

