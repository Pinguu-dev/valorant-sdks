// Enum Party.EApprovalAction
enum class EApprovalAction : uint8 {
	Approve = 0,
	Enqueue = 1,
	EnqueueAndStartBeacon = 2,
	Deny = 3,
	EApprovalAction_MAX = 4
};

// Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8 {
	NoReason = 0,
	JoinAttemptAborted = 1,
	Busy = 2,
	OssUnavailable = 3,
	PartyFull = 4,
	GameFull = 5,
	NotPartyLeader = 6,
	PartyPrivate = 7,
	JoinerCrossplayRestricted = 8,
	MemberCrossplayRestricted = 9,
	GameModeRestricted = 10,
	Banned = 11,
	NotLoggedIn = 12,
	CheckingForRejoin = 13,
	TargetUserMissingPresence = 14,
	TargetUserUnjoinable = 15,
	TargetUserAway = 16,
	AlreadyLeaderInPlatformSession = 17,
	TargetUserPlayingDifferentGame = 18,
	TargetUserMissingPlatformSession = 19,
	PlatformSessionMissingJoinInfo = 20,
	FailedToStartFindConsoleSession = 21,
	MissingPartyClassForTypeId = 22,
	TargetUserBlocked = 23,
	CustomReason0 = 24,
	CustomReason1 = 25,
	CustomReason2 = 26,
	CustomReason3 = 27,
	CustomReason4 = 28,
	CustomReason5 = 29,
	CustomReason6 = 30,
	CustomReason7 = 31,
	CustomReason8 = 32,
	CustomReason9 = 33,
	CustomReason10 = 34,
	CustomReason11 = 35,
	CustomReason12 = 36,
	CustomReason13 = 37,
	CustomReason14 = 38,
	CustomReason15 = 39,
	CustomReason16 = 40,
	CustomReason17 = 41,
	CustomReason18 = 42,
	CustomReason19 = 43,
	CustomReason20 = 44,
	CustomReason21 = 45,
	CustomReason22 = 46,
	CustomReason23 = 47,
	CustomReason24 = 48,
	CustomReason25 = 49,
	CustomReason26 = 50,
	CustomReason27 = 51,
	CustomReason28 = 52,
	CustomReason29 = 53,
	CustomReason30 = 54,
	CustomReason31 = 55,
	CustomReason32 = 56,
	CustomReason33 = 57,
	CustomReason34 = 58,
	CustomReason35 = 59,
	CustomReason36 = 60,
	CustomReason37 = 61,
	CustomReason38 = 62,
	CustomReason39 = 63,
	MAX = 64
};

// Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8 {
	AnyMember = 0,
	LeaderOnly = 1,
	NoInvites = 2,
	EPartyInviteRestriction_MAX = 3
};

// Enum Party.EPartyType
enum class EPartyType : uint8 {
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	EPartyType_MAX = 3
};

// Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8 {
	General = 0,
	Founder = 1,
	Party = 2,
	Team = 3,
	System = 4,
	Private = 5,
	ESocialChannelType_MAX = 6
};

// Enum Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8 {
	Always = 0,
	AlwaysIfDifferent = 1,
	AlwaysWhenInCrossplayParty = 2,
	AlwaysIfDifferentWhenInCrossplayParty = 3,
	Never = 4,
	EPlatformIconDisplayRule_MAX = 5
};

// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8 {
	NoSelection = 0,
	OptedIn = 1,
	OptedOut = 2,
	OptedOutRestricted = 3,
	ECrossplayPreference_MAX = 4
};

// Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8 {
	Any = 0,
	FriendInviteReceived = 1,
	FriendInviteSent = 2,
	PartyInvite = 3,
	Friend = 4,
	BlockedPlayer = 5,
	SuggestedFriend = 6,
	RecentPlayer = 7,
	ESocialRelationship_MAX = 8
};

// Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8 {
	Primary = 0,
	Platform = 1,
	MAX = 2
};

// ScriptStruct Party.OnlinePartyRepDataBase
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePartyRepDataBase {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Party.PartyMemberRepData
// Size: 0x140 (Inherited: 0x18)
struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FUserPlatform Platform; // 0x20(0x20)
	char pad_40[0x30]; // 0x40(0x30)
	struct FUniqueNetIdRepl PlatformUniqueId; // 0x70(0x28)
	char pad_98[0x30]; // 0x98(0x30)
	struct FString PlatformSessionId; // 0xc8(0x10)
	char pad_D8[0x30]; // 0xd8(0x30)
	enum class ECrossplayPreference CrossplayPreference; // 0x108(0x01)
	char pad_109[0x37]; // 0x109(0x37)
};

// ScriptStruct Party.UserPlatform
// Size: 0x20 (Inherited: 0x00)
struct FUserPlatform {
	struct FSocialPlatformDescription PlatformDescription; // 0x00(0x20)
};

// ScriptStruct Party.SocialPlatformDescription
// Size: 0x20 (Inherited: 0x00)
struct FSocialPlatformDescription {
	struct FString SocialPlatformTypeName; // 0x00(0x10)
	struct FString SocialPlatformName; // 0x10(0x10)
};

// ScriptStruct Party.PartyPrivacySettings
// Size: 0x03 (Inherited: 0x00)
struct FPartyPrivacySettings {
	enum class EPartyType PartyType; // 0x00(0x01)
	enum class EPartyInviteRestriction PartyInviteRestriction; // 0x01(0x01)
	bool bOnlyLeaderFriendsCanJoin; // 0x02(0x01)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// Size: 0x48 (Inherited: 0x00)
struct FPartyPlatformSessionInfo {
	struct FName OssName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SessionId; // 0x10(0x10)
	struct FUniqueNetIdRepl OwnerPrimaryId; // 0x20(0x28)
};

// ScriptStruct Party.SocialChatChannelConfig
// Size: 0x40 (Inherited: 0x00)
struct FSocialChatChannelConfig {
	struct USocialUser* SocialUser; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TArray<struct USocialChatChannel*> ListenChannels; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Party.PartyRepData
// Size: 0x80 (Inherited: 0x18)
struct FPartyRepData : FOnlinePartyRepDataBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FPartyPrivacySettings PrivacySettings; // 0x20(0x03)
	char pad_23[0x35]; // 0x23(0x35)
	struct TArray<struct FPartyPlatformSessionInfo> PlatformSessions; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

