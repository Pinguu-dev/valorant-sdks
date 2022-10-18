// BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UWidgetFunctionLibrary_C : UBlueprintFunctionLibrary {

	void CompleteInitScreen(struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.CompleteInitScreen // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool IsObserverTargetAnAttacker(struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.IsObserverTargetAnAttacker // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	bool IsObserverTargetADefender(struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.IsObserverTargetADefender // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetImageWidgetImage(struct UImage* ImageWidget, struct UObject* ImageToSet, struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.SetImageWidgetImage // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetDesiredEquippable(struct UWidget* WidgetContext, struct UObject* __WorldContext, struct AAresEquippable*& Equippable); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetDesiredEquippable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetCurrentEquippable(struct UWidget* WidgetContext, struct UObject* __WorldContext, struct AAresEquippable*& Equippable); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetCurrentEquippable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void CalculateDisplayTime_Int(struct FHUDTimerConfig NewParam, float TimeRemaining, struct UObject* __WorldContext, int32_t& Seconds, int32_t& Milliseconds, int32_t& Minutes); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.CalculateDisplayTime_Int // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CalculateCurrentDisplayTime(int32_t Minutes, int32_t Seconds, int32_t Milliseconds, struct UObject* __WorldContext, struct FText& Out Timer); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.CalculateCurrentDisplayTime // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CalculateDisplayTime(struct FHUDTimerConfig TimerConfig, int32_t Minutes, int32_t Seconds, int32_t Milliseconds, struct UObject* __WorldContext, struct FText& Display Time); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.CalculateDisplayTime // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3520f50
};

