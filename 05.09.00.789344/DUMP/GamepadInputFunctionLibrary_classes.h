// BlueprintGeneratedClass GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UGamepadInputFunctionLibrary_C : UBlueprintFunctionLibrary {

	enum class EControllerAnalogStick GetMovementStick(struct UObject* __WorldContext); // Function GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C.GetMovementStick // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	enum class EControllerAnalogStick GetAimStick(struct UObject* __WorldContext); // Function GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C.GetAimStick // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	bool GetIsAnalogStickTilted(enum class EControllerAnalogStick Stick, struct UObject* __WorldContext); // Function GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C.GetIsAnalogStickTilted // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	float GetAnalogStickTiltPercent(enum class EControllerAnalogStick Stick, struct UObject* __WorldContext); // Function GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C.GetAnalogStickTiltPercent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	struct FVector2D GetAnalogStickInputVector(enum class EControllerAnalogStick Stick, bool Normalize, struct UObject* __WorldContext); // Function GamepadInputFunctionLibrary.GamepadInputFunctionLibrary_C.GetAnalogStickInputVector // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
};

