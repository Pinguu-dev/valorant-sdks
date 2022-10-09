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
};

