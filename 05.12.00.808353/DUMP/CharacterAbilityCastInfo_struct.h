// UserDefinedStruct CharacterAbilityCastInfo.CharacterAbilityCastInfo
// Size: 0x58 (Inherited: 0x00)
struct FCharacterAbilityCastInfo {
	struct FString Player_11_0963330440D68BDF1A8E34B035420342; // 0x00(0x10)
	enum class EAresItemSlot Slot_12_22D571914FAFD5F0EBD400B7E2F28B36; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Round_22_905E6CC0448D2C6270A94C9690101E49; // 0x14(0x04)
	enum class EAresGamePhase RoundPhase_25_84478C0047988409FEEC9E95C15DFB02; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CastTime_4_5AE288704801A9B74D6D159DFC2BD147; // 0x1c(0x04)
	struct FVector CastLocation_21_61F4B6BC47A10FE8CD34D29141FC9B88; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> EffectLocations_43_87E1E5154C2FB9C8A2D7FABF07AB5AF2; // 0x30(0x10)
	int32_t DestroyedCount_36_5936AB33418F8A2AB3A52DBF4492CF7F; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FCharacterAbilityEffectInfo> Effects_16_261D1D464B8B155AEE02A58E843AACB8; // 0x48(0x10)
};

