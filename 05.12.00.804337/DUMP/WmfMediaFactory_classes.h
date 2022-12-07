// Class WmfMediaFactory.WmfMediaSettings
// Size: 0x38 (Inherited: 0x30)
struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x30(0x01)
	bool LowLatency; // 0x31(0x01)
	bool NativeAudioOut; // 0x32(0x01)
	bool HardwareAcceleratedVideoDecoding; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

