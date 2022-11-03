// WidgetBlueprintGeneratedClass BaseAnnouncementWidget.BaseAnnouncementWidget_C
// Size: 0x2ce (Inherited: 0x2c8)
struct UBaseAnnouncementWidget_C : UUserWidget {
	float IdleTime; // 0x2c8(0x04)
	bool Interruptable; // 0x2cc(0x01)
	bool HasOwnAnimationOut; // 0x2cd(0x01)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAnimatingIn(); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAnimatingOut(); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

