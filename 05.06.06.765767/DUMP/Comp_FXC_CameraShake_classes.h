// BlueprintGeneratedClass Comp_FXC_CameraShake.Comp_FXC_CameraShake_C
// Size: 0x14a (Inherited: 0xf8)
struct UComp_FXC_CameraShake_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UMatineeCameraShake* Shake; // 0x100(0x08)
	float Scale; // 0x108(0x04)
	enum class ECameraShakePlaySpace PlaySpace; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FRotator UserPlaySpaceRot; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UMatineeCameraShake* CameraShake; // 0x120(0x08)
	bool ShouldStopOnFinish; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct AShooterCharacter* ShooterCharacter; // 0x130(0x08)
	struct FMulticastInlineDelegate OnCameraShakeStarted; // 0x138(0x10)
	bool AutoStart; // 0x148(0x01)
	bool FXC_Active; // 0x149(0x01)
};

