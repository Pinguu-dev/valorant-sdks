// BlueprintGeneratedClass Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C
// Size: 0x160 (Inherited: 0xf8)
struct UComp_FXC_Gun_Bounce_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FVector Location; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct AActor* Actor-Owner; // 0x110(0x08)
	bool PostImmediately; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FMulticastInlineDelegate ; // 0x120(0x10)
	struct UBaseAudioComponent_C* ; // 0x130(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x138(0x10)
	enum class EAresSurfaceType SurfaceType; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UObject* Owner; // 0x150(0x08)
	struct UAkAudioEvent* SoundEvent; // 0x158(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void NewEventDispatcher_0__DelegateSignature(); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UBaseAudioComponent_C* ); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

