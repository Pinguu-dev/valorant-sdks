// BlueprintGeneratedClass Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C
// Size: 0x100 (Inherited: 0xe8)
struct UComp_GameState_HUDEvents_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnAmmoReplenished; // 0xf0(0x10)

	void Local Ammo Replenished(); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.Local Ammo Replenished // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_GameState_HUDEvents(int32_t EntryPoint); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.ExecuteUbergraph_Comp_GameState_HUDEvents // (Final|UbergraphFunction) // @ game+0x3520f50
	void OnAmmoReplenished__DelegateSignature(); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.OnAmmoReplenished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

