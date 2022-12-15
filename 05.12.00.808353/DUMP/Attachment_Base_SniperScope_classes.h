// BlueprintGeneratedClass Attachment_Base_SniperScope.Attachment_Base_SniperScope_C
// Size: 0x228 (Inherited: 0x1e1)
struct UAttachment_Base_SniperScope_C : UAttachment_Base_Reflex_C {
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	struct UStaticMesh* OverlayMesh; // 0x1f0(0x08)
	struct TArray<struct UMaterialInterface*> OverlayMaterialOverrides; // 0x1f8(0x10)
	struct UStaticMeshComponent* ScopeOverlayMesh1pSpawned; // 0x208(0x08)
	struct UBaseCrosshairHudElement* Zoomed Crosshair; // 0x210(0x08)
	struct AEffectContainer* ScopeInFXC; // 0x218(0x08)
	struct AEffectContainer* ScopeOutFXC; // 0x220(0x08)

	void AddToGun (Override This One)(); // Function Attachment_Base_SniperScope.Attachment_Base_SniperScope_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ToggleScopeVisibility(bool Visible); // Function Attachment_Base_SniperScope.Attachment_Base_SniperScope_C.ToggleScopeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Attachment_Base_SniperScope(int32_t EntryPoint); // Function Attachment_Base_SniperScope.Attachment_Base_SniperScope_C.ExecuteUbergraph_Attachment_Base_SniperScope // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

