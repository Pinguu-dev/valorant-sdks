// Class Rejoin.RejoinCheck
// Size: 0x178 (Inherited: 0x30)
struct URejoinCheck : UObject {
	enum class ERejoinStatus LastKnownStatus; // 0x30(0x01)
	bool bRejoinAfterCheck; // 0x31(0x01)
	bool bAttemptingRejoin; // 0x32(0x01)
	char pad_33[0x145]; // 0x33(0x145)
};

