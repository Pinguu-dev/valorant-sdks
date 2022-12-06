// BlueprintGeneratedClass LookingHerePing.LookingHerePing_C
// Size: 0x6f0 (Inherited: 0x6b8)
struct ALookingHerePing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct FLinearColor ; // 0x6c0(0x10)
	enum class ETimelineDirection ; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x6d8(0x08)
	bool ; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct FTimerHandle ; // 0x6e8(0x08)

	void (); // Function LookingHerePing.LookingHerePing_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Timeline_0_0__FinishedFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x3322a60
	void Timeline_0_0__UpdateFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function LookingHerePing.LookingHerePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function LookingHerePing.LookingHerePing_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function LookingHerePing.LookingHerePing_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

