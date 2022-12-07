// BlueprintGeneratedClass Actor_Ping.Actor_Ping_C
// Size: 0x41b (Inherited: 0x400)
struct AActor_Ping_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x408(0x08)
	struct USphereComponent* Sphere; // 0x410(0x08)
	bool ; // 0x418(0x01)
	bool ; // 0x419(0x01)
	bool ; // 0x41a(0x01)

	void ReceiveBeginPlay(); // Function Actor_Ping.Actor_Ping_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Actor_Ping.Actor_Ping_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Actor_Ping.Actor_Ping_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Actor_Ping.Actor_Ping_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

