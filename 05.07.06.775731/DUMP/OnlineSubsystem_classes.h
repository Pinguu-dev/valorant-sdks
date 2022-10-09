// Class OnlineSubsystem.NamedInterfaces
// Size: 0x68 (Inherited: 0x30)
struct UNamedInterfaces : UObject {
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x30(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x30 (Inherited: 0x30)
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded // (Event|Public|BlueprintEvent) // @ game+0x3511190
};

