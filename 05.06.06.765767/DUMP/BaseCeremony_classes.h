// BlueprintGeneratedClass BaseCeremony.BaseCeremony_C
// Size: 0x3f0 (Inherited: 0x3d0)
struct ABaseCeremony_C : AAresCeremony {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	enum class CeremonyIdentifier CeremonyIdentifier; // 0x3d8(0x01)
	bool bShouldDisplayCeremony; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FMulticastInlineDelegate OnShouldDisplayCeremony; // 0x3e0(0x10)
};

