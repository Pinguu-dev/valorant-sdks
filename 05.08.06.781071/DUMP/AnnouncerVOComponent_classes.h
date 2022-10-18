// BlueprintGeneratedClass AnnouncerVOComponent.AnnouncerVOComponent_C
// Size: 0x179 (Inherited: 0x178)
struct UAnnouncerVOComponent_C : UBaseVOComponent_C {
	enum class EAresTeamRole AnnouncerRole; // 0x178(0x01)

	void PlayAudio(struct UAkAudioEvent* Event, struct TArray<struct FAkSwitch>& Switches, int32_t RandomSeed, struct UAresAudioComponent*& AudioComponent); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AudibleToMe(bool ToSelf, bool ToAllies, bool ToEnemies, float Must Be In Range To Start, bool& ShouldPlay); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.AudibleToMe // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3520f50
	void ShouldInterrupt(enum class VOPriorityEnum New, enum class VOPriorityEnum Current, bool& Should Interrupt); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.ShouldInterrupt // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3520f50
};

