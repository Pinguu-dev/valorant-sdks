// BlueprintGeneratedClass CountdownPing.CountdownPing_C
// Size: 0x6d8 (Inherited: 0x6b8)
struct ACountdownPing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct U* Widget; // 0x6c0(0x08)
	struct FTimerHandle TimerHandle; // 0x6c8(0x08)
	int32_t ; // 0x6d0(0x04)
	int32_t ; // 0x6d4(0x04)

	void (); // Function CountdownPing.CountdownPing_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function CountdownPing.CountdownPing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function CountdownPing.CountdownPing_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function CountdownPing.CountdownPing_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function CountdownPing.CountdownPing_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

