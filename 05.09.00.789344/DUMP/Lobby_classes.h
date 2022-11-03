// Class Lobby.LobbyBeaconClient
// Size: 0x4f0 (Inherited: 0x468)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x468(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x470(0x08)
	char pad_478[0x1]; // 0x478(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x479(0x01)
	char pad_47A[0x76]; // 0x47a(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1cfae60
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1cfad90
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1cfab10
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1cfa910
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1cfa840
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1cfa6e0
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1cfa590
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1cfa4f0
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1cfa3e0
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1cfa270
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1cfa110
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1cfa0e0
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1cfa0b0
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

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x1cfa6a0
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x1cfa680
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x1cfa640
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

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x1cfa6c0
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x1cfa660
};

