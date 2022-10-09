// Class AudioCapture.AudioCapture
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioCapture : UAudioGenerator {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x820 (Inherited: 0x760)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x760(0x04)
	char pad_764[0xbc]; // 0x764(0xbc)
};

