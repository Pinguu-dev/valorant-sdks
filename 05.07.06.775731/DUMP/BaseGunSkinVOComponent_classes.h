// BlueprintGeneratedClass BaseGunSkinVOComponent.BaseGunSkinVOComponent_C
// Size: 0x368 (Inherited: 0x178)
struct UBaseGunSkinVOComponent_C : UBaseVOComponent_C {
	struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*> RoundEndVO; // 0x178(0x50)
	struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*> BubbleDownGeneric; // 0x1c8(0x50)
	struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*> Kills; // 0x218(0x50)
	struct UAkAudioEvent* WeaponInspectVO; // 0x268(0x08)
	struct UAkAudioEvent* StopWeaponInspectVO; // 0x270(0x08)
	struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*> StopKills; // 0x278(0x50)
	struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*> StopBubbleDownGeneric; // 0x2c8(0x50)
	struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*> StopRoundEndVO; // 0x318(0x50)

	void GetStopWeaponVO(struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*>& StopRoundEndVO, struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*>& StopBubbleDownGeneric, struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*>& StopKills); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.GetStopWeaponVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetWeaponVO(struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*>& RoundEndVO, struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*>& BubbleDownGeneric, struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*>& Kills); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.GetWeaponVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Stop_GunSkin_MeleeInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.Stop_GunSkin_MeleeInspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_MeleeInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_MeleeInspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_Killstreak(int32_t Killstreak Count, struct UAudBasePawnVOComponent_C* VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Killstreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_Headshot(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Headshot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_PentaKill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_PentaKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_ClutchPlay(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_ClutchPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_GunInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_GunInspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_LastKillMelee(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_LastKillMelee // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_KillMelee(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_KillMelee // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_Kill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Kill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_BubbleDownGeneric(struct UAudBasePawnVOComponent_C* Character VO Component, bool WaitsOnAnnouncer); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_BubbleDownGeneric // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAuth_GunSkin_LastKill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_LastKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

