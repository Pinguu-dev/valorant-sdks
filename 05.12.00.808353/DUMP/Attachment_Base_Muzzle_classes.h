// BlueprintGeneratedClass Attachment_Base_Muzzle.Attachment_Base_Muzzle_C
// Size: 0x170 (Inherited: 0x120)
struct UAttachment_Base_Muzzle_C : UAttachment_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct USkeletalMesh* 1p Mesh; // 0x128(0x08)
	struct UStaticMesh* 3p Mesh; // 0x130(0x08)
	struct FName SocketName; // 0x138(0x0c)
	char pad_144[0x4]; // 0x144(0x04)
	struct USkeletalMeshComponent* 1pMesh_Spawned; // 0x148(0x08)
	struct UStaticMeshComponent* 3pMesh_Spawned; // 0x150(0x08)
	struct FVector Muzzle Location; // 0x158(0x0c)
	char pad_164[0x4]; // 0x164(0x04)
	struct USkeletalMeshComponent* 1P Parent Mesh; // 0x168(0x08)

	void AddToGun (Override This One)(); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Attachment_Base_Muzzle(int32_t EntryPoint); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.ExecuteUbergraph_Attachment_Base_Muzzle // (Final|UbergraphFunction) // @ game+0x33231a0
};

