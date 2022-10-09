// BlueprintGeneratedClass ForceModule_TagBase.ForceModule_TagBase_C
// Size: 0x214 (Inherited: 0x168)
struct UForceModule_TagBase_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float Tag Duration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AShooterCharacter* ShooterCharacter; // 0x178(0x08)
	bool IsInPostTagJump; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float PostTagJumpDragFactor; // 0x184(0x04)
	struct FExplicitFloatCurve PrototypeSpeedCurve; // 0x188(0x88)
	float PrototypeTagDuration; // 0x210(0x04)
};

