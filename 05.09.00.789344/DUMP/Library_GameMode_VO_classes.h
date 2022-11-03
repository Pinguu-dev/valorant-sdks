// BlueprintGeneratedClass Library_GameMode_VO.Library_GameMode_VO_C
// Size: 0x30 (Inherited: 0x30)
struct ULibrary_GameMode_VO_C : UBlueprintFunctionLibrary {

	void PlayAnnouncementForAll(struct UAkAudioEvent* Event, enum class VOPriorityEnum Priority, float QueueTimeout, struct UObject* __WorldContext); // Function Library_GameMode_VO.Library_GameMode_VO_C.PlayAnnouncementForAll // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetBasePawnVOComponent(struct UObject* TestObject, struct UObject* __WorldContext, struct UAudBasePawnVOComponent_C*& VOComponent, struct TArray<struct FAkSwitch>& AkSwitchArray); // Function Library_GameMode_VO.Library_GameMode_VO_C.GetBasePawnVOComponent // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetRandomVOComponentForTeam(struct UObject* Viewer, struct UObject* __WorldContext, struct AShooterCharacter*& ShooterCharacter, struct UAudBasePawnVOComponent_C*& VOComponent); // Function Library_GameMode_VO.Library_GameMode_VO_C.GetRandomVOComponentForTeam // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

