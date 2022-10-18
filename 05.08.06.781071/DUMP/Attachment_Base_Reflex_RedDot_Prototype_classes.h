// BlueprintGeneratedClass Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C
// Size: 0x2a1 (Inherited: 0x260)
struct UAttachment_Base_Reflex_RedDot_Prototype_C : UAttachment_Base_Reflex_RedDot_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	bool ScopeMeshVisibility; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FTransform ScopeMeshTransform; // 0x270(0x30)
	bool ShouldShowScopeVFX; // 0x2a0(0x01)

	bool ShouldDisplayVFX(); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.ShouldDisplayVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetOrCreateScopeComponent(struct UScopeComponent_C*& ScopeComponent); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.GetOrCreateScopeComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AdjustSpawnedMesh(struct UMeshComponent* Mesh); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.AdjustSpawnedMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddToGun (Override This One)(); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Attachment_Base_Reflex_RedDot_Prototype(int32_t EntryPoint); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.ExecuteUbergraph_Attachment_Base_Reflex_RedDot_Prototype // (Final|UbergraphFunction) // @ game+0x3520f50
};

