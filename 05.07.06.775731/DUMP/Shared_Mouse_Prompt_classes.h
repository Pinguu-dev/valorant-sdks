// WidgetBlueprintGeneratedClass Shared_Mouse_Prompt.Shared_Mouse_Prompt_C
// Size: 0x348 (Inherited: 0x2c8)
struct UShared_Mouse_Prompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UInvalidationBox* InvalidationBox_Shared_Mouse_Prompt; // 0x2d0(0x08)
	struct UImage* M1; // 0x2d8(0x08)
	struct UImage* M1_2; // 0x2e0(0x08)
	struct UImage* M1_1_Normal; // 0x2e8(0x08)
	struct UImage* M1_Normal; // 0x2f0(0x08)
	struct UImage* M2; // 0x2f8(0x08)
	struct UImage* M2_1_Add; // 0x300(0x08)
	struct UImage* M2_1_Normal; // 0x308(0x08)
	struct UImage* M2_Normal; // 0x310(0x08)
	struct UImage* M3; // 0x318(0x08)
	struct UImage* M3_Normal; // 0x320(0x08)
	struct UImage* MnoCick; // 0x328(0x08)
	struct UImage* Mouse_Icon_BG; // 0x330(0x08)
	bool M1 On; // 0x338(0x01)
	bool M2 On; // 0x339(0x01)
	bool M3 On; // 0x33a(0x01)
	bool M NoClick; // 0x33b(0x01)
	bool M1M2 on; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UImage* M_noClick; // 0x340(0x08)

	void Set image(); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.Set image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PreConstruct(bool IsDesignTime); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnSynchronizeProperties(); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void SetMouseInput(enum class Enum_AbilityInputs MouseInput); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.SetMouseInput // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Shared_Mouse_Prompt(int32_t EntryPoint); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.ExecuteUbergraph_Shared_Mouse_Prompt // (Final|UbergraphFunction) // @ game+0x3511190
};

