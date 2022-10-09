// BlueprintGeneratedClass BombDefuseNotificationType.BombDefuseNotificationType_C
// Size: 0x88 (Inherited: 0x80)
struct UBombDefuseNotificationType_C : UBaseBombEventNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)

	void HandleDefuseStart(struct AShooterCharacter* Defuser); // Function BombDefuseNotificationType.BombDefuseNotificationType_C.HandleDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleDefuseStop(); // Function BombDefuseNotificationType.BombDefuseNotificationType_C.HandleDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleDefuserKilled(struct AShooterCharacter* Defuser); // Function BombDefuseNotificationType.BombDefuseNotificationType_C.HandleDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BombDefuseNotificationType(int32_t EntryPoint); // Function BombDefuseNotificationType.BombDefuseNotificationType_C.ExecuteUbergraph_BombDefuseNotificationType // (Final|UbergraphFunction) // @ game+0x3511190
};

