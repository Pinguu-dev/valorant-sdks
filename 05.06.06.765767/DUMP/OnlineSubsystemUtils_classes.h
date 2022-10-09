// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x408 (Inherited: 0x3d0)
struct AOnlineBeacon : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	float BeaconConnectionInitialTimeout; // 0x3d8(0x04)
	float BeaconConnectionTimeout; // 0x3dc(0x04)
	struct UNetDriver* NetDriver; // 0x3e0(0x08)
	char pad_3E8[0x20]; // 0x3e8(0x20)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x468 (Inherited: 0x408)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x408(0x08)
	struct UNetConnection* BeaconConnection; // 0x410(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x418(0x01)
	char pad_419[0x4f]; // 0x419(0x4f)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x3f8 (Inherited: 0x3d0)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x3d0(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x3e0(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x3e8(0x10)
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0xa0 (Inherited: 0x38)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x88 (Inherited: 0x38)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x98 (Inherited: 0x38)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x70 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1bd0 (Inherited: 0x1b30)
struct UIpConnection : UNetConnection {
	char pad_1B30[0x50]; // 0x1b30(0x50)
	float SocketErrorDisconnectDelay; // 0x1b80(0x04)
	char pad_1B84[0x4c]; // 0x1b84(0x4c)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x850 (Inherited: 0x7e0)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x7e0(0x01)
	char AllowPlayerPortUnreach : 1; // 0x7e0(0x01)
	char pad_7E0_2 : 6; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	uint32_t MaxPortCountToTry; // 0x7e4(0x04)
	char pad_7E8[0xc]; // 0x7e8(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x7f4(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x7f8(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x7fc(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	double MaxSecondsInReceive; // 0x808(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x810(0x04)
	float ResolutionConnectionTimeout; // 0x814(0x04)
	char pad_818[0x38]; // 0x818(0x38)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x188 (Inherited: 0x38)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x130]; // 0x58(0x130)
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4c0 (Inherited: 0x408)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x410(0x10)
	char pad_420[0xa0]; // 0x420(0xa0)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x138 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x0c)
	char pad_3C[0xfc]; // 0x3c(0xfc)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x60 (Inherited: 0x48)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1e8 (Inherited: 0x30)
struct UOnlineSessionClient : UOnlineSession {
	char pad_30[0x1b0]; // 0x30(0x1b0)
	bool bIsFromInvite; // 0x1e0(0x01)
	bool bHandlingDisconnect; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x528 (Inherited: 0x468)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_468[0x30]; // 0x468(0x30)
	struct FString DestSessionId; // 0x498(0x10)
	struct FPartyReservation PendingReservation; // 0x4a8(0x50)
	enum class EClientRequestType RequestType; // 0x4f8(0x01)
	bool bPendingReservationSent; // 0x4f9(0x01)
	bool bCancelReservation; // 0x4fa(0x01)
	char pad_4FB[0x2d]; // 0x4fb(0x2d)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x470 (Inherited: 0x3f8)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x3f8(0x08)
	char pad_400[0x60]; // 0x400(0x60)
	bool bLogoutOnSessionTimeout; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float SessionTimeoutSecs; // 0x464(0x04)
	float TravelSessionTimeoutSecs; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x88 (Inherited: 0x30)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	int32_t NumTeams; // 0x44(0x04)
	int32_t NumPlayersPerTeam; // 0x48(0x04)
	struct FName TeamAssignmentMethod; // 0x4c(0x0c)
	int32_t ReservedHostTeamNum; // 0x58(0x04)
	int32_t ForceTeamNum; // 0x5c(0x04)
	bool bRestrictCrossConsole; // 0x60(0x01)
	bool bEnableRemovalRequests; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x68 (Inherited: 0x38)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x550 (Inherited: 0x468)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char pad_468[0x30]; // 0x468(0x30)
	struct FString DestSessionId; // 0x498(0x10)
	struct FSpectatorReservation PendingReservation; // 0x4a8(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x520(0x01)
	bool bPendingReservationSent; // 0x521(0x01)
	bool bCancelReservation; // 0x522(0x01)
	char pad_523[0x2d]; // 0x523(0x2d)
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x470 (Inherited: 0x3f8)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x3f8(0x08)
	char pad_400[0x60]; // 0x400(0x60)
	bool bLogoutOnSessionTimeout; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float SessionTimeoutSecs; // 0x464(0x04)
	float TravelSessionTimeoutSecs; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x68 (Inherited: 0x30)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	bool bRestrictCrossConsole; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x468 (Inherited: 0x468)
struct ATestBeaconClient : AOnlineBeaconClient {
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x3f8 (Inherited: 0x3f8)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x7c0 (Inherited: 0x760)
struct UVoipListenerSynthComponent : USynthComponent {
	char pad_760[0x60]; // 0x760(0x60)
};

