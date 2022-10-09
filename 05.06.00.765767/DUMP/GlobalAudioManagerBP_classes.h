// BlueprintGeneratedClass GlobalAudioManagerBP.GlobalAudioManagerBP_C
// Size: 0x140 (Inherited: 0xc0)
struct UGlobalAudioManagerBP_C : UGlobalAudioManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool TEMP_HasBoundPartyStuff; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UAkInitBank* InitBank; // 0xd0(0x08)
	bool IsApplicationActive; // 0xd8(0x01)
	bool IsInPregame; // 0xd9(0x01)
	bool IsPregameObserver; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
	struct FString NewVar_1; // 0xe0(0x10)
	struct TMap<struct FString, struct UAkAudioEvent*> MapIntroStingers; // 0xf0(0x50)
};

