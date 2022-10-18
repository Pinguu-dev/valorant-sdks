// WidgetBlueprintGeneratedClass SignatureKillHUDElement.SignatureKillHUDElement_C
// Size: 0x380 (Inherited: 0x358)
struct USignatureKillHUDElement_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* SignatureChargeInactive; // 0x360(0x08)
	struct UWidgetAnimation* SignatureChargeActive; // 0x368(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x370(0x08)
	struct UImage* SignatureCharge; // 0x378(0x08)

	void DisplayActive(bool Initialize); // Function SignatureKillHUDElement.SignatureKillHUDElement_C.DisplayActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DisplayInactive(); // Function SignatureKillHUDElement.SignatureKillHUDElement_C.DisplayInactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function SignatureKillHUDElement.SignatureKillHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_SignatureKillHUDElement(int32_t EntryPoint); // Function SignatureKillHUDElement.SignatureKillHUDElement_C.ExecuteUbergraph_SignatureKillHUDElement // (Final|UbergraphFunction) // @ game+0x3520f50
};

