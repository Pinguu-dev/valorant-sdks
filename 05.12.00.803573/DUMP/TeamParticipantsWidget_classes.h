// WidgetBlueprintGeneratedClass TeamParticipantsWidget.
// Size: 0x372 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* Center; // 0x2e0(0x08)
	struct UInvalidationBox* ; // 0x2e8(0x08)
	struct UInvalidationBox* ; // 0x2f0(0x08)
	struct UInvalidationBox* ; // 0x2f8(0x08)
	struct UImage* Left; // 0x300(0x08)
	struct UHorizontalBox* ; // 0x308(0x08)
	struct U* PlayerParticipantWidget; // 0x310(0x08)
	struct U* PlayerParticipantWidget_1; // 0x318(0x08)
	struct U* PlayerParticipantWidget_2; // 0x320(0x08)
	struct U* PlayerParticipantWidget_3; // 0x328(0x08)
	struct U* PlayerParticipantWidget_4; // 0x330(0x08)
	struct UImage* Right; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* ; // 0x348(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x350(0x08)
	bool ; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UObject* ; // 0x360(0x08)
	struct UObject* ; // 0x368(0x08)
	bool IsObserver; // 0x370(0x01)
	enum class EAresTeamRole TeamRole; // 0x371(0x01)

	void (); // Function TeamParticipantsWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ); // Function TeamParticipantsWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (bool& Left); // Function TeamParticipantsWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function TeamParticipantsWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool IsAllyTeam); // Function TeamParticipantsWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function TeamParticipantsWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function TeamParticipantsWidget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamParticipantsWidget..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamParticipantsWidget.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AAresPlayerStateBase* NewValue); // Function TeamParticipantsWidget.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamParticipantsWidget.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamParticipantsWidget.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function TeamParticipantsWidget..OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Destruct(); // Function TeamParticipantsWidget..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function TeamParticipantsWidget.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

