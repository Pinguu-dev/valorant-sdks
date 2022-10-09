// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x6d0 (Inherited: 0x670)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x668(0x10)
	struct FString LookUpAtRateAxisName; // 0x678(0x10)
	struct FString TurnAxisName; // 0x688(0x10)
	struct FString TurnAtRateAxisName; // 0x698(0x10)
	struct FString MoveForwardAxisName; // 0x6a8(0x10)
	struct FString MoveRightAxisName; // 0x6b8(0x10)
	float MouseSensitivityScale_Pitch; // 0x6c8(0x04)
	float MouseSensitivityScale_Yaw; // 0x6cc(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xc10 (Inherited: 0xbc0)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xbc0(0x0c)
	struct FRotator RotationalDeceleration; // 0xbcc(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xbd8(0x0c)
	float MinPitch; // 0xbe4(0x04)
	float MaxPitch; // 0xbe8(0x04)
	float WalkingFriction; // 0xbec(0x04)
	float WalkingSpeed; // 0xbf0(0x04)
	float WalkingAcceleration; // 0xbf4(0x04)
	char pad_BF8[0x18]; // 0xbf8(0x18)
};

