// BlueprintGeneratedClass BombDetonationActor.BombDetonationActor_C
// Size: 0x434 (Inherited: 0x400)
struct ABombDetonationActor_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* Sphere; // 0x408(0x08)
	struct UParticleSystemComponent* SonarEffect; // 0x410(0x08)
	struct TArray<struct APawn*> PingedPawns; // 0x418(0x10)
	float ExpandMaxSize; // 0x428(0x04)
	float ExpandTime; // 0x42c(0x04)
	float Damage; // 0x430(0x04)
};

