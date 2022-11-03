// BlueprintGeneratedClass Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C
// Size: 0x110 (Inherited: 0xe8)
struct UComp_GameState_CreateWidgets_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct UUserWidget*> WidgetsToSpawn; // 0xf0(0x10)
	struct UUserWidget* BelowMinimapWidgetClass; // 0x100(0x08)
	struct UCoordinatedHUDElement* BuyPhaseWidgetClass; // 0x108(0x08)

	void AddBuyPhaseWidget(struct UPanelWidget* Target, struct UCoordinatedHUDElement*& NewWidget); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.AddBuyPhaseWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddBelowMinimapWidget(struct UPanelWidget* Target); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.AddBelowMinimapWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_GameState_CreateWidgets(int32_t EntryPoint); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.ExecuteUbergraph_Comp_GameState_CreateWidgets // (Final|UbergraphFunction) // @ game+0x32f73d0
};

