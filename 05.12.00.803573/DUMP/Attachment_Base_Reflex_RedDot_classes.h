// BlueprintGeneratedClass Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C
// Size: 0x260 (Inherited: 0x1e1)
struct UAttachment_Base_Reflex_RedDot_C : UAttachment_Base_Reflex_C {
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	bool ; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct AEffectContainer* ; // 0x1f8(0x08)
	struct AEffectContainer* ; // 0x200(0x08)
	struct AEffectContainer* ; // 0x208(0x08)
	struct AEffectContainer* ; // 0x210(0x08)
	struct UAnimSequence* ; // 0x218(0x08)
	struct FEffectID ; // 0x220(0x20)
	struct FEffectID Idle Effect; // 0x240(0x20)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool Visible); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Attachment_Base_Reflex_RedDot.Attachment_Base_Reflex_RedDot_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

