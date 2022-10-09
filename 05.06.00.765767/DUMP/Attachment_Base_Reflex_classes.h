// BlueprintGeneratedClass Attachment_Base_Reflex.Attachment_Base_Reflex_C
// Size: 0x1e1 (Inherited: 0x120)
struct UAttachment_Base_Reflex_C : UAttachment_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct FName SocketName; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct TSoftObjectPtr<USkeletalMesh> 1pReflexMesh; // 0x138(0x30)
	struct USkeletalMeshComponent* ReflexMesh1PSpawned; // 0x168(0x08)
	struct UStaticMeshComponent* ReflexMesh3PSpawned; // 0x170(0x08)
	float ScopedStabilityMultiplier; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x180(0x10)
	struct TSoftObjectPtr<UStaticMesh> 3pReflexMesh; // 0x190(0x30)
	struct TArray<struct UMaterialInterface*> 3pMaterialOverrides; // 0x1c0(0x10)
	struct USkeletalMeshComponent* 1P Parent Mesh; // 0x1d0(0x08)
	struct UObject* AnimBlueprint; // 0x1d8(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x1e0(0x01)
};

