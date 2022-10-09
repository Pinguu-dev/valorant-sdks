// BlueprintGeneratedClass Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C
// Size: 0x120 (Inherited: 0xe8)
struct UComp_Equippable_UltActiveOnEquip_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate UltActived; // 0xf0(0x10)
	struct FMulticastInlineDelegate UltDeactivated; // 0x100(0x10)
	struct AAbility_Base_C* Ability; // 0x110(0x08)
	struct AShooterPlayerState* CurrentPlayerState; // 0x118(0x08)

	void ReceiveBeginPlay(); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnItemEquipped_Event_1(); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.OnItemEquipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnItemUnequipped_Event_1(); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.OnItemUnequipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void AuthItemOnSetOwner_Event_1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.AuthItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_Equippable_UltActiveOnEquip(int32_t EntryPoint); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.ExecuteUbergraph_Comp_Equippable_UltActiveOnEquip // (Final|UbergraphFunction) // @ game+0x3511190
	void UltDeactivated__DelegateSignature(); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.UltDeactivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UltActived__DelegateSignature(); // Function Comp_Equippable_UltActiveOnEquip.Comp_Equippable_UltActiveOnEquip_C.UltActived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

