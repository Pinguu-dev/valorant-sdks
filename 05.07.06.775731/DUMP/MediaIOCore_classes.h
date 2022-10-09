// Class MediaIOCore.MediaOutput
// Size: 0x38 (Inherited: 0x30)
struct UMediaOutput : UObject {
	int32_t NumberOfTextureBuffers; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	bool Validate(struct FString& OutFailureReason); // Function MediaIOCore.MediaOutput.Validate // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x202edb0
	struct UMediaCapture* CreateMediaCapture(); // Function MediaIOCore.MediaOutput.CreateMediaCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x202eb30
};

// Class MediaIOCore.MediaCapture
// Size: 0x110 (Inherited: 0x30)
struct UMediaCapture : UObject {
	struct FMulticastInlineDelegate OnStateChanged; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct UMediaOutput* MediaOutput; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
	struct UTextureRenderTarget2D* CapturingRenderTarget; // 0x80(0x08)
	char pad_88[0x88]; // 0x88(0x88)

	bool UpdateTextureRenderTarget2D(struct UTextureRenderTarget2D* RenderTarget); // Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D // (Final|Native|Public|BlueprintCallable) // @ game+0x202ed10
	void StopCapture(bool bAllowPendingFrameToBeProcess); // Function MediaIOCore.MediaCapture.StopCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x202ec80
	void SetMediaOutput(struct UMediaOutput* InMediaOutput); // Function MediaIOCore.MediaCapture.SetMediaOutput // (Final|Native|Public|BlueprintCallable) // @ game+0x202ebf0
	enum class EMediaCaptureState GetState(); // Function MediaIOCore.MediaCapture.GetState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x202ebb0
	struct FIntPoint GetDesiredSize(); // Function MediaIOCore.MediaCapture.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x202eb80
	enum class EPixelFormat GetDesiredPixelFormat(); // Function MediaIOCore.MediaCapture.GetDesiredPixelFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x202eb60
	bool CaptureTextureRenderTarget2D(struct UTextureRenderTarget2D* RenderTarget, struct FMediaCaptureOptions CaptureOptions); // Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D // (Final|Native|Public|BlueprintCallable) // @ game+0x202ea40
	bool CaptureActiveSceneViewport(struct FMediaCaptureOptions CaptureOptions); // Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport // (Final|Native|Public|BlueprintCallable) // @ game+0x202e9a0
};

// Class MediaIOCore.FileMediaCapture
// Size: 0x180 (Inherited: 0x110)
struct UFileMediaCapture : UMediaCapture {
	char pad_110[0x70]; // 0x110(0x70)
};

// Class MediaIOCore.FileMediaOutput
// Size: 0xe0 (Inherited: 0x38)
struct UFileMediaOutput : UMediaOutput {
	char pad_38[0x8]; // 0x38(0x08)
	struct FImageWriteOptions WriteOptions; // 0x40(0x60)
	struct FDirectoryPath FilePath; // 0xa0(0x10)
	struct FString BaseFileName; // 0xb0(0x10)
	bool bOverrideDesiredSize; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FIntPoint DesiredSize; // 0xc4(0x08)
	bool bOverridePixelFormat; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	enum class EFileMediaOutputPixelFormat DesiredPixelFormat; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

