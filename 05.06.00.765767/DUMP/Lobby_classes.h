// Class Lobby.LobbyBeaconClient
// Size: 0x4f0 (Inherited: 0x468)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x468(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x470(0x08)
	char pad_478[0x1]; // 0x478(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x479(0x01)
	char pad_47A[0x76]; // 0x47a(0x76)
};

// Class Lobby.LobbyBeaconHost
// Size: 0x440 (Inherited: 0x3f8)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x408(0x30)
	struct ALobbyBeaconState* LobbyState; // 0x438(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x490 (Inherited: 0x3d0)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x3d0(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x3e8(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x410(0x28)
	bool bInLobby; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x440(0x08)
	char pad_448[0x48]; // 0x448(0x48)
};

// Class Lobby.LobbyBeaconState
// Size: 0x578 (Inherited: 0x3d0)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	bool bLobbyStarted; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float WaitForPlayersTimeRemaining; // 0x3ec(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x3f0(0x120)
	char pad_510[0x68]; // 0x510(0x68)
};

