// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer_Parent.
// Size: 0x30a (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	bool ; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MaxTime; // 0x2d4(0x04)
	float ; // 0x2d8(0x04)
	bool ; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float TimeRemaining; // 0x2e0(0x04)
	bool ; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FMulticastInlineDelegate ; // 0x2e8(0x10)
	struct FMulticastInlineDelegate ; // 0x2f8(0x10)
	bool ; // 0x308(0x01)
	bool ; // 0x309(0x01)

	bool (); // Function Widget_Ability_Element_Timer_Parent.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (float TimeRemaining); // Function Widget_Ability_Element_Timer_Parent.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	struct FText (); // Function Widget_Ability_Element_Timer_Parent.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	float (); // Function Widget_Ability_Element_Timer_Parent.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (float ); // Function Widget_Ability_Element_Timer_Parent.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float MaxTime, float CurrentTime, bool , struct FText , bool , bool ); // Function Widget_Ability_Element_Timer_Parent.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Ability_Element_Timer_Parent..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Destruct(); // Function Widget_Ability_Element_Timer_Parent..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Widget_Ability_Element_Timer_Parent.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Widget_Ability_Element_Timer_Parent.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function Widget_Ability_Element_Timer_Parent..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Widget_Ability_Element_Timer_Parent.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function Widget_Ability_Element_Timer_Parent.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Widget_Ability_Element_Timer_Parent.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

