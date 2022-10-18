// BlueprintGeneratedClass Actor_Ping.Actor_Ping_C
// Size: 0x41b (Inherited: 0x400)
struct AActor_Ping_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x408(0x08)
	struct USphereComponent* Sphere; // 0x410(0x08)
	bool isUpgraded; // 0x418(0x01)
	bool isReinforced; // 0x419(0x01)
	bool upgrade; // 0x41a(0x01)

	void ReceiveBeginPlay(); // Function Actor_Ping.Actor_Ping_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void upgradeYoself(); // Function Actor_Ping.Actor_Ping_C.upgradeYoself // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void makeUpgradedPing(); // Function Actor_Ping.Actor_Ping_C.makeUpgradedPing // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Actor_Ping(int32_t EntryPoint); // Function Actor_Ping.Actor_Ping_C.ExecuteUbergraph_Actor_Ping // (Final|UbergraphFunction) // @ game+0x3520f50
};

