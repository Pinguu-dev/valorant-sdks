// Class AudioAnalyzer.AudioAnalyzerAsset
// Size: 0x30 (Inherited: 0x30)
struct UAudioAnalyzerAsset : UObject {
};

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAsset {
};

// Class AudioAnalyzer.AudioAnalyzerNRT
// Size: 0x80 (Inherited: 0x30)
struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	struct USoundWave* Sound; // 0x30(0x08)
	float DurationInSeconds; // 0x38(0x04)
	char pad_3C[0x44]; // 0x3c(0x44)
};

