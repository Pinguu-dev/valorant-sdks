// BlueprintGeneratedClass LookingHerePing.LookingHerePing_C
// Size: 0x6f0 (Inherited: 0x6b8)
struct ALookingHerePing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct FLinearColor Timeline_0_0_Color_8B92B84B4C040F0DF99D98B85D275FF9; // 0x6c0(0x10)
	enum class ETimelineDirection Timeline_0_0__Direction_8B92B84B4C040F0DF99D98B85D275FF9; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x6d8(0x08)
	bool isTimerActive; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct FTimerHandle activeTimerHandle; // 0x6e8(0x08)

	void RemoveOtherPingsOfType(); // Function LookingHerePing.LookingHerePing_C.RemoveOtherPingsOfType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Timeline_0_0__FinishedFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x3511190
	void Timeline_0_0__UpdateFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function LookingHerePing.LookingHerePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void playerNoLongerWatching(); // Function LookingHerePing.LookingHerePing_C.playerNoLongerWatching // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_LookingHerePing(int32_t EntryPoint); // Function LookingHerePing.LookingHerePing_C.ExecuteUbergraph_LookingHerePing // (Final|UbergraphFunction) // @ game+0x3511190
};

