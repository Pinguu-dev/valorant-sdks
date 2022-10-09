// Enum ShooterGame.EConnectionStatus
enum class EConnectionStatus : uint8 {
	Uninitialized = 0,
	Disconnected = 1,
	Unresponsive = 2,
	Connecting = 3,
	Connected = 4,
	Count = 5,
	EConnectionStatus_MAX = 6
};

// Enum ShooterGame.EGameFlowStateType
enum class EGameFlowStateType : uint8 {
	Initialization = 0,
	TransitionToMainMenu = 1,
	MainMenu = 2,
	TransitionToPregame = 3,
	Pregame = 4,
	TransitionToInGame = 5,
	InGame = 6,
	TransitionToPlatformFaulted = 7,
	PlatformFaulted = 8,
	Invalid = 9,
	Count = 10,
	EGameFlowStateType_MAX = 11
};

// Enum ShooterGame.EPlatformFaultReason
enum class EPlatformFaultReason : uint8 {
	None = 0,
	RNetUnhealthy = 1,
	RNetDisconnected = 2,
	WrongSessionClientID = 3,
	SessionHeartbeatFail = 4,
	SessionRefreshFail = 5,
	VanguardFail = 6,
	VanguardNeedsReboot = 7,
	SessionPlatformDowntime = 8,
	AntiAddictionShutdown = 9,
	Count = 10,
	EPlatformFaultReason_MAX = 11
};

// Enum ShooterGame.EAresEquippableState
enum class EAresEquippableState : uint8 {
	Unknown = 0,
	Idle = 1,
	Equipping = 2,
	Inspecting = 3,
	Attacking = 4,
	Firing = 5,
	Reloading = 6,
	ADS_Idle = 7,
	ADS_Firing = 8,
	Count = 9,
	EAresEquippableState_MAX = 10
};

// Enum ShooterGame.EEquippableRejectInputReason
enum class EEquippableRejectInputReason : uint8 {
	NoResources = 0,
	OutsideGameplay = 1,
	OnCooldown = 2,
	BlockedByCurrentEquippable = 3,
	EquipSlotDisabled = 4,
	EEquippableRejectInputReason_MAX = 5
};

// Enum ShooterGame.EAresGamePhase
enum class EAresGamePhase : uint8 {
	NotStarted = 0,
	GameStarted = 1,
	RoundStarting = 2,
	InRound = 3,
	RoundEnding = 4,
	SwitchingTeams = 5,
	GameEnded = 6,
	Count = 7,
	Invalid = 254,
	EAresGamePhase_MAX = 255
};

// Enum ShooterGame.EAresAssistType
enum class EAresAssistType : uint8 {
	None = 0,
	Damage = 1,
	Resurrection = 2,
	Heal = 3,
	CombatBuff = 4,
	Detain = 5,
	Blind = 6,
	Concussion = 7,
	Vulnerable = 8,
	Decay = 9,
	Reveal = 10,
	Gravity = 11,
	Slow = 12,
	Suppression = 13,
	Smoke = 14,
	Other = 15,
	Count = 16,
	EAresAssistType_MAX = 17
};

// Enum ShooterGame.EAresMovementType
enum class EAresMovementType : uint8 {
	Walking = 0,
	Running = 1,
	Jumping = 2,
	Crouching = 3,
	OnAscender = 4,
	Flying = 5,
	Count = 6,
	Invalid = 254,
	EAresMovementType_MAX = 255
};

// Enum ShooterGame.EAresEquippableInputAction
enum class EAresEquippableInputAction : uint8 {
	EquippableInputAction_WentDown = 0,
	EquippableInputAction_IsDown = 1,
	EquippableInputAction_WentUp = 2,
	EquippableInputAction_IsUp = 3,
	EquippableInputAction_Count = 4,
	EquippableInputAction_MAX = 5
};

// Enum ShooterGame.EAresEquippableInput
enum class EAresEquippableInput : uint8 {
	EquippableInput_Primary_Trigger = 0,
	EquippableInput_Secondary_Trigger = 1,
	EquippableInput_Reload = 2,
	EquippableInput_ZoomToggle = 3,
	EquippableInput_Use = 4,
	EquippableInput_Drop = 5,
	EquippableInput_Activate = 6,
	EquippableInput_SwipeUp = 7,
	EquippableInput_SwipeDown = 8,
	EquippableInput_SwipeLeft = 9,
	EquippableInput_SwipeRight = 10,
	EquippableInput_ZoomCancel = 11,
	EquippableInput_Primary_Trigger_Gamepad = 12,
	EquippableInput_Secondary_Trigger_Gamepad = 13,
	EquippableInput_ToggleZoom_SkipFirstLevel = 14,
	EquippableInput_Count = 15,
	EquippableInput_Invalid = 254,
	EquippableInput_MAX = 255
};

// Enum ShooterGame.EUsableCancelReason
enum class EUsableCancelReason : uint8 {
	CharacterDead = 0,
	Unusable = 1,
	Cancelled = 2,
	EUsableCancelReason_MAX = 3
};

// Enum ShooterGame.EAresCameraStyle
enum class EAresCameraStyle : uint8 {
	UseViewTargetPerspective = 0,
	ThirdPersonCamera = 1,
	WatchGameStateObject = 2,
	ThirdPersonDebugCamera = 3,
	None = 4,
	Count = 5,
	EAresCameraStyle_MAX = 6
};

// Enum ShooterGame.EAresCameraPerspective
enum class EAresCameraPerspective : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	Count = 2,
	EAresCameraPerspective_MAX = 3
};

// Enum ShooterGame.EAresPlayerViewTargetMode
enum class EAresPlayerViewTargetMode : uint8 {
	None = 0,
	WatchPossessed = 1,
	SpectateAllies = 2,
	SpectateEveryone = 4,
	SpectateFreeCam = 8,
	WatchGameStateFocusObject = 16,
	NoValidViewTarget = 32,
	SpectateProjectile = 64,
	Count = 7,
	All = 255,
	EAresPlayerViewTargetMode_MAX = 256
};

// Enum ShooterGame.EStopEffectType
enum class EStopEffectType : uint8 {
	Normal = 0,
	ForceKill = 1,
	EStopEffectType_MAX = 2
};

// Enum ShooterGame.EAresRewardGrantStrategy
enum class EAresRewardGrantStrategy : uint8 {
	GrantImmediately = 0,
	DelayUntilRoundEnd = 1,
	Count = 2,
	EAresRewardGrantStrategy_MAX = 3
};

// Enum ShooterGame.EActionBindChangeSource
enum class EActionBindChangeSource : uint8 {
	UserRebind = 0,
	Init = 1,
	RoamingDownload = 2,
	Reset = 3,
	Apply = 4,
	ResetOne = 5,
	Copy = 6,
	Count = 7,
	EActionBindChangeSource_MAX = 8
};

// Enum ShooterGame.EAresClientGameInstanceInitStatus
enum class EAresClientGameInstanceInitStatus : uint8 {
	NotStarted = 0,
	Initializing = 1,
	AwaitingFirstTimeUserInfo = 2,
	WaitingForLogin = 3,
	AttemptingLogin = 4,
	PatchPreview = 5,
	WaitingForPatch = 6,
	Initialized = 7,
	InitFailure = 8,
	Count = 9,
	EAresClientGameInstanceInitStatus_MAX = 10
};

// Enum ShooterGame.EGameFeatureToggleName
enum class EGameFeatureToggleName : uint8 {
	FootIK = 0,
	FootIKUseDownhillTrace = 1,
	FootIKEyeHeightAdjustment = 2,
	FootIKDebug = 3,
	Harvester = 4,
	WeaponThroughWallClipping = 5,
	WallClipping3PDebug = 6,
	AbilityMinimapIndicators = 7,
	StrictRealTimeServerMovementChecks = 8,
	DesignPlaytest = 9,
	MovementEnforceLandingOrigin = 10,
	ServerAnimEvalOnDemand = 11,
	ExperimentalTagging = 12,
	SimulateDegradedNetworkConditions = 13,
	ServerRewindedMovement = 14,
	ToggleGore = 15,
	CalloutRegionsDebug = 16,
	DesignerToggleA = 17,
	DesignerToggleB = 18,
	DesignerToggleC = 19,
	DowntickPreround = 20,
	ReuseActorOnRespawn = 21,
	LookDirectionKeys = 22,
	DevInstabilityHUD = 23,
	TransitionScreenGracePeriod = 24,
	GameplayQualityLogging = 25,
	LogMarkers = 26,
	DelayWalkAccuracy = 27,
	EnableSlashCommands = 28,
	EnableVoting = 29,
	NiagaraTest = 30,
	ShowDrawVoteInCustom = 31,
	ShowLeftHandedSetting = 32,
	AllowShoppingWhileDead = 33,
	DeathmatchRepeatingUAV = 34,
	DeathmatchEncourageFarSpawning = 35,
	NewRelicEventing = 36,
	GameDataExport = 37,
	ReuseCharacterHUDWidgets = 38,
	RegisterEquippableVisibility = 39,
	FixedColorTeams = 40,
	RoundStateLog = 41,
	JohnsLatte = 42,
	DisableEquippableAnimationInFXCs = 43,
	YoruAltTeleportTargeting = 44,
	RequestViewTargetModeUpdate = 45,
	SettingsServiceError = 46,
	Ep2TacVO = 47,
	EnableHRTFSetting = 48,
	Coaches = 49,
	TaggingAccuracyOverride = 50,
	ForceUpdateProblematicMinimapComponents = 51,
	GameplayNotificationsV2 = 52,
	EnableBehaviorScoreTrackers = 53,
	TencentSecuritySDK = 54,
	StealthMovingTeleporterBeaconsCollide = 55,
	PlayerThroughWallClipping = 56,
	PlayerThroughWallBackClipping = 57,
	PlayerMultipleClipping = 58,
	GameDataEventPipelineRefactor = 59,
	RoundRestore = 60,
	MatchRecovery = 61,
	Hovercards = 62,
	ModesToggleA = 63,
	ModesToggleB = 64,
	ModesToggleC = 65,
	MobileLimitedSkinLoading = 66,
	RoamingSettingsLocalCache = 67,
	MovementSyncAllDamageResponses = 68,
	HideCharacterMeshesWhileRespawning = 69,
	DeathCamNearSightFix = 70,
	BurstWeaponsInstantAccuracyFix = 71,
	AgentSpecificKeybinds = 72,
	EnableCharacterScaling = 73,
	Totems = 74,
	RequestStopOnNotRelevant = 75,
	FXCPoolWarming = 76,
	TopHUDV2 = 77,
	PlayerInputConsumptionFix = 78,
	MultipleProjectileTuning = 79,
	ReplaySystem = 80,
	ReflexLatencyAnalyzer = 81,
	FoWAlwaysRelevantRuleUpdate = 82,
	FoWExpireViewerCacheDuringPreround = 83,
	EnableDynamicSpawnAlternateRotations = 84,
	SpawnAlternateRotationsPathfindToNearestEnemy = 85,
	GamepadFast180Turn = 86,
	FoWDebugCheats = 87,
	AgentMastery = 88,
	EnableSpawnPointLookAheadBox = 89,
	DeathDistanceScoring = 90,
	ScoreLowVisibilityPointsMoreOften = 91,
	MoveProcessingDelayDebug = 92,
	SpawnPointLookAheadDynamicAdjustment = 93,
	UseMegamapTextureOverrides = 94,
	AllowQueueingEquippableChangesWhileUsing = 95,
	NVCUpdates = 96,
	RazeUltAutoEquipFix = 97,
	RationalMoveQueueTarget = 98,
	EnableWeaponBasedAbilityQueueing = 99,
	SprayV2 = 100,
	WheelShowupDelay = 101,
	SeparateQuickSpray = 102,
	ProportionalTimeShiftRate = 103,
	ForceTickAllAnimationPerspectives = 104,
	InteractableUserComponentCorrectionTimeout = 105,
	CleanPlayerStateOnDisassociate = 106,
	MoveSyncedUsables = 107,
	OverQueuedRebasing = 108,
	PureImpactEffects = 109,
	FXCPerspectiveUpdateFix = 110,
	EnableCypherGameObject = 111,
	FireButtonCustomization = 112,
	DevOnlyShop = 113,
	ServerValidateClientPredcitedUsables = 114,
	EnableJumpCrouch = 115,
	ChamberTPDeathBehaviorFix = 116,
	ReplicatedStateTransitionContext = 117,
	AllowGameplayTagFastReplication = 118,
	MoveDistributionTargeting = 119,
	EQSClearSpotForCharacterOverlapOffsetFix = 120,
	UseClientLocationForShots = 121,
	EnableGameplayFlagsTelemetry = 122,
	LineupCompass = 123,
	LineupOverlay = 124,
	RPCValidationWithDisconnect = 125,
	SendPerRoundNetworkTelemetryEvents = 126,
	DeathMatchLogPlayerSpawn = 127,
	AccurateWallMeshSeams = 128,
	LiveDiagnostics = 129,
	FXCInitialReplicationFix = 130,
	RemoteClientQueueSizeTrackingFix = 131,
	RoundEndMulticastBugfix = 132,
	ExpandedGestures = 133,
	SyncedTimerAuthStartUseCurrentTimestamp = 134,
	DeathPuckSizeAdjustment = 135,
	GyroShooting = 136,
	IsStealthedForActorRefactor = 137,
	CustomCombatTrackerSupport = 138,
	UseAbilityTrackingComponent = 139,
	RestoreSetReplicatesRGIs = 140,
	FixActorComponentBlockingDormancy = 141,
	GyroMovement = 142,
	RelativeTriggerEnabled = 143,
	AudioVisualization = 144,
	MultichannelAudioVisualization = 145,
	ReplicationSleepFix = 146,
	RevertMobileFiringError = 147,
	CancelUsableOnServerCorrect = 148,
	ProjectileBendingV2 = 149,
	BurstFire = 150,
	BuffDamageRefactor = 151,
	MinimapPauseUnseenEnemyUpdates = 152,
	Count = 153,
	Invalid = 254,
	EGameFeatureToggleName_MAX = 255
};

// Enum ShooterGame.EGameRuleBoolName
enum class EGameRuleBoolName : uint8 {
	IsOvertimeWinByTwo = 0,
	AllowLenientSurrender = 1,
	AllowDropOut = 2,
	SkipPregame = 3,
	AssignRandomAgents = 4,
	AllowGameModifiers = 5,
	TournamentMode = 6,
	MajorityVoteAgents = 7,
	PlayOutAllRounds = 8,
	SkipMatchHistory = 9,
	FillWithBots = 10,
	AllowDropIn = 11,
	UseMobileServerTickRate = 12,
	DestroyAbilitiesOnDeath = 13,
	PreventAbilityRecharge = 14,
	ReplayRecordMatch = 15,
	UseMapPicksAndBans = 16,
	AimToolingModule = 17,
	AimToolingBending = 18,
	AimToolingPullToCenter = 19,
	AimToolingOverTargetAcceleration = 20,
	AimToolingAimAccelerationDelay = 21,
	AimToolingDeceleration = 22,
	AimToolingFrameOfReference = 23,
	AimToolingStrafeAssist = 24,
	AimToolingTargetFriction = 25,
	AimToolingFlashTurning = 26,
	MovementToolingModule = 27,
	MovementToolingShotRooting = 28,
	MovementToolingFastStrafing = 29,
	MovementToolingFastRelease = 30,
	MovementToolingAngularDeadzones = 31,
	MovementToolingRadialDeadzones = 32,
	PipAbilityCasting = 33,
	CombatReportOnlyShowLastLife = 34,
	MobileDefaultFoV = 35,
	UsePrototypePurchasables = 36,
	MobileGunStability = 37,
	ADSImprovements = 38,
	MobileDesignPrototype = 39,
	FootstepABTest = 40,
	UseAllAbilityCooldowns = 41,
	DownedCharactersCanGiveUp = 42,
	SpawnTurtleProtection = 43,
	PrototypeStability = 44,
	Count = 45,
	Invalid = 254,
	EGameRuleBoolName_MAX = 255
};

// Enum ShooterGame.EGameFeatureFloatConfigName
enum class EGameFeatureFloatConfigName : uint8 {
	InitialConnectTimeout = 0,
	ConnectionTimeout = 1,
	SoftDisconnectTimeout = 2,
	MaxAllowableRewindTime = 3,
	RemoteMoveDelayTimeMillisecondsOptimal = 4,
	RemoteMoveDelayTimeMillisecondsAverage = 5,
	RemoteMoveDelayTimeMillisecondsPoor = 6,
	MaxUnacknowledgedDuration = 7,
	StealthComponentTickRate = 8,
	WarmupMaximumDuration = 9,
	MaxScoreLimitOverride = 10,
	MinimapVisibilityTickInterval = 11,
	ObserverMovementMinQueueSize = 12,
	JohnsLatteRate = 13,
	PainAuxRaisinsRate = 14,
	UsablesPredictionTimeout = 15,
	ForceModulesPredictionTimeout = 16,
	LogsPerSecondThreshold = 17,
	LogsPerSecondCriticalThreshold = 18,
	LogsPerSecondMeasurementWindow = 19,
	AimToolingTrackerHighRecoilThreshold = 20,
	SilentFramesBeforeBurstLoss = 21,
	AimToolingTuningMode = 22,
	MovementToolingTuningMode = 23,
	GamepadFast180TurnActivationThreshold = 24,
	GamepadFastTurningAimAccelDelayScale = 25,
	GamepadFastTurningAimAccelRampUpScale = 26,
	GamepadMaxFramerateAlways = 27,
	EndToEndLatencyJitter = 28,
	ABFootstepTestControlPercent = 29,
	RelativeTriggerThreshold = 30,
	RelativeTriggerDeltaSensitivity = 31,
	Count = 32,
	Invalid = 254,
	EGameFeatureConfigName_MAX = 255,
	EGameFeatureFloatConfigName_MAX = 256
};

// Enum ShooterGame.EAresMatchTimeoutState
enum class EAresMatchTimeoutState : uint8 {
	None = 0,
	TimeoutCountdown = 1,
	Timeout = 2,
	Count = 3,
	EAresMatchTimeoutState_MAX = 4
};

// Enum ShooterGame.EMatchCompletionState
enum class EMatchCompletionState : uint8 {
	InProgress = 0,
	Completed = 1,
	All_Disconnected = 2,
	Team_Disconnected = 3,
	Hacking_Terminated = 4,
	Surrendered = 5,
	VoteDraw = 6,
	ForceDraw = 7,
	Remake = 8,
	Count = 9,
	EMatchCompletionState_MAX = 10
};

// Enum ShooterGame.EInventoryTransaction
enum class EInventoryTransaction : uint8 {
	Purchase = 0,
	PickUp = 1,
	FulfillRequest = 2,
	Drop = 3,
	Sell = 4,
	Transfer = 5,
	Trash = 6,
	Store = 7,
	Retrieve = 8,
	Default = 9,
	Other = 10,
	Count = 11,
	EInventoryTransaction_MAX = 12
};

// Enum ShooterGame.EAresEquippableRestrictionType
enum class EAresEquippableRestrictionType : uint8 {
	None = 0,
	CantSwitchEquippables = 1,
	PrimaryWeaponsDisabled = 2,
	HeavyWeaponsDisabled = 3,
	WeaponsDisabled = 4,
	AbilityDisabled = 5,
	Suppressed = 6,
	Count = 7,
	EAresEquippableRestrictionType_MAX = 8
};

// Enum ShooterGame.EMissionStatus
enum class EMissionStatus : uint8 {
	Inactive = 0,
	Active = 1,
	Completed = 2,
	Failed = 3,
	Count = 4,
	Invalid = 254,
	EMissionStatus_MAX = 255
};

// Enum ShooterGame.EObjectiveStatus
enum class EObjectiveStatus : uint8 {
	Hidden = 0,
	Active = 1,
	Completed = 2,
	Failed = 3,
	Count = 4,
	Invalid = 254,
	EObjectiveStatus_MAX = 255
};

// Enum ShooterGame.EObjectiveType
enum class EObjectiveType : uint8 {
	Required = 0,
	Optional = 1,
	Count = 2,
	Invalid = 254,
	EObjectiveType_MAX = 255
};

// Enum ShooterGame.EAresGunRequestState
enum class EAresGunRequestState : uint8 {
	Empty = 0,
	Open = 1,
	EAresGunRequestState_MAX = 2
};

// Enum ShooterGame.EUseKeyType
enum class EUseKeyType : uint8 {
	Default = 0,
	Alternate = 1,
	Count = 2,
	EUseKeyType_MAX = 3
};

// Enum ShooterGame.EAresRegionalDamage
enum class EAresRegionalDamage : uint8 {
	RegionalDamage_Normal = 0,
	RegionalDamage_Headshot = 1,
	RegionalDamage_Legshot = 2,
	RegionalDamage_RegionCount = 3,
	RegionalDamage_Invalid_Radial = 4,
	RegionalDamage_Invalid = 5,
	RegionalDamage_CountPlusOne = 6,
	EAresRegionalDamage_MAX = 255
};

// Enum ShooterGame.EAresDirectionalDamage
enum class EAresDirectionalDamage : uint8 {
	DirectionalDamage_Front = 0,
	DirectionalDamage_Left = 1,
	DirectionalDamage_Right = 2,
	DirectionalDamage_Rear = 3,
	DirectionalDamage_Count = 4,
	DirectionalDamage_Invalid = 254,
	EAresDirectionalDamage_MAX = 255
};

// Enum ShooterGame.EAresTeamRole
enum class EAresTeamRole : uint8 {
	None = 0,
	Attacker = 1,
	Defender = 2,
	FreeForAll = 3,
	Any = 4,
	Role_Count = 5,
	EAresTeamRole_MAX = 6
};

// Enum ShooterGame.EPartyErrorEnum
enum class EPartyErrorEnum : uint8 {
	ErrUnparsableState = 0,
	ErrUnparsableTeam = 1,
	ErrJoinTypeNotRecognized = 2,
	ErrJoinPartyWithoutOwnership = 3,
	ErrJoinPartyGotBlocked = 4,
	ErrPartyTooLargeToJoin = 5,
	ErrPlayerDoesNotExist = 6,
	ErrPlayerNoCurrentParty = 7,
	ErrJoinPlayerNilParty = 8,
	ErrPlayerExistsInParty = 9,
	ErrJoiningPlayerNotInMenus = 10,
	ErrPartyMemberNotInMenus = 11,
	ErrPartyStateCantEnterMatchmaking = 12,
	ErrPartyNotInMatchmaking = 13,
	ErrPlayerInGame = 14,
	ErrNilSessionNotification = 15,
	ErrPartyCleaned = 16,
	ErrPartyTooLargeToConvertMM = 17,
	ErrClientVersionMismatchWithSession = 18,
	ErrPartyDoesNotExist = 19,
	ErrNotACustomGame = 20,
	ErrPartyStateCantEnterQuickCustomGame = 21,
	ErrTooManyPlayersForQuickCustomGame = 22,
	ErrInviteNotAllowed = 23,
	ErrCheatsDisabled = 24,
	ErrEmptyName = 25,
	ErrPartyStateCantEnterCustomGame = 26,
	ErrEmptyQueue = 27,
	ErrOldPartyIDMismatch = 28,
	ErrPartyIDInvalid = 29,
	ErrPlayerAlreadyInited = 30,
	ErrPlayerNotInited = 31,
	ErrNewPartyIDIsNotNew = 32,
	ErrInviteNotFound = 33,
	ErrInviteExists = 34,
	ErrPartyNil = 35,
	ErrPartyAlreadyExists = 36,
	ErrPartyIDMismatch = 37,
	ErrCannotModifyPlayerNotInParty = 38,
	ErrAlreadyInParty = 39,
	ErrPartyFull = 40,
	ErrIncorrectPartyState = 41,
	ErrPlayerClientVersionMismatch = 42,
	ErrInvalidPreviousState = 43,
	ErrNotPartyOwner = 44,
	ErrMatchmakingError = 45,
	ErrRequestOnOpenError = 46,
	ErrRequestOnFullParty = 47,
	ErrRequestTooManySubjects = 48,
	ErrQueueNotEnabled = 49,
	ErrQueueRestricted = 50,
	ErrInvalid = 51,
	EPartyErrorEnum_MAX = 52
};

// Enum ShooterGame.EPartyManagerInviteAction
enum class EPartyManagerInviteAction : uint8 {
	Accepted = 0,
	Declined = 1,
	Count = 2,
	EPartyManagerInviteAction_MAX = 3
};

// Enum ShooterGame.ECustomGameTeam
enum class ECustomGameTeam : uint8 {
	Defenders = 0,
	Attackers = 1,
	Spectate = 2,
	DefendersCoaches = 3,
	AttackersCoaches = 4,
	Count = 5,
	Invalid = 6,
	ECustomGameTeam_MAX = 7
};

// Enum ShooterGame.EPartyViewState
enum class EPartyViewState : uint8 {
	Default = 0,
	CustomGame = 1,
	Tournament = 2,
	Invalid = 3,
	EPartyViewState_MAX = 4
};

// Enum ShooterGame.EAresPartyAccessibility
enum class EAresPartyAccessibility : uint8 {
	INVALID = 0,
	OPEN = 1,
	CLOSED = 2,
	EAresPartyAccessibility_MAX = 3
};

// Enum ShooterGame.ESocialXPState
enum class ESocialXPState : uint8 {
	FeatureInactive = 0,
	PartyNotEligible = 1,
	PartyEligible = 2,
	ModeNotEligible = 3,
	ESocialXPState_MAX = 4
};

// Enum ShooterGame.EAresInputState
enum class EAresInputState : uint8 {
	Released = 0,
	Pressed = 1,
	Count = 2,
	Invalid = 254,
	EAresInputState_MAX = 255
};

// Enum ShooterGame.EAresTouchMode
enum class EAresTouchMode : uint8 {
	Interaction = 0,
	Edit = 1,
	EAresTouchMode_MAX = 2
};

// Enum ShooterGame.EAresTouchState
enum class EAresTouchState : uint8 {
	Unknown = 0,
	Pressed = 1,
	Active = 2,
	Released = 3,
	Entered = 4,
	Exited = 5,
	EAresTouchState_MAX = 6
};

// Enum ShooterGame.EAresTouchSwipeDirection
enum class EAresTouchSwipeDirection : uint8 {
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	EAresTouchSwipeDirection_MAX = 4
};

// Enum ShooterGame.EWidgetLayoutPresetType
enum class EWidgetLayoutPresetType : uint8 {
	Simple = 0,
	Advanced = 1,
	Experimental = 2,
	Custom = 3,
	None = 255,
	EWidgetLayoutPresetType_MAX = 256
};

// Enum ShooterGame.EAresTouchSwipeType
enum class EAresTouchSwipeType : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	EAresTouchSwipeType_MAX = 5
};

// Enum ShooterGame.EReloadSubstate
enum class EReloadSubstate : uint8 {
	Intro = 0,
	PreReload = 1,
	PostReload = 2,
	Outro = 3,
	Inactive = 4,
	Count = 5,
	EReloadSubstate_MAX = 6
};

// Enum ShooterGame.EForceModuleType
enum class EForceModuleType : uint8 {
	ServerCreated = 0,
	ClientSimulated = 1,
	ClientSynced = 2,
	ClientPredicted = 3,
	EForceModuleType_MAX = 4
};

// Enum ShooterGame.EWalletType
enum class EWalletType : uint8 {
	DEFAULT = 0,
	JUICE_CONTENT = 1,
	ALL_JUICE_CURRENCY = 2,
	COUNT = 3,
	EWalletType_MAX = 4
};

// Enum ShooterGame.EAVSConfirmationResponseType
enum class EAVSConfirmationResponseType : uint8 {
	ConfirmationPinIncorrect = 0,
	ConfirmationPinValid = 1,
	DeactivationPinSent = 2,
	ActivationPinSent = 3,
	Count = 4,
	Invalid = 5,
	EAVSConfirmationResponseType_MAX = 6
};

// Enum ShooterGame.EAVSErrorType
enum class EAVSErrorType : uint8 {
	PhoneNumberUnavailable = 0,
	AccountAlreadyVerified = 1,
	VerificationPinNotFound = 2,
	InvalidVerificationTransactionType = 3,
	InvalidPhoneType = 4,
	InvalidPhoneNumber = 5,
	PUUIDNotFound = 6,
	AccountNotVerified = 7,
	ValidationError = 8,
	ConfirmationPinIncorrect = 9,
	Default = 10,
	Count = 11,
	Invalid = 12,
	EAVSErrorType_MAX = 13
};

// Enum ShooterGame.EDailyTicketRewardType
enum class EDailyTicketRewardType : uint8 {
	UndefinedReward = 0,
	AccountPtsReward = 1,
	SoftCurrencyReward = 2,
	Count = 3,
	EDailyTicketRewardType_MAX = 4
};

// Enum ShooterGame.EPresenceProduct
enum class EPresenceProduct : uint8 {
	Ares = 0,
	Bacon = 1,
	Keystone = 2,
	LeagueOfLegends = 3,
	Invalid = 4,
	EPresenceProduct_MAX = 5
};

// Enum ShooterGame.EProvisioningFlowID
enum class EProvisioningFlowID : uint8 {
	Invalid = 0,
	ShootingRange = 1,
	SkillTest = 2,
	CustomGame = 3,
	Matchmaking = 4,
	NewPlayerExperience = 5,
	Tournament = 6,
	Count = 7,
	EProvisioningFlowID_MAX = 8
};

// Enum ShooterGame.EMmrErrorEnum
enum class EMmrErrorEnum : uint8 {
	ErrRateExceeded = 0,
	ErrInvalid = 1,
	EMmrErrorEnum_MAX = 2
};

// Enum ShooterGame.EPlayerAliasError
enum class EPlayerAliasError : uint8 {
	NoError = 0,
	NameChangeForbidden = 1,
	NameNotAvailable = 2,
	RateLimited = 3,
	UnknownError = 4,
	EPlayerAliasError_MAX = 5
};

// Enum ShooterGame.EAresNotificationResponseType
enum class EAresNotificationResponseType : uint8 {
	Dismiss = 0,
	ActionA = 1,
	ActionB = 2,
	NoResponse = 3,
	EAresNotificationResponseType_MAX = 4
};

// Enum ShooterGame.EAvoidListError
enum class EAvoidListError : uint8 {
	ErrAvoidListFull = 0,
	ErrOther = 1,
	EAvoidListError_MAX = 2
};

// Enum ShooterGame.EAresFloatSettingName
enum class EAresFloatSettingName : uint8 {
	Gamma = 0,
	MouseSensitivity = 1,
	MouseSensitivityZoomed = 2,
	MouseSensitivityADS = 3,
	MinimapSize = 4,
	MinimapZoom = 5,
	OverallVolume = 6,
	SoundEffectsVolume = 7,
	VoiceOverVolume = 8,
	VideoVolume = 9,
	AllMusicOverallVolume = 10,
	MenuAndLobbyMusicVolume = 11,
	CharacterSelectMusicVolume = 12,
	MaxFramerateOnBattery = 13,
	MaxFramerateInMenu = 14,
	MaxFramerateInBackground = 15,
	MaxFramerateAlways = 16,
	PingWheelHoldDelayMS = 17,
	CrosshairOutlineThickness = 18,
	CrosshairOutlineOpacity = 19,
	CrosshairCenterDotSize = 20,
	CrosshairCenterDotOpacity = 21,
	CrosshairInnerLinesLineThickness = 22,
	CrosshairInnerLinesLineLength = 23,
	CrosshairInnerLinesLineLengthVertical = 24,
	CrosshairInnerLinesLineOffset = 25,
	CrosshairInnerLinesOpacity = 26,
	CrosshairInnerLinesFiringErrorScale = 27,
	CrosshairInnerLinesMovementErrorScale = 28,
	CrosshairOuterLinesLineThickness = 29,
	CrosshairOuterLinesLineLength = 30,
	CrosshairOuterLinesLineLengthVertical = 31,
	CrosshairOuterLinesLineOffset = 32,
	CrosshairOuterLinesOpacity = 33,
	CrosshairOuterLinesFiringErrorScale = 34,
	CrosshairOuterLinesMovementErrorScale = 35,
	CrosshairADSOutlineThickness = 36,
	CrosshairADSOutlineOpacity = 37,
	CrosshairADSCenterDotSize = 38,
	CrosshairADSCenterDotOpacity = 39,
	CrosshairADSInnerLinesLineThickness = 40,
	CrosshairADSInnerLinesLineLength = 41,
	CrosshairADSInnerLinesLineLengthVertical = 42,
	CrosshairADSInnerLinesLineOffset = 43,
	CrosshairADSInnerLinesOpacity = 44,
	CrosshairADSInnerLinesFiringErrorScale = 45,
	CrosshairADSInnerLinesMovementErrorScale = 46,
	CrosshairADSOuterLinesLineThickness = 47,
	CrosshairADSOuterLinesLineLength = 48,
	CrosshairADSOuterLinesLineLengthVertical = 49,
	CrosshairADSOuterLinesLineOffset = 50,
	CrosshairADSOuterLinesOpacity = 51,
	CrosshairADSOuterLinesFiringErrorScale = 52,
	CrosshairADSOuterLinesMovementErrorScale = 53,
	CrosshairSniperCenterDotSize = 54,
	CrosshairSniperCenterDotOpacity = 55,
	TouchAimSensitivityX = 56,
	TouchAimSensitivityY = 57,
	TouchAimSensitivityADSX = 58,
	TouchAimSensitivityADSY = 59,
	TouchAimSensitivitySniperX = 60,
	TouchAimSensitivitySniperY = 61,
	TouchAimAccelerationSensitivity = 62,
	TouchAimAccelerationSensitivityX = 63,
	TouchAimAccelerationSensitivityY = 64,
	TouchAimAccelerationADSSensitivityX = 65,
	TouchAimAccelerationADSSensitivityY = 66,
	TouchAimAccelerationSniperSensitivityX = 67,
	TouchAimAccelerationSniperSensitivityY = 68,
	TouchAimAccelerationTargetRampUp = 69,
	TouchAimOneEuroMinCutoff = 70,
	TouchAimOneEuroCutoffSlope = 71,
	TouchAimOneEuroDeltaCutoff = 72,
	TouchAimTrackballActivationVelocityX = 73,
	TouchAimTrackballActivationVelocityY = 74,
	TouchAimTrackballMinXVelocity = 75,
	TouchAimTrackballMinYVelocity = 76,
	TouchAimTrackballMaxXVelocity = 77,
	TouchAimTrackballMaxYVelocity = 78,
	TouchAimTrackballActivationVelocityWeightX = 79,
	TouchAimTrackballActivationVelocityWeightY = 80,
	TouchAimTrackballMaxDecelerationX = 81,
	TouchAimTrackballMaxDecelerationY = 82,
	TouchGyroAimSensitivityX = 83,
	TouchGyroAimSensitivityY = 84,
	TouchGyroADSSensitivityX = 85,
	TouchGyroADSSensitivityY = 86,
	TouchGyroSniperSensitivityX = 87,
	TouchGyroSniperSensitivityY = 88,
	TouchGyroAimOneEuroMinCutoff = 89,
	TouchGyroAimOneEuroCutoffSlope = 90,
	TouchGyroAimOneEuroDeltaCutoff = 91,
	TouchSensitivityZoomed = 92,
	TouchSensitivitySniper = 93,
	TouchTapMaxTime = 94,
	TouchExperimentalAnchoredButtonOffset = 95,
	TouchExperimentalMaxWalkSpeed = 96,
	TouchAccelMinDeltaX = 97,
	TouchAccelMinDeltaY = 98,
	TouchAccelMaxDeltaX = 99,
	TouchAccelMaxDeltaY = 100,
	TouchDoubleTapTime = 101,
	TouchDoubleTapDistance = 102,
	TouchTrackballLinearDragCoefficient = 103,
	TouchTrackballLinearDragMinimum = 104,
	TouchTabletLayoutWidthThreshold = 105,
	TouchWalkStickInnerDeadzone = 106,
	TouchWalkStickAngularInnerDeadzoneDeg = 107,
	TouchWalkStickAngularOuterDeadzoneDeg = 108,
	GamepadBaseRotationSpeedX = 109,
	GamepadBaseRotationSpeedY = 110,
	GamepadLookStickSensitivityScopedMultiplier = 111,
	GamepadBaseSpeedMultiplierX = 112,
	GamepadBaseSpeedMultiplierY = 113,
	GamepadMaxSpeedMultiplierX = 114,
	GamepadMaxSpeedMultiplierY = 115,
	GamepadMaxAccelerationThreshold = 116,
	GamepadAimAccelDelaySeconds = 117,
	GamepadAimAccelRampUpSeconds = 118,
	GamepadLookStickInnerDeadzone = 119,
	GamepadLookStickOuterDeadzone = 120,
	GamepadLookStickAngularInnerDeadzoneDeg = 121,
	GamepadLookStickAngularOuterDeadzoneDeg = 122,
	GamepadWalkStickInnerDeadzone = 123,
	GamepadWalkStickAngularInnerDeadzoneDeg = 124,
	GamepadWalkStickAngularOuterDeadzoneDeg = 125,
	GamepadTriggerDeadzone = 126,
	GamepadAnalogWalkThreshold = 127,
	GamepadBaseSpeedMultiplierXZoomed = 128,
	GamepadBaseSpeedMultiplierYZoomed = 129,
	GamepadMaxSpeedMultiplierXZoomed = 130,
	GamepadMaxSpeedMultiplierYZoomed = 131,
	GamepadMaxAccelerationThresholdZoomed = 132,
	GamepadAimAccelDelaySecondsZoomed = 133,
	GamepadAimAccelRampUpSecondsZoomed = 134,
	AimToolingAimAccelerationDelayDelayAmount = 135,
	AimToolingAimAccelerationDelayRampUpAmount = 136,
	ObserverRunSpeedModifier = 137,
	ObserverWalkSpeedModifier = 138,
	GyroShootingThresholdDown = 139,
	GyroShootingThresholdUp = 140,
	GyroShootingAccumulationThreshold = 141,
	GyroMovementAccumulationThresholdHorizontal = 142,
	GyroMovementAccumulationThresholdVertical = 143,
	GyroMovementWalkThresholdHorizontal = 144,
	GyroMovementWalkThresholdVertical = 145,
	GyroMovementRunThresholdHorizontal = 146,
	GyroMovementRunThresholdVertical = 147,
	EAresFloatSettingName_MAX = 148
};

// Enum ShooterGame.EAresIntSettingName
enum class EAresIntSettingName : uint8 {
	AntiAliasing = 0,
	GraphicsQuality = 1,
	TextureQuality = 2,
	UIQuality = 3,
	MaterialQuality = 4,
	DetailQuality = 5,
	AnisotropicFiltering = 6,
	BloomQuality = 7,
	VoiceVolume = 8,
	MicVolume = 9,
	MicSensitivityThreshold = 10,
	SpeakerConfiguration = 11,
	ColorBlindMode = 12,
	MegamapCalloutVisibility = 13,
	NvidiaReflexLowLatencySetting = 14,
	PlayerPerf_FirstSetting = 15,
	PlayerPerfShowFrameTime = 16,
	PlayerPerfShowIdleFrameTime = 17,
	PlayerPerfShowCPUFrameTime = 18,
	PlayerPerfShowGPUFrameTime = 19,
	PlayerPerfShowRHIFrameTime = 20,
	PlayerPerfShowFrameRate = 21,
	PlayerPerfShowServerFrameRate = 22,
	PlayerPerfShowAvailablePhysicalMemory = 23,
	PlayerPerfShowUsedPhysicalMemory = 24,
	PlayerPerfShowNetworkRtt = 25,
	PlayerPerfShowPacketsLostTotal = 26,
	PlayerPerfShowPacketLossPercentage = 27,
	PlayerPerfShowIncomingPacketLossPercentage = 28,
	PlayerPerfShowOutgoingPacketLossPercentage = 29,
	PlayerPerfShowPacketsReceived = 30,
	PlayerPerfShowPacketsSent = 31,
	PlayerPerfShowInputLatencyCpuPlusGpu = 32,
	PlayerPerfShowInputLatencyCpu = 33,
	PlayerPerfShowInputLatencyGpu = 34,
	PlayerPerfShowGpuRenderFrameTime = 35,
	PlayerPerfShowRemoteInterpDelayMs = 36,
	PlayerPerfShowQueuedRemoteMoveCount = 37,
	PlayerPerfShowConsecutiveRemoteForwardPredictions = 38,
	PlayerPerfShowPacketsLostIncoming = 39,
	PlayerPerfShowPacketsLostOutgoing = 40,
	PlayerPerfShowUploadedData = 41,
	PlayerPerfShowDownloadedData = 42,
	PlayerPerfShowTotalTransferredData = 43,
	PlayerPerfShowIncomingPacketSize = 44,
	PlayerPerfShowOutgoingPacketSize = 45,
	PlayerPerfShowMoveCorrectionDistance = 46,
	PlayerPerfShowMoveTimelineShiftMs = 47,
	PlayerPerfShowReceivedEquippableCorrection = 48,
	PlayerPerfShowOutgoingInputQueueLength = 49,
	PlayerPerfShowOutgoingMoveQueueLength = 50,
	PlayerPerfShowClientIncomingMoveProcessingDelay = 51,
	PlayerPerfShowServerIncomingMoveProcessingDelay = 52,
	PlayerPerfShowATB = 53,
	PlayerPerfShowNetworkJitter = 54,
	PlayerPerfShowEndToEndLatency = 55,
	PlayerPerfShowFiringErrors = 56,
	PlayerPerf_LastSetting = 57,
	NetworkSmoothing = 58,
	ShootingRangeSkillTestSetting = 59,
	ShootingRangePlantModuleDifficultySetting = 60,
	ShootingRangeDefuseModuleDifficultySetting = 61,
	GamepadSavedPreset = 62,
	GamepadSavedAimCurve = 63,
	GamepadSavedAimCurveZoomed = 64,
	GamepadSavedAimCurveAngularDeadzone = 65,
	TouchDoubleTapRight = 66,
	TouchHUDPreset = 67,
	TouchDoubleTapLeft = 68,
	TouchAimAccelerationCurveX = 69,
	TouchAimAccelerationCurveY = 70,
	TouchAimADSAccelerationCurveX = 71,
	TouchAimADSAccelerationCurveY = 72,
	TouchAimSniperAccelerationCurveX = 73,
	TouchAimSniperAccelerationCurveY = 74,
	TouchJoystickStyle = 75,
	TouchSniperZoomLevelSetting = 76,
	TouchAimSensitivityPreset = 77,
	TouchGyroSensitivityPreset = 78,
	TouchTrackballSensitivityPreset = 79,
	TouchDoubleTapTopLeft = 80,
	TouchDoubleTapTopMiddle = 81,
	TouchDoubleTapTopRight = 82,
	TouchDoubleTapMiddleLeft = 83,
	TouchDoubleTapMiddle = 84,
	TouchDoubleTapMiddleRight = 85,
	TouchDoubleTapBottomLeft = 86,
	TouchDoubleTapBottomMiddle = 87,
	TouchDoubleTapBottomRight = 88,
	TouchNumVerticalRegions = 89,
	TouchNumHorizontalRegions = 90,
	MaxFramerateInBuyPhase = 91,
	MaxFramerateInGamePhase = 92,
	MaxFramerateInSpectatorView = 93,
	LastSeenRoamingSettingsVersion = 94,
	EAresIntSettingName_MAX = 95
};

// Enum ShooterGame.EAresBoolSettingName
enum class EAresBoolSettingName : uint8 {
	MouseInverted = 0,
	MouseWheelWrapsInventory = 1,
	MouseWheelIncludesLevelSlot = 2,
	ClientMuted = 3,
	RawMouseEnabled = 4,
	RawInputBufferEnabled = 5,
	MinimapRotates = 6,
	MinimapFixedRotation = 7,
	MinimapTranslates = 8,
	EnableMinimapVisionCones = 9,
	EnableInstabilityIndicators = 10,
	ShowBulletTracers = 11,
	ImproveClarity = 12,
	AdaptiveSharpenEnabled = 13,
	DisableDistortion = 14,
	ShadowsEnabled = 15,
	VoiceChatEnabled = 16,
	TeamVoiceChatEnabled = 17,
	CustomPartyVoiceChatEnabled = 18,
	VoiceChat_ChannelToggle_MicEnabled = 19,
	VoiceChat_ChannelToggle_MicTeamEnabled = 20,
	VoiceChat_ChannelToggle_MicPartyEnabled = 21,
	VoiceChat_ChannelToggle_SpeakerEnabled = 22,
	VoiceChat_ChannelToggle_SpeakerTeamEnabled = 23,
	VoiceChat_ChannelToggle_SpeakerPartyEnabled = 24,
	LoopbackTestEnabled = 25,
	PushToTalkEnabled = 26,
	DisableEnhanced3DAudio = 27,
	GameplayVoiceEnabled = 28,
	CharacterVoiceEnabled = 29,
	TacticalCalloutsEnabled = 30,
	AllyAbilityEquipAudioEnabled = 31,
	VocalEmotesEnabled = 32,
	AnnouncerEnabled = 33,
	VignetteEnabled = 34,
	AutoRescopeSniper = 35,
	HoldInputForADS = 36,
	HoldInputForSniperScopes = 37,
	CycleThroughSniperZoomLevels = 38,
	LimitFramerateOnBattery = 39,
	LimitFramerateInMenu = 40,
	LimitFramerateInBackground = 41,
	LimitFramerateAlways = 42,
	DisplayFPS = 43,
	ShowSpecatedPlayerCrosshair = 44,
	FadeCrosshairWithFiringError = 45,
	ShowBlood = 46,
	ShowCorpses = 47,
	ToggleCrouch = 48,
	ToggleWalk = 49,
	DefaultToWalk = 50,
	VoipDucksMusicVolume = 51,
	VoipDucksVOFlavor = 52,
	MuteMusicOnAppWindowDeactivate = 53,
	EnableHRTF = 54,
	ToggleTapHoldSwap = 55,
	EnableForceFeedback = 56,
	ShootingRangeBotArmorEnabled = 57,
	ShootingRangeBotStrafeEnabled = 58,
	ShootingRangeBotInfiniteAmmoEnabled = 59,
	SpectatorCountWidgetVisible = 60,
	ToggleReturnToStrongestWeapon = 61,
	AutoEquipPrioritizeStrongest = 62,
	AutoEquipSkipsMelee = 63,
	ToggleLiveDiagnostics = 64,
	CrosshairHasOutline = 65,
	CrosshairDisplayCenterDot = 66,
	CrosshairUseCustomColor = 67,
	CrosshairFixMinErrorAcrossWeapons = 68,
	CrosshairUseAdvancedOptions = 69,
	CrosshairInnerLinesShowMovementError = 70,
	CrosshairInnerLinesShowShootingError = 71,
	CrosshairInnerLinesShowMinError = 72,
	CrosshairInnerLinesShowLines = 73,
	CrosshairInnerLinesAllowVertScaling = 74,
	CrosshairOuterLinesShowMovementError = 75,
	CrosshairOuterLinesShowShootingError = 76,
	CrosshairOuterLinesShowMinError = 77,
	CrosshairOuterLinesShowLines = 78,
	CrosshairOuterLinesAllowVertScaling = 79,
	CrosshairUseCustomCrosshairOnAllPrimary = 80,
	CrosshairUsePrimaryCrosshairForADS = 81,
	CrosshairADSHasOutline = 82,
	CrosshairADSDisplayCenterDot = 83,
	CrosshairADSUseCustomColor = 84,
	CrosshairADSFixMinErrorAcrossWeapons = 85,
	CrosshairADSInnerLinesShowMovementError = 86,
	CrosshairADSInnerLinesShowShootingError = 87,
	CrosshairADSInnerLinesShowMinError = 88,
	CrosshairADSInnerLinesShowLines = 89,
	CrosshairADSInnerLinesAllowVertScaling = 90,
	CrosshairADSOuterLinesShowMovementError = 91,
	CrosshairADSOuterLinesShowShootingError = 92,
	CrosshairADSOuterLinesShowMinError = 93,
	CrosshairADSOuterLinesShowLines = 94,
	CrosshairADSOuterLinesAllowVertScaling = 95,
	CrosshairSniperDisplayCenterDot = 96,
	CrosshairSniperUseCustomColor = 97,
	AlwaysShowInventoryWidgets = 98,
	LeftHanded = 99,
	TeamColorCrosshair = 100,
	AllyLoadoutInfoAlwaysVisibile = 101,
	TacticalCalloutsInChat = 102,
	TouchAimInvertX = 103,
	TouchAimInvertY = 104,
	TouchAimOneEuroFilteringEnabled = 105,
	TouchAimMultiTouchFilteringEnabled = 106,
	TouchAimContinueFilteringAfterRelease = 107,
	TouchAimTrackballEnabled = 108,
	TouchGyroAimOneEuroFilteringEnabled = 109,
	TouchGyroAimEnabled = 110,
	TouchGyroAimInvertX = 111,
	TouchGyroAimInvertY = 112,
	TouchGyroDroneAimEnabled = 113,
	TouchCustomAbilityUI = 114,
	TouchAbilityRestoreLastEquippable = 115,
	TouchUseSprintToggle = 116,
	TouchUseHalfScreenMovementArea = 117,
	TouchMovementNormalizeJoystick = 118,
	TouchMovementUncrouchOnRun = 119,
	TouchAbilityMapRotation = 120,
	TouchEnableAutoRun = 121,
	TouchAutoRunEquipsKnife = 122,
	TouchCrosshairHighlightEnabled = 123,
	TouchSprintInputFromBottomOnly = 124,
	ToughMagnetismEnabled = 125,
	TouchRunBuffer = 126,
	TouchAimSnappingEnabled = 127,
	TouchSniperCycleZoomOnHold = 128,
	TouchTrackballEnableLinearDrag = 129,
	GamepadInvertLookStickY = 130,
	GamepadInvertLookStickX = 131,
	GamepadToggleCrouch = 132,
	GamepadToggleWalk = 133,
	GamepadHoldInputForADS = 134,
	GamepadHoldInputForScope = 135,
	GamepadEnableAnalogMoveThresholds = 136,
	GamepadToggleDropSpikeHold = 137,
	MultithreadedRenderingEnabled = 138,
	HasEverStartedAMatch = 139,
	HasAcceptedCodeOfConduct = 140,
	HasSeenNewPlayerSettings = 141,
	HasSeenNPEContractTutorial = 142,
	HasSeenUPWTutorial = 143,
	HasSeenSettingsTutorial = 144,
	HasSeenWelcomeScreen = 145,
	HasSeenMenuTutorial = 146,
	HasSeenPhotoSensitivityWarning = 147,
	HasSeenTournamentsScreen = 148,
	CollectionShowOwnedOnly = 149,
	IncognitoHideMatchmadePlayerNames = 150,
	IncognitoRejectFriendRequests = 151,
	IncognitoRejectPartyInvitesByDisplayName = 152,
	LastSeenSeasonalPopup = 153,
	PlayerBehavior_MuteEnemyTextChat = 154,
	PlayerBehavior_MuteObserverTextChat = 155,
	HideUI = 156,
	HideCrosshair = 157,
	Hide1P = 158,
	ObserversSeeBlinds = 159,
	TeamColorAffectsHUD = 160,
	ShowKeybindsOnMinimap = 161,
	ShowKeybindsOnMegamap = 162,
	FullscreenMegamap = 163,
	HandednessByTeam = 164,
	HideSpectatedAgentPortrait = 165,
	ObserverToggleScoreboard = 166,
	TriggerSwapAll = 167,
	HasEverAppliedRoamingSettings = 168,
	GyroTapShoot = 169,
	EAresBoolSettingName_MAX = 170
};

// Enum ShooterGame.EAresStringSettingName
enum class EAresStringSettingName : uint8 {
	VoiceDeviceCaptureHandle = 0,
	VoiceDeviceRenderHandle = 1,
	CrosshairSettings = 2,
	PushToTalkKey = 3,
	TeamPushToTalkKey = 4,
	CrosshairColor = 5,
	CrosshairColorCustom = 6,
	CrosshairOutlineColor = 7,
	CrosshairADSColor = 8,
	CrosshairADSColorCustom = 9,
	CrosshairADSOutlineColor = 10,
	CrosshairSniperCenterDotColor = 11,
	CrosshairSniperCenterDotColorCustom = 12,
	CrosshairProfileName = 13,
	SavedCrosshairProfileData = 14,
	LastSeenSeasonalPopup = 15,
	PreferredGamePods = 16,
	TouchWidgetLayouts = 17,
	TouchCrosshairHighlightColor = 18,
	MutedWords = 19,
	EAresStringSettingName_MAX = 20
};

// Enum ShooterGame.ETextChatRoomType
enum class ETextChatRoomType : uint8 {
	GroupChat = 0,
	FriendChat = 1,
	DirectMessage = 2,
	Invalid = 3,
	ETextChatRoomType_MAX = 4
};

// Enum ShooterGame.EMessageSendErrorType
enum class EMessageSendErrorType : uint8 {
	PlayerNotFound = 0,
	RoomUnavailable = 1,
	Unknown = 2,
	Invalid = 3,
	Count = 4,
	EMessageSendErrorType_MAX = 5
};

// Enum ShooterGame.EChatRoomType
enum class EChatRoomType : uint8 {
	Party = 0,
	Pregame = 1,
	All = 2,
	Team = 3,
	InGameSystem = 4,
	System = 5,
	Whisper = 6,
	Count = 7,
	EChatRoomType_MAX = 8
};

// Enum ShooterGame.EAresAlliance
enum class EAresAlliance : uint8 {
	Alliance_Ally = 0,
	Alliance_Enemy = 1,
	Alliance_Neutral = 2,
	Alliance_Any = 3,
	Alliance_Count = 4,
	Alliance_MAX = 5
};

// Enum ShooterGame.EMessagePartType
enum class EMessagePartType : uint8 {
	Text = 0,
	Notification = 1,
	Emoji = 2,
	AntiAddiction = 3,
	UntrustedText = 4,
	EMessagePartType_MAX = 5
};

// Enum ShooterGame.EMessageContentType
enum class EMessageContentType : uint8 {
	Text = 0,
	MatchDetails = 1,
	EMessageContentType_MAX = 2
};

// Enum ShooterGame.EChatMode
enum class EChatMode : uint8 {
	None = 0,
	Team = 1,
	All = 2,
	Ping = 3,
	Count = 4,
	EChatMode_MAX = 5
};

// Enum ShooterGame.ERosterMemberRole
enum class ERosterMemberRole : uint8 {
	Owner = 0,
	Captain = 1,
	Member = 2,
	Count = 3,
	Invalid = 4,
	ERosterMemberRole_MAX = 5
};

// Enum ShooterGame.ERosterCreateErrorType
enum class ERosterCreateErrorType : uint8 {
	NameTaken = 0,
	InappropriateName = 1,
	Default = 2,
	Count = 3,
	Invalid = 4,
	ERosterCreateErrorType_MAX = 5
};

// Enum ShooterGame.ETournamentStageStatus
enum class ETournamentStageStatus : uint8 {
	CREATED = 0,
	READY_TO_START = 1,
	STARTED = 2,
	FINISHED = 3,
	Count = 4,
	Invalid = 5,
	ETournamentStageStatus_MAX = 6
};

// Enum ShooterGame.EVoiceSessionType
enum class EVoiceSessionType : uint8 {
	Invalid = 0,
	Party = 1,
	Team = 2,
	Count = 3,
	EVoiceSessionType_MAX = 4
};

// Enum ShooterGame.EPregameMatchState
enum class EPregameMatchState : uint8 {
	MapSelectReady = 0,
	MapSelectActive = 1,
	MapSelectFinished = 2,
	CharacterSelectActive = 3,
	CharacterSelectFinished = 4,
	Provisioned = 5,
	Invalid = 6,
	Count = 7,
	EPregameMatchState_MAX = 8
};

// Enum ShooterGame.EPregameLockInState
enum class EPregameLockInState : uint8 {
	NotSelected = 0,
	CanLockIn = 1,
	CannotLockIn = 2,
	LockingIn = 3,
	LockedIn = 4,
	EPregameLockInState_MAX = 5
};

// Enum ShooterGame.EPregameCharacterState
enum class EPregameCharacterState : uint8 {
	Free = 0,
	SelectedByOther = 1,
	SelectedByMe = 2,
	LockedByMe = 3,
	LockedByOther = 4,
	EPregameCharacterState_MAX = 5
};

// Enum ShooterGame.EStepType
enum class EStepType : uint8 {
	MapBan = 0,
	MapPick = 1,
	SidePick = 2,
	EStepType_MAX = 3
};

// Enum ShooterGame.EProgressModelStage
enum class EProgressModelStage : uint8 {
	NotStarted = 0,
	Paused = 1,
	Running = 2,
	Completed = 3,
	Count = 4,
	EProgressModelStage_MAX = 5
};

// Enum ShooterGame.EAnimationConductorNodeResetType
enum class EAnimationConductorNodeResetType : uint8 {
	Normal = 0,
	ForceReset = 1,
	EAnimationConductorNodeResetType_MAX = 2
};

// Enum ShooterGame.EVisualizedSoundTypes
enum class EVisualizedSoundTypes : uint8 {
	None = 0,
	FootSteps = 1,
	JumpLaunch = 2,
	JumpLand = 3,
	BombPlant = 4,
	BombTick = 5,
	BombDefuse = 6,
	Orb = 7,
	BasePistolFire = 8,
	SlimPistolFire = 9,
	AutoPistolFire = 10,
	LugerPistolFire = 11,
	RevolverPistolFire = 12,
	VectorSMGFire = 13,
	MP5SMGFire = 14,
	PumpShotgunFire = 15,
	AutoShotgunFire = 16,
	BurstRifleFire = 17,
	DMRRifleFire = 18,
	CarbineRifleFire = 19,
	AKRifleFire = 20,
	LeverSniperFire = 21,
	BoltSniperFire = 22,
	LMGFire = 23,
	HMGFire = 24,
	EVisualizedSoundTypes_MAX = 25
};

// Enum ShooterGame.EListItemDisplayEntryActivationType
enum class EListItemDisplayEntryActivationType : uint8 {
	Highlighted = 0,
	Committed = 1,
	EListItemDisplayEntryActivationType_MAX = 2
};

// Enum ShooterGame.ESimpleSectionHeadersListModelBase_LocationType
enum class ESimpleSectionHeadersListModelBase_LocationType : uint8 {
	Invalid = 0,
	Inner = 1,
	Header = 2,
	ESimpleSectionHeadersListModelBase_MAX = 3
};

// Enum ShooterGame.EJuiceTrayMessage
enum class EJuiceTrayMessage : uint8 {
	NONE = 0,
	ENERGY_AUTOMATIC = 1,
	MAX_KICKS_OTHERS = 2,
	METER_ALREADY_FULL = 3,
	EXTRANEOUS_ENERGY_IN_METER = 4,
	COUNT = 5,
	EJuiceTrayMessage_MAX = 6
};

// Enum ShooterGame.EJuiceBoxAnimation
enum class EJuiceBoxAnimation : uint8 {
	NONE = 0,
	CLOSE = 1,
	CLOSED_IDLE = 2,
	OPEN_START = 3,
	OPEN = 4,
	OPENED_IDLE = 5,
	COUNT = 6,
	EJuiceBoxAnimation_MAX = 7
};

// Enum ShooterGame.ETransitionScreenState
enum class ETransitionScreenState : uint8 {
	Loading = 0,
	NonInteractive = 1,
	Interactive = 2,
	Invalid = 3,
	Count = 4,
	ETransitionScreenState_MAX = 5
};

// Enum ShooterGame.EUserActionState
enum class EUserActionState : uint8 {
	Hidden = 0,
	Disabled = 1,
	Enabled = 2,
	EUserActionState_MAX = 3
};

// Enum ShooterGame.EUserActionTriggerResponse
enum class EUserActionTriggerResponse : uint8 {
	Handled = 0,
	Rejected = 1,
	Ignored = 2,
	EUserActionTriggerResponse_MAX = 3
};

// Enum ShooterGame.EVoteState
enum class EVoteState : uint8 {
	Inactive = 0,
	ActivateOnceReplicated = 1,
	Active = 2,
	Concluded = 3,
	Expired = 4,
	EVoteState_MAX = 5
};

// Enum ShooterGame.EUpgradeCostType
enum class EUpgradeCostType : uint8 {
	Money = 0,
	Energy = 1,
	UltimateHighWater = 2,
	Count = 3,
	EUpgradeCostType_MAX = 4
};

// Enum ShooterGame.EAccountXPXPSourceID
enum class EAccountXPXPSourceID : uint8 {
	MatchWin = 0,
	TimePlayed = 1,
	FirstWinOfTheDay = 2,
	EAccountXPXPSourceID_MAX = 3
};

// Enum ShooterGame.EActionBindSetUserLayer
enum class EActionBindSetUserLayer : uint8 {
	Default = 0,
	CustomBase = 1,
	Character = 2,
	Top = 2,
	Count = 3,
	Invalid = 254,
	EActionBindSetUserLayer_MAX = 255
};

// Enum ShooterGame.EActionBindResetType
enum class EActionBindResetType : uint8 {
	All = 0,
	PendingOnly = 1,
	Count = 2,
	EActionBindResetType_MAX = 3
};

// Enum ShooterGame.EActionBindPendingMode
enum class EActionBindPendingMode : uint8 {
	Applied = 0,
	Pending = 1,
	EActionBindPendingMode_MAX = 2
};

// Enum ShooterGame.EActionBindSetAxisDirection
enum class EActionBindSetAxisDirection : uint8 {
	NoDirection = 0,
	Positive = 1,
	Negative = 2,
	Count = 3,
	EActionBindSetAxisDirection_MAX = 4
};

// Enum ShooterGame.EActionBindRestrictions
enum class EActionBindRestrictions : uint8 {
	Free = 0,
	Locked = 1,
	Restricted = 2,
	Count = 3,
	EActionBindRestrictions_MAX = 4
};

// Enum ShooterGame.EActionSettingsContext
enum class EActionSettingsContext : uint8 {
	None = 0,
	InGame = 1,
	Menus = 2,
	Shop = 3,
	Minimap = 4,
	Spectator = 5,
	Observer = 6,
	CommMenu = 7,
	AlternateMovement = 8,
	AlternateInGame = 9,
	Count = 10,
	EActionSettingsContext_MAX = 11
};

// Enum ShooterGame.EAnimationConductorNodePropagationMode
enum class EAnimationConductorNodePropagationMode : uint8 {
	SingleNode = 0,
	Recursive = 1,
	EAnimationConductorNodePropagationMode_MAX = 2
};

// Enum ShooterGame.EAresShooterAnimMovementState
enum class EAresShooterAnimMovementState : uint8 {
	Idle = 0,
	Walk = 1,
	Run = 2,
	CrouchIdle = 3,
	CrouchWalk = 4,
	Jump = 5,
	Dead = 6,
	EAresShooterAnimMovementState_MAX = 7
};

// Enum ShooterGame.EAresShooterAnimMovementDirection
enum class EAresShooterAnimMovementDirection : uint8 {
	None = 0,
	North = 1,
	East = 2,
	South = 3,
	West = 4,
	NorthEast = 5,
	SouthEast = 6,
	SouthWest = 7,
	NorthWest = 8,
	EAresShooterAnimMovementDirection_MAX = 9
};

// Enum ShooterGame.EAnimMovementStateMachineState
enum class EAnimMovementStateMachineState : uint8 {
	Idle = 0,
	Walk = 1,
	Run = 2,
	Crouch = 3,
	CrouchIdle = 4,
	CrouchWalk = 5,
	StandUp = 6,
	Jump = 7,
	JumpLand = 8,
	MovementConduit = 9,
	Count = 10,
	EAnimMovementStateMachineState_MAX = 11
};

// Enum ShooterGame.EPolicyType
enum class EPolicyType : uint8 {
	None = 0,
	Shutdown = 1,
	PlayTime = 2,
	WarningMessage = 3,
	MatchmakingDisable = 4,
	HopeWarning = 5,
	HopeShutdown = 6,
	HopeHeartbeat = 7,
	Invalid = 8,
	EPolicyType_MAX = 9
};

// Enum ShooterGame.EDisplayType
enum class EDisplayType : uint8 {
	None = 0,
	PassiveDisplay = 1,
	ModalDialog = 2,
	Invalid = 3,
	EDisplayType_MAX = 4
};

// Enum ShooterGame.EApplyBuffTarget
enum class EApplyBuffTarget : uint8 {
	Self = 0,
	OtherActor = 1,
	EApplyBuffTarget_MAX = 2
};

// Enum ShooterGame.EActionButtonActivationMode
enum class EActionButtonActivationMode : uint8 {
	ActivateOnEngage = 0,
	ActivateOnDisengage = 1,
	ActiveWhileEngaged = 2,
	CustomDefinedActivation = 3,
	DoNotActivate = 4,
	EActionButtonActivationMode_MAX = 5
};

// Enum ShooterGame.EActionButtonStateTransitionMethod
enum class EActionButtonStateTransitionMethod : uint8 {
	TransitionOnPressAndRelease = 0,
	TransitionOnPressOnly = 1,
	TransitionOnReleaseOnly = 2,
	DoNotTransition = 3,
	EActionButtonStateTransitionMethod_MAX = 4
};

// Enum ShooterGame.ENavAreaFlag
enum class ENavAreaFlag : uint8 {
	Default = 0,
	Jump = 1,
	Crouch = 2,
	Teleport = 3,
	Drop = 4,
	Fly = 5,
	ENavAreaFlag_MAX = 6
};

// Enum ShooterGame.EAnalogPlayerState
enum class EAnalogPlayerState : uint8 {
	Default = 0,
	Zooming = 1,
	Count = 2,
	EAnalogPlayerState_MAX = 3
};

// Enum ShooterGame.EAresImpactEffectAllies
enum class EAresImpactEffectAllies : uint8 {
	AllyHit = 0,
	EnemyHit = 1,
	NUM_ALLIES = 2,
	EAresImpactEffectAllies_MAX = 3
};

// Enum ShooterGame.EAresImpactEffectWithArmor
enum class EAresImpactEffectWithArmor : uint8 {
	WithoutArmor = 0,
	WithArmor = 1,
	WithShield = 2,
	NUM_WITH_ARMOR = 3,
	EAresImpactEffectWithArmor_MAX = 4
};

// Enum ShooterGame.ECalloutSuperRegion
enum class ECalloutSuperRegion : uint8 {
	Unspecified = 0,
	AttackerSide = 1,
	DefenderSide = 2,
	Mid = 3,
	A = 4,
	B = 5,
	C = 6,
	ECalloutSuperRegion_Count = 7,
	ECalloutSuperRegion_MAX = 8
};

// Enum ShooterGame.EAresCeremonyTriggerType
enum class EAresCeremonyTriggerType : uint8 {
	Kill = 0,
	Respawn = 1,
	Invalid = 2,
	EAresCeremonyTriggerType_MAX = 3
};

// Enum ShooterGame.ECharacterAbilitySlot
enum class ECharacterAbilitySlot : uint8 {
	Passive = 0,
	Ability1 = 1,
	Ability2 = 2,
	Grenade = 3,
	Ultimate = 4,
	Backpack = 5,
	Invalid = 6,
	Count = 6,
	ECharacterAbilitySlot_MAX = 7
};

// Enum ShooterGame.EOnlineMode
enum class EOnlineMode : uint8 {
	Offline = 0,
	LAN = 1,
	Online = 2,
	EOnlineMode_MAX = 3
};

// Enum ShooterGame.AresDamageEventClassIDs
enum class AresDamageEventClassIDs : uint8 {
	AresDamageEventClassID_Base = 128,
	AresDamageEventClassID_MAX = 129
};

// Enum ShooterGame.EAresDoorTransition
enum class EAresDoorTransition : uint8 {
	MoveTo = 0,
	PopTo = 1,
	EAresDoorTransition_MAX = 2
};

// Enum ShooterGame.EAresInitialDoorState
enum class EAresInitialDoorState : uint8 {
	Open = 0,
	Closed = 1,
	EAresInitialDoorState_MAX = 2
};

// Enum ShooterGame.EAresDoorState
enum class EAresDoorState : uint8 {
	Open = 0,
	Opening = 1,
	Closing = 2,
	Closed = 3,
	Invalid = 4,
	EAresDoorState_MAX = 5
};

// Enum ShooterGame.EEjectableType
enum class EEjectableType : uint8 {
	Unknown = 0,
	ShellCasing = 1,
	Magazine = 2,
	EEjectableType_MAX = 3
};

// Enum ShooterGame.EEquippableTickState
enum class EEquippableTickState : uint8 {
	TickFromActorTickGraph = 0,
	TickFromInventory = 1,
	Disabled = 2,
	Count = 3,
	EEquippableTickState_MAX = 4
};

// Enum ShooterGame.EAresDropOnDeath
enum class EAresDropOnDeath : uint8 {
	Never = 0,
	IfNoPrimary = 1,
	Always = 2,
	Count = 3,
	Invalid = 254,
	EAresDropOnDeath_MAX = 255
};

// Enum ShooterGame.EAresEquippableCanUseResult
enum class EAresEquippableCanUseResult : uint8 {
	CanUse = 0,
	CantUse = 1,
	NotEnoughCharges = 2,
	Count = 3,
	EAresEquippableCanUseResult_MAX = 4
};

// Enum ShooterGame.EZoomOutShowOption
enum class EZoomOutShowOption : uint8 {
	OnUnZoomStarted = 0,
	WhenFullyZoomedOut = 1,
	Count = 2,
	EZoomOutShowOption_MAX = 3
};

// Enum ShooterGame.EZoomInHideOption
enum class EZoomInHideOption : uint8 {
	LeaveVisible = 0,
	OnZoomInStarted = 1,
	WhenFullyZoomedIn = 2,
	Count = 3,
	EZoomInHideOption_MAX = 4
};

// Enum ShooterGame.EFirstPersonHideOption
enum class EFirstPersonHideOption : uint8 {
	None = 0,
	ForceVisible = 1,
	ForceInvisible = 2,
	Count = 3,
	EFirstPersonHideOption_MAX = 4
};

// Enum ShooterGame.EEquippableSuppressionBehavior
enum class EEquippableSuppressionBehavior : uint8 {
	Suppressible = 0,
	NonSuppressible = 1,
	Count = 2,
	EEquippableSuppressionBehavior_MAX = 3
};

// Enum ShooterGame.EEquippableEquipBehavior
enum class EEquippableEquipBehavior : uint8 {
	RequireResources = 0,
	AlwaysEquip = 1,
	NeverEquip = 2,
	Count = 3,
	EEquippableEquipBehavior_MAX = 4
};

// Enum ShooterGame.EAutoEquipPriority
enum class EAutoEquipPriority : uint8 {
	NeverAutoEquip = 0,
	Melee = 1,
	Secondary = 2,
	Primary = 3,
	EAutoEquipPriority_MAX = 4
};

// Enum ShooterGame.EAresActivationInputType
enum class EAresActivationInputType : uint8 {
	StandardInput = 0,
	AlternateInput = 1,
	AlternateInput2 = 2,
	AlternateInput3 = 3,
	AlternateInput4 = 4,
	ActivationInputType_Count = 5,
	EAresActivationInputType_MAX = 6
};

// Enum ShooterGame.EAresEquippableSlotViewType
enum class EAresEquippableSlotViewType : uint8 {
	Show = 0,
	HideIfEmpty = 1,
	Hide = 2,
	EAresEquippableSlotViewType_MAX = 3
};

// Enum ShooterGame.EAresGameEventLogSampleState
enum class EAresGameEventLogSampleState : uint8 {
	SamplingDisabled = 0,
	SamplingEnabled = 1,
	EAresGameEventLogSampleState_MAX = 2
};

// Enum ShooterGame.ETeleporterEventType
enum class ETeleporterEventType : uint8 {
	Player = 0,
	Item = 1,
	Count = 2,
	ETeleporterEventType_MAX = 3
};

// Enum ShooterGame.EEconomyTypes
enum class EEconomyTypes : uint8 {
	Standard = 0,
	SwiftPips = 1,
	Other = 2,
	EEconomyTypes_MAX = 3
};

// Enum ShooterGame.EBuffEffectContext
enum class EBuffEffectContext : uint8 {
	Instigator = 0,
	Causer = 1,
	BuffEffectContext_Count = 2,
	EBuffEffectContext_MAX = 3
};

// Enum ShooterGame.EAresHitConfirmLocality
enum class EAresHitConfirmLocality : uint8 {
	HitConfirm_Shooter = 0,
	HitConfirm_Shootee = 1,
	HitConfirm_Observer = 2,
	HitConfirm_Count = 3,
	HitConfirm_MAX = 4
};

// Enum ShooterGame.EDirectionFilter
enum class EDirectionFilter : uint8 {
	FrontBack = 0,
	FourWay = 1,
	EDirectionFilter_MAX = 255
};

// Enum ShooterGame.EAresHudTextExtentsMode
enum class EAresHudTextExtentsMode : uint8 {
	UseMaxHeight = 0,
	UseBaseline = 1,
	Count = 2,
	EAresHudTextExtentsMode_MAX = 3
};

// Enum ShooterGame.EAresHudAnchorPoint
enum class EAresHudAnchorPoint : uint8 {
	TopLeft = 0,
	Top = 1,
	TopRight = 2,
	CenterLeft = 3,
	Center = 4,
	CenterRight = 5,
	BottomLeft = 6,
	Bottom = 7,
	BottomRight = 8,
	EAresHudAnchorPoint_MAX = 9
};

// Enum ShooterGame.ELocalPlayerAffinity
enum class ELocalPlayerAffinity : uint8 {
	Self = 0,
	Ally = 1,
	Enemy = 2,
	Neutral = 3,
	Count = 4,
	ELocalPlayerAffinity_MAX = 5
};

// Enum ShooterGame.EAresDrawOrigin
enum class EAresDrawOrigin : uint8 {
	UpperLeft = 0,
	Center = 1,
	Top = 2,
	UpperRight = 3,
	CenterLeft = 4,
	CenterRight = 5,
	BottomLeft = 6,
	Bottom = 7,
	BottomRight = 8,
	Count = 9,
	EAresDrawOrigin_MAX = 10
};

// Enum ShooterGame.EAresHudElementBlendLogic
enum class EAresHudElementBlendLogic : uint8 {
	Automatic = 0,
	Opaque = 1,
	Count = 2,
	EAresHudElementBlendLogic_MAX = 3
};

// Enum ShooterGame.EAresIconButtonOverrides
enum class EAresIconButtonOverrides : uint8 {
	IconTexture = 0,
	IconColor = 1,
	IconScale = 2,
	ButtonColor = 3,
	ButtonSize = 4,
	ButtonText = 5,
	MAX = 6
};

// Enum ShooterGame.EAresIconButtonState
enum class EAresIconButtonState : uint8 {
	Disengaged = 0,
	Engaged = 1,
	EAresIconButtonState_MAX = 2
};

// Enum ShooterGame.EAresIconButtonSize
enum class EAresIconButtonSize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	Custom = 3,
	EAresIconButtonSize_MAX = 4
};

// Enum ShooterGame.EImpactEffectAudioCreationState
enum class EImpactEffectAudioCreationState : uint8 {
	ShouldNotCreate = 0,
	ShouldCreate = 1,
	Creating = 2,
	Done = 3,
	EImpactEffectAudioCreationState_MAX = 4
};

// Enum ShooterGame.EAresImpactOrder
enum class EAresImpactOrder : uint8 {
	FirstImpact = 0,
	FirstTerminating = 1,
	WallEntryImpact = 2,
	WallEntryTerminatingImpact = 3,
	WallExitImpact = 4,
	ImpactOrder_Count = 5,
	EAresImpactOrder_MAX = 6
};

// Enum ShooterGame.EAresInputEventDebugStatus
enum class EAresInputEventDebugStatus : uint8 {
	Uninitialized = 0,
	ClientDropped = 1,
	ClientSent = 2,
	ClientDisagreement = 3,
	ServerReceived = 4,
	ServerPending = 5,
	ServerProcessed = 6,
	ServerDisagreement = 7,
	Count = 8,
	EAresInputEventDebugStatus_MAX = 9
};

// Enum ShooterGame.EAresMoveInput
enum class EAresMoveInput : uint8 {
	AlternateMovement = 0,
	Crouch = 1,
	Count = 2,
	Invalid = 254,
	EAresMoveInput_MAX = 255
};

// Enum ShooterGame.EInputEventType
enum class EInputEventType : uint8 {
	EquippableInput = 0,
	ActivationInput = 1,
	UnequipCurrentEquippable = 2,
	MovementInput = 3,
	EquippableChange = 4,
	AimVector = 5,
	CorrectionIndex = 6,
	FrameBoundary = 7,
	EquippableDrop = 8,
	CorrectionBaseline = 9,
	UseInteractableObject = 10,
	UseAlternateInteractableObject = 11,
	Count = 12,
	Invalid = 254,
	EInputEventType_MAX = 255
};

// Enum ShooterGame.EStorageClashBehavior
enum class EStorageClashBehavior : uint8 {
	None = 0,
	DestroyStored = 1,
	DestroyEquipped = 2,
	Count = 3,
	EStorageClashBehavior_MAX = 4
};

// Enum ShooterGame.EItemWrap
enum class EItemWrap : uint8 {
	Wrap = 0,
	DoNotWrap = 1,
	EItemWrap_MAX = 2
};

// Enum ShooterGame.EServerCorrectionState
enum class EServerCorrectionState : uint8 {
	Agreement = 0,
	MonitorDisagreement = 1,
	PendingEquippableReplication = 2,
	CorrectionIssued = 3,
	Count = 4,
	EServerCorrectionState_MAX = 5
};

// Enum ShooterGame.EInventoryInputStreamResponse
enum class EInventoryInputStreamResponse : uint8 {
	Process = 0,
	Skip = 1,
	EInventoryInputStreamResponse_MAX = 2
};

// Enum ShooterGame.EEquippableInInventory
enum class EEquippableInInventory : uint8 {
	No = 0,
	Yes = 1,
	EEquippableInInventory_MAX = 2
};

// Enum ShooterGame.EAresItemSlot
enum class EAresItemSlot : uint8 {
	Primary = 0,
	Secondary = 1,
	Melee = 2,
	GrenadeAbility = 3,
	Ability1 = 4,
	Ability2 = 5,
	Passive = 6,
	Level = 7,
	Invisible = 8,
	Ultimate = 9,
	Unarmed = 10,
	Armor = 11,
	Backpack = 12,
	Totem = 13,
	PrimaryStorage = 14,
	SecondaryStorage = 15,
	Count = 16,
	Any = 253,
	Invalid = 254,
	EAresItemSlot_MAX = 255
};

// Enum ShooterGame.EAresDateTimeStyle
enum class EAresDateTimeStyle : uint8 {
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	EAresDateTimeStyle_MAX = 5
};

// Enum ShooterGame.EAresMinimapRotationSource
enum class EAresMinimapRotationSource : uint8 {
	AMRSRC_ComponentAim = 0,
	AMRSRC_ActorAim = 1,
	AMRSRC_Rotation = 2,
	AMRSRC_Upright = 3,
	AMRSRC_Custom = 4,
	AMRSRC_None = 5,
	AMRSRC_MAX = 6
};

// Enum ShooterGame.EAresMinimapPositionSource
enum class EAresMinimapPositionSource : uint8 {
	AMPSRC_ComponentPosition = 0,
	AMPSRC_ActorPosition = 1,
	AMPSRC_SpecifiedLocation = 2,
	AMPSRC_Center = 3,
	AMPSRC_Cursor = 4,
	AMPSRC_Custom = 5,
	AMPSRC_None = 6,
	AMPSRC_MAX = 7
};

// Enum ShooterGame.EAresMapIdentifier
enum class EAresMapIdentifier : uint8 {
	Minimap = 0,
	Megamap = 1,
	AbilityMapTargeting = 2,
	Count = 3,
	EAresMapIdentifier_MAX = 4
};

// Enum ShooterGame.EAresMissionTag
enum class EAresMissionTag : uint8 {
	Combat = 0,
	Econ = 1,
	Invalid = 2,
	Count = 3,
	EAresMissionTag_MAX = 4
};

// Enum ShooterGame.EAresMissionType
enum class EAresMissionType : uint8 {
	None = 0,
	Daily = 1,
	Weekly = 2,
	NPE = 3,
	Tutorial = 4,
	Accord = 5,
	Invalid = 6,
	Count = 7,
	EAresMissionType_MAX = 8
};

// Enum ShooterGame.EAresNetworkErrorType
enum class EAresNetworkErrorType : uint8 {
	MovementQueueOverflow = 0,
	InputQueueOverflow = 1,
	Count = 2,
	EAresNetworkErrorType_MAX = 3
};

// Enum ShooterGame.EAresPersistBehavior
enum class EAresPersistBehavior : uint8 {
	Destroy = 0,
	Ignore = 1,
	EAresPersistBehavior_MAX = 2
};

// Enum ShooterGame.EAresPlatformWidgetFamily
enum class EAresPlatformWidgetFamily : uint8 {
	INVALID = 0,
	LevelTransitionScreens = 1,
	EndOfGame = 2,
	MainMenuGlobalElements = 3,
	NPEHUDElements = 4,
	COUNT = 5,
	EAresPlatformWidgetFamily_MAX = 6
};

// Enum ShooterGame.EAresPlatformFilter
enum class EAresPlatformFilter : uint8 {
	Exact = 0,
	PreferExact = 1,
	Count = 2,
	EAresPlatformFilter_MAX = 3
};

// Enum ShooterGame.EAresNetworkConnectionQuality
enum class EAresNetworkConnectionQuality : uint8 {
	Unknown = 0,
	Poor = 1,
	Good = 2,
	Excellent = 3,
	EAresNetworkConnectionQuality_MAX = 4
};

// Enum ShooterGame.EAresNetworkConnectionType
enum class EAresNetworkConnectionType : uint8 {
	Unknown = 0,
	WiFi = 1,
	Cell = 2,
	None = 3,
	EAresNetworkConnectionType_MAX = 4
};

// Enum ShooterGame.EAresDeviceQuality
enum class EAresDeviceQuality : uint8 {
	Unknown = 0,
	Low = 1,
	Med = 2,
	High = 3,
	Ultra = 4,
	PC = 5,
	Count = 6,
	EAresDeviceQuality_MAX = 7
};

// Enum ShooterGame.EAresPlatformType
enum class EAresPlatformType : uint8 {
	None = 0,
	Desktop = 1,
	Mobile = 2,
	Console = 4,
	All = 7,
	EAresPlatformType_MAX = 8
};

// Enum ShooterGame.EAresAutomationMovement
enum class EAresAutomationMovement : uint8 {
	Forward = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	Jump = 4,
	Crouch = 5,
	Walk = 6,
	Count = 7,
	EAresAutomationMovement_MAX = 8
};

// Enum ShooterGame.EAresPurchasableType
enum class EAresPurchasableType : uint8 {
	Equippable = 0,
	Ammo = 1,
	Upgrade = 2,
	Count = 3,
	EAresPurchasableType_MAX = 4
};

// Enum ShooterGame.EAresCostType
enum class EAresCostType : uint8 {
	Cost_Money = 0,
	Cost_Energy = 1,
	Cost_Count = 2,
	Cost_MAX = 3
};

// Enum ShooterGame.EAresPurchasableReplaceType
enum class EAresPurchasableReplaceType : uint8 {
	Sell = 0,
	Drop = 1,
	Destroy = 2,
	CannotReplace = 3,
	Count = 4,
	EAresPurchasableReplaceType_MAX = 5
};

// Enum ShooterGame.RadialMenuSlotDisplayType
enum class RadialMenuSlotDisplayType : uint8 {
	None = 0,
	Icon = 1,
	Text = 2,
	RadialMenuSlotDisplayType_MAX = 3
};

// Enum ShooterGame.EAresPlatformRequirements
enum class EAresPlatformRequirements : uint8 {
	None = 0,
	Mouse = 1,
	Keyboard = 2,
	Touch = 4,
	Controller = 8,
	Gyro = 16,
	EAresPlatformRequirements_MAX = 17
};

// Enum ShooterGame.EAresAntiAliasing
enum class EAresAntiAliasing : uint8 {
	None = 0,
	MSAA2x = 1,
	MSAA4x = 2,
	MSAA8x = 3,
	FXAA = 4,
	Count = 5,
	EAresAntiAliasing_MAX = 6
};

// Enum ShooterGame.EAresVoidSettingName
enum class EAresVoidSettingName : uint8 {
	KeyboardKeyBind = 0,
	TextChatFiltered = 1,
	Incognito = 2,
	CrosshairColor = 3,
	VideoDisplayMode = 4,
	VideoResolution = 5,
	MonitorSelection = 6,
	Letterbox = 7,
	Vsync = 8,
	AntiAliasing = 9,
	EAresVoidSettingName_MAX = 10
};

// Enum ShooterGame.ESettingStorageType
enum class ESettingStorageType : uint8 {
	Local = 0,
	Roaming = 1,
	External = 2,
	ESettingStorageType_MAX = 3
};

// Enum ShooterGame.EAddToStringSettingListResult
enum class EAddToStringSettingListResult : uint8 {
	Success = 0,
	NoMatchingFunction = 1,
	StringExceedsMaxCharLimit = 2,
	ListExceedsMaxSizeLimit = 3,
	StringAlreadyExists = 4,
	InvalidString = 5,
	EAddToStringSettingListResult_MAX = 6
};

// Enum ShooterGame.EAresAutomationEventType
enum class EAresAutomationEventType : uint8 {
	GameFlowStateChanged = 0,
	JoinedMatch = 1,
	LeftMatch = 2,
	Count = 3,
	EAresAutomationEventType_MAX = 4
};

// Enum ShooterGame.EAresTestAutomationStatus
enum class EAresTestAutomationStatus : uint8 {
	Uninitialized = 0,
	Loaded = 1,
	Running = 2,
	Failed = 3,
	Passed = 4,
	Aborted = 5,
	Count = 6,
	EAresTestAutomationStatus_MAX = 7
};

// Enum ShooterGame.EAresTouchBoundsShape
enum class EAresTouchBoundsShape : uint8 {
	Rectangle = 0,
	Circle = 1,
	Triangle = 2,
	EAresTouchBoundsShape_MAX = 3
};

// Enum ShooterGame.FAresTouchWidgetInputChannel
enum class FAresTouchWidgetInputChannel : uint8 {
	None = 0,
	Edit = 1,
	Movement = 2,
	Aiming = 4,
	Wheel = 8,
	TestMode = 16,
	FAresTouchWidgetInputChannel_MAX = 17
};

// Enum ShooterGame.EAresTouchDoubleTapMode
enum class EAresTouchDoubleTapMode : uint8 {
	None = 0,
	ADS = 1,
	Scope = 2,
	ScopeAndADS = 3,
	Ping = 4,
	Crouch = 5,
	Jump = 6,
	SprintToggle = 7,
	WalkToggle = 8,
	WeaponSwap = 9,
	Cancel = 10,
	Use = 11,
	PrimaryFire = 12,
	Reload = 13,
	GrenadeAbility = 14,
	AbilityOne = 15,
	AbilityTwo = 16,
	UltimateAbility = 17,
	EAresTouchDoubleTapMode_MAX = 18
};

// Enum ShooterGame.EAresTouchWidgetMode
enum class EAresTouchWidgetMode : uint8 {
	Interaction = 0,
	Edit = 1,
	Hidden = 2,
	Visible = 3,
	EAresTouchWidgetMode_MAX = 4
};

// Enum ShooterGame.EAresTouchTrackingMode
enum class EAresTouchTrackingMode : uint8 {
	Local = 0,
	Global = 1,
	LocalExclusive = 2,
	EAresTouchTrackingMode_MAX = 3
};

// Enum ShooterGame.EWidgetEnabledState
enum class EWidgetEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	EWidgetEnabledState_MAX = 2
};

// Enum ShooterGame.FAresTouchWidgetSwipeOptions
enum class FAresTouchWidgetSwipeOptions : uint8 {
	AllowSwipesOnTouchRelease = 1,
	AllowSwipesOnTouchMove = 2,
	AllowMultipleSwipesInSinglePress = 4,
	FAresTouchWidgetSwipeOptions_MAX = 5
};

// Enum ShooterGame.EWidgetCallToActionState
enum class EWidgetCallToActionState : uint8 {
	Active = 0,
	Inactive = 1,
	Pulse = 2,
	EWidgetCallToActionState_MAX = 3
};

// Enum ShooterGame.ETrailDrawRule
enum class ETrailDrawRule : uint8 {
	NeverDraw = 0,
	DrawForFriendlies = 1,
	DrawForEnemies = 2,
	AlwaysDraw = 3,
	ETrailDrawRule_MAX = 4
};

// Enum ShooterGame.EUIFocus
enum class EUIFocus : uint8 {
	GiveToGame = 0,
	AllowUI = 1,
	EUIFocus_MAX = 2
};

// Enum ShooterGame.EUIMouseMode
enum class EUIMouseMode : uint8 {
	Game = 0,
	InWorldUI = 1,
	UI = 2,
	EUIMouseMode_MAX = 3
};

// Enum ShooterGame.EAresScreenVibility
enum class EAresScreenVibility : uint8 {
	Hidden = 0,
	Visible = 1,
	EAresScreenVibility_MAX = 2
};

// Enum ShooterGame.EAresWidgetPlayerVisibility
enum class EAresWidgetPlayerVisibility : uint8 {
	All = 0,
	AlliesAndObserver = 1,
	AlliesOnly = 2,
	LocalPlayerOnly = 3,
	Count = 4,
	EAresWidgetPlayerVisibility_MAX = 5
};

// Enum ShooterGame.EBasicAssistType
enum class EBasicAssistType : uint8 {
	Buff = 0,
	Debuff = 1,
	EBasicAssistType_MAX = 2
};

// Enum ShooterGame.EAttachmentVisibility
enum class EAttachmentVisibility : uint8 {
	Hidden = 0,
	Shown = 1,
	Count = 2,
	EAttachmentVisibility_MAX = 3
};

// Enum ShooterGame.EAttachmentPerspective
enum class EAttachmentPerspective : uint8 {
	First = 0,
	Third = 1,
	Count = 2,
	EAttachmentPerspective_MAX = 3
};

// Enum ShooterGame.EAudioOcclusionType
enum class EAudioOcclusionType : uint8 {
	Fixed = 0,
	DistanceBased = 1,
	Count = 2,
	EAudioOcclusionType_MAX = 3
};

// Enum ShooterGame.EAudioOcclusionOperation
enum class EAudioOcclusionOperation : uint8 {
	SetMinimum = 0,
	Additive = 1,
	Count = 2,
	EAudioOcclusionOperation_MAX = 3
};

// Enum ShooterGame.ECrosshairShapeType
enum class ECrosshairShapeType : uint8 {
	LineShape = 0,
	CircleShape = 1,
	Count = 2,
	ECrosshairShapeType_MAX = 3
};

// Enum ShooterGame.ECrosshairEnvironment
enum class ECrosshairEnvironment : uint8 {
	Gameplay = 0,
	Preview = 1,
	ECrosshairEnvironment_MAX = 2
};

// Enum ShooterGame.EVisualInterpolationState
enum class EVisualInterpolationState : uint8 {
	Steady = 0,
	OvershootTarget = 1,
	FallbackToTarget = 2,
	EVisualInterpolationState_MAX = 3
};

// Enum ShooterGame.EAresHudCrosshairPoints
enum class EAresHudCrosshairPoints : uint8 {
	CrosshairPoint_Left = 0,
	CrosshairPoint_Right = 1,
	CrosshairPoint_Top = 2,
	CrosshairPoint_Bottom = 3,
	CrosshairPoint_Center = 4,
	Count = 5,
	EAresHudCrosshairPoints_MAX = 6
};

// Enum ShooterGame.EProjectileEventType
enum class EProjectileEventType : uint8 {
	Stop = 0,
	Destroy = 1,
	Hit = 2,
	Count = 3,
	EProjectileEventType_MAX = 4
};

// Enum ShooterGame.EScoreboardModifierStatType
enum class EScoreboardModifierStatType : uint8 {
	Kills = 0,
	Deaths = 1,
	Assists = 2,
	Count = 3,
	Invalid = 4,
	EScoreboardModifierStatType_MAX = 5
};

// Enum ShooterGame.EAresTeam
enum class EAresTeam : uint8 {
	AresTeam_Red = 0,
	AresTeam_Blue = 1,
	AresTeam_Invalid = 254,
	EAresTeam_MAX = 255
};

// Enum ShooterGame.ECustomPathFollowMoveType
enum class ECustomPathFollowMoveType : uint8 {
	Full3D = 0,
	Count = 1,
	ECustomPathFollowMoveType_MAX = 2
};

// Enum ShooterGame.ECustomPathFollowStartBehavior
enum class ECustomPathFollowStartBehavior : uint8 {
	StartPathAtClosestPointOnPath = 0,
	StartPathAtBeginning = 1,
	Count = 2,
	ECustomPathFollowStartBehavior_MAX = 3
};

// Enum ShooterGame.ECapID
enum class ECapID : uint8 {
	AresPointID = 0,
	UpgradeTokenID = 1,
	RecruitmentTokenID = 2,
	ActPointsAssetID = 3,
	JuiceEnergyCurrencyID = 4,
	JuiceMaxEnergyCurrencyID = 5,
	EquippableContentTypeID = 6,
	EquippableSkinContentTypeID = 7,
	EquippableSkinLevelContentTypeID = 8,
	EquippableSkinChromaContentTypeID = 9,
	EquippableCharmContentTypeID = 10,
	EquippableCharmLevelContentTypeID = 11,
	EquippableAttachmentContentTypeID = 12,
	CharacterContentTypeID = 13,
	SprayContentTypeID = 14,
	SprayLevelContentTypeID = 15,
	PlayerCardContentTypeID = 16,
	MissionContentTypeID = 17,
	PlayerTitleContentTypeID = 18,
	ContractContentTypeID = 19,
	PremiumContractContentTypeID = 20,
	PermanentEntitlementTypeID = 21,
	LoyaltyEntitlementTypeID = 22,
	CurrencyRewardTypeID = 23,
	ContractXPCurrencyID = 24,
	F2PEntitlementTypeID = 25,
	Count = 26,
	ECapID_MAX = 27
};

// Enum ShooterGame.EPatchPhase
enum class EPatchPhase : uint8 {
	NotBegun = 0,
	Searching = 1,
	PostProcessing = 2,
	MarkingEdges = 3,
	PatchSuccessful = 4,
	PatchFailed = 5,
	Count = 6,
	EPatchPhase_MAX = 7
};

// Enum ShooterGame.EEdgeStatus
enum class EEdgeStatus : uint8 {
	OutsidePatch = 0,
	InsidePatch = 1,
	EdgeOfPatch = 2,
	Count = 3,
	EEdgeStatus_MAX = 4
};

// Enum ShooterGame.ENodeStatus
enum class ENodeStatus : uint8 {
	Unsearched = 0,
	Pending = 1,
	Blocked = 2,
	Inside = 3,
	Outside = 4,
	Count = 5,
	ENodeStatus_MAX = 6
};

// Enum ShooterGame.EPatchType
enum class EPatchType : uint8 {
	Cells = 0,
	Nodes = 1,
	Count = 2,
	EPatchType_MAX = 3
};

// Enum ShooterGame.ECloudSectionPhase
enum class ECloudSectionPhase : uint8 {
	Uninitalized = 0,
	Generating = 1,
	Smoothing = 2,
	Normalizing = 3,
	Finalizing = 4,
	Finished = 5,
	Count = 6,
	ECloudSectionPhase_MAX = 7
};

// Enum ShooterGame.ECoachDebugErrorType
enum class ECoachDebugErrorType : uint8 {
	ViewingEnemy = 0,
	InvalidNullViewTarget = 1,
	IllegalViewTargetMode = 2,
	Count = 3,
	ECoachDebugErrorType_MAX = 4
};

// Enum ShooterGame.EAresMuteMethod
enum class EAresMuteMethod : uint8 {
	Unknown = 0,
	Toggle = 1,
	Volume = 2,
	EAresMuteMethod_MAX = 3
};

// Enum ShooterGame.EAresCommsMethod
enum class EAresCommsMethod : uint8 {
	Unknown = 0,
	Voice = 1,
	Ping = 2,
	Text = 3,
	EAresCommsMethod_MAX = 4
};

// Enum ShooterGame.ECompetitiveDivision
enum class ECompetitiveDivision : uint8 {
	INVALID = 0,
	UNRANKED = 1,
	IRON = 2,
	BRONZE = 3,
	SILVER = 4,
	GOLD = 5,
	PLATINUM = 6,
	DIAMOND = 7,
	ASCENDANT = 8,
	IMMORTAL = 9,
	RADIANT = 10,
	Count = 11,
	ECompetitiveDivision_MAX = 12
};

// Enum ShooterGame.ECompetitiveTier
enum class ECompetitiveTier : uint8 {
	Iron1 = 3,
	Iron2 = 4,
	Iron3 = 5,
	Bronze1 = 6,
	Bronze2 = 7,
	Bronze3 = 8,
	Silver1 = 9,
	Silver2 = 10,
	Silver3 = 11,
	Gold1 = 12,
	Gold2 = 13,
	Gold3 = 14,
	Platinum1 = 15,
	Platinum2 = 16,
	Platinum3 = 17,
	Diamond1 = 18,
	Diamond2 = 19,
	Diamond3 = 20,
	Immortal1 = 21,
	Immortal2 = 22,
	Immortal3 = 23,
	Radiant = 24,
	ECompetitiveTier_MAX = 25
};

// Enum ShooterGame.EActionType
enum class EActionType : uint8 {
	OpenModal = 0,
	CloseModal = 1,
	ApplyFilters = 2,
	Count = 3,
	EActionType_MAX = 4
};

// Enum ShooterGame.EAresContentType
enum class EAresContentType : uint8 {
	EquippableSkin = 0,
	EquippableSkinLevel = 1,
	EquippableSkinChroma = 2,
	EquippableCharm = 3,
	Character = 4,
	CharacterRole = 5,
	Contract = 6,
	EquippableAttachment = 7,
	Equippable = 8,
	Map = 9,
	Socket = 10,
	Spray = 11,
	GameMode = 12,
	Currency = 13,
	EquippableCharmLevel = 14,
	SprayLevel = 15,
	PlayerCard = 16,
	PremiumContract = 17,
	Mission = 18,
	StorefrontItem = 19,
	PlayerTitle = 20,
	Season = 21,
	ActRankBorder = 22,
	ContractChapter = 23,
	ContentTier = 24,
	CompetitiveSeason = 25,
	PremierSeason = 26,
	MatchmakingQueue = 27,
	LevelBorder = 28,
	Event = 29,
	JuiceBox = 30,
	Ceremony = 31,
	TournamentsTeamIcon = 32,
	MassRewardsCeremony = 33,
	Archive = 34,
	Subscription = 35,
	Invalid = 36,
	Count = 37,
	EAresContentType_MAX = 38
};

// Enum ShooterGame.EContractType
enum class EContractType : uint8 {
	Special = 0,
	Story = 1,
	Event = 2,
	Accord = 3,
	Invalid = 4,
	Count = 5,
	EContractType_MAX = 6
};

// Enum ShooterGame.EXPModifier
enum class EXPModifier : uint8 {
	AntiAddiction_Reduced = 0,
	AntiAddiction_Zero = 1,
	Loyalty_Boost = 2,
	XP_Boost = 3,
	Restrictions_XPModifier = 4,
	Social_XP = 5,
	PREMIUM_CONTRACT_XP = 6,
	XGP_SUBSCRIPTION_XP = 7,
	Invalid = 8,
	Count = 9,
	EXPModifier_MAX = 10
};

// Enum ShooterGame.EContractUpgradeState
enum class EContractUpgradeState : uint8 {
	CUS_NOT_UPGRADABLE = 0,
	CUS_UPGRADE_AVAILABLE = 1,
	CUS_UPGRADE_NOT_AFFORDABLE = 2,
	CUS_UPGRADE_OWNED = 3,
	CUS_MAX = 4
};

// Enum ShooterGame.ECoreGameMatchState
enum class ECoreGameMatchState : uint8 {
	PREPROVISION = 0,
	PROVISIONING = 1,
	IN_PROGRESS = 2,
	POST_GAME = 3,
	CLOSED = 4,
	PENDING = 5,
	INVALID = 6,
	COUNT = 6,
	ECoreGameMatchState_MAX = 7
};

// Enum ShooterGame.ECrosshairLocation
enum class ECrosshairLocation : uint8 {
	Inner = 0,
	Outer = 1,
	Count = 2,
	ECrosshairLocation_MAX = 3
};

// Enum ShooterGame.EAresCustomGameSelectionType
enum class EAresCustomGameSelectionType : uint8 {
	Map = 0,
	Mode = 1,
	Options = 2,
	EAresCustomGameSelectionType_MAX = 3
};

// Enum ShooterGame.ECauserType
enum class ECauserType : uint8 {
	Projectile = 0,
	Equippable = 1,
	Pawn = 2,
	Count = 3,
	ECauserType_MAX = 4
};

// Enum ShooterGame.DamageSectionType
enum class DamageSectionType : uint8 {
	Health = 0,
	Shield = 1,
	Temporary = 2,
	Count = 3,
	DamageSectionType_MAX = 4
};

// Enum ShooterGame.EDebugCharacterMovementCurves
enum class EDebugCharacterMovementCurves : uint8 {
	None = 0,
	TotalSpeed = 1,
	AxialSpeed = 2,
	Acceleration = 3,
	JumpHeight = 4,
	Count = 5,
	EDebugCharacterMovementCurves_MAX = 6
};

// Enum ShooterGame.EDebugCharacterMovementTimingFlags
enum class EDebugCharacterMovementTimingFlags : uint8 {
	None = 0,
	Self = 1,
	RemoteClient = 2,
	Count = 3,
	EDebugCharacterMovementTimingFlags_MAX = 4
};

// Enum ShooterGame.EDebugNetSource
enum class EDebugNetSource : uint8 {
	LocalClient = 0,
	Server = 1,
	Count = 2,
	EDebugNetSource_MAX = 3
};

// Enum ShooterGame.EFiringTimeEntryType
enum class EFiringTimeEntryType : uint8 {
	Normal = 0,
	Refire = 1,
	Burst = 2,
	Future = 3,
	Count = 4,
	EFiringTimeEntryType_MAX = 5
};

// Enum ShooterGame.EDebugWeaponCurves
enum class EDebugWeaponCurves : uint8 {
	None = 0,
	WeaponError = 1,
	WeaponPitchAndYaw = 2,
	Count = 3,
	EDebugWeaponCurves_MAX = 4
};

// Enum ShooterGame.ECreateDecalOptions
enum class ECreateDecalOptions : uint8 {
	DecalOrProxy = 0,
	NeverProxy = 1,
	AlwaysDecal = 2,
	ECreateDecalOptions_MAX = 3
};

// Enum ShooterGame.EMovementSyncType
enum class EMovementSyncType : uint8 {
	Always = 0,
	Never = 1,
	SpectatorOnly = 2,
	Count = 3,
	EMovementSyncType_MAX = 4
};

// Enum ShooterGame.ECosmeticEffectType
enum class ECosmeticEffectType : uint8 {
	Undefined = 0,
	Cosmetic = 1,
	Gameplay = 2,
	ECosmeticEffectType_MAX = 3
};

// Enum ShooterGame.ESpawnEffectType
enum class ESpawnEffectType : uint8 {
	Spawned = 0,
	Pooled = 1,
	Pure = 2,
	ESpawnEffectType_MAX = 3
};

// Enum ShooterGame.EEffectAttachType
enum class EEffectAttachType : uint8 {
	NotAttached = 0,
	RootComponent = 1,
	Attach1P = 2,
	Attach3P = 3,
	Count = 4,
	EEffectAttachType_MAX = 5
};

// Enum ShooterGame.EWeaponAltFireDisplayType
enum class EWeaponAltFireDisplayType : uint8 {
	None = 0,
	ADS = 1,
	AirBurst = 2,
	Shotgun = 3,
	EWeaponAltFireDisplayType_MAX = 4
};

// Enum ShooterGame.EWeaponStatsFeature
enum class EWeaponStatsFeature : uint8 {
	None = 0,
	Silenced = 1,
	ROFIncrease = 2,
	DualZoom = 3,
	EWeaponStatsFeature_MAX = 4
};

// Enum ShooterGame.EWallPenetrationDisplayType
enum class EWallPenetrationDisplayType : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Count = 4,
	EWallPenetrationDisplayType_MAX = 5
};

// Enum ShooterGame.EWeaponFireModeDisplayType
enum class EWeaponFireModeDisplayType : uint8 {
	FullyAutomatic = 0,
	Burst = 1,
	SemiAutomatic = 2,
	Count = 3,
	EWeaponFireModeDisplayType_MAX = 4
};

// Enum ShooterGame.EEquippableCategory
enum class EEquippableCategory : uint8 {
	Invalid = 0,
	Heavy = 1,
	Rifle = 2,
	Shotgun = 3,
	Sidearm = 4,
	SMG = 5,
	Sniper = 6,
	Melee = 7,
	Hidden = 8,
	Count = 9,
	EEquippableCategory_MAX = 10
};

// Enum ShooterGame.EMeleeCategory
enum class EMeleeCategory : uint8 {
	NonMelee = 0,
	Aggressive = 1,
	Tactical = 2,
	Assassin = 3,
	Fury = 4,
	Karambit = 5,
	Uncommon = 6,
	TwoHanded = 7,
	Butterfly = 8,
	Count = 9,
	EMeleeCategory_MAX = 10
};

// Enum ShooterGame.EShaderCategory
enum class EShaderCategory : uint8 {
	None = 0,
	Dynamic = 1,
	Count = 2,
	EShaderCategory_MAX = 3
};

// Enum ShooterGame.EAnimationCategory
enum class EAnimationCategory : uint8 {
	None = 0,
	Gun = 1,
	LightHand = 2,
	HeavyHand = 3,
	Count = 4,
	EAnimationCategory_MAX = 5
};

// Enum ShooterGame.EFXCategory
enum class EFXCategory : uint8 {
	None = 0,
	Light = 1,
	Major = 2,
	Count = 3,
	EFXCategory_MAX = 4
};

// Enum ShooterGame.EModelCategory
enum class EModelCategory : uint8 {
	Base = 0,
	Light = 1,
	Major = 2,
	Count = 3,
	EModelCategory_MAX = 4
};

// Enum ShooterGame.EEquippableSkinLevelItem
enum class EEquippableSkinLevelItem : uint8 {
	None = 0,
	VFX = 1,
	Animation = 2,
	Finisher = 3,
	KillBanner = 4,
	Buddy = 5,
	Randomizer = 6,
	KillCounter = 7,
	TopFrag = 8,
	InspectAndKill = 9,
	Voiceover = 10,
	KillEffect = 11,
	FishAnimation = 12,
	HeartbeatAndMapSensor = 13,
	SoundEffects = 14,
	KillEffects = 15,
	EEquippableSkinLevelItem_MAX = 16
};

// Enum ShooterGame.EStateBehaviorOnUnequip
enum class EStateBehaviorOnUnequip : uint8 {
	DoNothing = 0,
	GoToStartState = 1,
	PreventUnequip = 2,
	PreventEquip = 3,
	Count = 4,
	EStateBehaviorOnUnequip_MAX = 5
};

// Enum ShooterGame.EReplacementStateType
enum class EReplacementStateType : uint8 {
	None = 0,
	DisabledFallback = 1,
	Count = 2,
	EReplacementStateType_MAX = 3
};

// Enum ShooterGame.ESourceInputConsumptionOnEnterEquippableState
enum class ESourceInputConsumptionOnEnterEquippableState : uint8 {
	ConsumeSourceInput = 0,
	AllowSourceInputToBeQueued = 1,
	Count = 2,
	ESourceInputConsumptionOnEnterEquippableState_MAX = 3
};

// Enum ShooterGame.EHandleInputResponse
enum class EHandleInputResponse : uint8 {
	Consume = 0,
	Unhandled = 1,
	Count = 2,
	EHandleInputResponse_MAX = 3
};

// Enum ShooterGame.EStateBehaviorOnDeath
enum class EStateBehaviorOnDeath : uint8 {
	DoNothing = 0,
	GoToState = 1,
	ClearState = 2,
	Count = 3,
	EStateBehaviorOnDeath_MAX = 4
};

// Enum ShooterGame.EEquipSource
enum class EEquipSource : uint8 {
	ActivationInput = 0,
	UnequipEquippable = 1,
	GrantEquippable = 2,
	ServerCorrection = 3,
	RemoveItem = 4,
	UpdateInvalidDesiredEquippable = 5,
	PossessedBy = 6,
	ServerUpdateForServerOwnedActor = 7,
	ServerUpdateForRemotePlayerOwnedActor = 8,
	Script = 9,
	Automation = 10,
	ServerCheat = 11,
	Invalid = 12,
	Count = 13,
	EEquipSource_MAX = 14
};

// Enum ShooterGame.EEquipSpeed
enum class EEquipSpeed : uint8 {
	Normal = 0,
	Fast = 1,
	Instant = 2,
	Count = 3,
	EEquipSpeed_MAX = 4
};

// Enum ShooterGame.EEULAAcceptanceState
enum class EEULAAcceptanceState : uint8 {
	WAITING_FOR_ALL_SERVICE_DATA = 0,
	ACCEPTANCE_REQUIRED = 1,
	ACCEPTED = 2,
	INVALID = 3,
	COUNT = 3,
	EEULAAcceptanceState_MAX = 4
};

// Enum ShooterGame.EFavoritesActionType
enum class EFavoritesActionType : uint8 {
	AddFavorite = 0,
	RemoveFavorite = 1,
	EFavoritesActionType_MAX = 2
};

// Enum ShooterGame.EShellCasingEjectableBehavior
enum class EShellCasingEjectableBehavior : uint8 {
	None = 0,
	EjectOnShoot = 1,
	EShellCasingEjectableBehavior_MAX = 2
};

// Enum ShooterGame.ECanFireCooldownCheckOption
enum class ECanFireCooldownCheckOption : uint8 {
	CheckCooldown = 0,
	SkipCooldownCheck = 1,
	ECanFireCooldownCheckOption_MAX = 2
};

// Enum ShooterGame.EFiringStateTransitionContext
enum class EFiringStateTransitionContext : uint8 {
	None = 0,
	Refire = 1,
	Burst = 2,
	Count = 3,
	EFiringStateTransitionContext_MAX = 4
};

// Enum ShooterGame.EFoWRelevancyResult
enum class EFoWRelevancyResult : uint8 {
	Invalid = 0,
	NotRelevant = 1,
	RelevantVision = 2,
	RelevantAudio = 3,
	RelevantOverride = 4,
	RelevantNoComponent = 5,
	RelevantTeam = 6,
	RelevantDistance = 7,
	Count = 8,
	EFoWRelevancyResult_MAX = 255
};

// Enum ShooterGame.EGroundSoundType
enum class EGroundSoundType : uint8 {
	Step = 0,
	Land = 1,
	Jump = 2,
	EGroundSoundType_MAX = 3
};

// Enum ShooterGame.EForceModuleAttribute
enum class EForceModuleAttribute : uint8 {
	MaxSpeed = 0,
	Friction = 1,
	Braking = 2,
	Acceleration = 3,
	JumpVelocity = 4,
	Gravity = 5,
	JumpTime = 6,
	TurnRate = 7,
	CurrentSpeed = 8,
	AboveMaxSpeedBraking = 9,
	Count = 10,
	EForceModuleAttribute_MAX = 11
};

// Enum ShooterGame.EShooterGameMode
enum class EShooterGameMode : uint8 {
	SpikeMode5v5 = 0,
	Unhandled = 1,
	Count = 2,
	EShooterGameMode_MAX = 3
};

// Enum ShooterGame.EReplayRecordPIEMode
enum class EReplayRecordPIEMode : uint8 {
	DoNotRecord = 0,
	RecordOnce = 1,
	AlwaysRecord = 2,
	Count = 3,
	EReplayRecordPIEMode_MAX = 4
};

// Enum ShooterGame.EModifierRoleConditionsBitMask
enum class EModifierRoleConditionsBitMask : uint8 {
	Observer = 0,
	Moderator = 1,
	Player = 2,
	EModifierRoleConditionsBitMask_MAX = 3
};

// Enum ShooterGame.EModifierUseConditionsBitMask
enum class EModifierUseConditionsBitMask : uint8 {
	Always = 0,
	Cheats = 1,
	Tournament = 2,
	EModifierUseConditionsBitMask_MAX = 3
};

// Enum ShooterGame.EGameUIFlag
enum class EGameUIFlag : uint8 {
	None = 0,
	Scoreboard = 1,
	Map = 2,
	Shop = 4,
	AgentTooltip = 8,
	CombatReport = 16,
	RadialMenu = 32,
	CommMenu = 64,
	EGameUIFlag_MAX = 65
};

// Enum ShooterGame.EGameplayFlag
enum class EGameplayFlag : uint8 {
	None = 0,
	InGameUI = 1,
	PlayerIsDead = 2,
	InPreRoundPhase = 4,
	InOptionsScreen = 8,
	GameOutOfFocus = 16,
	All = 255,
	EGameplayFlag_MAX = 256
};

// Enum ShooterGame.EGameplayNotificationStatus
enum class EGameplayNotificationStatus : uint8 {
	Inactive = 0,
	Queued = 1,
	Active = 2,
	EGameplayNotificationStatus_MAX = 3
};

// Enum ShooterGame.EGameplayNotificationDurationType
enum class EGameplayNotificationDurationType : uint8 {
	Timed = 0,
	EventBased = 1,
	EGameplayNotificationDurationType_MAX = 2
};

// Enum ShooterGame.EGameplayNotificationWidgetSlot
enum class EGameplayNotificationWidgetSlot : uint8 {
	Banner = 0,
	Ring = 1,
	Icon = 2,
	Background = 3,
	Count = 4,
	EGameplayNotificationWidgetSlot_MAX = 5
};

// Enum ShooterGame.EVoteReplicationState
enum class EVoteReplicationState : uint8 {
	Waiting = 0,
	Complete = 1,
	EVoteReplicationState_MAX = 2
};

// Enum ShooterGame.EAresNotificationType
enum class EAresNotificationType : uint8 {
	Generic = 0,
	Warning = 1,
	EAresNotificationType_MAX = 2
};

// Enum ShooterGame.EGridAxis2D
enum class EGridAxis2D : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EGridAxis2D_MAX = 2
};

// Enum ShooterGame.EHomingProjectileFacing
enum class EHomingProjectileFacing : uint8 {
	FiringDirection = 0,
	MovementDirection = 1,
	HomingTarget = 2,
	EHomingProjectileFacing_MAX = 3
};

// Enum ShooterGame.EPlayerInputMethod
enum class EPlayerInputMethod : uint8 {
	KeyboardMouse = 0,
	Gamepad = 1,
	EPlayerInputMethod_MAX = 2
};

// Enum ShooterGame.EBound
enum class EBound : uint8 {
	UpperBound = 0,
	LowerBound = 1,
	ThesholdType_Count = 2,
	EBound_MAX = 3
};

// Enum ShooterGame.EUseFinishType
enum class EUseFinishType : uint8 {
	InUse = 0,
	Complete = 1,
	Cancel = 2,
	EUseFinishType_MAX = 3
};

// Enum ShooterGame.EAresPreloadableAssetType
enum class EAresPreloadableAssetType : uint8 {
	Invalid = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	All = 3,
	EAresPreloadableAssetType_MAX = 4
};

// Enum ShooterGame.ERiotMobileLoginStrategy
enum class ERiotMobileLoginStrategy : uint8 {
	Riot = 0,
	Google = 1,
	Facebook = 2,
	Apple = 3,
	Tencent = 4,
	None = 5,
	ERiotMobileLoginStrategy_MAX = 6
};

// Enum ShooterGame.ERiotMobileLoginStatusState
enum class ERiotMobileLoginStatusState : uint8 {
	Uninitialized = 0,
	Initialized = 1,
	Authenticating = 2,
	Cancelled = 3,
	Success = 4,
	Error = 5,
	Unknown = 6,
	ERiotMobileLoginStatusState_MAX = 7
};

// Enum ShooterGame.EJuiceRewardType
enum class EJuiceRewardType : uint8 {
	NONE = 0,
	SKIN = 1,
	LEVEL = 2,
	VARIANT = 3,
	COUNT = 4,
	EJuiceRewardType_MAX = 5
};

// Enum ShooterGame.EJuiceContentViewModelLocation
enum class EJuiceContentViewModelLocation : uint8 {
	NONE = 0,
	COLLECTION = 1,
	TRAY = 2,
	CONFIRM = 3,
	COUNT = 4,
	EJuiceContentViewModelLocation_MAX = 5
};

// Enum ShooterGame.EJuiceContentViewModelType
enum class EJuiceContentViewModelType : uint8 {
	NONE = 0,
	CONTENT = 1,
	ENERGY = 2,
	FILL = 3,
	COUNT = 4,
	EJuiceContentViewModelType_MAX = 5
};

// Enum ShooterGame.EJuiceFilterViewType
enum class EJuiceFilterViewType : uint8 {
	DEFAULT = 0,
	HAS_JUICE_CONTENT = 1,
	OWNED_ONLY = 2,
	ENERGY = 3,
	COUNT = 4,
	EJuiceFilterViewType_MAX = 5
};

// Enum ShooterGame.EAresMultiKillLevel
enum class EAresMultiKillLevel : uint8 {
	None = 0,
	DoubleKill = 1,
	TripleKill = 2,
	QuadraKill = 3,
	PentaKill = 4,
	OverKill = 5,
	Count = 6,
	Invalid = 254,
	EAresMultiKillLevel_MAX = 255
};

// Enum ShooterGame.ELoginQueueTokenType
enum class ELoginQueueTokenType : uint8 {
	Login = 0,
	Queue = 1,
	Invalid = 2,
	ELoginQueueTokenType_MAX = 3
};

// Enum ShooterGame.EStartGameAvailability
enum class EStartGameAvailability : uint8 {
	Unavailable_PatchRequired = 0,
	Unavailable_QueueDisabled = 1,
	Unavailable_NotEligible = 2,
	Unavailable_OversizedParty = 3,
	Unavailable_InvalidPartySize = 4,
	Unavailable_SkillDisparity = 5,
	Unavailable_InactiveGame = 6,
	Unavailable_PartyNotReady_Service = 7,
	Unavailable_PartyNotReady_Chat = 8,
	Unavailable_NoPlayers = 9,
	Unavailable_QueueRestricted = 10,
	Unavailable_QueueDelay = 11,
	Available_NotPartyOwner = 12,
	Available_PartyOwner = 13,
	Count = 14,
	EStartGameAvailability_MAX = 15
};

// Enum ShooterGame.EAresMainMenuTopNavigationState
enum class EAresMainMenuTopNavigationState : uint8 {
	Init = 0,
	Home = 1,
	PlayFlow = 2,
	Arsenal = 3,
	ShootingRange = 4,
	Profile = 5,
	EndOfGame = 6,
	Debug = 7,
	Collections = 8,
	Store = 9,
	BonusStore = 10,
	Progression = 11,
	Battlepass = 12,
	Agents = 13,
	Test3 = 14,
	Social = 15,
	Tournaments = 16,
	CustomGame = 17,
	Rewards = 18,
	AgentsV2 = 19,
	None = 20,
	EAresMainMenuTopNavigationState_MAX = 21
};

// Enum ShooterGame.EMapPingType
enum class EMapPingType : uint8 {
	EMP_MegaMap = 0,
	EMP_FirstPerson = 1,
	EMP_Count = 2,
	EMP_MAX = 3
};

// Enum ShooterGame.ETargettingRotation
enum class ETargettingRotation : uint8 {
	Identity = 0,
	PawnRotation = 1,
	ControllerAim = 2,
	Count = 3,
	ETargettingRotation_MAX = 4
};

// Enum ShooterGame.EMassRewardCeremonyType
enum class EMassRewardCeremonyType : uint8 {
	None = 0,
	Ranked = 1,
	Titled = 2,
	EMassRewardCeremonyType_MAX = 3
};

// Enum ShooterGame.EMatchDetailsEnemyInteractionSort
enum class EMatchDetailsEnemyInteractionSort : uint8 {
	Invalid = 0,
	Rank = 1,
	Kills = 2,
	EMatchDetailsEnemyInteractionSort_MAX = 3
};

// Enum ShooterGame.EMatchDetailsInteractionType
enum class EMatchDetailsInteractionType : uint8 {
	Invalid = 0,
	Kill = 1,
	Death = 2,
	Assist = 3,
	EMatchDetailsInteractionType_MAX = 4
};

// Enum ShooterGame.EMatchOutcome
enum class EMatchOutcome : uint8 {
	Win = 0,
	Loss = 1,
	Draw = 2,
	EMatchOutcome_MAX = 3
};

// Enum ShooterGame.EAresPlayerRelationship
enum class EAresPlayerRelationship : uint8 {
	Invalid = 0,
	Self = 1,
	Ally = 2,
	Enemy = 3,
	EAresPlayerRelationship_MAX = 4
};

// Enum ShooterGame.ELocalTeamAffinity
enum class ELocalTeamAffinity : uint8 {
	Friendly = 0,
	Enemy = 1,
	Count = 2,
	ELocalTeamAffinity_MAX = 3
};

// Enum ShooterGame.EMenuWidgetState
enum class EMenuWidgetState : uint8 {
	Closed = 0,
	Open = 1,
	Count = 2,
	Invalid = 254,
	EMenuWidgetState_MAX = 255
};

// Enum ShooterGame.EMenuStackEntryFlags
enum class EMenuStackEntryFlags : uint8 {
	None = 0,
	Dismissable = 1,
	Popup = 2,
	Modal = 4,
	Letterbox = 8,
	UnregisterOnClose = 16,
	LastFlagPlusOne = 17,
	EMenuStackEntryFlags_MAX = 18
};

// Enum ShooterGame.EMenuStackWidget_RequestCloseMenuResult
enum class EMenuStackWidget_RequestCloseMenuResult : uint8 {
	DefaultHandling = 0,
	Custom = 1,
	EMenuStackWidget_MAX = 2
};

// Enum ShooterGame.EDeviceType
enum class EDeviceType : int32 {
	iPhone = 0,
	iPad = 1,
	Unknown = -1,
	eDeviceTypeMAX = 0,
	EDeviceType_MAX = 2
};

// Enum ShooterGame.EMobileOverlayMenuID
enum class EMobileOverlayMenuID : uint8 {
	None = 0,
	SocialPanel = 1,
	TextChat = 2,
	PartyControl = 3,
	SquadBoost = 4,
	PartyUp = 5,
	Count = 6,
	EMobileOverlayMenuID_MAX = 7
};

// Enum ShooterGame.ENetworkSerializeResult
enum class ENetworkSerializeResult : uint8 {
	SuccessWithPayload = 0,
	SuccessEmptyPayload = 1,
	SerializationError = 2,
	ENetworkSerializeResult_MAX = 3
};

// Enum ShooterGame.EAresObjectivePlatformVisibility
enum class EAresObjectivePlatformVisibility : uint8 {
	None = 0,
	PC = 1,
	Mobile = 2,
	All = 3,
	EAresObjectivePlatformVisibility_MAX = 4
};

// Enum ShooterGame.EObserverMovementMode
enum class EObserverMovementMode : uint8 {
	ObserverPawn = 0,
	FocusObject = 1,
	Invalid = 2,
	EObserverMovementMode_MAX = 3
};

// Enum ShooterGame.EOrderedListModelChangeEventType
enum class EOrderedListModelChangeEventType : uint8 {
	Reset = 0,
	Inserted = 1,
	Removed = 2,
	Replaced = 3,
	Reordered = 4,
	EOrderedListModelChangeEventType_MAX = 5
};

// Enum ShooterGame.EPartyMessageStatus
enum class EPartyMessageStatus : uint8 {
	Unhandled = 0,
	Accepted = 1,
	Declined = 2,
	Count = 3,
	EPartyMessageStatus_MAX = 4
};

// Enum ShooterGame.EPartyMessageType
enum class EPartyMessageType : uint8 {
	INVALID = 0,
	Invite = 1,
	Request = 2,
	EPartyMessageType_MAX = 3
};

// Enum ShooterGame.EAresPartyErrorNotificationType
enum class EAresPartyErrorNotificationType : uint8 {
	INVALID = 0,
	NONE = 1,
	PREGAME_AFK = 2,
	PREGAME_INTENTIONAL_QUIT = 3,
	PREGAME_CHEAT_EXIT = 4,
	PREGAME_AFK_RETURN_TO_QUEUE = 5,
	PREGAME_INTENTIONAL_QUIT_RETURN_TO_QUEUE = 6,
	PREGAME_DODGED_BUT_PARTY_MEMBERSHIP_CHANGED = 7,
	PREGAME_INTERNAL_ERROR = 8,
	QUEUE_RESTRICTED = 9,
	EAresPartyErrorNotificationType_MAX = 10
};

// Enum ShooterGame.EStateTransitionReason
enum class EStateTransitionReason : uint8 {
	NONE = 0,
	GAME_STARTING = 1,
	INVALID = 2,
	EStateTransitionReason_MAX = 3
};

// Enum ShooterGame.EAresPartyState
enum class EAresPartyState : uint8 {
	DEFAULT = 0,
	CUSTOM_GAME_SETUP = 1,
	CUSTOM_GAME_STARTING = 2,
	MATCHMAKING = 3,
	STARTING_MATCHMAKING = 4,
	LEAVING_MATCHMAKING = 5,
	MATCHMADE_GAME_STARTING = 6,
	SOLO_EXPERIENCE_STARTING = 7,
	TOURNAMENT_SETUP_STARTING = 8,
	TOURNAMENT_SETUP = 9,
	ROSTER_SETUP_STARTING = 10,
	ROSTER_SETUP = 11,
	TOURNAMENT_STARTING = 12,
	TOURNAMENT = 13,
	TOURNAMENT_LEAVING = 14,
	INVALID = 15,
	EAresPartyState_MAX = 16
};

// Enum ShooterGame.ETeam
enum class ETeam : uint8 {
	TEAM_ONE = 0,
	TEAM_TWO = 1,
	TEAM_SPECTATE = 2,
	TEAM_ONE_COACHES = 3,
	TEAM_TWO_COACHES = 4,
	COUNT = 5,
	INVALID = 6,
	ETeam_MAX = 7
};

// Enum ShooterGame.ESoloExperienceType
enum class ESoloExperienceType : uint8 {
	NewPlayerExperience = 0,
	ShootingRange = 1,
	ESoloExperienceType_MAX = 2
};

// Enum ShooterGame.EPatchState
enum class EPatchState : uint8 {
	Updating = 0,
	OutOfDate = 1,
	UpToDate = 2,
	NotInstalled = 3,
	PendingVerify = 4,
	Unknown = 5,
	EPatchState_MAX = 6
};

// Enum ShooterGame.EPatchPreviewState
enum class EPatchPreviewState : uint8 {
	Pending = 0,
	Done = 1,
	Unknown = 2,
	EPatchPreviewState_MAX = 3
};

// Enum ShooterGame.EAresPatchNoteType
enum class EAresPatchNoteType : uint8 {
	UNKNOWN = 0,
	H1 = 1,
	H2 = 2,
	H3 = 3,
	H4 = 4,
	OL = 5,
	UL = 6,
	TextElement = 7,
	INVALID = 8,
	EAresPatchNoteType_MAX = 9
};

// Enum ShooterGame.EEndpointState
enum class EEndpointState : uint8 {
	Measuring = 0,
	Complete = 1,
	Invalid = 2,
	Count = 2,
	Invalid = 2,
	EEndpointState_MAX = 255
};

// Enum ShooterGame.EEndpointType
enum class EEndpointType : uint8 {
	GamePod = 0,
	NetworkEdge = 1,
	Invalid = 2,
	Count = 2,
	Invalid = 2,
	EEndpointType_MAX = 255
};

// Enum ShooterGame.EEncroachCheckFailureMode
enum class EEncroachCheckFailureMode : uint8 {
	Reject = 0,
	ProjectToNavmesh = 1,
	ProjectToNavmeshAndRecheck = 2,
	EEncroachCheckFailureMode_MAX = 3
};

// Enum ShooterGame.ENavmeshProjection
enum class ENavmeshProjection : uint8 {
	None = 0,
	IfPossible = 1,
	Required = 2,
	ENavmeshProjection_MAX = 3
};

// Enum ShooterGame.EPlatformInitErrorReason
enum class EPlatformInitErrorReason : uint8 {
	None = 0,
	RiotClientManagerDisabled = 1,
	NewUserSignupFailed = 2,
	FailedEntitlementGrant = 3,
	InvalidDisplayName = 4,
	AlreadyInitSessionInvalid = 5,
	SessionManagerDeleted = 6,
	SessionConnectFail = 7,
	RMSDependenciesNotInited = 8,
	RSOQueryTokenFail = 9,
	RSOManagerDeleted = 10,
	RSOSubscriptionFailed = 11,
	RSOQueryUserInfoFail = 12,
	RSOQueryEntitlementsFail = 13,
	RSOEntitlementsSubscriptionFailed = 14,
	RMSManagerDeleted = 15,
	RNetClientFailedProcessInfoQuery = 16,
	RNetClientDeleted = 17,
	RNetEventingClientNotReady = 18,
	RNetEventingClientConnectionFail = 19,
	RNetQueryClientDeleted = 20,
	RNetQueryInitFail = 21,
	TestAccountsManagerDeleted = 22,
	UnableToFindUnusedAccount = 23,
	UnexpectedAccountQueryError = 24,
	AtlasAccountCreateFailed = 25,
	UnableToInitializeGameName = 26,
	TestAccountsEntitlementFailed = 27,
	ConfigManagerDeleted = 28,
	ConfigGetFail = 29,
	PlayerAliasManagerDeleted = 30,
	PlayerAliasQueryError = 31,
	WeGameQueryFail = 32,
	RiotClientProcessTerminated = 33,
	RegionLocaleError = 34,
	CouldNotFetchDisplayName = 35,
	MinimumPlatformInit = 36,
	RMSSubscriptionFailed = 37,
	PregamePlayerFetchError = 38,
	CoreGamePlayerFetchError = 39,
	LoadoutFetchError = 40,
	ContractsFetchError = 41,
	ContractDefinitionsFetchError = 42,
	SystemTimedOut = 43,
	VanguardInitFail = 44,
	VanguardNeedsReboot = 45,
	PlatformDowntime = 46,
	AntiAddictionInitFailed = 47,
	PlayerLegalShutdown = 48,
	ChatInitError = 49,
	VoiceInitError = 50,
	PartyInitFailure = 51,
	MMRInitFailure = 52,
	PresenceInitFailure = 53,
	ContentInitFailure = 54,
	ApplicationRepairManagerInitFailure = 55,
	LegalInfoInitFailure = 56,
	PlayerAffinityInitFailure = 57,
	RSOValidationFailure = 58,
	LoginQueueFetchTokenFailure = 59,
	PatchInitFailure = 60,
	LoginQueuePlayerBanned = 61,
	NoGamepodsToPingFailure = 62,
	ManagerDeleted = 63,
	SessionFetchFailure = 64,
	PatchAvailabilityInitFailure = 65,
	ContentIndexInitFailure = 66,
	ChatFriendMetadataInitFailure = 67,
	CapEntitlementsFetchError = 68,
	CapWalletsFetchError = 69,
	StoreOffersFetchError = 70,
	MassRewardsInitFailure = 71,
	AccountXPInitFailure = 72,
	RosterInitFailure = 73,
	RiotClientConfigInitFailure = 74,
	SessionServiceLoginRestricted = 75,
	TournamentInitFailure = 76,
	EULAAcceptanceFailure = 77,
	ClientVersionUnsupported = 78,
	DailyTicketLoginFailure = 79,
	ModifiedClientBan = 80,
	RiotGamesApiInitFailure = 81,
	LaunchRiotClient = 82,
	Count = 83,
	EPlatformInitErrorReason_MAX = 84
};

// Enum ShooterGame.EPlatformErrorComponent
enum class EPlatformErrorComponent : uint8 {
	VoiceLeave = 0,
	VoiceJoin = 1,
	VoicePTTPut = 2,
	VoiceSettingsPut = 3,
	ChatJoin = 4,
	ChatLeave = 5,
	PlatformFault = 6,
	PlatformInitFailure = 7,
	PaymentInitPurchase = 8,
	EPlatformErrorComponent_MAX = 9
};

// Enum ShooterGame.EPlatformInitializerSystemState
enum class EPlatformInitializerSystemState : uint8 {
	Uninitialized = 0,
	Initializing = 1,
	Initialized = 2,
	Failed = 3,
	EPlatformInitializerSystemState_MAX = 4
};

// Enum ShooterGame.EPlatformInitializerTimeoutOptions
enum class EPlatformInitializerTimeoutOptions : uint8 {
	Ignore = 0,
	Enforced = 1,
	EPlatformInitializerTimeoutOptions_MAX = 2
};

// Enum ShooterGame.EPlatformInitializerSystemImportance
enum class EPlatformInitializerSystemImportance : uint8 {
	Optional = 0,
	Required = 1,
	EPlatformInitializerSystemImportance_MAX = 2
};

// Enum ShooterGame.EAresPlatformInitStatus
enum class EAresPlatformInitStatus : uint8 {
	NotStarted = 0,
	Initialized = 1,
	InitFailure = 2,
	Initializing = 3,
	Count = 4,
	EAresPlatformInitStatus_MAX = 5
};

// Enum ShooterGame.ESessionLoopState
enum class ESessionLoopState : uint8 {
	MENUS = 0,
	PREGAME = 1,
	INGAME = 2,
	INVALID = 3,
	COUNT = 4,
	ESessionLoopState_MAX = 5
};

// Enum ShooterGame.EPlayerDebugFlags
enum class EPlayerDebugFlags : uint8 {
	None = 0,
	TrackDroppedShots = 1,
	TrackMoveData = 2,
	TrackInputEvents = 4,
	PreventAwayPenalty = 8,
	EPlayerDebugFlags_Max = 9,
	EPlayerDebugFlags_Max = 10
};

// Enum ShooterGame.EPlayerPerfMetricUnitType
enum class EPlayerPerfMetricUnitType : uint8 {
	Bytes = 0,
	Megabytes = 1,
	UnitlessIntegral = 2,
	Milliseconds = 3,
	Percentage = 4,
	Degrees = 5,
	EnumCount = 6,
	EPlayerPerfMetricUnitType_MAX = 7
};

// Enum ShooterGame.EPlayerPerfMetricCategory
enum class EPlayerPerfMetricCategory : uint8 {
	TotalFrameTime = 0,
	GameFrameTime = 1,
	RenderFrameTime = 2,
	FrameRate = 3,
	ServerFrameRate = 4,
	AvailablePhysicalMemory = 5,
	UsedPhysicalMemory = 6,
	NetworkRtt = 7,
	PacketsLostTotal = 8,
	PacketsLostIncoming = 9,
	PacketsLostOutgoing = 10,
	ReceivedPackets = 11,
	SentPackets = 12,
	PacketLossPercentageTotal = 13,
	PacketLossPercentageIncoming = 14,
	PacketLossPercentageOutgoing = 15,
	RHIFrameTime = 16,
	IdleFrameTime = 17,
	InputLatencyCpuPlusGpu = 18,
	InputLatencyCpu = 19,
	InputLatencyGpu = 20,
	GpuRenderFrameTime = 21,
	RemoteInterpDelayMs = 22,
	QueuedRemoteMoveCount = 23,
	ConsecutiveForwardPredictionTicks = 24,
	UploadedData = 25,
	DownloadedData = 26,
	TotalTransferredData = 27,
	InPacketSize = 28,
	OutPacketSize = 29,
	MoveCorrectionDistance = 30,
	MoveTimelineShiftMs = 31,
	ReceivedEquippableCorrection = 32,
	OutgoingInputQueueLength = 33,
	OutgoingMoveQueueLength = 34,
	ClientIncomingMoveProcessingDelay = 35,
	ServerIncomingMoveProcessingDelay = 36,
	ATB = 37,
	NetworkJitter = 38,
	FullEndToEndLatency = 39,
	FiringError = 40,
	EnumCount = 41,
	EPlayerPerfMetricCategory_MAX = 42
};

// Enum ShooterGame.EPlayerPerfStatField
enum class EPlayerPerfStatField : uint8 {
	CurrentTickMaximum = 0,
	CurrentTickMinimum = 1,
	CurrentTickAverage = 2,
	CurrentTickSum = 3,
	WorldDurationSum = 4,
	MovingAverage = 5,
	SumPerSecond = 6,
	ExponentialSmooth = 7,
	EnumCount = 8,
	EPlayerPerfStatField_MAX = 9
};

// Enum ShooterGame.EGraphDisplayType
enum class EGraphDisplayType : uint8 {
	Line = 0,
	Bar = 1,
	EnumCount = 2,
	EGraphDisplayType_MAX = 3
};

// Enum ShooterGame.EGraphMetricTextPlacement
enum class EGraphMetricTextPlacement : uint8 {
	Top = 0,
	Middle = 1,
	Bottom = 2,
	EnumCount = 3,
	EGraphMetricTextPlacement_MAX = 4
};

// Enum ShooterGame.EPlayerFeedbackToolSurveyType
enum class EPlayerFeedbackToolSurveyType : uint8 {
	ExternalLink = 0,
	HostedBrowser = 1,
	EPlayerFeedbackToolSurveyType_MAX = 2
};

// Enum ShooterGame.EPlayerFeedbackSurveySource
enum class EPlayerFeedbackSurveySource : uint8 {
	UNKNOWN = 0,
	END_OF_GAME = 1,
	STORE_PURCHASE = 2,
	LOGIN = 3,
	TUTORIAL_COMPLETE = 4,
	COUNT = 5,
	EPlayerFeedbackSurveySource_MAX = 6
};

// Enum ShooterGame.EPlayerReportReason
enum class EPlayerReportReason : uint8 {
	COMMS_ABUSE_TEXT = 0,
	COMMS_ABUSE_VOICE = 1,
	CHEATING = 2,
	AFK = 3,
	OFFENSIVE_NAME = 4,
	SABOTAGING_TEAM = 5,
	DISRESPECTFUL_BEHAVIOR = 6,
	THREATS = 7,
	Invalid = 8,
	Count = 9,
	EPlayerReportReason_MAX = 10
};

// Enum ShooterGame.EPregameTeamID
enum class EPregameTeamID : uint8 {
	Blue = 0,
	Red = 1,
	Neutral = 2,
	Invalid = 3,
	EPregameTeamID_MAX = 4
};

// Enum ShooterGame.EPremierEventMapSelectionStrategy
enum class EPremierEventMapSelectionStrategy : uint8 {
	INVALID = 0,
	RANDOM = 1,
	PICKBAN = 2,
	Count = 3,
	EPremierEventMapSelectionStrategy_MAX = 4
};

// Enum ShooterGame.EPremierEventDayOfWeek
enum class EPremierEventDayOfWeek : uint8 {
	INVALID = 0,
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3,
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY = 7,
	Count = 8,
	EPremierEventDayOfWeek_MAX = 9
};

// Enum ShooterGame.EPremierEventType
enum class EPremierEventType : uint8 {
	INVALID = 0,
	LEAGUE = 1,
	TOURNAMENT = 2,
	Count = 3,
	EPremierEventType_MAX = 4
};

// Enum ShooterGame.EChatPresenceProduct
enum class EChatPresenceProduct : uint8 {
	ARES = 0,
	LEAGUE = 1,
	BACON = 2,
	KEYSTONE = 3,
	WILDRIFT = 4,
	UNKNOWN = 5,
	EChatPresenceProduct_MAX = 6
};

// Enum ShooterGame.EChatPresenceState
enum class EChatPresenceState : uint8 {
	CHAT = 0,
	AWAY = 1,
	DND = 2,
	OFFLINE = 3,
	UNKNOWN = 4,
	EChatPresenceState_MAX = 5
};

// Enum ShooterGame.ENumericProgressCalculationMode
enum class ENumericProgressCalculationMode : uint8 {
	CompletedCount = 0,
	SumProgress = 1,
	SumProgressValidOnly = 2,
	ENumericProgressCalculationMode_MAX = 3
};

// Enum ShooterGame.EChildActorIgnoreSetting
enum class EChildActorIgnoreSetting : uint8 {
	AutoAddIgnoredActorsChildren = 0,
	DoNothingAutomatically = 1,
	EChildActorIgnoreSetting_MAX = 2
};

// Enum ShooterGame.EImpactEffectsOption
enum class EImpactEffectsOption : uint8 {
	EnableImpactEffects = 0,
	DisableImpactEffects = 1,
	EImpactEffectsOption_MAX = 2
};

// Enum ShooterGame.ETracerOption
enum class ETracerOption : uint8 {
	EnableTracers = 0,
	DisableTracers = 1,
	ETracerOption_MAX = 2
};

// Enum ShooterGame.EProjectileStopAction
enum class EProjectileStopAction : uint8 {
	Destroy = 0,
	Idle = 1,
	DelayedDestroy = 2,
	Count = 3,
	EProjectileStopAction_MAX = 4
};

// Enum ShooterGame.EProjectileSimulation
enum class EProjectileSimulation : uint8 {
	Owner = 0,
	Server = 1,
	OwnerAndServer = 2,
	AllMachines = 3,
	Count = 4,
	EProjectileSimulation_MAX = 5
};

// Enum ShooterGame.EProjectileCollisionProcessInstruction
enum class EProjectileCollisionProcessInstruction : uint8 {
	ContinueToNextComponent = 0,
	StopProcessingCollision = 1,
	StopProjectile = 2,
	EProjectileCollisionProcessInstruction_MAX = 3
};

// Enum ShooterGame.EProjectilePerspective
enum class EProjectilePerspective : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	Count = 2,
	EProjectilePerspective_MAX = 3
};

// Enum ShooterGame.EPurchaseState
enum class EPurchaseState : uint8 {
	Initializing = 0,
	SubmittingOrder = 1,
	ProcessingOrder = 2,
	UpdatingLocalInventory = 3,
	Complete = 4,
	Failed = 5,
	EPurchaseState_MAX = 6
};

// Enum ShooterGame.EPurchaseType
enum class EPurchaseType : uint8 {
	PurchaseType_None = 0,
	PurchaseType_Rewards = 1,
	PurchaseType_BonusOffer = 2,
	PurchaseType_ContractLevels = 3,
	PurchaseType_ItemLevels = 4,
	PurchaseType_ContractUpgrade = 5,
	PurchaseType_UpgradeCurrency = 6,
	PurchaseType_Bundle = 7,
	PurchaseType_ItemLevelsV2 = 8,
	PurchaseType_Sidegrade = 9,
	PurchaseType_JuiceOpen = 10,
	PurchaseType_JuiceCraft = 11,
	Count = 12,
	EPurchaseType_MAX = 13
};

// Enum ShooterGame.EPurchaseSource
enum class EPurchaseSource : uint8 {
	UNKNOWN = 0,
	ROTATION = 1,
	FEATURED = 2,
	BUNDLE = 3,
	BUNDLE_INDIVIDUAL = 4,
	REWARD = 5,
	CONTRACT = 6,
	CURRENCY = 7,
	ITEM_LEVEL_UPGRADE = 8,
	BATTLEPASS = 9,
	BATTLEPASS_PROGRESS = 10,
	AGENT_PROGRESS = 11,
	BONUS_SHOP = 12,
	ITEM_VARIANT_UPGRADE = 13,
	JUICE = 14,
	JUICE_CRAFT = 15,
	JUICE_CRAFT_LEVEL_UPGRADE = 16,
	JUICE_CRAFT_VARIANT_UPGRADE = 17,
	COUNT = 18,
	EPurchaseSource_MAX = 19
};

// Enum ShooterGame.ERadialTargetSourcePoint
enum class ERadialTargetSourcePoint : uint8 {
	PawnLocation = 0,
	CameraLocation = 1,
	TransformContext = 2,
	ActorContext = 3,
	Count = 4,
	ERadialTargetSourcePoint_MAX = 5
};

// Enum ShooterGame.ERateLimiterMethod
enum class ERateLimiterMethod : uint8 {
	Cooldown = 0,
	RollingWindow = 1,
	Count = 2,
	ERateLimiterMethod_MAX = 3
};

// Enum ShooterGame.EMagazineEjectableBehavior
enum class EMagazineEjectableBehavior : uint8 {
	None = 0,
	EjectOnLoad = 1,
	EjectOnAnimationComplete = 2,
	EMagazineEjectableBehavior_MAX = 3
};

// Enum ShooterGame.ECanReloadAmmoCheckOption
enum class ECanReloadAmmoCheckOption : uint8 {
	IncludeAmmoCheck = 0,
	ExcludeAmmoCheck = 1,
	Count = 2,
	ECanReloadAmmoCheckOption_MAX = 3
};

// Enum ShooterGame.ERemoteMovementScenario
enum class ERemoteMovementScenario : uint8 {
	Spectating = 0,
	Playing = 1,
	ERemoteMovementScenario_MAX = 2
};

// Enum ShooterGame.EReplicationSleepState
enum class EReplicationSleepState : uint8 {
	Awake = 0,
	GoingToSleep = 1,
	Asleep = 2,
	Count = 3,
	EReplicationSleepState_MAX = 4
};

// Enum ShooterGame.EReplicationSleepWhen
enum class EReplicationSleepWhen : uint8 {
	Never = 0,
	Timer = 1,
	OnRequest = 2,
	Count = 3,
	EReplicationSleepWhen_MAX = 4
};

// Enum ShooterGame.EEquipType
enum class EEquipType : uint8 {
	Equip = 0,
	Unequip = 1,
	AutoEquip = 2,
	Count = 3,
	EEquipType_MAX = 4
};

// Enum ShooterGame.EActorCombination
enum class EActorCombination : uint8 {
	Any = 0,
	All = 1,
	Count = 2,
	EActorCombination_MAX = 3
};

// Enum ShooterGame.EActorEvent
enum class EActorEvent : uint8 {
	None = 0,
	Destroyed = 1,
	Killed = 2,
	Count = 3,
	EActorEvent_MAX = 4
};

// Enum ShooterGame.EInfractionType
enum class EInfractionType : uint8 {
	Afk = 0,
	FriendlyFire = 1,
	Count = 2,
	EInfractionType_MAX = 3
};

// Enum ShooterGame.ERewindState
enum class ERewindState : uint8 {
	NotRewound = 0,
	Rewound = 1,
	ERewindState_MAX = 2
};

// Enum ShooterGame.ERiotClientStatus
enum class ERiotClientStatus : uint8 {
	Restarting = 0,
	Disconnected = 1,
	WaitingForPlugins = 2,
	CheckingRegionLocale = 3,
	WaitingForLogin = 4,
	WaitingForChat = 5,
	RefreshingUserInfo = 6,
	WaitingForRMSSession = 7,
	DelayForSession = 8,
	Ready = 9,
	PendingQueryResult = 10,
	Error = 11,
	Count = 12,
	ERiotClientStatus_MAX = 13
};

// Enum ShooterGame.ERMSConnectionState
enum class ERMSConnectionState : uint8 {
	Connecting = 0,
	Connected = 1,
	Disconnecting = 2,
	Disconnected = 3,
	SwitchingServers = 4,
	Unknown = 5,
	ERMSConnectionState_MAX = 6
};

// Enum ShooterGame.ERNetProcessStatus
enum class ERNetProcessStatus : uint8 {
	Uninitialized = 0,
	Alive = 1,
	Terminated = 2,
	ERNetProcessStatus_MAX = 3
};

// Enum ShooterGame.ERNetConnectionStatus
enum class ERNetConnectionStatus : uint8 {
	Uninitialized = 0,
	Disconnecting = 1,
	Disconnected = 2,
	Connecting = 3,
	Connected = 4,
	Count = 5,
	ERNetConnectionStatus_MAX = 6
};

// Enum ShooterGame.ERNetEventType
enum class ERNetEventType : uint8 {
	Create = 0,
	Update = 1,
	Delete = 2,
	Invalid = 3,
	ERNetEventType_MAX = 4
};

// Enum ShooterGame.ERiotClientHeartbeatPhase
enum class ERiotClientHeartbeatPhase : uint8 {
	None = 0,
	Idle = 1,
	Gameplay = 2,
	Pending = 3,
	ERiotClientHeartbeatPhase_MAX = 4
};

// Enum ShooterGame.ETournamentRound
enum class ETournamentRound : uint8 {
	Groups = 0,
	Semifinals = 1,
	Finals = 2,
	Count = 3,
	Invalid = 254,
	ETournamentRound_MAX = 255
};

// Enum ShooterGame.EAresPartyTournamentStartAvailability
enum class EAresPartyTournamentStartAvailability : uint8 {
	Unavailable_InQueue = 0,
	Unavailable_TournamentQueueNotOpen = 1,
	Unavailable_LockInToPlay = 2,
	Unavailable_AwaitingLockIn = 3,
	Unavailable_LockInPhaseEnded = 4,
	Available_PartyLeader = 5,
	Available_NotPartyLeader = 6,
	TournamentStarted = 7,
	EAresPartyTournamentStartAvailability_MAX = 8
};

// Enum ShooterGame.EGameplayPersistenceBehavior
enum class EGameplayPersistenceBehavior : uint8 {
	DoNothing = 0,
	Destroy = 1,
	CosmeticAwareDestroy = 2,
	EGameplayPersistenceBehavior_MAX = 3
};

// Enum ShooterGame.ERoundPersistenceBehavior
enum class ERoundPersistenceBehavior : uint8 {
	DoNothing = 0,
	Destroy = 1,
	Persist = 2,
	PersistIfOwnerAlive = 3,
	ERoundPersistenceBehavior_MAX = 4
};

// Enum ShooterGame.EAresMinimapLayer
enum class EAresMinimapLayer : uint8 {
	AML_Map = 0,
	AML_MapVolumes = 1,
	AML_Footsteps = 2,
	AML_VisionCones = 3,
	AML_MapIcons = 4,
	AML_Callouts = 5,
	AML_AbilityIcons = 6,
	AML_BombIcons = 7,
	AML_PlayerIcons = 8,
	AML_Targeting = 9,
	AML_ControlPrompts = 10,
	AML_Overlay = 11,
	AML_MAX = 12
};

// Enum ShooterGame.EAresMinimapRotationSpace
enum class EAresMinimapRotationSpace : uint8 {
	AMRS_World = 0,
	AMRS_Minimap = 1,
	AMRS_ConstantMinimap = 2,
	AMRS_Outward = 3,
	AMRS_None = 4,
	AMRS_MAX = 5
};

// Enum ShooterGame.EAresMinimapSizeSpace
enum class EAresMinimapSizeSpace : uint8 {
	AMSS_World = 0,
	AMSS_Screen = 1,
	AMSS_ConstantScreen = 2,
	AMSS_Minimap = 3,
	AMSS_None = 4,
	AMSS_MAX = 5
};

// Enum ShooterGame.EAresMinimapPositionSpace
enum class EAresMinimapPositionSpace : uint8 {
	AMPS_World = 0,
	AMPS_WorldClamped = 1,
	AMPS_Minimap = 2,
	AMPS_Screen = 3,
	AMSS_None = 4,
	EAresMinimapPositionSpace_MAX = 5
};

// Enum ShooterGame.EMovementSync
enum class EMovementSync : uint8 {
	None = 0,
	Start = 1,
	Stop = 2,
	StartAndStop = 3,
	Count = 4,
	EMovementSync_MAX = 5
};

// Enum ShooterGame.EStateContext
enum class EStateContext : uint8 {
	None = 0,
	TriggeringState = 1,
	OwningEquippable = 2,
	OwningCharacter = 3,
	CustomContext = 4,
	Count = 5,
	EStateContext_MAX = 6
};

// Enum ShooterGame.EAresSeasonType
enum class EAresSeasonType : uint8 {
	Episode = 0,
	Act = 1,
	Invalid = 2,
	Count = 3,
	EAresSeasonType_MAX = 4
};

// Enum ShooterGame.EPlayerTelemetryDisconnectOutcome
enum class EPlayerTelemetryDisconnectOutcome : uint8 {
	Reconnected = 0,
	DidNotReturn = 1,
	Count = 2,
	EPlayerTelemetryDisconnectOutcome_MAX = 3
};

// Enum ShooterGame.EAbilityUsageEventType
enum class EAbilityUsageEventType : uint8 {
	CombatReport = 0,
	Telemetry = 1,
	Count = 2,
	EAbilityUsageEventType_MAX = 3
};

// Enum ShooterGame.ERewindTimestampSource
enum class ERewindTimestampSource : uint8 {
	Equippable = 0,
	Movement = 1,
	ERewindTimestampSource_MAX = 2
};

// Enum ShooterGame.ETickerSeverity
enum class ETickerSeverity : uint8 {
	Ok = 0,
	Warning = 1,
	Error = 2,
	ETickerSeverity_count = 3,
	ETickerSeverity_MAX = 4
};

// Enum ShooterGame.EThrottleOutputPins
enum class EThrottleOutputPins : uint8 {
	Allowed = 0,
	Throttled = 1,
	EThrottleOutputPins_MAX = 2
};

// Enum ShooterGame.EAresActorVisibilityTarget
enum class EAresActorVisibilityTarget : uint8 {
	CenterMass = 0,
	Head = 1,
	Feet = 2,
	LeftEdge = 3,
	RightEdge = 4,
	LookVector = 5,
	EAresActorVisibilityTarget_MAX = 6
};

// Enum ShooterGame.EAresConeAngleCheckType
enum class EAresConeAngleCheckType : uint8 {
	TwoDimensional = 0,
	ThreeDimensional = 1,
	EAresConeAngleCheckType_MAX = 2
};

// Enum ShooterGame.EAresProjectileSearchType
enum class EAresProjectileSearchType : uint8 {
	DontFindProjectiles = 0,
	FindProjectiles = 1,
	EAresProjectileSearchType_MAX = 2
};

// Enum ShooterGame.EAresGameObjectSearchType
enum class EAresGameObjectSearchType : uint8 {
	DontFindGameObjects = 0,
	FindGameObjects = 1,
	EAresGameObjectSearchType_MAX = 2
};

// Enum ShooterGame.EAresShooterCharacterSearchType
enum class EAresShooterCharacterSearchType : uint8 {
	DontFindShooterCharacters = 0,
	FindShooterCharacters = 1,
	EAresShooterCharacterSearchType_MAX = 2
};

// Enum ShooterGame.EAresLineOfSightCheckType
enum class EAresLineOfSightCheckType : uint8 {
	NoLineOfSightCheck = 0,
	RequireLineOfSight = 1,
	RequireReverseLineOfSight = 2,
	EAresLineOfSightCheckType_MAX = 3
};

// Enum ShooterGame.EAresRadialCheckType
enum class EAresRadialCheckType : uint8 {
	SimpleRangeCheck = 0,
	SimpleRangeCheck2D = 1,
	CollisionRangeCheck = 2,
	Count = 3,
	EAresRadialCheckType_MAX = 4
};

// Enum ShooterGame.ECoachMessageType
enum class ECoachMessageType : uint8 {
	Pregame = 0,
	InGame = 1,
	ECoachMessageType_MAX = 2
};

// Enum ShooterGame.ERevealType
enum class ERevealType : uint8 {
	RevealBySight = 0,
	RevealByHearing = 1,
	ERevealType_Count = 2,
	ERevealType_MAX = 3
};

// Enum ShooterGame.EShooterCharacterDebugCameraMode
enum class EShooterCharacterDebugCameraMode : uint8 {
	None = 0,
	ThirdPersonDebugCamera = 1,
	ThirdPersonDebugCameraWithFirstPersonMesh = 2,
	Count = 3,
	EShooterCharacterDebugCameraMode_MAX = 4
};

// Enum ShooterGame.EShooterCharacterCameraState
enum class EShooterCharacterCameraState : uint8 {
	FollowRecoilCamera = 0,
	CustomCamera = 1,
	DeathCamera = 2,
	InvalidViewTarget = 3,
	Count = 4,
	EShooterCharacterCameraState_MAX = 5
};

// Enum ShooterGame.EAresDeathCamFocusPoint
enum class EAresDeathCamFocusPoint : uint8 {
	Body = 0,
	Killer = 1,
	EAresDeathCamFocusPoint_MAX = 2
};

// Enum ShooterGame.EPersistInventoryMode
enum class EPersistInventoryMode : uint8 {
	PersistRoundPersistentPurchasables = 0,
	PersistAllPurchasables = 1,
	PersistInventoryMode_Count = 2,
	EPersistInventoryMode_MAX = 3
};

// Enum ShooterGame.EAresCharacterPosture
enum class EAresCharacterPosture : uint8 {
	Standing = 0,
	Crouching = 1,
	UnCrouching = 2,
	Crouched = 3,
	EAresCharacterPosture_MAX = 4
};

// Enum ShooterGame.ECachedTeamColor
enum class ECachedTeamColor : uint8 {
	CachedTeamColor_Invalid = 0,
	CachedTeamColor_Friendly = 1,
	CachedTeamColor_Enemy = 2,
	CachedTeamColor_Absolute = 3,
	CachedTeamColor_MAX = 4
};

// Enum ShooterGame.EAresCharacterMaterialKind
enum class EAresCharacterMaterialKind : uint8 {
	TeamColor = 0,
	Theme0 = 1,
	Theme1 = 2,
	Theme2 = 3,
	FresnelAllyTint = 4,
	FresnelEnemyTint = 5,
	FresnelAllyOffset = 6,
	FresnelEnemyOffset = 7,
	FresnelIntensity = 8,
	Count = 9,
	EAresCharacterMaterialKind_MAX = 10
};

// Enum ShooterGame.EDebugCharacterCapsule
enum class EDebugCharacterCapsule : uint8 {
	None = 0,
	TP_Only = 1,
	TP_And_1P = 2,
	Count = 3,
	EDebugCharacterCapsule_MAX = 4
};

// Enum ShooterGame.DebugTeleportMode
enum class DebugTeleportMode : uint8 {
	Nearest = 0,
	NearestFriend = 1,
	NearestEnemy = 2,
	Location = 3,
	DebugTeleportMode_MAX = 4
};

// Enum ShooterGame.EMovementTimingType
enum class EMovementTimingType : uint8 {
	None = 0,
	Move = 1,
	Interpolation = 2,
	ForwardPrediction = 3,
	Count = 4,
	Green = 2,
	EMovementTimingType_MAX = 5
};

// Enum ShooterGame.EAresMovementDirections
enum class EAresMovementDirections : uint8 {
	Forward = 0,
	ForwardStrafe = 1,
	Strafe = 2,
	BackwardStrafe = 3,
	Backward = 4,
	None = 5,
	Count = 6,
	EAresMovementDirections_MAX = 7
};

// Enum ShooterGame.EAresMovementCardinalDirections
enum class EAresMovementCardinalDirections : uint8 {
	Forward = 0,
	Backward = 1,
	Strafe = 2,
	Count = 3,
	EAresMovementCardinalDirections_MAX = 4
};

// Enum ShooterGame.ENetMoveMode
enum class ENetMoveMode : uint8 {
	PlaybackClientMove = 0,
	ForwardPredict = 1,
	Count = 2,
	ENetMoveMode_MAX = 3
};

// Enum ShooterGame.EAresHitSoundPlayType
enum class EAresHitSoundPlayType : uint8 {
	AlwaysPlayHitSound = 0,
	NeverPlayHitSound = 1,
	Count = 2,
	EAresHitSoundPlayType_MAX = 3
};

// Enum ShooterGame.EAresHitIndicatorDisplayType
enum class EAresHitIndicatorDisplayType : uint8 {
	AlwaysShowHitIndicator = 0,
	NeverShowHitIndicator = 1,
	Count = 2,
	EAresHitIndicatorDisplayType_MAX = 3
};

// Enum ShooterGame.EAresDamageAnimationCategory
enum class EAresDamageAnimationCategory : uint8 {
	DamageAnimation_Normal = 0,
	DamageAnimation_Count = 1,
	DamageAnimation_Invalid = 254,
	EAresDamageAnimationCategory_MAX = 255
};

// Enum ShooterGame.EAresDamageIndicationType
enum class EAresDamageIndicationType : uint8 {
	PrioritizeInstigator = 0,
	PrioritizeDamageCauser = 1,
	EAresDamageIndicationType_MAX = 2
};

// Enum ShooterGame.EAresDamageCategory
enum class EAresDamageCategory : uint8 {
	DamageCategory_Ballistic = 0,
	DamageCategory_Explosive = 1,
	DamageCategory_Fall = 2,
	DamageCategory_Internal = 3,
	DamageCategory_ExternalZone = 4,
	DamageCategory_Invalid = 254,
	EAresDamageCategory_MAX = 255
};

// Enum ShooterGame.EFrontendUIGlobalsScreenType
enum class EFrontendUIGlobalsScreenType : uint8 {
	MainMenu = 0,
	Pregame = 1,
	Welcome = 2,
	Count = 3,
	EFrontendUIGlobalsScreenType_MAX = 4
};

// Enum ShooterGame.EUIGlobalsScreenType
enum class EUIGlobalsScreenType : uint8 {
	SettingsScreen = 0,
	ExitGameScreen = 1,
	Count = 2,
	EUIGlobalsScreenType_MAX = 3
};

// Enum ShooterGame.EHUDGlobalsScreenType
enum class EHUDGlobalsScreenType : uint8 {
	Count = 0,
	EHUDGlobalsScreenType_MAX = 1
};

// Enum ShooterGame.EBlockedSpawnPointBehavior
enum class EBlockedSpawnPointBehavior : uint8 {
	Discard = 0,
	Include = 1,
	AddToListEnd = 2,
	EBlockedSpawnPointBehavior_MAX = 3
};

// Enum ShooterGame.EGameModeSublevelKey
enum class EGameModeSublevelKey : uint8 {
	None = 0,
	BombMode = 1,
	ShootingRange = 2,
	Tutorial = 3,
	AltMode1 = 4,
	AltMode2 = 5,
	AltMode3 = 6,
	AltMode4 = 7,
	AltMode5 = 8,
	AltMode6 = 9,
	AltMode7 = 10,
	AltMode8 = 11,
	AltMode9 = 12,
	AltMode10 = 13,
	AltMode11 = 14,
	AltMode12 = 15,
	AltMode13 = 16,
	AltMode14 = 17,
	AltMode15 = 18,
	DynamicSpawnPoints = 19,
	TeamSpawnPoints = 20,
	StandardGeoAndLighting = 21,
	Snowball = 22,
	BotsEnabled = 23,
	Count = 24,
	EGameModeSublevelKey_MAX = 25
};

// Enum ShooterGame.EIconJustification
enum class EIconJustification : uint8 {
	TopLeft = 0,
	Centered = 1,
	EIconJustification_MAX = 2
};

// Enum ShooterGame.EDebugMessageOptionFlags
enum class EDebugMessageOptionFlags : uint8 {
	None = 0,
	ReliableSend = 1,
	WriteToLog = 2,
	EDebugMessageOptionFlags_MAX = 3
};

// Enum ShooterGame.EDebugMessagePosition
enum class EDebugMessagePosition : uint8 {
	TopLeft = 0,
	TopRight = 1,
	BottomLeft = 2,
	Default = 0,
	EDebugMessagePosition_MAX = 3
};

// Enum ShooterGame.EVisualizeSurfacesFilter
enum class EVisualizeSurfacesFilter : uint8 {
	Weapon = 0,
	Player = 1,
	EVisualizeSurfacesFilter_MAX = 2
};

// Enum ShooterGame.EReconnectTelemetryType
enum class EReconnectTelemetryType : uint8 {
	Basic = 0,
	NetworkFailure = 1,
	ClientCrash = 2,
	Count = 3,
	EReconnectTelemetryType_MAX = 4
};

// Enum ShooterGame.EPlayerDisconnectReason
enum class EPlayerDisconnectReason : uint8 {
	Unknown = 0,
	ManualQuit = 1,
	WindowClosed = 2,
	PlatformFault = 3,
	NetworkFailure = 4,
	ClientCrash = 5,
	Count = 6,
	EPlayerDisconnectReason_MAX = 7
};

// Enum ShooterGame.EDebugSubscription
enum class EDebugSubscription : uint8 {
	ServerActorTickTime = 0,
	ServerClassTickTime = 1,
	ReplicationOverview = 2,
	ReplicatingItems = 3,
	ServerSkeletalMeshTickTime = 4,
	ServerObjects = 5,
	PendingKillServerObjects = 6,
	ServerClassTickCounts = 7,
	ServerMemory = 8,
	ServerNetworkStats = 9,
	ForceNetUpdateOverview = 10,
	ReplicationTime = 11,
	StatSubsystems = 12,
	Count = 13,
	EDebugSubscription_MAX = 14
};

// Enum ShooterGame.ESpawnRestriction
enum class ESpawnRestriction : uint8 {
	None = 0,
	PlayerOnly = 1,
	NonPlayerBotOnly = 2,
	ESpawnRestriction_MAX = 3
};

// Enum ShooterGame.ECharacterColorationScheme
enum class ECharacterColorationScheme : uint8 {
	CharacterColors_TeamRelative = 0,
	CharacterColors_TeamAbsolute = 1,
	CharacterColors_AlwaysRedEnemy = 2,
	CharacterColors_AlwaysBlueAlly = 3,
	CharacterColors_COUNT = 4,
	CharacterColors_MAX = 5
};

// Enum ShooterGame.EAresColorBlindMode
enum class EAresColorBlindMode : uint8 {
	Disabled = 0,
	Tritanopia = 1,
	Deuteranopia = 2,
	Protanopia = 3,
	Count = 4,
	EAresColorBlindMode_MAX = 5
};

// Enum ShooterGame.EAresDisplayMode
enum class EAresDisplayMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	Count = 3,
	EAresDisplayMode_MAX = 4
};

// Enum ShooterGame.EIsRefundable
enum class EIsRefundable : uint8 {
	Yes = 0,
	No = 1,
	EIsRefundable_MAX = 2
};

// Enum ShooterGame.EAllowedGameInputBlueprintBitMask
enum class EAllowedGameInputBlueprintBitMask : uint8 {
	Movement = 0,
	Aiming = 1,
	ItemUsing = 2,
	Abilities = 3,
	WorldUsing = 4,
	EAllowedGameInputBlueprintBitMask_MAX = 5
};

// Enum ShooterGame.EUIScreen
enum class EUIScreen : uint8 {
	LoginUI = 0,
	Chat = 1,
	MapTargetting = 2,
	Count = 3,
	EUIScreen_MAX = 4
};

// Enum ShooterGame.EUIChannel
enum class EUIChannel : uint8 {
	GameDriven = 0,
	UserDriven = 1,
	Chat = 2,
	Count = 3,
	Invalid = 254,
	EUIChannel_MAX = 255
};

// Enum ShooterGame.EEquippableAnimationCategory
enum class EEquippableAnimationCategory : uint8 {
	EquippableAnimationCategory_Pistol = 0,
	EquippableAnimationCategory_AssaultRifle = 1,
	EquippableAnimationCategory_Shotgun = 2,
	EquippableAnimationCategory_SniperRifle = 3,
	EquippableAnimationCategory_SubmachineGun = 4,
	EquippableAnimationCategory_LightMachineGun = 5,
	EquippableAnimationCategory_Grenade = 6,
	EquippableAnimationCategory_Shield = 7,
	EquippableAnimationCategory_Bomb = 8,
	EquippableAnimationCategory_Melee = 9,
	EquippableAnimationCategory_Bandage = 10,
	EquippableAnimationCategory_AbilityQ = 11,
	EquippableAnimationCategory_AbilityE = 12,
	EquippableAnimationCategory_AbilityGrenade = 13,
	EquippableAnimationCategory_AbilityUltimate = 14,
	EquippableAnimationCategory_WeaponTypeTest1 = 15,
	EquippableAnimationCategory_WeaponTest2 = 16,
	EquippableAnimationCategory_AbilityTest1 = 17,
	EquippableAnimationCategory_AbilityTest2 = 18,
	EquippableAnimationCategory_Drone_Object = 19,
	EquippableAnimationCategory_Drone_Remote = 20,
	EquippableAnimationCategory_Count = 21,
	EquippableAnimationCategory_MAX = 22
};

// Enum ShooterGame.ECharacterSelectAnimationState
enum class ECharacterSelectAnimationState : uint8 {
	CharacterSelectAnimationState_Selected = 0,
	CharacterSelectAnimationState_LockedIn = 1,
	CharacterSelectAnimationState_Idle = 2,
	CharacterSelectAnimationState_BackgroundSelected = 3,
	CharacterSelectAnimationState_BackgroundLockedIn = 4,
	CharacterSelectAnimationState_GameStarting = 5,
	CharacterSelectAnimationState_BackgroundGameStarting = 6,
	CharacterSelectAnimationState_Count = 7,
	CharacterSelectAnimationState_MAX = 8
};

// Enum ShooterGame.EUsablePriority
enum class EUsablePriority : uint8 {
	Cosmetic = 0,
	Door = 1,
	ItemPickup = 2,
	Default = 3,
	High = 4,
	Critical = 5,
	EUsablePriority_MAX = 6
};

// Enum ShooterGame.EEnemyVisibilityOption
enum class EEnemyVisibilityOption : uint8 {
	Always = 0,
	Never = 1,
	LineOfSight = 2,
	Count = 3,
	EEnemyVisibilityOption_MAX = 4
};

// Enum ShooterGame.EAresSearchVisibilityType
enum class EAresSearchVisibilityType : uint8 {
	FindInvisibleUnits = 0,
	DontFindInvisibleUnits = 1,
	Count = 2,
	EAresSearchVisibilityType_MAX = 3
};

// Enum ShooterGame.EAresRewardShouldIncrementInstances
enum class EAresRewardShouldIncrementInstances : uint8 {
	IncrementInstances = 0,
	DontIncrementInstances = 1,
	Count = 2,
	EAresRewardShouldIncrementInstances_MAX = 3
};

// Enum ShooterGame.EAresGameReward
enum class EAresGameReward : uint8 {
	Experience_Deprecated = 0,
	Money = 1,
	Energy = 2,
	Health = 3,
	SignatureAbilityPoints = 4,
	UltimatePoints = 5,
	AbilityCharges = 6,
	Gear = 7,
	Experience = 8,
	NUM_REWARDS = 9,
	EAresGameReward_MAX = 10
};

// Enum ShooterGame.EAresPlayerIntentionType
enum class EAresPlayerIntentionType : uint8 {
	Rush = 0,
	Sneak = 1,
	Hold = 2,
	Distract = 3,
	Count = 4,
	EAresPlayerIntentionType_MAX = 5
};

// Enum ShooterGame.EDecalFadeType
enum class EDecalFadeType : uint8 {
	FadeOutAfterDisplayDuration = 0,
	FadeOutAtEndOfRound = 1,
	Count = 2,
	EDecalFadeType_MAX = 3
};

// Enum ShooterGame.EAresHitImpactParticleOrientation
enum class EAresHitImpactParticleOrientation : uint8 {
	Direction = 0,
	ReverseDirection = 1,
	Normal = 2,
	None = 3,
	Count = 4,
	EAresHitImpactParticleOrientation_MAX = 5
};

// Enum ShooterGame.EAresSurfaceType
enum class EAresSurfaceType : uint8 {
	Default = 0,
	Concrete = 1,
	Dirt = 2,
	Gravel = 3,
	Water = 4,
	Metal = 5,
	Wood = 6,
	Grass = 7,
	Glass = 8,
	Flesh = 9,
	Snow = 10,
	MetalThin = 11,
	BrokenGlass = 12,
	Impenetrable = 13,
	Linoleum = 14,
	BubbleCage = 15,
	MetalNonResonant = 16,
	CarpetOnWood = 17,
	MetalPipe = 18,
	ConcretePuddle = 19,
	GarbageBag = 20,
	Thorns = 21,
	Sand = 22,
	Mud = 23,
	Tree = 24,
	Ice = 25,
	ShootinRangeTarget = 26,
	Cloth = 27,
	CobbleStone = 28,
	CeramicTile = 29,
	CarpetOnConcrete = 30,
	EtherGlass = 31,
	CosmicFabric = 32,
	GoldenRipple = 33,
	Shield = 34,
	Count = 35,
	EAresSurfaceType_MAX = 36
};

// Enum ShooterGame.EAresAutomationInput
enum class EAresAutomationInput : uint8 {
	PrimaryTrigger = 0,
	SecondaryTrigger = 1,
	Reload = 2,
	ZoomToggle = 3,
	FirstEquipInput = 4,
	EquipPrimary = 4,
	EquipSecondary = 5,
	EquipMelee = 6,
	EquipGrenade = 7,
	EquipQ = 8,
	EquipE = 9,
	EquipUltimate = 10,
	EquipTotem = 11,
	LastEquipInput = 11,
	Count = 12,
	EAresAutomationInput_MAX = 13
};

// Enum ShooterGame.EAresInterpolationFunction
enum class EAresInterpolationFunction : uint8 {
	Linear = 0,
	Logarithmic = 1,
	EaseIn = 2,
	EaseOut = 3,
	EaseInEaseOut = 4,
	EAresInterpolationFunction_MAX = 5
};

// Enum ShooterGame.EAresEquippableAfterUseType
enum class EAresEquippableAfterUseType : uint8 {
	DoNothing = 0,
	EquipFirstWeapon = 1,
	EquipLastEquippedWeapon = 2,
	Count = 3,
	EAresEquippableAfterUseType_MAX = 4
};

// Enum ShooterGame.EAresMovementTypeQuery
enum class EAresMovementTypeQuery : uint8 {
	AllowLocalChecks = 0,
	ServerViewOnly = 1,
	EAresMovementTypeQuery_MAX = 2
};

// Enum ShooterGame.EAresCoordinateSpace
enum class EAresCoordinateSpace : uint8 {
	WorldSpace = 0,
	PlayerSpace = 1,
	EAresCoordinateSpace_MAX = 2
};

// Enum ShooterGame.EAresBodySection
enum class EAresBodySection : uint8 {
	BodySection_Torso = 0,
	BodySection_Head = 1,
	BodySection_LeftArm = 2,
	BodySection_LowerLeftArm = 3,
	BodySection_RightArm = 4,
	BodySection_LowerRightArm = 5,
	BodySection_LeftLeg = 6,
	BodySection_RightLeg = 7,
	BodySection_Count = 8,
	BodySection_Invalid = 254,
	EAresBodySection_MAX = 255
};

// Enum ShooterGame.CharacterRange
enum class CharacterRange : uint8 {
	None = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Count = 4,
	CharacterRange_MAX = 5
};

// Enum ShooterGame.EMegamapCalloutsVisibility
enum class EMegamapCalloutsVisibility : uint8 {
	NeverVisible = 0,
	VisibleInPreRound = 1,
	AlwaysVisible = 2,
	Count = 3,
	EMegamapCalloutsVisibility_MAX = 4
};

// Enum ShooterGame.EAresBombStates
enum class EAresBombStates : uint8 {
	AresBombState_NotSpawned = 0,
	AresBombState_Spawned = 1,
	AresBombState_OnGround = 2,
	AresBombState_InHands = 3,
	AresBombState_Planted = 4,
	AresBombState_Exploded = 5,
	AresBombState_Defused = 6,
	AresBombState_Count = 7,
	AresBombState_MAX = 8
};

// Enum ShooterGame.EAresTeamTargeting
enum class EAresTeamTargeting : uint8 {
	TeamTargeting_ApplyToEveryone = 0,
	TeamTargeting_ApplyToFriends = 1,
	TeamTargeting_ApplyToEnemies = 2,
	TeamTargeting_ApplyToSelfAndEnemies = 3,
	TeamTargeting_ApplyToNoone = 4,
	TeamTargeting_Count = 5,
	TeamTargeting_MAX = 6
};

// Enum ShooterGame.EAresProgressionType
enum class EAresProgressionType : uint8 {
	Money = 0,
	XP = 1,
	Energy = 2,
	Count = 3,
	EAresProgressionType_MAX = 4
};

// Enum ShooterGame.ERoundKills
enum class ERoundKills : uint8 {
	None = 0,
	Single = 1,
	Double = 2,
	Triple = 3,
	Quadra = 4,
	Penta = 5,
	Overkill = 6,
	Count = 7,
	ERoundKills_MAX = 8
};

// Enum ShooterGame.EAresTeamRoundResult
enum class EAresTeamRoundResult : uint8 {
	Win = 0,
	Loss = 1,
	Tie = 2,
	EAresTeamRoundResult_MAX = 3
};

// Enum ShooterGame.EAresOrientation
enum class EAresOrientation : uint8 {
	AresOrientation_Front = 0,
	AresOrientation_Back = 1,
	AresOrientation_Left = 2,
	AresOrientation_Right = 3,
	AresOrientation_Count = 4,
	AresOrientation_Invalid = 254,
	AresOrientation_MAX = 255
};

// Enum ShooterGame.EAresRoundOutcome
enum class EAresRoundOutcome : uint8 {
	Elimination = 0,
	Defuse = 1,
	Detonate = 2,
	TimeExpired = 3,
	Cheat = 4,
	Surrendered = 5,
	RoundOutcome_Count = 6,
	Invalid = 7,
	EAresRoundOutcome_MAX = 8
};

// Enum ShooterGame.EAresParamType
enum class EAresParamType : uint8 {
	Scalar = 0,
	Vector = 1,
	Attachments = 2,
	Count = 3,
	Invalid = 254,
	EAresParamType_MAX = 255
};

// Enum ShooterGame.EAresImpactEffectHitspace
enum class EAresImpactEffectHitspace : uint8 {
	ShooterPerspective = 0,
	VictimPerspective = 1,
	ThirdPersonPerspective = 2,
	NUM_HITSPACES = 3,
	EAresImpactEffectHitspace_MAX = 4
};

// Enum ShooterGame.EMinimapVisibleReason
enum class EMinimapVisibleReason : uint8 {
	ObserverToggle = 0,
	Megamap = 1,
	MapTargetting = 2,
	Count = 3,
	EMinimapVisibleReason_MAX = 4
};

// Enum ShooterGame.EShopScreenInitOption
enum class EShopScreenInitOption : uint8 {
	Menu = 0,
	Popup = 1,
	Count = 2,
	EShopScreenInitOption_MAX = 3
};

// Enum ShooterGame.EProjectileMoveState
enum class EProjectileMoveState : uint8 {
	Moving = 0,
	Stopped = 1,
	Count = 2,
	EProjectileMoveState_MAX = 3
};

// Enum ShooterGame.ESkinUpgradeState
enum class ESkinUpgradeState : uint8 {
	SUS_NEVER_UPGRADEABLE = 0,
	SUS_SKIN_NOT_OWNED = 1,
	SUS_FULLY_UPGRADED = 2,
	SUS_UPGRADE_NOT_AFFORDABLE = 3,
	SUS_UPGRADE_AVAILABLE = 4,
	SUS_UPGRADE_REQUIREMENTS_NOT_MET = 5,
	SUS_VARIANT_AVAILABLE = 6,
	SUS_SELECT_VARIANT = 7,
	SUS_VARIANT_NOT_AFFORDABLE = 8,
	SUS_DISABLED = 9,
	SUS_MAX = 10
};

// Enum ShooterGame.ESniperCrosshairMaterialType
enum class ESniperCrosshairMaterialType : uint8 {
	Static = 0,
	CenterDot = 1,
	ESniperCrosshairMaterialType_MAX = 2
};

// Enum ShooterGame.ESocialPanelCategory
enum class ESocialPanelCategory : uint8 {
	Invalid = 0,
	Online = 1,
	Offline = 2,
	Favorite = 3,
	OtherGame = 4,
	Count = 5,
	ESocialPanelCategory_MAX = 6
};

// Enum ShooterGame.EAresSocialPlayerCategory
enum class EAresSocialPlayerCategory : uint8 {
	Invalid = 0,
	OnlineInParty = 1,
	OnlineInOtherGame = 2,
	Offline = 3,
	Hidden = 4,
	Count = 5,
	EAresSocialPlayerCategory_MAX = 6
};

// Enum ShooterGame.ESocialViewControllerUpdatePolicy
enum class ESocialViewControllerUpdatePolicy : uint8 {
	Unlimited = 0,
	Scheduled = 1,
	Never = 2,
	ESocialViewControllerUpdatePolicy_MAX = 3
};

// Enum ShooterGame.ESplineMovementSpeedUnit
enum class ESplineMovementSpeedUnit : uint8 {
	WorldUnitsPerSecond = 0,
	SplineInputKeysPerSecond = 1,
	Count = 2,
	ESplineMovementSpeedUnit_MAX = 3
};

// Enum ShooterGame.ESplitBodyRotationState
enum class ESplitBodyRotationState : uint8 {
	Inactive = 0,
	RotatingUpperBody = 1,
	RecenteringLowerBody = 2,
	SpecialTurnState = 3,
	BlendingOut = 4,
	ESplitBodyRotationState_MAX = 5
};

// Enum ShooterGame.EAresSprayCategory
enum class EAresSprayCategory : uint8 {
	Default = 0,
	Contextual = 1,
	EAresSprayCategory_MAX = 2
};

// Enum ShooterGame.EStabilityType
enum class EStabilityType : uint8 {
	Error = 0,
	PitchRecoil = 1,
	YawRecoil = 2,
	Count = 3,
	EStabilityType_MAX = 4
};

// Enum ShooterGame.EYawChangeDirection
enum class EYawChangeDirection : uint8 {
	Left = 0,
	Right = 1,
	Neutral = 2,
	Count = 3,
	EYawChangeDirection_MAX = 4
};

// Enum ShooterGame.EDecayBehaviorBelowDesired
enum class EDecayBehaviorBelowDesired : uint8 {
	MatchDesired = 0,
	StayAtCurrent = 1,
	Decay = 2,
	Count = 3,
	EDecayBehaviorBelowDesired_MAX = 4
};

// Enum ShooterGame.EStabilityInterpolationVariable
enum class EStabilityInterpolationVariable : uint8 {
	StabilityIndex = 0,
	Error = 1,
	PitchRecoil = 2,
	YawRecoil = 3,
	AccruedSwitchChance = 4,
	Count = 5,
	EStabilityInterpolationVariable_MAX = 6
};

// Enum ShooterGame.EStabilityInterpolationType
enum class EStabilityInterpolationType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInEaseOut = 3,
	Count = 4,
	EStabilityInterpolationType_MAX = 5
};

// Enum ShooterGame.EAresStabilityType
enum class EAresStabilityType : uint8 {
	Walking = 0,
	Running = 1,
	Jumping = 2,
	Crouching = 3,
	OnAscender = 4,
	Flying = 5,
	Count = 6,
	Invalid = 254,
	EAresStabilityType_MAX = 255
};

// Enum ShooterGame.EEligibleForJuiceOverrideStatus
enum class EEligibleForJuiceOverrideStatus : uint8 {
	NOT_OVERRIDEN = 0,
	ELIGIBLE = 1,
	NOT_ELIGIBLE = 2,
	EEligibleForJuiceOverrideStatus_MAX = 3
};

// Enum ShooterGame.ECAPOrderStatus
enum class ECAPOrderStatus : uint8 {
	UNKNOWN = 0,
	FAILED = 1,
	REFUNDED = 2,
	ROLLED_BACK = 3,
	FULFILLMENT_FAILED = 4,
	PAYMENT_FAILED = 5,
	ACCEPTED = 6,
	VALIDATED = 7,
	PAYMENT_SUCCESSFUL = 8,
	FULFILLMENT_SUCCESSFUL = 9,
	POST_PROCESS_ACTIONS_COMPLETE = 10,
	COMPLETE = 11,
	MERCHANT_PROCESSING_COMPLETE = 12,
	COUNT = 13,
	ECAPOrderStatus_MAX = 14
};

// Enum ShooterGame.EJuiceOrderRequestType
enum class EJuiceOrderRequestType : uint8 {
	INVALID = 0,
	CRAFT_ITEM = 1,
	CRAFT_PROGRESSION = 2,
	CRAFT_VARIANT = 3,
	COUNT = 4,
	EJuiceOrderRequestType_MAX = 5
};

// Enum ShooterGame.EEventType
enum class EEventType : uint8 {
	InspectItem = 0,
	InspectItemLevels = 1,
	InspectItemChroma = 2,
	PurchaseStart = 3,
	PurchaseConfirm = 4,
	PurchaseCancel = 5,
	PurchaseComplete = 6,
	RevealOffer = 7,
	Count = 8,
	EEventType_MAX = 9
};

// Enum ShooterGame.EOfferType
enum class EOfferType : uint8 {
	Unknown = 0,
	RotatingStore = 1,
	FeaturedStandalone = 2,
	FeaturedBundle = 3,
	NightMarket = 4,
	Juice = 5,
	Count = 6,
	EOfferType_MAX = 7
};

// Enum ShooterGame.ESpecialItemStatus
enum class ESpecialItemStatus : uint8 {
	DEFAULT = 0,
	PROMO = 1,
	COUNT = 2,
	ESpecialItemStatus_MAX = 3
};

// Enum ShooterGame.EStreamedVideoQuality
enum class EStreamedVideoQuality : uint8 {
	Default = 0,
	High = 1,
	Invalid = 2,
	Count = 3,
	EStreamedVideoQuality_MAX = 4
};

// Enum ShooterGame.ESubDataBlueprintLibrary_CastResult
enum class ESubDataBlueprintLibrary_CastResult : uint8 {
	Then = 0,
	Failed = 1,
	ESubDataBlueprintLibrary_MAX = 2
};

// Enum ShooterGame.EXPBoostType
enum class EXPBoostType : uint8 {
	Invalid = 0,
	BaseOnly = 1,
	BaseAndMission = 2,
	Count = 3,
	EXPBoostType_MAX = 4
};

// Enum ShooterGame.EQueuedMessageType
enum class EQueuedMessageType : uint8 {
	Event = 0,
	Log = 1,
	Metric = 2,
	EQueuedMessageType_MAX = 3
};

// Enum ShooterGame.ESampleLevel
enum class ESampleLevel : uint8 {
	Server = 0,
	Client = 1,
	ESampleLevel_MAX = 2
};

// Enum ShooterGame.ETextChatInitializationState
enum class ETextChatInitializationState : uint8 {
	NotInitialized = 0,
	PendingSession = 1,
	Ready = 2,
	Failed = 3,
	ETextChatInitializationState_MAX = 4
};

// Enum ShooterGame.ETextChatRoomConnectionState
enum class ETextChatRoomConnectionState : uint8 {
	ShouldConnect = 0,
	Connecting = 1,
	Connected = 2,
	NotConnecting = 3,
	ETextChatRoomConnectionState_MAX = 4
};

// Enum ShooterGame.EThematicCategory
enum class EThematicCategory : uint8 {
	Alien = 0,
	Artistic = 1,
	Clean = 2,
	Cultural = 3,
	Edgy = 4,
	Elemental = 5,
	ESports = 6,
	Fantasy = 7,
	Graphic = 8,
	Gritty = 9,
	LoreBased = 10,
	RealWorld = 11,
	Retro = 12,
	SciFi = 13,
	Stylish = 14,
	Whimsical = 15,
	Count = 16,
	EThematicCategory_MAX = 17
};

// Enum ShooterGame.EAresTimerDirection
enum class EAresTimerDirection : uint8 {
	AfterStateStart = 0,
	BeforeStateEnd = 1,
	Count = 2,
	Invalid = 254,
	EAresTimerDirection_MAX = 255
};

// Enum ShooterGame.ETransitionWidgetType
enum class ETransitionWidgetType : uint8 {
	Invalid = 0,
	None = 1,
	Default = 2,
	TransitionToPregame = 3,
	TransitionToInGame = 4,
	TransitionToMainMenu = 5,
	Count = 6,
	ETransitionWidgetType_MAX = 7
};

// Enum ShooterGame.EUIActionType
enum class EUIActionType : uint8 {
	Click = 0,
	Invalid = 1,
	EUIActionType_MAX = 2
};

// Enum ShooterGame.EViewTargetSearchDirection
enum class EViewTargetSearchDirection : uint8 {
	Next = 0,
	Previous = 1,
	Count = 2,
	EViewTargetSearchDirection_MAX = 3
};

// Enum ShooterGame.EAttemptQueueVoteResult
enum class EAttemptQueueVoteResult : uint8 {
	Queued = 0,
	Active = 1,
	Invalid = 2,
	AlreadyQueued = 3,
	EAttemptQueueVoteResult_MAX = 4
};

// Enum ShooterGame.EWallSectionPhase
enum class EWallSectionPhase : uint8 {
	Uninitalized = 0,
	Sectioning = 1,
	Extending = 2,
	Building = 3,
	Finalizing = 4,
	Finished = 5,
	Count = 6,
	EWallSectionPhase_MAX = 7
};

// Enum ShooterGame.EWidgetVisibilityState
enum class EWidgetVisibilityState : uint8 {
	Visible = 0,
	Hidden = 1,
	Collapsed = 2,
	EWidgetVisibilityState_MAX = 3
};

// Enum ShooterGame.EWidgetLayoutSettingName
enum class EWidgetLayoutSettingName : uint8 {
	WalkModeThreshold = 0,
	AimPassthrough = 1,
	DeadZoneThreshold = 2,
	SprintLockThreshold = 3,
	SprintLockActivationConeAngle = 4,
	AutoADS = 5,
	AutoScope = 6,
	FireOnReleaseSnipers = 7,
	FireOnReleaseOther = 8,
	MovementPassthrough = 9,
	WalkWhileFiring = 10,
	AutoRefireOnHold = 11,
	UseButton_PlantDefuse = 12,
	WeaponDropThreshold = 13,
	JumpCrouchJumpScale = 14,
	JumpCrouchCrouchScale = 15,
	JumpCrouchWidthScale = 16,
	JumpCrouchSwipeZoneHeight = 17,
	WS_UseStaticLayout = 18,
	WS_InvertFlyoutDirection = 19,
	AlwaysShowUse = 20,
	WS_UseWeaponCycling = 21,
	WS_HotswapToMelee = 22,
	WS_SpikeWidth = 23,
	WS_MeleeWidth = 24,
	HideWhenInactive = 25,
	BurstFire = 26,
	EWidgetLayoutSettingName_MAX = 27
};

// Enum ShooterGame.EWildcardBlueprintLibrary_CastResult
enum class EWildcardBlueprintLibrary_CastResult : uint8 {
	Then = 0,
	Failed = 1,
	EWildcardBlueprintLibrary_MAX = 2
};

// Enum ShooterGame.EZoomTimer
enum class EZoomTimer : uint8 {
	Transition = 0,
	Cooldown = 1,
	CosmeticZoomInPercentTrigger = 2,
	Count = 3,
	EZoomTimer_MAX = 4
};

// Enum ShooterGame.EZoomTransitionState
enum class EZoomTransitionState : uint8 {
	Transitioning = 0,
	OnCooldown = 1,
	Completed = 2,
	EZoomTransitionState_MAX = 3
};

// Enum ShooterGame.EZoomCooldownOption
enum class EZoomCooldownOption : uint8 {
	ApplyCooldownAfterZoom = 0,
	NoCooldown = 1,
	Count = 2,
	EZoomCooldownOption_MAX = 3
};

// Enum ShooterGame.EZoomComponentType
enum class EZoomComponentType : uint8 {
	CameraZoom = 0,
	FirstPersonMesh = 1,
	Count = 2,
	Invalid = 254,
	EZoomComponentType_MAX = 255
};

// Enum ShooterGame.EZoomFiringBehavior
enum class EZoomFiringBehavior : uint8 {
	None = 0,
	FiringBlocks = 1,
	FiringCooldownBlocks = 2,
	Count = 3,
	EZoomFiringBehavior_MAX = 4
};

// Enum ShooterGame.EZoomStateLevel
enum class EZoomStateLevel : uint8 {
	Disabled = 0,
	Unzoomed = 1,
	ZoomLevel1 = 2,
	ZoomLevel2 = 3,
	Count = 4,
	EZoomStateLevel_MAX = 5
};

// Enum ShooterGame.EZoomMultiplierType
enum class EZoomMultiplierType : uint8 {
	ADS = 0,
	Sniper = 1,
	EZoomMultiplierType_MAX = 2
};

// ScriptStruct ShooterGame.GenericSourceDelegate_Unused
// Size: 0x01 (Inherited: 0x00)
struct FGenericSourceDelegate_Unused {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.WildcardDelegates_Unused
// Size: 0x01 (Inherited: 0x00)
struct FWildcardDelegates_Unused {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AresMonitorInfo
// Size: 0x78 (Inherited: 0x00)
struct FAresMonitorInfo {
	struct FString Name; // 0x00(0x10)
	bool bIsPrimary; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FAresResolutionInfo> ResolutionInfo; // 0x18(0x10)
	int32_t NativeWidth; // 0x28(0x04)
	int32_t NativeHeight; // 0x2c(0x04)
	int32_t MaxResolutionWidth; // 0x30(0x04)
	int32_t MaxResolutionHeight; // 0x34(0x04)
	char pad_38[0x40]; // 0x38(0x40)
};

// ScriptStruct ShooterGame.AresResolutionInfo
// Size: 0x0c (Inherited: 0x00)
struct FAresResolutionInfo {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	int32_t RefreshRate; // 0x08(0x04)
};

// ScriptStruct ShooterGame.AresAssist
// Size: 0x10 (Inherited: 0x00)
struct FAresAssist {
	enum class EAresAssistType AssistType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AShooterPlayerState* Assister; // 0x08(0x08)
};

// ScriptStruct ShooterGame.FiringResults
// Size: 0x18 (Inherited: 0x00)
struct FFiringResults {
	struct FVector FiringDirection; // 0x00(0x0c)
	struct FVector StartLocation; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.DisplayName
// Size: 0x30 (Inherited: 0x00)
struct FDisplayName {
	struct FString FullName; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
};

// ScriptStruct ShooterGame.CinematicCameraData
// Size: 0x50 (Inherited: 0x00)
struct FCinematicCameraData {
	struct FString Name; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct FVector Forward; // 0x28(0x0c)
	struct FBox ViewBox; // 0x34(0x1c)
};

// ScriptStruct ShooterGame.AresTrackedReward
// Size: 0x50 (Inherited: 0x00)
struct FAresTrackedReward {
	struct FAresGameReward TotalReward; // 0x00(0x24)
	struct FName RewardName; // 0x24(0x0c)
	struct FText LocalizedRewardName; // 0x30(0x18)
	int32_t InstancesOfReward; // 0x48(0x04)
	enum class EAresRewardGrantStrategy RewardGrantStrategy; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct ShooterGame.AresGameReward
// Size: 0x24 (Inherited: 0x00)
struct FAresGameReward {
	int32_t Rewards[0x9]; // 0x00(0x24)
};

// ScriptStruct ShooterGame.AresMatchResult
// Size: 0x10 (Inherited: 0x00)
struct FAresMatchResult {
	struct UBaseTeamComponent* WinningTeam; // 0x00(0x08)
	enum class EMatchCompletionState CompletionState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.AresGunRequest
// Size: 0x10 (Inherited: 0x00)
struct FAresGunRequest {
	struct UAresPurchasableEquippable* RequestedGun; // 0x00(0x08)
	enum class EAresGunRequestState RequestState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.SpawnPointData
// Size: 0x78 (Inherited: 0x00)
struct FSpawnPointData {
	struct AShooterTeamStart* SpawnPoint; // 0x00(0x08)
	struct TMap<enum class EAresTeamRole, struct FSpawnPointTeamRoleData> TeamRoleData; // 0x08(0x50)
	int32_t ArrayIndex; // 0x58(0x04)
	float LastUpdateTimestamp; // 0x5c(0x04)
	struct TArray<int32_t> SpawnPointIndicesInVision; // 0x60(0x10)
	int32_t NumTicksUntilUpdate; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ShooterGame.SpawnPointTeamRoleData
// Size: 0x0c (Inherited: 0x00)
struct FSpawnPointTeamRoleData {
	float Score; // 0x00(0x04)
	int32_t NumVisibleEnemyCharacters; // 0x04(0x04)
	bool bSpawnPointDataStale; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.PartyMemberSeasonalInfo
// Size: 0x30 (Inherited: 0x00)
struct FPartyMemberSeasonalInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	int32_t RankTier; // 0x14(0x04)
	int32_t CapstoneTier; // 0x18(0x04)
	int32_t CapstoneWins; // 0x1c(0x04)
	struct TArray<int32_t> TopWins; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PingInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingInfo {
	struct FString GamePodID; // 0x00(0x10)
	int32_t Ping; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.UnorderedMapModelChangeEventData
// Size: 0x38 (Inherited: 0x00)
struct FUnorderedMapModelChangeEventData {
	char pad_0[0x30]; // 0x00(0x30)
	bool bIsReset; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.PreferredGamePodMap
// Size: 0x50 (Inherited: 0x00)
struct FPreferredGamePodMap {
	struct TMap<struct FString, bool> PreferredGamePods; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentData
// Size: 0x20 (Inherited: 0x00)
struct FTournamentData {
	struct FString RosterID; // 0x00(0x10)
	struct FString TournamentID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresTouchEventInfo
// Size: 0x88 (Inherited: 0x00)
struct FAresTouchEventInfo {
	struct FPointerEvent ParentPointerEvent; // 0x00(0x78)
	enum class ETouchIndex TouchIndex; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FVector2D TouchLocation; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ShooterGame.AresTouchTrackingData
// Size: 0xa8 (Inherited: 0x00)
struct FAresTouchTrackingData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	enum class EAresTouchState TouchState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D Location; // 0x04(0x08)
	struct FVector2D StartLocation; // 0x0c(0x08)
	struct FVector2D PreviousLocation; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAresTouchEventInfo TouchInfo; // 0x20(0x88)
};

// ScriptStruct ShooterGame.AresTouchHoldGestureData
// Size: 0x28 (Inherited: 0x00)
struct FAresTouchHoldGestureData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Location; // 0x04(0x08)
	struct FVector2D StartLocation; // 0x0c(0x08)
	enum class EAresTouchState TouchState; // 0x14(0x01)
	char pad_15[0x13]; // 0x15(0x13)
};

// ScriptStruct ShooterGame.AresTouchDoubleTapGestureData
// Size: 0x18 (Inherited: 0x00)
struct FAresTouchDoubleTapGestureData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Location; // 0x04(0x08)
	struct FVector2D StartLocation; // 0x0c(0x08)
	bool bHold; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.TriggerInput
// Size: 0x02 (Inherited: 0x00)
struct FTriggerInput {
	enum class EAresEquippableInput TriggerInput; // 0x00(0x01)
	enum class EAresEquippableInputAction TriggerAction; // 0x01(0x01)
};

// ScriptStruct ShooterGame.ForceModuleHandle
// Size: 0x08 (Inherited: 0x00)
struct FForceModuleHandle {
	uint32_t HandleNumber; // 0x00(0x04)
	enum class EForceModuleType ModuleType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.EquippableAttachmentHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableAttachmentHandles {
	struct TMap<struct UEquippableAttachmentDataAsset*, struct UEquippableAttachmentHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinChromaHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinChromaHandles {
	struct TMap<struct UEquippableSkinChromaDataAsset*, struct UEquippableSkinChromaHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinLevelHandles {
	struct TMap<struct UEquippableSkinLevelDataAsset*, struct UEquippableSkinLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinHandles {
	struct TMap<struct UEquippableSkinDataAsset*, struct UEquippableSkinHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableHandles {
	struct TMap<struct UEquippableDataAsset*, struct UEquippableHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SprayHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayHandles {
	struct TMap<struct USprayDataAsset*, struct USprayHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SprayLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayLevelHandles {
	struct TMap<struct USprayLevelDataAsset*, struct USprayLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SprayEquipSlotHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayEquipSlotHandles {
	struct TMap<struct USprayEquipSlotDataAsset*, struct USprayEquipSlotHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CharacterRoleHandles
// Size: 0x50 (Inherited: 0x00)
struct FCharacterRoleHandles {
	struct TMap<struct UCharacterRoleDataAsset*, struct UCharacterRoleHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CharacterHandles
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHandles {
	struct TMap<struct UCharacterDataAsset*, struct UCharacterHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ThemeHandles
// Size: 0x50 (Inherited: 0x00)
struct FThemeHandles {
	struct TMap<struct UThemeDataAsset*, struct UThemeHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CurrencyHandles
// Size: 0x50 (Inherited: 0x00)
struct FCurrencyHandles {
	struct TMap<struct UCurrencyDataAsset*, struct UCurrencyHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.JuiceBoxHandles
// Size: 0x50 (Inherited: 0x00)
struct FJuiceBoxHandles {
	struct TMap<struct UJuiceBoxDataAsset*, struct UJuiceBoxHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableCharmHandles {
	struct TMap<struct UEquippableCharmDataAsset*, struct UEquippableCharmHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableCharmLevelHandles {
	struct TMap<struct UEquippableCharmLevelDataAsset*, struct UEquippableCharmLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmInstanceHandles
// Size: 0x10 (Inherited: 0x00)
struct FEquippableCharmInstanceHandles {
	struct TArray<struct UEquippableCharmInstanceHandle*> Handles; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MapHandles
// Size: 0x50 (Inherited: 0x00)
struct FMapHandles {
	struct TMap<struct UMapDataAsset*, struct UMapHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.GameModeHandles
// Size: 0x50 (Inherited: 0x00)
struct FGameModeHandles {
	struct TMap<struct UGameModeDataAsset*, struct UGameModeHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MatchmakingQueueHandles
// Size: 0x50 (Inherited: 0x00)
struct FMatchmakingQueueHandles {
	struct TMap<struct UMatchmakingQueueDataAsset*, struct UMatchmakingQueueHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PlayerCardHandles
// Size: 0x50 (Inherited: 0x00)
struct FPlayerCardHandles {
	struct TMap<struct UPlayerCardDataAsset*, struct UPlayerCardHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.StorefrontItemHandles
// Size: 0x50 (Inherited: 0x00)
struct FStorefrontItemHandles {
	struct TMap<struct UStorefrontItemDataAsset*, struct UStorefrontItemHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MissionHandles
// Size: 0x50 (Inherited: 0x00)
struct FMissionHandles {
	struct TMap<struct UMissionDataAsset*, struct UMissionHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ObjectiveHandles
// Size: 0x50 (Inherited: 0x00)
struct FObjectiveHandles {
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ArmorHandles
// Size: 0x50 (Inherited: 0x00)
struct FArmorHandles {
	struct TMap<struct UArmorDataAsset*, struct UArmorHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PlayerTitleHandles
// Size: 0x50 (Inherited: 0x00)
struct FPlayerTitleHandles {
	struct TMap<struct UPlayerTitleDataAsset*, struct UPlayerTitleHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContractV2Handles
// Size: 0x50 (Inherited: 0x00)
struct FContractV2Handles {
	struct TMap<struct UContractDataAssetV2*, struct UContractV2Handle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EventHandles
// Size: 0x50 (Inherited: 0x00)
struct FEventHandles {
	struct TMap<struct UEventDataAsset*, struct UEventHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContentTierHandles
// Size: 0x50 (Inherited: 0x00)
struct FContentTierHandles {
	struct TMap<struct UContentTierDataAsset*, struct UContentTierHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FSeasonHandles {
	struct TMap<struct USeasonDataAsset*, struct USeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CompetitiveSeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FCompetitiveSeasonHandles {
	struct TMap<struct UCompetitiveSeasonDataAsset*, struct UCompetitiveSeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierSeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FPremierSeasonHandles {
	struct TMap<struct UPremierSeasonDataAsset*, struct UPremierSeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SubscriptionHandles
// Size: 0x50 (Inherited: 0x00)
struct FSubscriptionHandles {
	struct TMap<struct USubscriptionDataAsset*, struct USubscriptionHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ActRankBorderHandles
// Size: 0x50 (Inherited: 0x00)
struct FActRankBorderHandles {
	struct TMap<struct UActRankBorderDataAsset*, struct UActRankBorderHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.LevelBorderHandles
// Size: 0x50 (Inherited: 0x00)
struct FLevelBorderHandles {
	struct TMap<struct ULevelBorderDataAsset*, struct ULevelBorderHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.BaseHandles
// Size: 0x50 (Inherited: 0x00)
struct FBaseHandles {
	struct TMap<struct UAresBasePrimaryDataAsset*, struct UBaseHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentsTeamIconHandles
// Size: 0x50 (Inherited: 0x00)
struct FTournamentsTeamIconHandles {
	struct TMap<struct UTournamentsTeamIconDataAsset*, struct UTournamentsTeamIconHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyHandles
// Size: 0x50 (Inherited: 0x00)
struct FMassRewardsCeremonyHandles {
	struct TMap<struct UMassRewardsCeremonyDataAsset*, struct UMassRewardsCeremonyHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.OrderResponse
// Size: 0xc0 (Inherited: 0x00)
struct FOrderResponse {
	struct FGuid OrderID; // 0x00(0x10)
	struct FString Status; // 0x10(0x10)
	struct FOrderRewards OrderRewards; // 0x20(0xa0)
};

// ScriptStruct ShooterGame.OrderRewards
// Size: 0xa0 (Inherited: 0x00)
struct FOrderRewards {
	struct TArray<struct FOrderReward> SkinLevels; // 0x00(0x10)
	struct TArray<struct FOrderReward> Variants; // 0x10(0x10)
	struct TArray<struct FOrderReward> Sprays; // 0x20(0x10)
	struct TArray<struct FOrderReward> Cards; // 0x30(0x10)
	struct TArray<struct FOrderReward> Buddies; // 0x40(0x10)
	struct TArray<struct FOrderReward> GunShards; // 0x50(0x10)
	struct TArray<struct FOrderReward> Titles; // 0x60(0x10)
	struct TArray<struct FOrderReward> Characters; // 0x70(0x10)
	struct TArray<struct FOrderReward> JuiceBoxes; // 0x80(0x10)
	struct TArray<struct FOrderReward> Currencies; // 0x90(0x10)
};

// ScriptStruct ShooterGame.OrderReward
// Size: 0x14 (Inherited: 0x00)
struct FOrderReward {
	struct FGuid RewardID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AmbassadorError
// Size: 0x38 (Inherited: 0x00)
struct FAmbassadorError {
	int32_t HTTPStatus; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ErrorCode; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
	struct FString Details; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AntiAddictionToken
// Size: 0x10 (Inherited: 0x00)
struct FAntiAddictionToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSSuccessData
// Size: 0x20 (Inherited: 0x00)
struct FAVSSuccessData {
	enum class EAVSConfirmationResponseType ResponseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime PinExpiryDateTime; // 0x08(0x08)
	struct FString PhoneNumberObfuscated; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PurchaseResponse
// Size: 0x10 (Inherited: 0x00)
struct FPurchaseResponse {
	struct FGuid OrderID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RedeemTicketRewardsResponse
// Size: 0x68 (Inherited: 0x00)
struct FRedeemTicketRewardsResponse {
	struct FDailyTicketPlayer Player; // 0x00(0x58)
	struct TArray<struct FTicketReward> Rewards; // 0x58(0x10)
};

// ScriptStruct ShooterGame.TicketReward
// Size: 0x2c (Inherited: 0x00)
struct FTicketReward {
	enum class EDailyTicketRewardType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
	struct FGuid TicketID; // 0x08(0x10)
	struct FDailyTicketRewardSlot Slot; // 0x18(0x14)
};

// ScriptStruct ShooterGame.DailyTicketRewardSlot
// Size: 0x14 (Inherited: 0x00)
struct FDailyTicketRewardSlot {
	struct FGuid ID; // 0x00(0x10)
	bool IsRedeemed; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.DailyTicketPlayer
// Size: 0x58 (Inherited: 0x00)
struct FDailyTicketPlayer {
	struct FDailyTicket Ticket; // 0x00(0x48)
	struct TArray<struct FDailyTicketMatches> ProcessedMatches; // 0x48(0x10)
};

// ScriptStruct ShooterGame.DailyTicketMatches
// Size: 0x60 (Inherited: 0x00)
struct FDailyTicketMatches {
	struct FGuid ID; // 0x00(0x10)
	struct TMap<struct FName, char> Charges; // 0x10(0x50)
};

// ScriptStruct ShooterGame.DailyTicket
// Size: 0x48 (Inherited: 0x00)
struct FDailyTicket {
	int64_t Version; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	uint32_t RemainingLifetimeSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FDailyTicketRewardSlot> RewardSlots; // 0x20(0x10)
	struct FTicketResourceSummary Resources; // 0x30(0x03)
	bool NewTicket; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FGuid> FailedRedeemSlots; // 0x38(0x10)
};

// ScriptStruct ShooterGame.TicketResourceSummary
// Size: 0x03 (Inherited: 0x00)
struct FTicketResourceSummary {
	char AvailableRedeems; // 0x00(0x01)
	char ChargesRemainder; // 0x01(0x01)
	char CatchUpCredits; // 0x02(0x01)
};

// ScriptStruct ShooterGame.MatchDetailsDTO
// Size: 0xe8 (Inherited: 0x00)
struct FMatchDetailsDTO {
	struct FMatchInfoDTO MatchInfo; // 0x00(0xb8)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0xb8(0x10)
	struct TArray<struct FTeamDetailsDTO> Teams; // 0xc8(0x10)
	struct TArray<struct FRoundResultDTO> RoundResults; // 0xd8(0x10)
};

// ScriptStruct ShooterGame.RoundResultDTO
// Size: 0xa0 (Inherited: 0x00)
struct FRoundResultDTO {
	struct FName WinningTeam; // 0x00(0x0c)
	int32_t RoundNum; // 0x0c(0x04)
	struct FString RoundResult; // 0x10(0x10)
	struct FString RoundCeremony; // 0x20(0x10)
	struct FString BombPlanter; // 0x30(0x10)
	int32_t PlantRoundTime; // 0x40(0x04)
	struct FMapLocationDTO PlantLocation; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FPlayerLocationDTO> PlantPlayerLocations; // 0x50(0x10)
	struct FString BombDefuser; // 0x60(0x10)
	int32_t DefuseRoundTime; // 0x70(0x04)
	struct FMapLocationDTO DefuseLocation; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FPlayerLocationDTO> DefusePlayerLocations; // 0x80(0x10)
	struct TArray<struct FPlayerStatDTO> PlayerStats; // 0x90(0x10)
};

// ScriptStruct ShooterGame.PlayerStatDTO
// Size: 0x1b8 (Inherited: 0x00)
struct FPlayerStatDTO {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FKillDetailsDTO> Kills; // 0x10(0x10)
	struct TArray<struct FPlayerRoundDamageDTOV2> Damage; // 0x20(0x10)
	int32_t Score; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FPlayerRoundEconomyInfoDTO Economy; // 0x38(0x40)
	struct FAbilityEffectDTO Ability; // 0x78(0x140)
};

// ScriptStruct ShooterGame.AbilityEffectDTO
// Size: 0x140 (Inherited: 0x00)
struct FAbilityEffectDTO {
	struct TMap<struct FString, int32_t> GrenadeEffects; // 0x00(0x50)
	struct TMap<struct FString, int32_t> Ability1Effects; // 0x50(0x50)
	struct TMap<struct FString, int32_t> Ability2Effects; // 0xa0(0x50)
	struct TMap<struct FString, int32_t> UltimateEffects; // 0xf0(0x50)
};

// ScriptStruct ShooterGame.PlayerRoundEconomyInfoDTO
// Size: 0x40 (Inherited: 0x00)
struct FPlayerRoundEconomyInfoDTO {
	struct FString Subject; // 0x00(0x10)
	int32_t LoadoutValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Weapon; // 0x18(0x10)
	struct FString Armor; // 0x28(0x10)
	int32_t Remaining; // 0x38(0x04)
	int32_t Spent; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.PlayerRoundDamageDTOV2
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRoundDamageDTOV2 {
	struct FString Receiver; // 0x00(0x10)
	int32_t Damage; // 0x10(0x04)
	int32_t Headshots; // 0x14(0x04)
	int32_t Bodyshots; // 0x18(0x04)
	int32_t Legshots; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.KillDetailsDTO
// Size: 0x80 (Inherited: 0x00)
struct FKillDetailsDTO {
	int64_t GameTime; // 0x00(0x08)
	int32_t RoundTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Killer; // 0x10(0x10)
	struct FString Victim; // 0x20(0x10)
	struct FMapLocationDTO VictimLocation; // 0x30(0x08)
	struct TArray<struct FString> Assistants; // 0x38(0x10)
	struct TArray<struct FPlayerLocationDTO> PlayerLocations; // 0x48(0x10)
	struct FDamageInfoDTO FinishingDamage; // 0x58(0x28)
};

// ScriptStruct ShooterGame.DamageInfoDTO
// Size: 0x28 (Inherited: 0x00)
struct FDamageInfoDTO {
	struct FString DamageType; // 0x00(0x10)
	struct FString DamageItem; // 0x10(0x10)
	bool bIsSecondaryFireMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.PlayerLocationDTO
// Size: 0x20 (Inherited: 0x00)
struct FPlayerLocationDTO {
	struct FMapLocationDTO Location; // 0x00(0x08)
	float ViewRadians; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Subject; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MapLocationDTO
// Size: 0x08 (Inherited: 0x00)
struct FMapLocationDTO {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct ShooterGame.TeamDetailsDTO
// Size: 0xa0 (Inherited: 0x00)
struct FTeamDetailsDTO {
	struct FName TeamID; // 0x00(0x0c)
	bool Won; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int64_t RoundsPlayed; // 0x10(0x08)
	int32_t RoundsWon; // 0x18(0x04)
	int32_t NumPoints; // 0x1c(0x04)
	struct FTournamentRosterInfo RosterInfo; // 0x20(0x80)
};

// ScriptStruct ShooterGame.TournamentRosterInfo
// Size: 0x80 (Inherited: 0x00)
struct FTournamentRosterInfo {
	struct FString RosterID; // 0x00(0x10)
	struct TArray<struct FTournamentRosterMember> Members; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Tag; // 0x30(0x10)
	struct FString Icon; // 0x40(0x10)
	struct FString PrimaryColor; // 0x50(0x10)
	struct FString SecondaryColor; // 0x60(0x10)
	struct FString TertiaryColor; // 0x70(0x10)
};

// ScriptStruct ShooterGame.TournamentRosterMember
// Size: 0x10 (Inherited: 0x00)
struct FTournamentRosterMember {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlayerDetailsDTO
// Size: 0xd0 (Inherited: 0x00)
struct FPlayerDetailsDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
	struct FName TeamID; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString PartyID; // 0x40(0x10)
	struct FGuid CharacterID; // 0x50(0x10)
	struct FPlayerStatsDTO Stats; // 0x60(0x38)
	int32_t CompetitiveTier; // 0x98(0x04)
	struct FGuid PlayerCard; // 0x9c(0x10)
	struct FGuid PlayerTitle; // 0xac(0x10)
	struct FGuid PreferredLevelBorder; // 0xbc(0x10)
	int32_t AccountLevel; // 0xcc(0x04)
};

// ScriptStruct ShooterGame.PlayerStatsDTO
// Size: 0x38 (Inherited: 0x00)
struct FPlayerStatsDTO {
	int32_t Score; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t RoundsPlayed; // 0x08(0x08)
	int32_t Kills; // 0x10(0x04)
	int32_t Deaths; // 0x14(0x04)
	int32_t Assists; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t PlaytimeMillis; // 0x20(0x08)
	struct FAbilityUsageDTO AbilityCasts; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AbilityUsageDTO
// Size: 0x10 (Inherited: 0x00)
struct FAbilityUsageDTO {
	int32_t GrenadeCasts; // 0x00(0x04)
	int32_t Ability1Casts; // 0x04(0x04)
	int32_t Ability2Casts; // 0x08(0x04)
	int32_t UltimateCasts; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.MatchInfoDTO
// Size: 0xb8 (Inherited: 0x00)
struct FMatchInfoDTO {
	struct FString MatchID; // 0x00(0x10)
	struct FString MapID; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	int32_t MatchType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GamePodID; // 0x38(0x10)
	struct FString GameVersion; // 0x48(0x10)
	int64_t GameLengthMillis; // 0x58(0x08)
	int64_t GameStartMillis; // 0x60(0x08)
	struct FString ProvisioningFlowID; // 0x68(0x10)
	enum class EProvisioningFlowID ProvisioningFlowEnum; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString QueueID; // 0x80(0x10)
	struct FString TournamentID; // 0x90(0x10)
	struct FGuid SeasonID; // 0xa0(0x10)
	bool IsCompleted; // 0xb0(0x01)
	bool IsRanked; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct ShooterGame.PatchNotes
// Size: 0x40 (Inherited: 0x00)
struct FPatchNotes {
	struct FString ID; // 0x00(0x10)
	struct FString BuildVersion; // 0x10(0x10)
	struct FString Language; // 0x20(0x10)
	struct TArray<struct FTopLevelPatchNoteElement> Content; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TopLevelPatchNoteElement
// Size: 0x38 (Inherited: 0x00)
struct FTopLevelPatchNoteElement {
	struct FString Type; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	bool Title; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FPatchNoteListItem> Items; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PatchNoteListItem
// Size: 0x20 (Inherited: 0x00)
struct FPatchNoteListItem {
	struct FString Type; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MUCMessage
// Size: 0xd0 (Inherited: 0x00)
struct FMUCMessage {
	struct FText Body; // 0x00(0x18)
	struct FString Pid; // 0x18(0x10)
	struct FString Time; // 0x28(0x10)
	struct FString Cid; // 0x38(0x10)
	struct FString ID; // 0x48(0x10)
	struct FText Name; // 0x58(0x18)
	bool Read; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString GameName; // 0x78(0x10)
	struct FString GameTag; // 0x88(0x10)
	enum class ETextChatRoomType MessageType; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString Type; // 0xa0(0x10)
	struct FString game_name; // 0xb0(0x10)
	struct FString game_tag; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.UnifiedChatMessage
// Size: 0xd8 (Inherited: 0x00)
struct FUnifiedChatMessage {
	struct FText SenderDisplayName; // 0x00(0x18)
	struct FString SenderSubject; // 0x18(0x10)
	bool SenderIsMe; // 0x28(0x01)
	enum class EMessageContentType ContentType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FText DisplayMessage; // 0x30(0x18)
	struct TArray<struct FMessagePart> MessageParts; // 0x48(0x10)
	struct TArray<struct FMessagePart> OriginalMessageParts; // 0x58(0x10)
	struct FDateTime Timestamp; // 0x68(0x08)
	enum class EAresAlliance SenderTeamAlliance; // 0x70(0x01)
	enum class EChatRoomType RoomType; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FName Team; // 0x74(0x0c)
	struct FString ConversationID; // 0x80(0x10)
	struct FString MessageID; // 0x90(0x10)
	struct FString RecipientDisplayName; // 0xa0(0x10)
	bool bRead; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString OriginatingSystem; // 0xb8(0x10)
	bool bNotificationShown; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UEmojiMapping* EmojiMapping; // 0xd0(0x08)
};

// ScriptStruct ShooterGame.MessagePart
// Size: 0x40 (Inherited: 0x00)
struct FMessagePart {
	enum class EMessagePartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FText NotificationTarget; // 0x18(0x18)
	struct FString EmojiKey; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PremierEligibility
// Size: 0x18 (Inherited: 0x00)
struct FPremierEligibility {
	struct FString Subject; // 0x00(0x10)
	bool AccountVerificationStatus; // 0x10(0x01)
	bool LevelRequirementStatus; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct ShooterGame.Roster
// Size: 0xf8 (Inherited: 0x00)
struct FRoster {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FString RosterID; // 0x20(0x10)
	int64_t Version; // 0x30(0x08)
	struct FString Realm; // 0x38(0x10)
	struct TArray<struct FRosterMember> Members; // 0x48(0x10)
	struct TArray<struct FRosterInvite> Invites; // 0x58(0x10)
	struct FRosterMetadata MetaData; // 0x68(0x70)
	struct TArray<struct FRosterLock> Locks; // 0xd8(0x10)
	int64_t UpdatedAt; // 0xe8(0x08)
	int64_t CreatedAt; // 0xf0(0x08)
};

// ScriptStruct ShooterGame.RosterLock
// Size: 0x30 (Inherited: 0x00)
struct FRosterLock {
	struct FString Name; // 0x00(0x10)
	struct FString ClientName; // 0x10(0x10)
	int64_t CreatedAt; // 0x20(0x08)
	int64_t ExpiresAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.RosterMetadata
// Size: 0x70 (Inherited: 0x00)
struct FRosterMetadata {
	struct FRosterVerifiedMetadata Verified; // 0x00(0x30)
	struct FRosterUnverifiedMetadata Unverified; // 0x30(0x40)
};

// ScriptStruct ShooterGame.RosterUnverifiedMetadata
// Size: 0x40 (Inherited: 0x00)
struct FRosterUnverifiedMetadata {
	struct FUnverifiedMetadataPersonalization Personalization; // 0x00(0x40)
};

// ScriptStruct ShooterGame.UnverifiedMetadataPersonalization
// Size: 0x40 (Inherited: 0x00)
struct FUnverifiedMetadataPersonalization {
	struct FString Icon; // 0x00(0x10)
	struct FString PrimaryColor; // 0x10(0x10)
	struct FString SecondaryColor; // 0x20(0x10)
	struct FString TertiaryColor; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RosterVerifiedMetadata
// Size: 0x30 (Inherited: 0x00)
struct FRosterVerifiedMetadata {
	struct FRosterProductAffinityMetadata ProductAffinity; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RosterProductAffinityMetadata
// Size: 0x30 (Inherited: 0x00)
struct FRosterProductAffinityMetadata {
	struct FString Name; // 0x00(0x10)
	struct FString GameShardZone; // 0x10(0x10)
	struct FString Affinity; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RosterInvite
// Size: 0x48 (Inherited: 0x00)
struct FRosterInvite {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString Puuid; // 0x30(0x10)
	int64_t CreatedAt; // 0x40(0x08)
};

// ScriptStruct ShooterGame.RosterMember
// Size: 0x30 (Inherited: 0x00)
struct FRosterMember {
	struct FString Puuid; // 0x00(0x10)
	struct FString Role; // 0x10(0x10)
	enum class ERosterMemberRole RoleEnum; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	int64_t CreatedAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.TournamentOverview
// Size: 0x68 (Inherited: 0x00)
struct FTournamentOverview {
	struct FTournament Tournament; // 0x00(0x48)
	struct TArray<struct FParticipant> Participants; // 0x48(0x10)
	struct TArray<struct FMatchup> Matchups; // 0x58(0x10)
};

// ScriptStruct ShooterGame.Matchup
// Size: 0x50 (Inherited: 0x00)
struct FMatchup {
	struct FString MatchupID; // 0x00(0x10)
	int64_t MatchupNumber; // 0x10(0x08)
	struct TArray<struct FMatchupParticipant> Participants; // 0x18(0x10)
	struct FString Status; // 0x28(0x10)
	bool Complete; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FMatchupGame> Games; // 0x40(0x10)
};

// ScriptStruct ShooterGame.MatchupGame
// Size: 0x70 (Inherited: 0x00)
struct FMatchupGame {
	struct FString GameId; // 0x00(0x10)
	struct FString MetaData; // 0x10(0x10)
	char pad_20[0x50]; // 0x20(0x50)
};

// ScriptStruct ShooterGame.MatchupParticipant
// Size: 0x30 (Inherited: 0x00)
struct FMatchupParticipant {
	struct FString ParticipantID; // 0x00(0x10)
	bool IsBye; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t Points; // 0x18(0x08)
	int64_t Seed; // 0x20(0x08)
	int64_t PreviousMatchupNumber; // 0x28(0x08)
};

// ScriptStruct ShooterGame.Participant
// Size: 0xd0 (Inherited: 0x00)
struct FParticipant {
	struct FString ParticipantID; // 0x00(0x10)
	int64_t Seed; // 0x10(0x08)
	int32_t TournamentPoints; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString MetaData; // 0x20(0x10)
	struct FParticipantInfo ParticipantInfo; // 0x30(0x90)
	struct FString CurrentMatchupID; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.ParticipantInfo
// Size: 0x90 (Inherited: 0x00)
struct FParticipantInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FRosterMetadata MetaData; // 0x20(0x70)
};

// ScriptStruct ShooterGame.Tournament
// Size: 0x48 (Inherited: 0x00)
struct FTournament {
	struct FString TournamentID; // 0x00(0x10)
	struct FString OrganizerID; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
	int32_t TournamentSize; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.VoiceSessionParticipant
// Size: 0x38 (Inherited: 0x00)
struct FVoiceSessionParticipant {
	int32_t Energy; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ID; // 0x08(0x10)
	bool IsMuted; // 0x18(0x01)
	bool IsSpeaking; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Name; // 0x20(0x10)
	int32_t Volume; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ViewTargetInfo
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetInfo {
	struct AActor* TargetActor; // 0x00(0x08)
	enum class EAresPlayerViewTargetMode Mode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.PregameCastVote
// Size: 0x28 (Inherited: 0x00)
struct FPregameCastVote {
	struct FString Subject; // 0x00(0x10)
	struct UMapDataAsset* Map; // 0x10(0x08)
	struct FName Team; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.PregameStep
// Size: 0x08 (Inherited: 0x00)
struct FPregameStep {
	int32_t Team; // 0x00(0x04)
	enum class EStepType StepType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.TournamentMetadata
// Size: 0x80 (Inherited: 0x00)
struct FTournamentMetadata {
	struct FString TournamentID; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FString EventID; // 0x20(0x10)
	struct TMap<struct FString, int64_t> Seeds; // 0x30(0x50)
};

// ScriptStruct ShooterGame.TournamentRosterMetadata
// Size: 0x50 (Inherited: 0x00)
struct FTournamentRosterMetadata {
	struct TMap<struct FString, struct FTournamentRosterInfo> RostersByPartyID; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AnimationCueSource_CueEventData
// Size: 0x10 (Inherited: 0x00)
struct FAnimationCueSource_CueEventData {
	int32_t SequenceNumber; // 0x00(0x04)
	struct FName CueName; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.ProgressModelState
// Size: 0x02 (Inherited: 0x00)
struct FProgressModelState {
	enum class EProgressModelStage Stage; // 0x00(0x01)
	bool bHasError; // 0x01(0x01)
};

// ScriptStruct ShooterGame.NumericProgressValue
// Size: 0x10 (Inherited: 0x00)
struct FNumericProgressValue {
	int64_t Current; // 0x00(0x08)
	int64_t Maximum; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ScopedAnimationCueSource_ScopedCueEventData
// Size: 0x1c (Inherited: 0x10)
struct FScopedAnimationCueSource_ScopedCueEventData : FAnimationCueSource_CueEventData {
	struct FName ScopeName; // 0x10(0x0c)
};

// ScriptStruct ShooterGame.MenuMusic
// Size: 0x10 (Inherited: 0x00)
struct FMenuMusic {
	struct UAkAudioEvent* Default; // 0x00(0x08)
	struct UAkAudioEvent* FindMatch; // 0x08(0x08)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData
// Size: 0x20 (Inherited: 0x00)
struct FOrderedListModelChangeEventData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.ListItemDisplayEntryActivatedData
// Size: 0x48 (Inherited: 0x00)
struct FListItemDisplayEntryActivatedData {
	int32_t ListIndex; // 0x00(0x04)
	enum class EListItemDisplayEntryActivationType ActivationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FWildcard Context; // 0x08(0x40)
};

// ScriptStruct ShooterGame.Wildcard
// Size: 0x40 (Inherited: 0x00)
struct FWildcard {
	char pad_0[0x38]; // 0x00(0x38)
	struct UObject* Object; // 0x38(0x08)
};

// ScriptStruct ShooterGame.ListItemDisplayEntryActivatedEventData
// Size: 0x88 (Inherited: 0x48)
struct FListItemDisplayEntryActivatedEventData : FListItemDisplayEntryActivatedData {
	struct FWildcard ListItemData; // 0x48(0x40)
};

// ScriptStruct ShooterGame.IndexRange
// Size: 0x08 (Inherited: 0x00)
struct FIndexRange {
	int32_t FirstIndex; // 0x00(0x04)
	int32_t LastIndex; // 0x04(0x04)
};

// ScriptStruct ShooterGame.SimpleSectionHeadersListModelBase_Location
// Size: 0x08 (Inherited: 0x00)
struct FSimpleSectionHeadersListModelBase_Location {
	enum class ESimpleSectionHeadersListModelBase_LocationType LocationType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
};

// ScriptStruct ShooterGame.SimpleSectionHeadersListModelBase_HeaderInfo
// Size: 0x48 (Inherited: 0x00)
struct FSimpleSectionHeadersListModelBase_HeaderInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FWildcard HeaderData; // 0x08(0x40)
};

// ScriptStruct ShooterGame.UserActionDisplayInfo
// Size: 0x48 (Inherited: 0x00)
struct FUserActionDisplayInfo {
	struct FText Text; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* IconTexture; // 0x30(0x08)
	struct TArray<struct FName> Styles; // 0x38(0x10)
};

// ScriptStruct ShooterGame.AccountXPPlayer
// Size: 0x38 (Inherited: 0x00)
struct FAccountXPPlayer {
	int32_t Version; // 0x00(0x04)
	struct FGuid Subject; // 0x04(0x10)
	struct FAccountXPPlayerProgress Progress; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime NextTimeFirstWinAvailable; // 0x20(0x08)
	struct TArray<struct FAccountXPMatch> History; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AccountXPMatch
// Size: 0x48 (Inherited: 0x00)
struct FAccountXPMatch {
	struct FGuid ID; // 0x00(0x10)
	struct FAccountXPPlayerProgress StartProgress; // 0x10(0x08)
	struct FAccountXPPlayerProgress EndProgress; // 0x18(0x08)
	int32_t XPDelta; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FAccountXPXPSource> XPSources; // 0x28(0x10)
	struct TArray<struct FAccountXPXPMultiplier> XPMultipliers; // 0x38(0x10)
};

// ScriptStruct ShooterGame.AccountXPXPMultiplier
// Size: 0x18 (Inherited: 0x00)
struct FAccountXPXPMultiplier {
	struct FString ID; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccountXPXPSource
// Size: 0x18 (Inherited: 0x00)
struct FAccountXPXPSource {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccountXPPlayerProgress
// Size: 0x08 (Inherited: 0x00)
struct FAccountXPPlayerProgress {
	int32_t Level; // 0x00(0x04)
	int32_t XP; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ConflictList
// Size: 0x10 (Inherited: 0x00)
struct FConflictList {
	struct TArray<struct FSingleBindSlotActionBinding> ConflictingBindings; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SingleBindSlotActionBinding
// Size: 0x10 (Inherited: 0x00)
struct FSingleBindSlotActionBinding {
	struct UActionBindSet* Action; // 0x00(0x08)
	int32_t BindIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.GamepadAlternateActionMappingList
// Size: 0x10 (Inherited: 0x00)
struct FGamepadAlternateActionMappingList {
	struct TArray<struct FName> AlternateActions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.GamepadInputActionPreset
// Size: 0x30 (Inherited: 0x00)
struct FGamepadInputActionPreset {
	struct FName ActionName; // 0x00(0x0c)
	char bGamepadShift : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FKey Key; // 0x10(0x20)
};

// ScriptStruct ShooterGame.ActionBindingsManagerLocalCache
// Size: 0x38 (Inherited: 0x00)
struct FActionBindingsManagerLocalCache {
	int32_t SettingsVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FActionMappingDTO> ActionMappings; // 0x08(0x10)
	struct TArray<struct FAxisMappingDTO> AxisMappings; // 0x18(0x10)
	struct TArray<struct FName> SettingsProfiles; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AxisMappingDTO
// Size: 0x40 (Inherited: 0x00)
struct FAxisMappingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	int32_t BindIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Key; // 0x28(0x10)
	float Scale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.ActionMappingDTO
// Size: 0x40 (Inherited: 0x00)
struct FActionMappingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	int32_t BindIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Key; // 0x28(0x10)
	bool Shift; // 0x38(0x01)
	bool Ctrl; // 0x39(0x01)
	bool Alt; // 0x3a(0x01)
	bool Cmd; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.ActionBindSetIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FActionBindSetIdentifier {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ActRankBorderInstance
// Size: 0x38 (Inherited: 0x00)
struct FActRankBorderInstance {
	struct TSoftClassPtr<UObject> BorderAsset; // 0x00(0x30)
	int32_t WinsRequired; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AimReport
// Size: 0x68 (Inherited: 0x00)
struct FAimReport {
	float ShotTime; // 0x00(0x04)
	struct FRotator AimAtShot; // 0x04(0x0c)
	struct TArray<struct FRotator> AimRotatorsBefore; // 0x10(0x10)
	struct TArray<struct FRotator> AimRotatorsAfter; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
	int32_t Samples; // 0x40(0x04)
	float DistanceAccumulator; // 0x44(0x04)
	float MaxDistance; // 0x48(0x04)
	float MinDistance; // 0x4c(0x04)
	float SpeedAccumulator; // 0x50(0x04)
	float MaxSpeed; // 0x54(0x04)
	float MinSpeed; // 0x58(0x04)
	float AccelerationAccumulator; // 0x5c(0x04)
	float MaxAcceleration; // 0x60(0x04)
	float MinAcceleration; // 0x64(0x04)
};

// ScriptStruct ShooterGame.AimRotatorEntry
// Size: 0x14 (Inherited: 0x00)
struct FAimRotatorEntry {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ShooterGame.SnapTargetTypeTunables
// Size: 0x20 (Inherited: 0x00)
struct FSnapTargetTypeTunables {
	struct FString BoneName; // 0x00(0x10)
	struct FVector2D DefaultSnapAngles; // 0x10(0x08)
	bool IgnoreNearsightDebuffs; // 0x18(0x01)
	bool VerticalLockEnabled; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct ShooterGame.AnimationConductorNodeSignalCondition
// Size: 0x14 (Inherited: 0x00)
struct FAnimationConductorNodeSignalCondition {
	bool bCompletion; // 0x00(0x01)
	bool bHasMaxDelay; // 0x01(0x01)
	bool bConsumeCue; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName CueName; // 0x04(0x0c)
	float MaxDelay; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AnimationStateReplicationData
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateReplicationData {
	int32_t LowerBodyRunBlendspaceActiveIndex; // 0x00(0x04)
	int32_t LowerBodyCrouchWalkBlendspaceActiveIndex; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AnimationSlotArray
// Size: 0x18 (Inherited: 0x00)
struct FAnimationSlotArray {
	struct TArray<struct UAnimationAsset*> AnimationAssets; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.BoneTransformAim3P
// Size: 0x74 (Inherited: 0x00)
struct FBoneTransformAim3P {
	struct FRotator Spine1Rotation; // 0x00(0x0c)
	struct FRotator Spine2Rotation; // 0x0c(0x0c)
	struct FRotator Spine3Rotation; // 0x18(0x0c)
	struct FRotator Spine4Rotation; // 0x24(0x0c)
	struct FRotator NeckRotation; // 0x30(0x0c)
	struct FRotator HeadRotation; // 0x3c(0x0c)
	struct FRotator LeftClavicleRotation; // 0x48(0x0c)
	struct FRotator RightClavicleRotation; // 0x54(0x0c)
	struct FBoneReference ConstraintBone; // 0x60(0x14)
};

// ScriptStruct ShooterGame.AnimationAssetsGun1P
// Size: 0x48 (Inherited: 0x00)
struct FAnimationAssetsGun1P {
	struct UAnimSequence* IdleAnimation; // 0x00(0x08)
	struct UAnimSequence* JumpAnimation; // 0x08(0x08)
	struct UAnimSequence* JumpLandAnimation; // 0x10(0x08)
	struct UAnimSequence* RunAnimation; // 0x18(0x08)
	struct UAnimSequence* CrouchIdleAnimation; // 0x20(0x08)
	struct UAnimSequence* CrouchAnimation; // 0x28(0x08)
	struct UAnimSequence* CrouchWalkAnimation; // 0x30(0x08)
	struct UAnimSequence* StandUpAnimation; // 0x38(0x08)
	struct UAnimSequence* WalkAnimation; // 0x40(0x08)
};

// ScriptStruct ShooterGame.AnimationAssets1P
// Size: 0x78 (Inherited: 0x00)
struct FAnimationAssets1P {
	struct UAnimSequence* IdleBaseAnimation; // 0x00(0x08)
	struct UAnimSequence* AltModeIdleBaseAnimation; // 0x08(0x08)
	struct UAnimSequence* FidgetAnimation; // 0x10(0x08)
	struct UAnimSequence* DisabledAnimation; // 0x18(0x08)
	struct UAnimSequence* IdleAdditiveAnimation; // 0x20(0x08)
	struct UAnimSequence* JumpAnimation; // 0x28(0x08)
	struct UAnimSequence* JumpLandAnimation; // 0x30(0x08)
	struct UAnimSequence* RunAnimation; // 0x38(0x08)
	struct UAimOffsetBlendSpace* LookBlendspace; // 0x40(0x08)
	struct UAimOffsetBlendSpace* Look2Blendspace; // 0x48(0x08)
	struct UAnimSequence* CrouchIdleAnimation; // 0x50(0x08)
	struct UAnimSequence* CrouchAnimation; // 0x58(0x08)
	struct UAnimSequence* CrouchWalkAnimation; // 0x60(0x08)
	struct UAnimSequence* StandUpAnimation; // 0x68(0x08)
	struct UAnimSequence* WalkAnimation; // 0x70(0x08)
};

// ScriptStruct ShooterGame.AnimationStateParams
// Size: 0x1d0 (Inherited: 0x00)
struct FAnimationStateParams {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Acceleration; // 0x18(0x0c)
	float CurrentSpeed2D; // 0x24(0x04)
	float StopFromNormalizedSpeed; // 0x28(0x04)
	float TempMovementSpeedModifier; // 0x2c(0x04)
	float AimPitch; // 0x30(0x04)
	float UpperBodyYawLookSpace; // 0x34(0x04)
	float PrimaryAimSpringPitch1P; // 0x38(0x04)
	float PrimaryAimSpringYaw1P; // 0x3c(0x04)
	float SecondaryAimSpringPitch1P; // 0x40(0x04)
	float SecondaryAimSpringYaw1P; // 0x44(0x04)
	struct FRotator BoneTransformAimRotator; // 0x48(0x0c)
	float LookAlphaBlend; // 0x54(0x04)
	float BlindedPercent; // 0x58(0x04)
	float WeaponYawAimingOffset; // 0x5c(0x04)
	float WeaponPitchAimingOffset; // 0x60(0x04)
	float WeaponFiringError; // 0x64(0x04)
	float WeaponMovingError; // 0x68(0x04)
	float WeaponTotalError; // 0x6c(0x04)
	float InterpolatedWeaponFiringError; // 0x70(0x04)
	float InterpolatedWeaponMovingError; // 0x74(0x04)
	float InterpolatedWeaponTotalError; // 0x78(0x04)
	float InaccuracyMultiplier; // 0x7c(0x04)
	float AnimPunch; // 0x80(0x04)
	float AnimPunchHeight; // 0x84(0x04)
	float AnimPunchRot; // 0x88(0x04)
	float AnimPunchInterpolant; // 0x8c(0x04)
	float AnimLeanPitchAndRollStrength; // 0x90(0x04)
	float AnimLeanYawStrength; // 0x94(0x04)
	float AnimLeanTranslationStrength; // 0x98(0x04)
	float YawMomentumRotation; // 0x9c(0x04)
	float PitchMomentumRotation; // 0xa0(0x04)
	float DeltaTime; // 0xa4(0x04)
	enum class EAresShooterAnimMovementState MovementState; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FMovementStateMachineAnimations MovementStateMachineAnimations1P; // 0xb0(0x18)
	struct FMovementStateMachineAnimations MovementStateMachineAnimationsGun1P; // 0xc8(0x18)
	struct FMovementStateMachineAnimations MovementStateMachineAnimationsCosmeticGun1P; // 0xe0(0x18)
	bool bHasUpperBodyFall3P; // 0xf8(0x01)
	bool bHasCrouchUpperBodyFall3P; // 0xf9(0x01)
	bool bIsJumping; // 0xfa(0x01)
	bool bIsZoomed; // 0xfb(0x01)
	bool bIsStopping2D; // 0xfc(0x01)
	bool bIsCounterStrafing; // 0xfd(0x01)
	bool bLanded; // 0xfe(0x01)
	bool bJumped; // 0xff(0x01)
	bool bGlide; // 0x100(0x01)
	bool bIsCrouched; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	float TimeSinceJumpStart; // 0x104(0x04)
	bool bJumpLandCanTransition; // 0x108(0x01)
	bool bCrouchCanTransition; // 0x109(0x01)
	bool bUnCrouchCanTransition; // 0x10a(0x01)
	bool bIsUsingAltAnims; // 0x10b(0x01)
	bool bIsInIdleState; // 0x10c(0x01)
	bool bIsOnRope; // 0x10d(0x01)
	bool bIsTurningLeft; // 0x10e(0x01)
	bool bIsTurningRight; // 0x10f(0x01)
	bool bStandingStill; // 0x110(0x01)
	bool bStill; // 0x111(0x01)
	bool bPlayingDeathReaction; // 0x112(0x01)
	bool bIsDeathReactionFaceUp; // 0x113(0x01)
	bool bCanInterruptDeathReaction; // 0x114(0x01)
	bool bIsAlive; // 0x115(0x01)
	bool bHasEquippable; // 0x116(0x01)
	bool bIsFiring; // 0x117(0x01)
	bool bJustFired; // 0x118(0x01)
	bool bIsMeleeAttacking; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float BlindAmount; // 0x11c(0x04)
	bool bCanFidget; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float MovementAdditiveAlpha; // 0x124(0x04)
	float AnimDynamicsAlpha; // 0x128(0x04)
	float AimOffsetAlpha; // 0x12c(0x04)
	float LowerBodyAimOffsetAlpha; // 0x130(0x04)
	float BoneTransformAimAlpha; // 0x134(0x04)
	float BoneTransformAimConstraintAlpha; // 0x138(0x04)
	float FaceLayerAlpha; // 0x13c(0x04)
	bool bTriggerFaceFidget; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float RigidBodyAlpha; // 0x144(0x04)
	float ClothAlpha; // 0x148(0x04)
	float LeftHandIKAlpha; // 0x14c(0x04)
	float RightHandIKAlpha; // 0x150(0x04)
	struct FVector LeftHandIKLocation; // 0x154(0x0c)
	bool bUseLeftHandIKLocation; // 0x160(0x01)
	bool FootIKEnabled; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	struct FRotator FootIKBoneRot; // 0x164(0x0c)
	struct FVector FootIKBoneScale; // 0x170(0x0c)
	struct FVector FootIKActorDownTranslation; // 0x17c(0x0c)
	float FootIKAlpha; // 0x188(0x04)
	float UpperBody3PAnimSlotBlendTime; // 0x18c(0x04)
	float LowerBody3PAnimSlotBlendTime; // 0x190(0x04)
	float AnimSlotBlendTime1P; // 0x194(0x04)
	float AimOffsetBlendTime3P; // 0x198(0x04)
	float LowerBodyMontageWeight; // 0x19c(0x04)
	float CrouchLowerBodyMontageAlpha; // 0x1a0(0x04)
	struct FVector CrouchSplitterTranslation; // 0x1a4(0x0c)
	float SpineBlendWeight; // 0x1b0(0x04)
	float ReapplyHandPoseBlendWeight; // 0x1b4(0x04)
	float HitReactionDamageNorthSouthBlendSpaceAlpha; // 0x1b8(0x04)
	float HitReactionDamageEastWestBlendSpaceAlpha; // 0x1bc(0x04)
	bool bHitReactionTriggered; // 0x1c0(0x01)
	bool bHitReactionTriggeredThisFrame; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	float CrouchUnits; // 0x1c4(0x04)
	float CrouchAmount; // 0x1c8(0x04)
	bool bIsLeftHanded; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
};

// ScriptStruct ShooterGame.MovementStateMachineAnimations
// Size: 0x18 (Inherited: 0x00)
struct FMovementStateMachineAnimations {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrentSlot; // 0x04(0x04)
	struct TArray<struct FMovementStateMachineAnimationSlot> Slots; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MovementStateMachineAnimationSlot
// Size: 0x18 (Inherited: 0x00)
struct FMovementStateMachineAnimationSlot {
	struct UAnimSequence* Asset; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	bool bLoop; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresAnimDynamicState
// Size: 0x01 (Inherited: 0x00)
struct FAresAnimDynamicState {
	bool bAnimDynamicEnabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AnimMovementStateTransition
// Size: 0x18 (Inherited: 0x00)
struct FAnimMovementStateTransition {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.AnimPunchTuning
// Size: 0x10 (Inherited: 0x00)
struct FAnimPunchTuning {
	float Punch; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Rotation; // 0x08(0x04)
	float ADSPunch; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.NotifyTriggerType
// Size: 0x20 (Inherited: 0x00)
struct FNotifyTriggerType {
	struct UScriptStateComponent* StateToTransitionTo; // 0x00(0x08)
	struct TArray<float> NotifyTimes; // 0x08(0x10)
	bool bReturningState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.HopeAntiAddictionPolicy
// Size: 0x28 (Inherited: 0x00)
struct FHopeAntiAddictionPolicy {
	enum class EPolicyType PolicyTypeEnum; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PolicyType; // 0x08(0x10)
	struct FString HopeMessage; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AntiAddictionState
// Size: 0xe0 (Inherited: 0x00)
struct FAntiAddictionState {
	enum class EPolicyType PolicyTypeEnum; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PolicyType; // 0x08(0x10)
	enum class EDisplayType DisplayTypeEnum; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString DisplayType; // 0x20(0x10)
	struct FString LocalizationKey; // 0x30(0x10)
	struct TMap<struct FString, struct FString> LocalizationContext; // 0x40(0x50)
	struct TMap<struct FString, struct FString> HopePayload; // 0x90(0x50)
};

// ScriptStruct ShooterGame.DeferredTagChangedEntry
// Size: 0x20 (Inherited: 0x00)
struct FDeferredTagChangedEntry {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.TagValueChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FTagValueChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.AttributeValueChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FAttributeValueChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.GameplayBooleanAttributeData
// Size: 0x10 (Inherited: 0x10)
struct FGameplayBooleanAttributeData : FGameplayAttributeData {
};

// ScriptStruct ShooterGame.AresAudioBankLoaderList
// Size: 0x10 (Inherited: 0x00)
struct FAresAudioBankLoaderList {
	struct TArray<struct UAresAudioBankLoader*> AudioBankLoaders; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresAudioBank
// Size: 0x10 (Inherited: 0x00)
struct FAresAudioBank {
	struct UAkAudioBank* WwiseBank; // 0x00(0x08)
	bool bLoadEvents; // 0x08(0x01)
	bool bAddEventsToRoot; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ShooterGame.AudioComponentPool
// Size: 0x18 (Inherited: 0x00)
struct FAudioComponentPool {
	int32_t MaxSize; // 0x00(0x04)
	int32_t CurrentStart; // 0x04(0x04)
	struct TArray<struct UAresAudioComponent*> AudioComponents; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AresCeremonyDecisionContext
// Size: 0xc8 (Inherited: 0x00)
struct FAresCeremonyDecisionContext {
	struct TArray<struct FAresCeremonyTriggerEvent> CeremonyTriggerEvents; // 0x00(0x10)
	struct UBaseTeamComponent* WinningTeam; // 0x10(0x08)
	enum class EAresRoundOutcome RoundOutcome; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<int32_t, struct AShooterPlayerState*> AttackingTeamPlayerStates; // 0x20(0x50)
	struct TMap<int32_t, struct AShooterPlayerState*> DefendingTeamPlayerStates; // 0x70(0x50)
	int32_t AttackingTeamAverageInventory; // 0xc0(0x04)
	int32_t DefendingTeamAverageInventory; // 0xc4(0x04)
};

// ScriptStruct ShooterGame.AresCeremonyTriggerEvent
// Size: 0x38 (Inherited: 0x00)
struct FAresCeremonyTriggerEvent {
	enum class EAresCeremonyTriggerType TriggerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAresCeremonyKillEvent KillEvent; // 0x08(0x20)
	struct FAresCeremonyRespawnEvent RespawnEvent; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AresCeremonyRespawnEvent
// Size: 0x10 (Inherited: 0x00)
struct FAresCeremonyRespawnEvent {
	struct AOwnerExclusivePlayerInfo* RespawnedPlayerInfo; // 0x00(0x08)
	float TimeLeftInRound; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresCeremonyKillEvent
// Size: 0x20 (Inherited: 0x00)
struct FAresCeremonyKillEvent {
	struct AOwnerExclusivePlayerInfo* VictimPlayerInfo; // 0x00(0x08)
	struct UDamageResponse* Response; // 0x08(0x08)
	struct AOwnerExclusivePlayerInfo* KillerPlayerInfo; // 0x10(0x08)
	float TimeLeftInRound; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.StaticMeshMaterialList
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshMaterialList {
	struct TArray<struct UMaterialInterface*> MaterialList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ConnectToServerDetails
// Size: 0x58 (Inherited: 0x00)
struct FConnectToServerDetails {
	struct FString Host; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DisplayName; // 0x18(0x10)
	struct FString Subject; // 0x28(0x10)
	struct FString Team; // 0x38(0x10)
	struct FString Map; // 0x48(0x10)
};

// ScriptStruct ShooterGame.AresPointDamageEvent
// Size: 0xc8 (Inherited: 0xb8)
struct FAresPointDamageEvent : FPointDamageEvent {
	enum class EAresRegionalDamage RegionalDamage; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float DamageFalloff; // 0xbc(0x04)
	bool bDamageThroughWall; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct ShooterGame.AresDamageInstance
// Size: 0x20 (Inherited: 0x00)
struct FAresDamageInstance {
	bool bIsDamagedActorTargetsCharacter; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDamageResponse* DamageResponse; // 0x08(0x08)
	struct AShooterPlayerState* InstigatorInfo; // 0x10(0x08)
	struct AShooterPlayerState* TargetInfo; // 0x18(0x08)
};

// ScriptStruct ShooterGame.DeveloperCommand
// Size: 0x20 (Inherited: 0x00)
struct FDeveloperCommand {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AresDoorStatus
// Size: 0x02 (Inherited: 0x00)
struct FAresDoorStatus {
	enum class EAresDoorState DoorState; // 0x00(0x01)
	enum class EAresDoorTransition Transition; // 0x01(0x01)
};

// ScriptStruct ShooterGame.DPIScalingParameters
// Size: 0x0c (Inherited: 0x00)
struct FDPIScalingParameters {
	struct FIntPoint ScreenResolution; // 0x00(0x08)
	int32_t ScreenDensity; // 0x08(0x04)
};

// ScriptStruct ShooterGame.EditControlsWidgetList
// Size: 0x10 (Inherited: 0x00)
struct FEditControlsWidgetList {
	struct TArray<struct UUserWidget*> WidgetList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EquippableAimToolingModifiers
// Size: 0x08 (Inherited: 0x00)
struct FEquippableAimToolingModifiers {
	float BendingEfficacyScale; // 0x00(0x04)
	float PullToCenterEfficacyScale; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AsyncLoadedEquippableGunAnim
// Size: 0x48 (Inherited: 0x00)
struct FAsyncLoadedEquippableGunAnim {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAnimationAsset* LoadedDefaultAsset; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct UAnimationAsset* LoadedCosmeticAsset; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UAnimationAsset* LoadedCosmeticAltModeAsset; // 0x40(0x08)
};

// ScriptStruct ShooterGame.AsyncLoadedEquippableCharacterAnim
// Size: 0x30 (Inherited: 0x00)
struct FAsyncLoadedEquippableCharacterAnim {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAnimationAsset* LoadedAltModeAsset; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct UAnimationAsset* LoadedDefaultAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.PurchasableOverrideTableRow
// Size: 0x40 (Inherited: 0x08)
struct FPurchasableOverrideTableRow : FTableRowBase {
	struct UAresPurchasable* OriginalPurchasable; // 0x08(0x08)
	struct TSoftClassPtr<UObject> OverridePurchasable; // 0x10(0x30)
};

// ScriptStruct ShooterGame.FireButtonWeaponCustomizationSettingData
// Size: 0xe8 (Inherited: 0x00)
struct FFireButtonWeaponCustomizationSettingData {
	struct TSoftClassPtr<UObject> EquippableUIData; // 0x00(0x30)
	struct FString WeaponName; // 0x30(0x10)
	enum class EEquippableCategory WeaponCategory; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FSlateBrush WeaponImage; // 0x48(0x90)
	struct TArray<enum class EWidgetLayoutSettingName> ValidLayoutSettings; // 0xd8(0x10)
};

// ScriptStruct ShooterGame.AresSystemTelemetryMetrics
// Size: 0x474 (Inherited: 0x00)
struct FAresSystemTelemetryMetrics {
	struct FMetric Animation; // 0x00(0x14)
	struct FMetric Animation_TickPose; // 0x14(0x14)
	struct FMetric Animation_ProxyUpdateAnimation; // 0x28(0x14)
	struct FMetric Animation_RefreshBoneTransforms; // 0x3c(0x14)
	struct FMetric Animation_AnimationStateComponentTick; // 0x50(0x14)
	struct FMetric Animation_Other; // 0x64(0x14)
	struct FMetric Character; // 0x78(0x14)
	struct FMetric Character_Input; // 0x8c(0x14)
	struct FMetric Character_Tick; // 0xa0(0x14)
	struct FMetric Character_Abilities; // 0xb4(0x14)
	struct FMetric Character_Other; // 0xc8(0x14)
	struct FMetric Equippable; // 0xdc(0x14)
	struct FMetric Equippable_Other; // 0xf0(0x14)
	struct FMetric FogOfWar; // 0x104(0x14)
	struct FMetric FogOfWar_Visibility; // 0x118(0x14)
	struct FMetric FogOfWar_Manager; // 0x12c(0x14)
	struct FMetric FogOfWar_Component; // 0x140(0x14)
	struct FMetric FogOfWar_Other; // 0x154(0x14)
	struct FMetric Gameplay; // 0x168(0x14)
	struct FMetric Gameplay_GameMode; // 0x17c(0x14)
	struct FMetric Gameplay_GameState; // 0x190(0x14)
	struct FMetric Gameplay_PlayerState; // 0x1a4(0x14)
	struct FMetric Gameplay_Controller; // 0x1b8(0x14)
	struct FMetric Gameplay_Audio; // 0x1cc(0x14)
	struct FMetric Gameplay_Minimap; // 0x1e0(0x14)
	struct FMetric Gameplay_Other; // 0x1f4(0x14)
	struct FMetric Movement; // 0x208(0x14)
	struct FMetric Movement_Other; // 0x21c(0x14)
	struct FMetric Network; // 0x230(0x14)
	struct FMetric Network_StreamComponent; // 0x244(0x14)
	struct FMetric Network_Other; // 0x258(0x14)
	struct FMetric Particles; // 0x26c(0x14)
	struct FMetric Particles_Other; // 0x280(0x14)
	struct FMetric Physics; // 0x294(0x14)
	struct FMetric Physics_Other; // 0x2a8(0x14)
	struct FMetric Render; // 0x2bc(0x14)
	struct FMetric Render_Sync; // 0x2d0(0x14)
	struct FMetric Render_TextureStreaming; // 0x2e4(0x14)
	struct FMetric Render_UI; // 0x2f8(0x14)
	struct FMetric Render_Other; // 0x30c(0x14)
	struct FMetric Replication; // 0x320(0x14)
	struct FMetric Replication_Other; // 0x334(0x14)
	struct FMetric Idle; // 0x348(0x14)
	struct FMetric Other; // 0x35c(0x14)
	struct FMetric Other_ActorTick; // 0x370(0x14)
	struct FMetric Other_ComponentTick; // 0x384(0x14)
	struct FMetric Other_GameObjectTick; // 0x398(0x14)
	struct FMetric Other_GarbageCollection; // 0x3ac(0x14)
	struct FMetric Other_WorldTick; // 0x3c0(0x14)
	struct FMetric Other_TickPreRTG; // 0x3d4(0x14)
	struct FMetric Other_TickPostRTG; // 0x3e8(0x14)
	struct FMetric Other_RunTickGroup; // 0x3fc(0x14)
	struct FMetric TempDebug; // 0x410(0x14)
	struct FMetric TempDebug_SubOne; // 0x424(0x14)
	struct FMetric TempDebug_SubTwo; // 0x438(0x14)
	struct FMetric TempDebug_SubThree; // 0x44c(0x14)
	struct FMetric TempDebug_Other; // 0x460(0x14)
};

// ScriptStruct ShooterGame.Metric
// Size: 0x14 (Inherited: 0x00)
struct FMetric {
	float Mean; // 0x00(0x04)
	float Median; // 0x04(0x04)
	float Min; // 0x08(0x04)
	float Max; // 0x0c(0x04)
	float StdDev; // 0x10(0x04)
};

// ScriptStruct ShooterGame.MediaSourceParams
// Size: 0x30 (Inherited: 0x00)
struct FMediaSourceParams {
	struct TSoftObjectPtr<UMediaSource> MediaSourceAsset; // 0x00(0x30)
};

// ScriptStruct ShooterGame.AscenderUseEvent
// Size: 0xb8 (Inherited: 0x00)
struct FAscenderUseEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString AscenderName; // 0xa0(0x10)
	float UseDuration; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct ShooterGame.GameEventRoundInfo
// Size: 0x28 (Inherited: 0x00)
struct FGameEventRoundInfo {
	int32_t RoundNumber; // 0x00(0x04)
	float RoundTime; // 0x04(0x04)
	struct FString RoundPhase; // 0x08(0x10)
	int64_t MatchTime; // 0x18(0x08)
	int32_t AttackerScore; // 0x20(0x04)
	int32_t DefenderScore; // 0x24(0x04)
};

// ScriptStruct ShooterGame.GameEventMatchInfo
// Size: 0x68 (Inherited: 0x00)
struct FGameEventMatchInfo {
	struct FString Version; // 0x00(0x10)
	struct FString Changelist; // 0x10(0x10)
	struct FString Branch; // 0x20(0x10)
	struct FString GameMode; // 0x30(0x10)
	int64_t GameId; // 0x40(0x08)
	struct FString MatchID; // 0x48(0x10)
	struct FString Map; // 0x58(0x10)
};

// ScriptStruct ShooterGame.TeleporterUseEvent
// Size: 0xd0 (Inherited: 0x00)
struct FTeleporterUseEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString TeleporterName; // 0xa0(0x10)
	struct FString ObjectClassName; // 0xb0(0x10)
	struct FString ObjectType; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.OrbInteractionEvent
// Size: 0xc0 (Inherited: 0x00)
struct FOrbInteractionEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString OrbName; // 0xa0(0x10)
	struct FString OrbType; // 0xb0(0x10)
};

// ScriptStruct ShooterGame.FogOfWarStatsEvent
// Size: 0xf8 (Inherited: 0x00)
struct FFogOfWarStatsEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	int32_t TotalQueries; // 0x90(0x04)
	int32_t RelevantCount; // 0x94(0x04)
	int32_t NotRelevantCount; // 0x98(0x04)
	int32_t RelevantVisionCount; // 0x9c(0x04)
	int32_t RelevantAudioCount; // 0xa0(0x04)
	int32_t RelevantOverrideCount; // 0xa4(0x04)
	int32_t RelevantNoComponentCount; // 0xa8(0x04)
	int32_t RelevantTeamCount; // 0xac(0x04)
	int32_t RelevantDistanceCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString CharacterName; // 0xb8(0x10)
	struct FMetric NotRelevantDurationSeconds; // 0xc8(0x14)
	struct FMetric RelevantDurationSeconds; // 0xdc(0x14)
	float TotalRelevantDurationSeconds; // 0xf0(0x04)
	float TotalNotRelevantDurationSeconds; // 0xf4(0x04)
};

// ScriptStruct ShooterGame.DamageLogEvent
// Size: 0x540 (Inherited: 0x00)
struct FDamageLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo DealerInfo; // 0x90(0x60)
	struct FGameEventPlayerInfo ReceiverInfo; // 0xf0(0x60)
	struct FGameEventCharacterState DealerCharacterState; // 0x150(0x1a0)
	struct FGameEventCharacterState ReceiverCharacterState; // 0x2f0(0x1a0)
	struct FString DamageSource; // 0x490(0x10)
	struct FString DamageSourceId; // 0x4a0(0x10)
	float DamageAmount; // 0x4b0(0x04)
	float DamageTaken; // 0x4b4(0x04)
	struct FString DamageRegion; // 0x4b8(0x10)
	bool IsPenetration; // 0x4c8(0x01)
	bool IsKill; // 0x4c9(0x01)
	char pad_4CA[0x6]; // 0x4ca(0x06)
	struct FAimReport AimReport; // 0x4d0(0x68)
	bool IsZoomed; // 0x538(0x01)
	bool DamageReceiverIsPlayer; // 0x539(0x01)
	char pad_53A[0x6]; // 0x53a(0x06)
};

// ScriptStruct ShooterGame.GameEventCharacterState
// Size: 0x1a0 (Inherited: 0x00)
struct FGameEventCharacterState {
	struct FGameEventHpState HpState; // 0x00(0x08)
	int32_t Money; // 0x08(0x04)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector ViewVector; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString MovementType; // 0x28(0x10)
	float Speed; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FGameEventInventory Inventory; // 0x40(0x148)
	struct FString StabilityType; // 0x188(0x10)
	float StabilityFiringError; // 0x198(0x04)
	float StabilityMovementError; // 0x19c(0x04)
};

// ScriptStruct ShooterGame.GameEventInventory
// Size: 0x148 (Inherited: 0x00)
struct FGameEventInventory {
	struct FGameEventItem CurrentlyEquipped; // 0x00(0x38)
	struct FGameEventItem PrimaryWeapon; // 0x38(0x38)
	struct FGameEventItem SecondaryWeapon; // 0x70(0x38)
	struct FGameEventItem Melee; // 0xa8(0x38)
	struct FGameEventItem Armor; // 0xe0(0x38)
	struct TArray<struct FGameEventItem> Abilities; // 0x118(0x10)
	struct TArray<struct FGameEventItem> BackpackItems; // 0x128(0x10)
	struct TArray<struct FGameEventItem> Passives; // 0x138(0x10)
};

// ScriptStruct ShooterGame.GameEventItem
// Size: 0x38 (Inherited: 0x00)
struct FGameEventItem {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	int32_t AvailableAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.GameEventHpState
// Size: 0x08 (Inherited: 0x00)
struct FGameEventHpState {
	float CharacterHp; // 0x00(0x04)
	float ShieldHp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.GameEventPlayerInfo
// Size: 0x60 (Inherited: 0x00)
struct FGameEventPlayerInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString Side; // 0x20(0x10)
	struct FString TeamRole; // 0x30(0x10)
	struct FString TeamID; // 0x40(0x10)
	struct FString Character; // 0x50(0x10)
};

// ScriptStruct ShooterGame.RoundScoreLogEvent
// Size: 0xf0 (Inherited: 0x00)
struct FRoundScoreLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventTeamResources AttackerResources; // 0x90(0x08)
	struct FGameEventTeamResources DefenderResources; // 0x98(0x08)
	struct FString Winner; // 0xa0(0x10)
	struct FString WinnerTeam; // 0xb0(0x10)
	struct FString Result; // 0xc0(0x10)
	struct TArray<struct FGameEventPlayerInfo> AttackerRoster; // 0xd0(0x10)
	struct TArray<struct FGameEventPlayerInfo> DefenderRoster; // 0xe0(0x10)
};

// ScriptStruct ShooterGame.GameEventTeamResources
// Size: 0x08 (Inherited: 0x00)
struct FGameEventTeamResources {
	int32_t Total; // 0x00(0x04)
	int32_t Inventory; // 0x04(0x04)
};

// ScriptStruct ShooterGame.LocationLogEvent
// Size: 0x118 (Inherited: 0x00)
struct FLocationLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FVector Location; // 0xf0(0x0c)
	struct FVector ViewVector; // 0xfc(0x0c)
	struct FString MovementType; // 0x108(0x10)
};

// ScriptStruct ShooterGame.GameModeMatchDetailsConfig
// Size: 0x18 (Inherited: 0x00)
struct FGameModeMatchDetailsConfig {
	bool ShowProgression; // 0x00(0x01)
	bool ShowSummary; // 0x01(0x01)
	bool ShowScoreboard; // 0x02(0x01)
	bool ShowTimeline; // 0x03(0x01)
	bool ShowPerformance; // 0x04(0x01)
	bool ShowMVP; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct UUserWidget* DetailsTabWidget; // 0x08(0x08)
	struct UUserWidget* ScoreboardTabWidget; // 0x10(0x08)
};

// ScriptStruct ShooterGame.NetworkLoadedClass
// Size: 0x58 (Inherited: 0x00)
struct FNetworkLoadedClass {
	struct FSoftObjectPath ClassPath; // 0x00(0x20)
	bool bBlockingLoad; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
	struct TArray<struct TWeakObjectPtr<struct APlayerController>> UnacknowledgedLoad; // 0x38(0x10)
	struct TArray<struct FDelegate> CompletedEvents; // 0x48(0x10)
};

// ScriptStruct ShooterGame.GauntletTestResultCollection
// Size: 0x50 (Inherited: 0x00)
struct FGauntletTestResultCollection {
	struct TMap<struct FString, struct FGauntletTestResult> TestResults; // 0x00(0x50)
};

// ScriptStruct ShooterGame.GauntletTestResult
// Size: 0x01 (Inherited: 0x00)
struct FGauntletTestResult {
	bool Passed; // 0x00(0x01)
};

// ScriptStruct ShooterGame.StaticActorMaterialMapping
// Size: 0x18 (Inherited: 0x00)
struct FStaticActorMaterialMapping {
	struct AStaticMeshActor* StaticActor; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> SavedMaterials; // 0x08(0x10)
};

// ScriptStruct ShooterGame.HitReactionResult
// Size: 0x10 (Inherited: 0x00)
struct FHitReactionResult {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresHitReactionEntry
// Size: 0x38 (Inherited: 0x00)
struct FAresHitReactionEntry {
	enum class EAresDamageAnimationCategory AnimationCategory; // 0x00(0x01)
	enum class EAresDirectionalDamage DirectionalDamage; // 0x01(0x01)
	enum class EAresRegionalDamage RegionalDamage; // 0x02(0x01)
	enum class EAresDamageCategory DamageCategory; // 0x03(0x01)
	enum class EAresBodySection DamageBodySection; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FName> BoneList; // 0x08(0x10)
	struct UShooterDamageType* DamageType; // 0x18(0x08)
	float DamageAmount; // 0x20(0x04)
	bool bFaceDamageCauser; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAnimMontage* Anim3P; // 0x30(0x08)
};

// ScriptStruct ShooterGame.CircularMeter
// Size: 0xa4 (Inherited: 0x00)
struct FCircularMeter {
	struct FLinearColor MeterFullyLitColor; // 0x00(0x10)
	struct FLinearColor MeterUnlitColor; // 0x10(0x10)
	struct FLinearColor PartiallyLitStartColor; // 0x20(0x10)
	struct FLinearColor NotchColor; // 0x30(0x10)
	float NotchWidth; // 0x40(0x04)
	struct FName MeterFullyLitPercentMaterialParameterName; // 0x44(0x0c)
	struct FName MeterPartiallyLitPercentMaterialParameterName; // 0x50(0x0c)
	struct FName MeterFullyLitColorMaterialParameterName; // 0x5c(0x0c)
	struct FName MeterPartiallyLitColorMaterialParameterName; // 0x68(0x0c)
	struct FName MeterUnlitColorMaterialParameterName; // 0x74(0x0c)
	struct FName MeterNotchPercentMaterialParameterName; // 0x80(0x0c)
	struct FName MeterNotchColorMaterialParameterName; // 0x8c(0x0c)
	struct FName MeterNotchWidthMaterialParameterName; // 0x98(0x0c)
};

// ScriptStruct ShooterGame.CharacterMeterDynamicMaterials
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMeterDynamicMaterials {
	struct UMaterialInstanceDynamic* FullMaterialInstanceDynamic; // 0x00(0x08)
	struct UMaterialInstanceDynamic* EmptyMaterialInstanceDynamic; // 0x08(0x08)
};

// ScriptStruct ShooterGame.CharacterMeter
// Size: 0x128 (Inherited: 0x00)
struct FCharacterMeter {
	struct FVector2D BaseOffset; // 0x00(0x08)
	struct FAresHudBackgroundImage MeterIcon; // 0x08(0x28)
	struct FVector2D MeterDrawOffset; // 0x30(0x08)
	struct FVector2D Extents; // 0x38(0x08)
	bool bShrinkFullMaterialExtentsWithMeterValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UMaterialInterface* FullMaterial; // 0x48(0x08)
	struct UMaterialInterface* EmptyMaterial; // 0x50(0x08)
	struct FName MeterPercentMaterialParameterName; // 0x58(0x0c)
	struct FName MeterColorPercentParameterName; // 0x64(0x0c)
	bool bDrawMeterText; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector2D TextDrawOffset; // 0x74(0x08)
	enum class EAresDrawOrigin TextDrawOrigin; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FAresHudFontParams TextFontParams; // 0x80(0x70)
	bool bDrawMeterMaxValue; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float HorizontalSpacingBetweenTextElements; // 0xf4(0x04)
	struct FLinearColor FullColor; // 0xf8(0x10)
	struct FLinearColor EmptyColor; // 0x108(0x10)
	struct UCurveFloat* MeterFillPercentToColorInterpolationPercentCurve; // 0x118(0x08)
	bool bApplyColorTintToText; // 0x120(0x01)
	bool bApplyColorTintToIcon; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// ScriptStruct ShooterGame.AresHudFontParams
// Size: 0x70 (Inherited: 0x00)
struct FAresHudFontParams {
	struct FSlateFontInfo Font; // 0x00(0x60)
	bool bEnableShadow; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector2D ShadowOffset; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.AresHudBackgroundImage
// Size: 0x28 (Inherited: 0x00)
struct FAresHudBackgroundImage {
	struct FVector2D DrawOffset; // 0x00(0x08)
	enum class EAresDrawOrigin DrawOrigin; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* Image; // 0x10(0x08)
	struct FAresHudImageParams ImageParams; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AresHudImageParams
// Size: 0x10 (Inherited: 0x00)
struct FAresHudImageParams {
	bool bUseTextureExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Extents; // 0x04(0x08)
	float Alpha; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresTimedOvershootValue
// Size: 0x20 (Inherited: 0x00)
struct FAresTimedOvershootValue {
	float StartingValue; // 0x00(0x04)
	float OvershootValue; // 0x04(0x04)
	float OvershootTime; // 0x08(0x04)
	float OvershootHoldTime; // 0x0c(0x04)
	float FallbackValue; // 0x10(0x04)
	float FallbackTime; // 0x14(0x04)
	enum class EAresInterpolationFunction OvershootInterpolationFunction; // 0x18(0x01)
	enum class EAresInterpolationFunction FallbackInterpolationFunction; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float StartTime; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresTimedInterpolant
// Size: 0x1c (Inherited: 0x00)
struct FAresTimedInterpolant {
	float InitialDelayBeforeRampUp; // 0x00(0x04)
	float RampUpTime; // 0x04(0x04)
	float HoldTime; // 0x08(0x04)
	bool bDoRampOff; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float RampOffTime; // 0x10(0x04)
	enum class EAresInterpolationFunction RampUpInterpolationFunction; // 0x14(0x01)
	enum class EAresInterpolationFunction RampOffInterpolationFunction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float StartTime; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresHudElementRectangle
// Size: 0x14 (Inherited: 0x00)
struct FAresHudElementRectangle {
	enum class EAresHudAnchorPoint AnchorPoint; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D AnchorOffset; // 0x04(0x08)
	struct FVector2D Extents; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.AresKillBannerImage
// Size: 0x18 (Inherited: 0x00)
struct FAresKillBannerImage {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AresHudTextLabel
// Size: 0x98 (Inherited: 0x00)
struct FAresHudTextLabel {
	struct FVector2D DrawOffset; // 0x00(0x08)
	enum class EAresDrawOrigin DrawOrigin; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Text; // 0x10(0x18)
	struct FAresHudFontParams FontParams; // 0x28(0x70)
};

// ScriptStruct ShooterGame.AresUMGElementAsset
// Size: 0xb0 (Inherited: 0x00)
struct FAresUMGElementAsset {
	struct TSoftClassPtr<UObject> Asset; // 0x00(0x30)
	struct TSoftClassPtr<UObject> AssetLookupOverride; // 0x30(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> GameModeOverrides; // 0x60(0x50)
};

// ScriptStruct ShooterGame.AresIconButtonOverridesData
// Size: 0x60 (Inherited: 0x00)
struct FAresIconButtonOverridesData {
	struct TArray<enum class EAresIconButtonOverrides> Overrides; // 0x00(0x10)
	struct UTexture2D* IconTexture; // 0x10(0x08)
	float IconScale; // 0x18(0x04)
	struct FLinearColor IconColor; // 0x1c(0x10)
	struct FLinearColor ButtonColor; // 0x2c(0x10)
	enum class EAresIconButtonSize ButtonSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FText ButtonText; // 0x40(0x18)
	bool bResetUnspecifiedValuesToDefaults; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ShooterGame.AresIconButtonStyle
// Size: 0x24 (Inherited: 0x00)
struct FAresIconButtonStyle {
	float IconScale; // 0x00(0x04)
	struct FLinearColor IconColor; // 0x04(0x10)
	struct FLinearColor ButtonColor; // 0x14(0x10)
};

// ScriptStruct ShooterGame.ImpactEffectDecalInfo
// Size: 0x48 (Inherited: 0x00)
struct FImpactEffectDecalInfo {
	bool bCreatedDecal; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDecalData DecalData; // 0x08(0x40)
};

// ScriptStruct ShooterGame.DecalData
// Size: 0x40 (Inherited: 0x00)
struct FDecalData {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float DecalHeight; // 0x0c(0x04)
	struct UCurveFloat* ScaleDistance; // 0x10(0x08)
	struct FVector2D RangeScaleMin; // 0x18(0x08)
	struct FVector2D RangeScaleMax; // 0x20(0x08)
	float FadeInTime; // 0x28(0x04)
	float FadeOutTime; // 0x2c(0x04)
	float LifeSpan; // 0x30(0x04)
	float FadeOutSizeOnScreenPercent; // 0x34(0x04)
	float RandomRotationAngleBase; // 0x38(0x04)
	float RandomRotationAngleRange; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.ImpactEffectAudioInfo
// Size: 0x18 (Inherited: 0x00)
struct FImpactEffectAudioInfo {
	enum class EImpactEffectAudioCreationState CreationState; // 0x00(0x01)
	enum class EAresSurfaceType AudioSurfaceType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct APawn* ContextInstigator; // 0x08(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x10(0x08)
};

// ScriptStruct ShooterGame.InputStateCorrectionStatus
// Size: 0x14 (Inherited: 0x00)
struct FInputStateCorrectionStatus {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ShooterGame.AresInputStream
// Size: 0x438 (Inherited: 0x00)
struct FAresInputStream {
	char pad_0[0x438]; // 0x00(0x438)
};

// ScriptStruct ShooterGame.AresInputRecord
// Size: 0x0c (Inherited: 0x00)
struct FAresInputRecord {
	struct FAresInputSnapshot InputSnapshot; // 0x00(0x08)
	char InputIdentifier; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresInputSnapshot
// Size: 0x08 (Inherited: 0x00)
struct FAresInputSnapshot {
	enum class EAresInputState InputState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TimeInSeconds; // 0x04(0x04)
};

// ScriptStruct ShooterGame.EquipDebugRecord
// Size: 0x10 (Inherited: 0x00)
struct FEquipDebugRecord {
	struct AAresEquippable* EquippedEquippable; // 0x00(0x08)
	enum class EEquipSource EquipSource; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.InventoryServerCorrectRepVariables
// Size: 0x10 (Inherited: 0x00)
struct FInventoryServerCorrectRepVariables {
	struct AAresEquippable* CurrentEquippable; // 0x00(0x08)
	int32_t CorrectionIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.PendingEquippableChange
// Size: 0x18 (Inherited: 0x00)
struct FPendingEquippableChange {
	struct AAresEquippable* NewCurrentEquippable; // 0x00(0x08)
	struct FNetworkedMovementTimestamp Timestamp; // 0x08(0x10)
};

// ScriptStruct ShooterGame.NetworkedMovementTimestamp
// Size: 0x10 (Inherited: 0x00)
struct FNetworkedMovementTimestamp {
	struct TWeakObjectPtr<struct AShooterCharacter> Character; // 0x00(0x08)
	float NetTimestamp; // 0x08(0x04)
	int32_t RespawnNumber; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.BasicMetric
// Size: 0x10 (Inherited: 0x00)
struct FBasicMetric {
	uint32_t NumSamples; // 0x00(0x04)
	float Min; // 0x04(0x04)
	float Max; // 0x08(0x04)
	float Mean; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RecycledWidgetArray
// Size: 0x10 (Inherited: 0x00)
struct FRecycledWidgetArray {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PacketDeltaTimeBuckets
// Size: 0x1c (Inherited: 0x00)
struct FPacketDeltaTimeBuckets {
	int32_t Over256ms; // 0x00(0x04)
	int32_t Between128and256ms; // 0x04(0x04)
	int32_t Between64and128ms; // 0x08(0x04)
	int32_t Between32and64ms; // 0x0c(0x04)
	int32_t Between16and32ms; // 0x10(0x04)
	int32_t Between8and16ms; // 0x14(0x04)
	int32_t Below8ms; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresGenericAsset
// Size: 0x40 (Inherited: 0x00)
struct FAresGenericAsset {
	struct TSoftObjectPtr<UObject> Asset; // 0x00(0x30)
	struct TArray<struct FString> MetaTags; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresUserWidgetAsset
// Size: 0x40 (Inherited: 0x00)
struct FAresUserWidgetAsset {
	struct TSoftClassPtr<UObject> UserWidgetClass; // 0x00(0x30)
	struct TArray<struct FString> MetaTags; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RoundPersistentDataDefinition
// Size: 0x10 (Inherited: 0x00)
struct FRoundPersistentDataDefinition {
	struct TArray<struct FRoundPersistedItem> SavedItems; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundPersistedItem
// Size: 0x10 (Inherited: 0x00)
struct FRoundPersistedItem {
	enum class EAresItemSlot Key; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AAresItem* Value; // 0x08(0x08)
};

// ScriptStruct ShooterGame.AresPlatformParticipantInfo
// Size: 0x10 (Inherited: 0x00)
struct FAresPlatformParticipantInfo {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PurchasableList
// Size: 0x10 (Inherited: 0x00)
struct FPurchasableList {
	struct TArray<struct UAresPurchasable*> Purchasables; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ShopGridPosition
// Size: 0x08 (Inherited: 0x00)
struct FShopGridPosition {
	int32_t Row; // 0x00(0x04)
	int32_t Column; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RadialMenuShowAndHideSettings
// Size: 0x14 (Inherited: 0x00)
struct FRadialMenuShowAndHideSettings {
	struct FName SummonWheelActionName; // 0x00(0x0c)
	float WheelShowupDelay; // 0x0c(0x04)
	bool bEnableRightKeyCancellation; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.RadialMenuRateLimitSettings
// Size: 0x0c (Inherited: 0x00)
struct FRadialMenuRateLimitSettings {
	float RateLimitCycleTime; // 0x00(0x04)
	int32_t RateLimitTokensPerCycle; // 0x04(0x04)
	float RateLimitMinInterval; // 0x08(0x04)
};

// ScriptStruct ShooterGame.RadialMenuSlotDescriptor
// Size: 0x68 (Inherited: 0x00)
struct FRadialMenuSlotDescriptor {
	enum class RadialMenuSlotDisplayType DisplayType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRadialMenuIconSlotDisplay IconDisplay; // 0x08(0x20)
	struct FRadialMenuTextSlotDisplay TextDisplay; // 0x28(0x18)
	struct FText SlotName; // 0x40(0x18)
	struct FName DirectCastEventName; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct ShooterGame.RadialMenuTextSlotDisplay
// Size: 0x18 (Inherited: 0x00)
struct FRadialMenuTextSlotDisplay {
	struct FText Text; // 0x00(0x18)
};

// ScriptStruct ShooterGame.RadialMenuIconSlotDisplay
// Size: 0x20 (Inherited: 0x00)
struct FRadialMenuIconSlotDisplay {
	struct UTexture* IconImage; // 0x00(0x08)
	bool OverrideColor; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor ColorToOverride; // 0x0c(0x10)
	float SizeScale; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.ServerHardwareInfo
// Size: 0x30 (Inherited: 0x00)
struct FServerHardwareInfo {
	struct FString Cpu; // 0x00(0x10)
	struct FString CpuVendor; // 0x10(0x10)
	int32_t CpuMhz; // 0x20(0x04)
	int32_t CpuCoreCount; // 0x24(0x04)
	int32_t CpuThreadCount; // 0x28(0x04)
	int32_t TotalPhysicalMemoryMB; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.ClientHardwareInfo
// Size: 0xa0 (Inherited: 0x00)
struct FClientHardwareInfo {
	struct FString Cpu; // 0x00(0x10)
	struct FString CpuVendor; // 0x10(0x10)
	int32_t CpuMhz; // 0x20(0x04)
	int32_t CpuCoreCount; // 0x24(0x04)
	int32_t CpuThreadCount; // 0x28(0x04)
	int32_t TotalPhysicalMemoryMB; // 0x2c(0x04)
	struct FString Gpu; // 0x30(0x10)
	struct FString GpuVendor; // 0x40(0x10)
	struct FString GpuUserDriverVersion; // 0x50(0x10)
	struct FString GpuInternalDriverVersion; // 0x60(0x10)
	int32_t GpuVramMB; // 0x70(0x04)
	int32_t NativeScreenResolutionX; // 0x74(0x04)
	int32_t NativeScreenResolutionY; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString DeviceModel; // 0x80(0x10)
	struct FString DefaultDeviceQuality; // 0x90(0x10)
};

// ScriptStruct ShooterGame.MachinePerfStats
// Size: 0x64 (Inherited: 0x00)
struct FMachinePerfStats {
	struct FMetric CpuUtilizationPercentForProcess; // 0x00(0x14)
	struct FMetric CpuUtilizationPercentSystemwide; // 0x14(0x14)
	struct FMetric PhysicalMemoryUtilizationPercentForProcess; // 0x28(0x14)
	struct FMetric PhysicalMemoryUtilizationPercentSystemwide; // 0x3c(0x14)
	struct FMetric PhysicalMemoryUtilizationForProcessMB; // 0x50(0x14)
};

// ScriptStruct ShooterGame.AresObjectMetrics
// Size: 0x50 (Inherited: 0x00)
struct FAresObjectMetrics {
	struct FMetric ActorCount; // 0x00(0x14)
	struct FMetric ObjectCount; // 0x14(0x14)
	struct FMetric ReplicatingObjectCount; // 0x28(0x14)
	struct FMetric EnabledTickFunctionCount; // 0x3c(0x14)
};

// ScriptStruct ShooterGame.ServerFrameBuckets
// Size: 0x1c (Inherited: 0x00)
struct FServerFrameBuckets {
	int32_t Sub4MsFrames; // 0x00(0x04)
	int32_t Sub8MsFrames; // 0x04(0x04)
	int32_t Sub10MsFrames; // 0x08(0x04)
	int32_t Sub20MsFrames; // 0x0c(0x04)
	int32_t Sub100MsFrames; // 0x10(0x04)
	int32_t Sub300MsFrames; // 0x14(0x04)
	int32_t Over300MsFrames; // 0x18(0x04)
};

// ScriptStruct ShooterGame.ClientFrameBuckets
// Size: 0x24 (Inherited: 0x00)
struct FClientFrameBuckets {
	int32_t FramesOver240FPS; // 0x00(0x04)
	int32_t FramesOver144FPS; // 0x04(0x04)
	int32_t FramesOver120FPS; // 0x08(0x04)
	int32_t FramesOver60FPS; // 0x0c(0x04)
	int32_t FramesOver30FPS; // 0x10(0x04)
	int32_t FramesOver15FPS; // 0x14(0x04)
	int32_t FramesOver10FPS; // 0x18(0x04)
	int32_t FramesOver1FPS; // 0x1c(0x04)
	int32_t FramesUnder1FPS; // 0x20(0x04)
};

// ScriptStruct ShooterGame.GameBaseInstanceInfo
// Size: 0xa8 (Inherited: 0x00)
struct FGameBaseInstanceInfo {
	struct FString InstanceId; // 0x00(0x10)
	struct FString Branch; // 0x10(0x10)
	struct FString BuildConfiguration; // 0x20(0x10)
	struct FString BuildVersion; // 0x30(0x10)
	int32_t Changelist; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString OsMajor; // 0x48(0x10)
	struct FString OsMinor; // 0x58(0x10)
	struct FString OsHostname; // 0x68(0x10)
	struct FString Cpu; // 0x78(0x10)
	struct FString CpuVendor; // 0x88(0x10)
	int32_t CpuMhz; // 0x98(0x04)
	int32_t CpuCoreCount; // 0x9c(0x04)
	int32_t CpuThreadCount; // 0xa0(0x04)
	int32_t TotalPhysicalMemoryMB; // 0xa4(0x04)
};

// ScriptStruct ShooterGame.GameServerInstanceInfo
// Size: 0xb8 (Inherited: 0xa8)
struct FGameServerInstanceInfo : FGameBaseInstanceInfo {
	struct FString MatchID; // 0xa8(0x10)
};

// ScriptStruct ShooterGame.GameClientInstanceInfo
// Size: 0x148 (Inherited: 0xa8)
struct FGameClientInstanceInfo : FGameBaseInstanceInfo {
	struct FString PlayerName; // 0xa8(0x10)
	struct FString RSOSubject; // 0xb8(0x10)
	struct FString Gpu; // 0xc8(0x10)
	struct FString GpuVendor; // 0xd8(0x10)
	struct FString GpuUserDriverVersion; // 0xe8(0x10)
	struct FString GpuInternalDriverVersion; // 0xf8(0x10)
	int32_t GpuVramMB; // 0x108(0x04)
	int32_t NativeScreenResolutionX; // 0x10c(0x04)
	int32_t NativeScreenResolutionY; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString Platform; // 0x118(0x10)
	struct FString DeviceModel; // 0x128(0x10)
	struct FString DefaultDeviceQuality; // 0x138(0x10)
};

// ScriptStruct ShooterGame.StringSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FStringSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BoolSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FBoolSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.IntSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FIntSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.FloatSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FFloatSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ReflectedSettingsInitializationBlob
// Size: 0x80 (Inherited: 0x00)
struct FReflectedSettingsInitializationBlob {
	struct TArray<enum class EAresFloatSettingName> ReflectedFloatSettingNames; // 0x00(0x10)
	struct TArray<enum class EAresIntSettingName> ReflectedIntSettingNames; // 0x10(0x10)
	struct TArray<enum class EAresBoolSettingName> ReflectedBoolSettingNames; // 0x20(0x10)
	struct TArray<enum class EAresStringSettingName> ReflectedStringSettingNames; // 0x30(0x10)
	struct TArray<float> ReflectedFloatSettingValues; // 0x40(0x10)
	struct TArray<int32_t> ReflectedIntSettingValues; // 0x50(0x10)
	struct TArray<bool> ReflectedBoolSettingValues; // 0x60(0x10)
	struct TArray<struct FString> ReflectedStringSettingValues; // 0x70(0x10)
};

// ScriptStruct ShooterGame.AresSettingsPresetsOption
// Size: 0x158 (Inherited: 0x00)
struct FAresSettingsPresetsOption {
	struct FText PresetName; // 0x00(0x18)
	struct TMap<enum class EAresFloatSettingName, float> FloatSettings; // 0x18(0x50)
	struct TMap<enum class EAresIntSettingName, int32_t> IntSettings; // 0x68(0x50)
	struct TMap<enum class EAresBoolSettingName, bool> BoolSettings; // 0xb8(0x50)
	struct TMap<enum class EAresStringSettingName, struct FString> StringSettings; // 0x108(0x50)
};

// ScriptStruct ShooterGame.AresVoidSetting
// Size: 0x0c (Inherited: 0x00)
struct FAresVoidSetting {
	enum class EAresVoidSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresStringSetting
// Size: 0x30 (Inherited: 0x00)
struct FAresStringSetting {
	enum class EAresStringSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString DefaultValue; // 0x10(0x10)
	struct FString Value; // 0x20(0x10)
};

// ScriptStruct ShooterGame.BaseBoolSetting
// Size: 0x03 (Inherited: 0x00)
struct FBaseBoolSetting {
	enum class EAresBoolSettingName SettingEnum; // 0x00(0x01)
	bool DefaultValue; // 0x01(0x01)
	bool Value; // 0x02(0x01)
};

// ScriptStruct ShooterGame.AresBoolSetting
// Size: 0x0c (Inherited: 0x03)
struct FAresBoolSetting : FBaseBoolSetting {
	char pad_3[0x1]; // 0x03(0x01)
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.BaseIntSetting
// Size: 0x14 (Inherited: 0x00)
struct FBaseIntSetting {
	enum class EAresIntSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinValue; // 0x04(0x04)
	int32_t MaxValue; // 0x08(0x04)
	int32_t DefaultValue; // 0x0c(0x04)
	int32_t Value; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AresIntSetting
// Size: 0x1c (Inherited: 0x14)
struct FAresIntSetting : FBaseIntSetting {
	int32_t PlatformRequirements; // 0x14(0x04)
	enum class ESettingStorageType StorageType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct ShooterGame.BaseFloatSetting
// Size: 0x14 (Inherited: 0x00)
struct FBaseFloatSetting {
	enum class EAresFloatSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	float DefaultValue; // 0x0c(0x04)
	float Value; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AresFloatSetting
// Size: 0x2c (Inherited: 0x14)
struct FAresFloatSetting : FBaseFloatSetting {
	int32_t PlatformRequirements; // 0x14(0x04)
	enum class ESettingStorageType StorageType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ValueIncrementCount; // 0x1c(0x04)
	bool bDisplayNormalizedValues; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float NormalizedMinValue; // 0x24(0x04)
	float NormalizedMaxValue; // 0x28(0x04)
};

// ScriptStruct ShooterGame.AresStringSettingDTO
// Size: 0x20 (Inherited: 0x00)
struct FAresStringSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresBoolSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresBoolSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	bool Value; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresIntSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresIntSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresFloatSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresFloatSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ContentListing
// Size: 0x340 (Inherited: 0x00)
struct FContentListing {
	struct TArray<struct FContentData> Characters; // 0x00(0x10)
	struct TArray<struct FContentData> Equips; // 0x10(0x10)
	struct TArray<struct FContentData> Attachments; // 0x20(0x10)
	struct TArray<struct FGunSkinCatalogData> Skins; // 0x30(0x10)
	struct TArray<struct FContentData> SkinLevels; // 0x40(0x10)
	struct TArray<struct FContentData> Chromas; // 0x50(0x10)
	struct TArray<struct FContentData> Maps; // 0x60(0x10)
	struct TArray<struct FThemeCatalogData> Themes; // 0x70(0x10)
	struct TArray<struct FGameModeCatalogData> GameModes; // 0x80(0x10)
	struct TArray<struct FContentData> Currencies; // 0x90(0x10)
	struct TArray<struct FThematicContentData> Sprays; // 0xa0(0x10)
	struct TArray<struct FContentData> SprayLevels; // 0xb0(0x10)
	struct TArray<struct FCharmCatalogData> Charms; // 0xc0(0x10)
	struct TArray<struct FContentData> CharmLevels; // 0xd0(0x10)
	struct TArray<struct FThematicContentData> PlayerCards; // 0xe0(0x10)
	struct TArray<struct FContentData> PlayerTitles; // 0xf0(0x10)
	struct TArray<struct FContentData> StorefrontItems; // 0x100(0x10)
	struct TArray<struct FContentTierCatalogData> ContentTiers; // 0x110(0x10)
	struct FJuiceSpendRules JuiceSpendRules; // 0x120(0x110)
	struct TArray<struct FMissionCatalogData> Missions; // 0x230(0x10)
	struct TArray<struct FEventCatalogData> Events; // 0x240(0x10)
	struct TArray<struct FSeasonCatalogData> Seasons; // 0x250(0x10)
	struct TArray<struct FCompetitiveSeasonCatalogData> CompetitiveSeasons; // 0x260(0x10)
	struct TArray<struct FPremierSeasonCatalogData> TournamentSeasons; // 0x270(0x10)
	struct TArray<struct FStreamedVideoFileCatalogData> StreamedVideoFiles; // 0x280(0x10)
	struct FContractListing ContractListing; // 0x290(0x20)
	struct FServiceDictionary ServiceDictionary; // 0x2b0(0x50)
	struct TArray<struct FLevelBorderCatalogData> LevelBorders; // 0x300(0x10)
	struct TArray<struct FContentData> Ceremonies; // 0x310(0x10)
	struct TArray<struct FSubscriptionCatalogData> Subscriptions; // 0x320(0x10)
	struct TArray<struct FArchiveCatalogData> Archives; // 0x330(0x10)
};

// ScriptStruct ShooterGame.ContentData
// Size: 0x110 (Inherited: 0x00)
struct FContentData {
	struct FText Name; // 0x00(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x18(0x50)
	struct FString Guid; // 0x68(0x10)
	struct FString AssetName; // 0x78(0x10)
	struct FString AssetPath; // 0x88(0x10)
	bool DevelopmentOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xa0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xb0(0x50)
	bool BaseContent; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UObject* PrimaryAsset; // 0x108(0x08)
};

// ScriptStruct ShooterGame.PlatformInclusionFlags
// Size: 0x01 (Inherited: 0x00)
struct FPlatformInclusionFlags {
	bool DevelopmentOnly; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ArchiveCatalogData
// Size: 0x120 (Inherited: 0x110)
struct FArchiveCatalogData : FContentData {
	struct TArray<struct FGuid> ContractIDs; // 0x110(0x10)
};

// ScriptStruct ShooterGame.SubscriptionCatalogData
// Size: 0x148 (Inherited: 0x110)
struct FSubscriptionCatalogData : FContentData {
	struct FGuid EntitlementTypeID; // 0x110(0x10)
	struct FGuid AuthoringSubscriptionID; // 0x120(0x10)
	float XPBoostAmount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FString XPBoostType; // 0x138(0x10)
};

// ScriptStruct ShooterGame.LevelBorderCatalogData
// Size: 0x78 (Inherited: 0x00)
struct FLevelBorderCatalogData {
	struct FGuid ID; // 0x00(0x10)
	int32_t StartingLevel; // 0x10(0x04)
	bool DevelopmentOnly; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FString> ExcludedPlatforms; // 0x18(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x28(0x50)
};

// ScriptStruct ShooterGame.ServiceDictionary
// Size: 0x50 (Inherited: 0x00)
struct FServiceDictionary {
	struct TMap<struct FString, struct FServiceDictionaryEntry> Entries; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ServiceDictionaryEntry
// Size: 0x50 (Inherited: 0x00)
struct FServiceDictionaryEntry {
	struct TMap<struct FString, struct FString> Translations; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContractListing
// Size: 0x20 (Inherited: 0x00)
struct FContractListing {
	struct TArray<struct FContractDefinition> Contracts; // 0x00(0x10)
	struct FGuid DefaultSpecialContractID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ContractDefinition
// Size: 0x1c0 (Inherited: 0x00)
struct FContractDefinition {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FString AssetName; // 0x78(0x10)
	struct FString AssetPath; // 0x88(0x10)
	bool DevelopmentOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xa0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xb0(0x50)
	bool BaseContent; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FString ContractType; // 0x108(0x10)
	struct FGuid SeasonID; // 0x118(0x10)
	struct FGuid EventID; // 0x128(0x10)
	struct FProgressionSchedule ProgressionSchedule; // 0x138(0x20)
	struct TArray<struct FAlternateProgressionSchedule> AlternateProgressionSchedules; // 0x158(0x10)
	struct TArray<struct FRewardSchedule> RewardSchedules; // 0x168(0x10)
	struct FPremiumContractDetails PremiumContractDetails; // 0x178(0x34)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<int32_t> AccordThresholds; // 0x1b0(0x10)
};

// ScriptStruct ShooterGame.PremiumContractDetails
// Size: 0x34 (Inherited: 0x00)
struct FPremiumContractDetails {
	struct FEntitlementIdentifier Entitlement; // 0x00(0x20)
	struct FGuid PurchaseCurrencyID; // 0x20(0x10)
	int32_t PurchaseCost; // 0x30(0x04)
};

// ScriptStruct ShooterGame.EntitlementIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FEntitlementIdentifier {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RewardSchedule
// Size: 0x30 (Inherited: 0x00)
struct FRewardSchedule {
	struct FGuid ID; // 0x00(0x10)
	struct FRewardSchedulePrerequisites Prerequisites; // 0x10(0x10)
	struct TArray<struct FRewardGrant> RewardsPerLevel; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RewardGrant
// Size: 0x20 (Inherited: 0x00)
struct FRewardGrant {
	struct TArray<struct FEntitlementReward> EntitlementRewards; // 0x00(0x10)
	struct TArray<struct FWalletReward> WalletRewards; // 0x10(0x10)
};

// ScriptStruct ShooterGame.WalletReward
// Size: 0x18 (Inherited: 0x00)
struct FWalletReward {
	struct FGuid CurrencyID; // 0x00(0x10)
	int64_t Amount; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EntitlementReward
// Size: 0x28 (Inherited: 0x00)
struct FEntitlementReward {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	int64_t Amount; // 0x20(0x08)
};

// ScriptStruct ShooterGame.RewardSchedulePrerequisites
// Size: 0x10 (Inherited: 0x00)
struct FRewardSchedulePrerequisites {
	struct TArray<struct FEntitlementIdentifier> RequiredEntitlements; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AlternateProgressionSchedule
// Size: 0x20 (Inherited: 0x00)
struct FAlternateProgressionSchedule {
	struct FGuid ProgressionCurrencyID; // 0x00(0x10)
	struct TArray<struct FAlternateProgressionLevel> ProgressionDeltaPerLevel; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AlternateProgressionLevel
// Size: 0x08 (Inherited: 0x00)
struct FAlternateProgressionLevel {
	bool IsAvailable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ProgressionDelta; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ProgressionSchedule
// Size: 0x20 (Inherited: 0x00)
struct FProgressionSchedule {
	struct FGuid ProgressionCurrencyID; // 0x00(0x10)
	struct TArray<uint32_t> ProgressionDeltaPerLevel; // 0x10(0x10)
};

// ScriptStruct ShooterGame.StreamedVideoFileCatalogData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedVideoFileCatalogData {
	struct FString SourcePath; // 0x00(0x10)
	struct FString TargetFileName; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierSeasonCatalogData
// Size: 0x98 (Inherited: 0x00)
struct FPremierSeasonCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid CompetitiveSeasonID; // 0x10(0x10)
	struct TArray<struct FPremierEventCatalogData> Events; // 0x20(0x10)
	bool DevelopmentOnly; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x38(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x48(0x50)
};

// ScriptStruct ShooterGame.PremierEventCatalogData
// Size: 0x50 (Inherited: 0x00)
struct FPremierEventCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct TArray<struct FPremierEventDivisionScheduleCatalogData> SchedulePerDivision; // 0x20(0x10)
	struct FString MapSelectionStrategy; // 0x30(0x10)
	struct TArray<struct FGuid> MapPoolMapIds; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PremierEventDivisionScheduleCatalogData
// Size: 0x18 (Inherited: 0x00)
struct FPremierEventDivisionScheduleCatalogData {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime StartDateTime; // 0x08(0x08)
	struct FDateTime EndDateTime; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CompetitiveSeasonCatalogData
// Size: 0x1c0 (Inherited: 0x00)
struct FCompetitiveSeasonCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid SeasonID; // 0x10(0x10)
	struct TMap<struct FString, struct FRewardGrant> RankedRewards; // 0x20(0x50)
	struct TArray<struct FCompetitiveTierCatalogData> CompetitiveTiers; // 0x70(0x10)
	struct FCompetitiveSeasonConfigCatalogData Config; // 0x80(0xc8)
	struct FDateTime StartTime; // 0x148(0x08)
	struct FDateTime EndTime; // 0x150(0x08)
	bool DevelopmentOnly; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x160(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x170(0x50)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfigCatalogData
// Size: 0xc8 (Inherited: 0x00)
struct FCompetitiveSeasonConfigCatalogData {
	int32_t SeasonRankIndex; // 0x00(0x04)
	int32_t SeasonTopWinsMaximum; // 0x04(0x04)
	int32_t WinsNeededForSeasonRank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int32_t> PlacementTierAdjustments; // 0x10(0x50)
	int32_t PlacementMaxTier; // 0x60(0x04)
	int32_t PlacementProgress; // 0x64(0x04)
	float LeaderboardRankRatingResetValue; // 0x68(0x04)
	float NewSeasonMinVariance; // 0x6c(0x04)
	int32_t SeasonGamesToShowSkill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FGuid, struct FCompetitiveSeasonConfigArchiveCatalogData> Archives; // 0x78(0x50)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfigArchiveCatalogData
// Size: 0x20 (Inherited: 0x00)
struct FCompetitiveSeasonConfigArchiveCatalogData {
	struct TArray<struct FGuid> Archives; // 0x00(0x10)
	struct FGuid CompleteMasteryArchiveID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CompetitiveTierCatalogData
// Size: 0x30 (Inherited: 0x00)
struct FCompetitiveTierCatalogData {
	int32_t Tier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText TierName; // 0x08(0x18)
	struct FString Division; // 0x20(0x10)
};

// ScriptStruct ShooterGame.SeasonCatalogData
// Size: 0x110 (Inherited: 0x00)
struct FSeasonCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FGuid ParentSeasonID; // 0x78(0x10)
	struct FString Type; // 0x88(0x10)
	struct FDateTime StartTime; // 0x98(0x08)
	struct FDateTime EndTime; // 0xa0(0x08)
	bool DevelopmentOnly; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xb0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xc0(0x50)
};

// ScriptStruct ShooterGame.EventCatalogData
// Size: 0xf0 (Inherited: 0x00)
struct FEventCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FDateTime StartTime; // 0x78(0x08)
	struct FDateTime EndTime; // 0x80(0x08)
	bool DevelopmentOnly; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x90(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xa0(0x50)
};

// ScriptStruct ShooterGame.MissionCatalogData
// Size: 0x1d8 (Inherited: 0x00)
struct FMissionCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedTitlesByCulture; // 0x28(0x50)
	struct FString Type; // 0x78(0x10)
	struct TArray<struct FString> Tags; // 0x88(0x10)
	struct FDateTime Expiration; // 0x98(0x08)
	struct FDateTime Activation; // 0xa0(0x08)
	int64_t XPGrant; // 0xa8(0x08)
	struct TMap<struct FGuid, int64_t> ProgressToCompleteObjectives; // 0xb0(0x50)
	struct TMap<struct FGuid, struct FString> ObjectiveNames; // 0x100(0x50)
	struct FGuid AccordAgent; // 0x150(0x10)
	struct FGuid AccordContract; // 0x160(0x10)
	bool DevelopmentOnly; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x178(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x188(0x50)
};

// ScriptStruct ShooterGame.JuiceSpendRules
// Size: 0x110 (Inherited: 0x00)
struct FJuiceSpendRules {
	struct TMap<struct FGuid, int32_t> WeaponSkinEnergyValueByContentTier; // 0x00(0x50)
	struct TMap<struct FGuid, int32_t> WeaponSkinEnergyCostByContentTier; // 0x50(0x50)
	int32_t WeaponSkinLevelEnergyCost; // 0xa0(0x04)
	int32_t WeaponSkinVariantEnergyCost; // 0xa4(0x04)
	bool DevelopmentOnly; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xb0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xc0(0x50)
};

// ScriptStruct ShooterGame.ContentTierCatalogData
// Size: 0x118 (Inherited: 0x110)
struct FContentTierCatalogData : FContentData {
	int32_t TierRank; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct ShooterGame.ThematicContentData
// Size: 0x120 (Inherited: 0x110)
struct FThematicContentData : FContentData {
	struct FGuid ThemeID; // 0x110(0x10)
};

// ScriptStruct ShooterGame.CharmCatalogData
// Size: 0x130 (Inherited: 0x120)
struct FCharmCatalogData : FThematicContentData {
	struct TArray<struct FGuid> LevelIDs; // 0x120(0x10)
};

// ScriptStruct ShooterGame.GameModeCatalogData
// Size: 0x160 (Inherited: 0x110)
struct FGameModeCatalogData : FContentData {
	struct TMap<struct FString, struct FString> GameRuleOverrides; // 0x110(0x50)
};

// ScriptStruct ShooterGame.ThemeCatalogData
// Size: 0x130 (Inherited: 0x110)
struct FThemeCatalogData : FContentData {
	struct FThemeFeatures Features; // 0x110(0x20)
};

// ScriptStruct ShooterGame.ThemeFeatures
// Size: 0x20 (Inherited: 0x00)
struct FThemeFeatures {
	struct FDateTime ReleaseDate; // 0x00(0x08)
	struct FString ThematicCategory; // 0x08(0x10)
	bool Promo; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.GunSkinCatalogData
// Size: 0x1d8 (Inherited: 0x110)
struct FGunSkinCatalogData : FContentData {
	struct FGuid EquippableID; // 0x110(0x10)
	struct FGuid ContentTierID; // 0x120(0x10)
	struct FGuid DefaultChromaID; // 0x130(0x10)
	struct TArray<struct FGuid> ChromaIDs; // 0x140(0x10)
	struct TArray<struct FGuid> LevelIDs; // 0x150(0x10)
	struct FGuid ThemeID; // 0x160(0x10)
	struct FGunSkinFeatures Features; // 0x170(0x68)
};

// ScriptStruct ShooterGame.GunSkinFeatures
// Size: 0x68 (Inherited: 0x00)
struct FGunSkinFeatures {
	struct FString ModelCategory; // 0x00(0x10)
	struct FString VFXCategory; // 0x10(0x10)
	struct FString SFXCategory; // 0x20(0x10)
	struct FString AnimationCategory; // 0x30(0x10)
	struct FString ShaderCategory; // 0x40(0x10)
	bool Finisher; // 0x50(0x01)
	bool KillBanner; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString MeleeCategory; // 0x58(0x10)
};

// ScriptStruct ShooterGame.PurchsableTableRow
// Size: 0x38 (Inherited: 0x08)
struct FPurchsableTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> PurchsableClass; // 0x08(0x30)
};

// ScriptStruct ShooterGame.BlueprintAutomatedTest
// Size: 0x28 (Inherited: 0x00)
struct FBlueprintAutomatedTest {
	struct FString ShortName; // 0x00(0x10)
	struct UAresTestLogic* ServerTestLogic; // 0x10(0x08)
	struct TArray<struct UAresTestLogic*> ClientTestLogic; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AresAutomationEvent
// Size: 0x20 (Inherited: 0x00)
struct FAresAutomationEvent {
	struct FString Type; // 0x00(0x10)
	struct TArray<struct FString> Params; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresTouchDoubleTapGestureProperties
// Size: 0x14 (Inherited: 0x00)
struct FAresTouchDoubleTapGestureProperties {
	float MaxTimeBetweenTaps; // 0x00(0x04)
	float MaxDistanceBetweenTapsInInches; // 0x04(0x04)
	struct FAresTouchHoldGestureProperties HoldProperties; // 0x08(0x0c)
};

// ScriptStruct ShooterGame.AresTouchHoldGestureProperties
// Size: 0x0c (Inherited: 0x00)
struct FAresTouchHoldGestureProperties {
	float MinimumTimeToHold; // 0x00(0x04)
	float MaximumMoveDistanceInInches; // 0x04(0x04)
	char MaxTouchesTracked; // 0x08(0x01)
	bool bRestartChargeOnInterrupt; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct ShooterGame.orwardedTouchInputRegistryEntry
// Size: 0x10 (Inherited: 0x00)
struct ForwardedTouchInputRegistryEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresTouchWheelSegmentTableEntry
// Size: 0x48 (Inherited: 0x08)
struct FAresTouchWheelSegmentTableEntry : FTableRowBase {
	bool bIsStaticSectionSegment; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FAresTouchWheelSegmentData SegmentData; // 0x10(0x28)
	struct TArray<struct FAresTouchWheelSegmentData> SegmentSuboptions; // 0x38(0x10)
};

// ScriptStruct ShooterGame.AresTouchWheelSegmentData
// Size: 0x28 (Inherited: 0x00)
struct FAresTouchWheelSegmentData {
	struct UAresTouchWheelSegment* SegmentBehaviorClass; // 0x00(0x08)
	struct FText OverrideSegmentText; // 0x08(0x18)
	struct UTexture2D* OverrideSegmentIconTexture; // 0x20(0x08)
};

// ScriptStruct ShooterGame.TrailNodeData
// Size: 0x18 (Inherited: 0x00)
struct FTrailNodeData {
	struct UParticleSystemComponent* SpawnedBeam; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AresUIPropertyMap
// Size: 0x2d0 (Inherited: 0x00)
struct FAresUIPropertyMap {
	struct TMap<struct FString, int32_t> IntProperties; // 0x00(0x50)
	struct TMap<struct FString, float> FloatProperties; // 0x50(0x50)
	struct TMap<struct FString, bool> BoolProperties; // 0xa0(0x50)
	struct TMap<struct FString, struct FText> TextProperties; // 0xf0(0x50)
	struct TMap<struct FString, struct FLinearColor> LinearColorProperties; // 0x140(0x50)
	struct TMap<struct FString, struct FVector2D> Vector2DProperties; // 0x190(0x50)
	struct TMap<struct FString, struct UTexture2D*> Texture2DProperties; // 0x1e0(0x50)
	struct TMap<struct FString, struct UMaterialInstance*> MaterialInstanceProperties; // 0x230(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> MaterialInterfaceProperties; // 0x280(0x50)
};

// ScriptStruct ShooterGame.AresWhizBySoundTuning
// Size: 0x14 (Inherited: 0x00)
struct FAresWhizBySoundTuning {
	struct FName WhizByName; // 0x00(0x0c)
	int32_t NumWhizByVariations; // 0x0c(0x04)
	float WhizByChance; // 0x10(0x04)
};

// ScriptStruct ShooterGame.NormalizedScreenDistanceCheck
// Size: 0x08 (Inherited: 0x00)
struct FNormalizedScreenDistanceCheck {
	float HorizontalMaxScreenDistanceNormalized01; // 0x00(0x04)
	float VerticalMaxScreenDistanceNormalized01; // 0x04(0x04)
};

// ScriptStruct ShooterGame.MaterialParamCollectionOverrides
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParamCollectionOverrides {
	struct TArray<struct FMaterialParamCollectionOverride> OverrideList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MaterialParamCollectionOverride
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParamCollectionOverride {
	struct UMaterialParameterCollection* BaseCollection; // 0x00(0x08)
	struct UMaterialParameterCollection* OverrideCollection; // 0x08(0x08)
};

// ScriptStruct ShooterGame.VisionOccluderGroup
// Size: 0x28 (Inherited: 0x00)
struct FVisionOccluderGroup {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.GameModeSpecificSublevelsByKey
// Size: 0x18 (Inherited: 0x00)
struct FGameModeSpecificSublevelsByKey {
	enum class EGameModeSublevelKey SublevelKey; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftObjectPtr<UWorld>> Sublevels; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CalloutRegion
// Size: 0x10 (Inherited: 0x00)
struct FCalloutRegion {
	struct TArray<struct FString> SubRegions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VisionGeometry
// Size: 0x20 (Inherited: 0x08)
struct FVisionGeometry : FTableRowBase {
	struct FString Type; // 0x08(0x10)
	float X; // 0x18(0x04)
	float Y; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresNetViewer
// Size: 0x30 (Inherited: 0x30)
struct FAresNetViewer : FNetViewer {
};

// ScriptStruct ShooterGame.DamageTrackingEntry
// Size: 0x10 (Inherited: 0x00)
struct FDamageTrackingEntry {
	float AccumulatedDamage; // 0x00(0x04)
	float ConsumedDamage; // 0x04(0x04)
	float LastTimeDamageDealt; // 0x08(0x04)
	float AssistExpiryTime; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DamagingAssistThreshold
// Size: 0x08 (Inherited: 0x00)
struct FDamagingAssistThreshold {
	float DamageThreshold; // 0x00(0x04)
	float AssistDuration; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AssistDefinitionTableRow
// Size: 0x58 (Inherited: 0x08)
struct FAssistDefinitionTableRow : FTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x0c)
	enum class EAresAssistType AssistType; // 0x14(0x01)
	enum class EBasicAssistType BasicType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FGameplayTag HigherPriorityThan; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftClassPtr<UObject> ShipsWithAssetLabel; // 0x28(0x30)
};

// ScriptStruct ShooterGame.AttachmentSettings
// Size: 0x0c (Inherited: 0x00)
struct FAttachmentSettings {
	struct FName AttachPoint; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.AVSResponseCallback
// Size: 0x28 (Inherited: 0x00)
struct FAVSResponseCallback {
	struct FDelegate OnSuccess; // 0x00(0x14)
	struct FDelegate OnError; // 0x14(0x14)
};

// ScriptStruct ShooterGame.AVSRMSResponse
// Size: 0x70 (Inherited: 0x00)
struct FAVSRMSResponse {
	struct FAVSRMSData Data; // 0x00(0x40)
	struct FAVSRMSError Error; // 0x40(0x20)
	struct FString ClientMessageId; // 0x60(0x10)
};

// ScriptStruct ShooterGame.AVSRMSError
// Size: 0x20 (Inherited: 0x00)
struct FAVSRMSError {
	struct FString ErrorCode; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AVSRMSData
// Size: 0x40 (Inherited: 0x00)
struct FAVSRMSData {
	struct FString Status; // 0x00(0x10)
	int64_t PinExpiresAtEpochMillis; // 0x10(0x08)
	struct FAVSPhoneNumberData MessagedPhoneNumberObfuscated; // 0x18(0x28)
};

// ScriptStruct ShooterGame.AVSPhoneNumberData
// Size: 0x28 (Inherited: 0x00)
struct FAVSPhoneNumberData {
	struct FString CountryCode; // 0x00(0x10)
	struct FString EndsWith; // 0x10(0x10)
	int64_t Length; // 0x20(0x08)
};

// ScriptStruct ShooterGame.AVSDebugUnverifyAccountRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSDebugUnverifyAccountRequest {
	struct FString Puuid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSDebugVerifyAccountRequest
// Size: 0x20 (Inherited: 0x00)
struct FAVSDebugVerifyAccountRequest {
	struct FString Puuid; // 0x00(0x10)
	struct FString PhoneNumber; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AVSConfirmPinRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSConfirmPinRequest {
	struct FString OneTimePin; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSSendDeactivationPinRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSSendDeactivationPinRequest {
	struct FString Locale; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSSendActivationPinRequest
// Size: 0x20 (Inherited: 0x00)
struct FAVSSendActivationPinRequest {
	struct FString PhoneNumber; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CrosshairShape
// Size: 0x18 (Inherited: 0x00)
struct FCrosshairShape {
	bool bElementVisible; // 0x00(0x01)
	enum class ECrosshairShapeType ShapeType; // 0x01(0x01)
	enum class EAresHudCrosshairPoints PointType; // 0x02(0x01)
	enum class EAresDrawOrigin DrawOrigin; // 0x03(0x01)
	struct FVector2D ElementOffset; // 0x04(0x08)
	struct FVector2D ElementErrorDirection; // 0x0c(0x08)
	enum class ECrosshairLocation CrosshairLocation; // 0x14(0x01)
	bool bFadeOutWithRecoil; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct ShooterGame.AresHitConfirmTuning
// Size: 0x58 (Inherited: 0x00)
struct FAresHitConfirmTuning {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x10)
	struct FAresTimedInterpolant AlphaTuning; // 0x18(0x1c)
	struct FAresTimedOvershootValue ScaleTuning; // 0x34(0x20)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ShooterGame.AresBaseGameMatchState
// Size: 0x01 (Inherited: 0x00)
struct FAresBaseGameMatchState {
	bool bHasMatchStarted; // 0x00(0x01)
};

// ScriptStruct ShooterGame.BehaviorScoreTrackerTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FBehaviorScoreTrackerTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FBehaviorScoreTrackerMouseMovementTelemetry MouseMovementTelemetry; // 0x20(0x10)
};

// ScriptStruct ShooterGame.BehaviorScoreTrackerMouseMovementTelemetry
// Size: 0x10 (Inherited: 0x00)
struct FBehaviorScoreTrackerMouseMovementTelemetry {
	float PitchDeltaMean; // 0x00(0x04)
	float PitchDeltaStandardDeviation; // 0x04(0x04)
	float YawDeltaMean; // 0x08(0x04)
	float YawDeltaStandardDeviation; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresBombGameMatchState
// Size: 0x08 (Inherited: 0x01)
struct FAresBombGameMatchState : FAresBaseGameMatchState {
	bool bIsStoreAvaliable; // 0x01(0x01)
	bool bShouldDisplayTimer; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TimeToDisplay; // 0x04(0x04)
};

// ScriptStruct ShooterGame.SortedNode
// Size: 0x0c (Inherited: 0x00)
struct FSortedNode {
	float Distance; // 0x00(0x04)
	struct FIntPoint Coords; // 0x04(0x08)
};

// ScriptStruct ShooterGame.NodeGrid
// Size: 0x38 (Inherited: 0x00)
struct FNodeGrid {
	struct FIntPoint Min; // 0x00(0x08)
	struct FIntPoint Max; // 0x08(0x08)
	float LowestNode; // 0x10(0x04)
	float HeighestNode; // 0x14(0x04)
	float MaxDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPatchNode> NodeArray; // 0x20(0x10)
	bool bPatchIsValid; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t LineSize; // 0x34(0x04)
};

// ScriptStruct ShooterGame.PatchNode
// Size: 0x1c (Inherited: 0x00)
struct FPatchNode {
	float FloorZ; // 0x00(0x04)
	float CeilingZ; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantizeNormal Normal; // 0x0c(0x0c)
	char bEdgePoint : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	enum class ENodeStatus Status; // 0x19(0x01)
	int16_t ListIndex; // 0x1a(0x02)
};

// ScriptStruct ShooterGame.CellEdge
// Size: 0x3c (Inherited: 0x00)
struct FCellEdge {
	struct FVector Start; // 0x00(0x0c)
	float StartDistance; // 0x0c(0x04)
	struct FIntPoint StartPoint; // 0x10(0x08)
	struct FVector End; // 0x18(0x0c)
	float EndDistance; // 0x24(0x04)
	struct FIntPoint EndPoint; // 0x28(0x08)
	struct FVector OutsideDirection; // 0x30(0x0c)
};

// ScriptStruct ShooterGame.CharacterHudDrawValues
// Size: 0x30 (Inherited: 0x00)
struct FCharacterHudDrawValues {
	struct UTexture* Icon; // 0x00(0x08)
	struct FLinearColor IconTint; // 0x08(0x10)
	int32_t Value; // 0x18(0x04)
	struct FLinearColor ValueTint; // 0x1c(0x10)
	int32_t MaxValue; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.CharacterHUDUIDataStruct
// Size: 0x30 (Inherited: 0x00)
struct FCharacterHUDUIDataStruct {
	struct TSoftClassPtr<UObject> UIData; // 0x00(0x30)
};

// ScriptStruct ShooterGame.ChatFriendMetadatas
// Size: 0x10 (Inherited: 0x00)
struct FChatFriendMetadatas {
	struct TArray<struct FChatFriendMetadata> Friends; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ChatFriendMetadata
// Size: 0x90 (Inherited: 0x00)
struct FChatFriendMetadata {
	struct FString DisplayGroup; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString GameTag; // 0x20(0x10)
	struct FString Group; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
	struct FString Note; // 0x50(0x10)
	struct FString Pid; // 0x60(0x10)
	struct FString Puuid; // 0x70(0x10)
	struct FString Region; // 0x80(0x10)
};

// ScriptStruct ShooterGame.ChatFriendMetadataUpdate
// Size: 0x30 (Inherited: 0x00)
struct FChatFriendMetadataUpdate {
	struct FString Puuid; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString Note; // 0x20(0x10)
};

// ScriptStruct ShooterGame.CinematicCameraDebugData
// Size: 0xd0 (Inherited: 0x00)
struct FCinematicCameraDebugData {
	struct FCinematicCameraData CameraData; // 0x00(0x50)
	struct FCinematicCameraScoreData ScoreData; // 0x50(0x60)
	struct FString CameraActorName; // 0xb0(0x10)
	struct AActor* CameraActor; // 0xc0(0x08)
	bool bIsDestroyed; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct ShooterGame.CinematicCameraScoreData
// Size: 0x60 (Inherited: 0x00)
struct FCinematicCameraScoreData {
	struct FCinematicCameraData CameraData; // 0x00(0x50)
	float Score; // 0x50(0x04)
	float CameraToTargetDotProduct; // 0x54(0x04)
	float DistanceFromCamera; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.ClientFilteredPerformanceProfile
// Size: 0x150 (Inherited: 0x00)
struct FClientFilteredPerformanceProfile {
	struct TArray<struct FClientPerRoundPerformanceData> PerRoundPerformanceData; // 0x00(0x10)
	char GameplayFlagsFilter; // 0x10(0x01)
	bool IsCoachOrObserver; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString InstanceId; // 0x18(0x10)
	struct FString Subject; // 0x28(0x10)
	struct FString MatchID; // 0x38(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x48(0x20)
	struct FClientHardwareInfo HardwareInfo; // 0x68(0xa0)
	struct FPerfSettings Settings; // 0x108(0x48)
};

// ScriptStruct ShooterGame.PerfSettings
// Size: 0x48 (Inherited: 0x00)
struct FPerfSettings {
	struct FString WindowMode; // 0x00(0x10)
	float FpsCap; // 0x10(0x04)
	int32_t VSyncMode; // 0x14(0x04)
	int32_t UserSelectedResolutionX; // 0x18(0x04)
	int32_t UserSelectedResolutionY; // 0x1c(0x04)
	int32_t MaterialQuality; // 0x20(0x04)
	int32_t TextureQuality; // 0x24(0x04)
	struct FString AntiAliasing; // 0x28(0x10)
	int32_t ClarityEnabled; // 0x38(0x04)
	int32_t SharpenEnabled; // 0x3c(0x04)
	int32_t CharacterOutlines; // 0x40(0x04)
	int32_t OneFrameLatency; // 0x44(0x04)
};

// ScriptStruct ShooterGame.TelemetryPlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FTelemetryPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ClientPerRoundPerformanceData
// Size: 0x588 (Inherited: 0x00)
struct FClientPerRoundPerformanceData {
	int64_t RoundDuration; // 0x00(0x08)
	int32_t RoundNumber; // 0x08(0x04)
	struct FMetric TotalFrameTime; // 0x0c(0x14)
	struct FMetric ProcessingTime; // 0x20(0x14)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x34(0x474)
	struct FClientFrameBuckets FrameBuckets; // 0x4a8(0x24)
	struct FMachinePerfStats MachinePerfStats; // 0x4cc(0x64)
	struct FAresObjectMetrics ObjectMetrics; // 0x530(0x50)
	char MoveTimestepsPerSecond; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
};

// ScriptStruct ShooterGame.ClientEndOfRoundPerformanceProfile
// Size: 0x6e8 (Inherited: 0x00)
struct FClientEndOfRoundPerformanceProfile {
	struct FMetric TotalFrameTime; // 0x00(0x14)
	struct FMetric ProcessingTime; // 0x14(0x14)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x28(0x474)
	struct FAresObjectMetrics ObjectMetrics; // 0x49c(0x50)
	struct FClientFrameBuckets FrameBuckets; // 0x4ec(0x24)
	struct FString MatchID; // 0x510(0x10)
	int32_t RoundNumber; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	int64_t RoundDuration; // 0x528(0x08)
	struct FString InstanceId; // 0x530(0x10)
	struct FPerfSettings Settings; // 0x540(0x48)
	struct FMachinePerfStats MachinePerfStats; // 0x588(0x64)
	char MoveTimestepsPerSecond; // 0x5ec(0x01)
	char pad_5ED[0x3]; // 0x5ed(0x03)
	struct FNetworkPacketStats NetworkPacketStats; // 0x5f0(0x54)
	char pad_644[0x4]; // 0x644(0x04)
	struct FNetworkLatencyStats NetworkLatencyStats; // 0x648(0x70)
	struct FString Puuid; // 0x6b8(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x6c8(0x20)
};

// ScriptStruct ShooterGame.NetworkLatencyStats
// Size: 0x70 (Inherited: 0x00)
struct FNetworkLatencyStats {
	struct FMetric NetworkRTTms; // 0x00(0x14)
	struct FPingBuckets NetworkRTTmsBuckets; // 0x14(0x1c)
	struct FPacketDeltaTimeBuckets PacketDeltaTimeBuckets; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString NetworkConnectionType; // 0x50(0x10)
	struct FString SimulatedNetworkDegradationPreset; // 0x60(0x10)
};

// ScriptStruct ShooterGame.PingBuckets
// Size: 0x1c (Inherited: 0x00)
struct FPingBuckets {
	int32_t Over200ms; // 0x00(0x04)
	int32_t Between100and200ms; // 0x04(0x04)
	int32_t Between50and100ms; // 0x08(0x04)
	int32_t Between35and50ms; // 0x0c(0x04)
	int32_t Between20and35ms; // 0x10(0x04)
	int32_t Between10and20ms; // 0x14(0x04)
	int32_t Below10ms; // 0x18(0x04)
};

// ScriptStruct ShooterGame.NetworkPacketStats
// Size: 0x54 (Inherited: 0x00)
struct FNetworkPacketStats {
	struct FMetric SentPacketSize; // 0x00(0x14)
	uint32_t BytesSent; // 0x14(0x04)
	uint32_t PacketsSent; // 0x18(0x04)
	uint32_t LostOutgoingPackets; // 0x1c(0x04)
	uint32_t PacketsSentOutOfOrder; // 0x20(0x04)
	uint32_t PacketsSplit; // 0x24(0x04)
	uint32_t PacketsOverSizeSoftLimit; // 0x28(0x04)
	uint32_t PacketsOverSizeHardLimit; // 0x2c(0x04)
	struct FMetric ReceivedPacketSize; // 0x30(0x14)
	uint32_t BytesReceived; // 0x44(0x04)
	uint32_t PacketsReceived; // 0x48(0x04)
	uint32_t LostIncomingPackets; // 0x4c(0x04)
	uint32_t PacketsReceivedOutOfOrder; // 0x50(0x04)
};

// ScriptStruct ShooterGame.ClientGameplaySystemTrackingData
// Size: 0xc8 (Inherited: 0x00)
struct FClientGameplaySystemTrackingData {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct ShooterGame.ClientGameplaySystemSummaryEvent
// Size: 0xe8 (Inherited: 0x00)
struct FClientGameplaySystemSummaryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FClientGameplaySystemSummary CombatData; // 0x20(0x64)
	struct FClientGameplaySystemSummary NonCombatData; // 0x84(0x64)
};

// ScriptStruct ShooterGame.ClientGameplaySystemSummary
// Size: 0x64 (Inherited: 0x00)
struct FClientGameplaySystemSummary {
	struct FMoveCorrectionSizeBuckets MoveCorrectionSizeBuckets; // 0x00(0x18)
	uint32_t EquippableCorrectionCount; // 0x18(0x04)
	uint32_t DroppedMoveEventCount; // 0x1c(0x04)
	float DroppedMoveEventMeanDuration; // 0x20(0x04)
	float DroppedMoveEventMaxDuration; // 0x24(0x04)
	uint32_t DroppedInputEventCount; // 0x28(0x04)
	float DroppedInputEventMeanDuration; // 0x2c(0x04)
	float DroppedInputEventMaxDuration; // 0x30(0x04)
	struct FRemoteMoveQueueSizeBuckets RemoteMoveQueueSizeBuckets; // 0x34(0x18)
	uint32_t RemoteForwardPredictEventCount; // 0x4c(0x04)
	float RemoteForwardPredictMeanDuration; // 0x50(0x04)
	float RemoteForwardPredictMaxDuration; // 0x54(0x04)
	float RemoteMoveProcessingDelayMean; // 0x58(0x04)
	float RemoteMoveProcessingDelayStdDeviation; // 0x5c(0x04)
	float RemoteMoveProcessingDelayP95; // 0x60(0x04)
};

// ScriptStruct ShooterGame.RemoteMoveQueueSizeBuckets
// Size: 0x18 (Inherited: 0x00)
struct FRemoteMoveQueueSizeBuckets {
	int32_t EmptyQueue; // 0x00(0x04)
	int32_t Between0and2; // 0x04(0x04)
	int32_t Between2and4; // 0x08(0x04)
	int32_t Between4and6; // 0x0c(0x04)
	int32_t Between6and8; // 0x10(0x04)
	int32_t Over8; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MoveCorrectionSizeBuckets
// Size: 0x18 (Inherited: 0x00)
struct FMoveCorrectionSizeBuckets {
	int32_t LessThan10; // 0x00(0x04)
	int32_t Between10and50; // 0x04(0x04)
	int32_t Between50and100; // 0x08(0x04)
	int32_t Between100and200; // 0x0c(0x04)
	int32_t Between200and400; // 0x10(0x04)
	int32_t AtLeast400; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ClientTelemetryPeristenceData
// Size: 0x30 (Inherited: 0x00)
struct FClientTelemetryPeristenceData {
	struct FMidMatchNetworkFailureDetails LastMidMatchNetworkFailureDetails; // 0x00(0x18)
	struct FMidMatchCrashDetails LastMidMatchCrashDetails; // 0x18(0x18)
};

// ScriptStruct ShooterGame.MidMatchCrashDetails
// Size: 0x18 (Inherited: 0x00)
struct FMidMatchCrashDetails {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MatchID; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MidMatchNetworkFailureDetails
// Size: 0x18 (Inherited: 0x00)
struct FMidMatchNetworkFailureDetails {
	bool bIsValid; // 0x00(0x01)
	enum class ENetworkFailure FailureType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString MatchID; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundReports
// Size: 0x18 (Inherited: 0x00)
struct FRoundReports {
	int32_t RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCharacterCombatReport> Reports; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CharacterCombatReport
// Size: 0x78 (Inherited: 0x00)
struct FCharacterCombatReport {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRoundTimestamp LastInteractionTime; // 0x08(0x18)
	struct TArray<struct FParticipantInteractions> Interactions; // 0x20(0x10)
	struct FCombatReportRespawnInfo RespawnInfo; // 0x30(0x20)
	struct FCombatReportDeathDetails DeathDetails; // 0x50(0x28)
};

// ScriptStruct ShooterGame.CombatReportDeathDetails
// Size: 0x28 (Inherited: 0x00)
struct FCombatReportDeathDetails {
	bool bDied; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector DeathLocation; // 0x04(0x0c)
	struct FRoundTimestamp DeathTime; // 0x10(0x18)
};

// ScriptStruct ShooterGame.RoundTimestamp
// Size: 0x18 (Inherited: 0x00)
struct FRoundTimestamp {
	struct UGameStateHUDConfig* HUDConfig; // 0x00(0x08)
	float StateRemainingTime; // 0x08(0x04)
	float GameTime; // 0x0c(0x04)
	enum class EAresGamePhase GamePhase; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CombatReportRespawnInfo
// Size: 0x20 (Inherited: 0x00)
struct FCombatReportRespawnInfo {
	struct AShooterPlayerState* ResurrectorPlayerState; // 0x00(0x08)
	struct FRoundTimestamp RespawnTime; // 0x08(0x18)
};

// ScriptStruct ShooterGame.ParticipantInteractions
// Size: 0x70 (Inherited: 0x00)
struct FParticipantInteractions {
	struct AShooterPlayerState* ParticipantInfo; // 0x00(0x08)
	struct FRoundTimestamp LastInteractionTime; // 0x08(0x18)
	float DamageDealt; // 0x20(0x04)
	int32_t HitsDealt; // 0x24(0x04)
	float DamageRecieved; // 0x28(0x04)
	int32_t HitsRecieved; // 0x2c(0x04)
	bool bDidKill; // 0x30(0x01)
	enum class EAresAssistType AssistType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct AShooterPlayerState* ParticipantsKillerState; // 0x38(0x08)
	bool bWasKiller; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FCombatInteraction> DealtIteractions; // 0x48(0x10)
	struct TArray<struct FCombatInteraction> ReceivedInteractions; // 0x58(0x10)
	int32_t CombatReportIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.CombatInteraction
// Size: 0x68 (Inherited: 0x00)
struct FCombatInteraction {
	struct FRoundTimestamp StartTime; // 0x00(0x18)
	struct FRoundTimestamp EndTime; // 0x18(0x18)
	struct UShooterDamageType* DamageType; // 0x30(0x08)
	struct TArray<struct FNonRegionalDamageInteraction> NonRegionalDamageInteractions; // 0x38(0x10)
	struct TArray<struct FRegionalDamageInteraction> RegionalDamageInteractions; // 0x48(0x10)
	struct TArray<struct FNonRegionalDamageInteraction> BlockedDamageInteractions; // 0x58(0x10)
};

// ScriptStruct ShooterGame.NonRegionalDamageInteraction
// Size: 0x20 (Inherited: 0x00)
struct FNonRegionalDamageInteraction {
	struct UCombatReportDamagedDisplayConfig* DamagedDisplayConfig; // 0x00(0x08)
	int32_t Hits; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	bool bIsWallPen; // 0x10(0x01)
	bool bIsKill; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct AAresItem* DestroyedArmor; // 0x18(0x08)
};

// ScriptStruct ShooterGame.RegionalDamageInteraction
// Size: 0x18 (Inherited: 0x00)
struct FRegionalDamageInteraction {
	enum class EAresRegionalDamage Region; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Hits; // 0x04(0x04)
	float Damage; // 0x08(0x04)
	bool bIsWallPen; // 0x0c(0x01)
	bool bIsKill; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct AAresItem* DestroyedArmor; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ScoreKillData
// Size: 0x48 (Inherited: 0x00)
struct FScoreKillData {
	struct AOwnerExclusivePlayerInfo* VictimPlayerInfo; // 0x00(0x08)
	struct UDamageResponse* Response; // 0x08(0x08)
	int32_t KillPoints; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
	struct AOwnerExclusivePlayerInfo* KillerPlayerInfo; // 0x38(0x08)
	bool bWasHeadshot; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.CompetitiveSeasonArchives
// Size: 0x40 (Inherited: 0x00)
struct FCompetitiveSeasonArchives {
	struct TArray<struct TSoftClassPtr<UObject>> Archives; // 0x00(0x10)
	struct TSoftClassPtr<UObject> CompleteMasteryArchive; // 0x10(0x30)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfig
// Size: 0x78 (Inherited: 0x00)
struct FCompetitiveSeasonConfig {
	int32_t SeasonRankIndex; // 0x00(0x04)
	int32_t SeasonTopWinsMaximum; // 0x04(0x04)
	int32_t WinsNeededForSeasonRank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int32_t> PlacementTierAdjustments; // 0x10(0x50)
	int32_t PlacementMaxTier; // 0x60(0x04)
	int32_t PlacementProgress; // 0x64(0x04)
	float LeaderboardRankRatingResetValue; // 0x68(0x04)
	float NewSeasonMinVariance; // 0x6c(0x04)
	int32_t SeasonGamesToShowSkill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ShooterGame.CompetitiveTierData
// Size: 0x88 (Inherited: 0x08)
struct FCompetitiveTierData : FTableRowBase {
	int32_t Tier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TierName; // 0x10(0x18)
	enum class ECompetitiveDivision Division; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText DivisionName; // 0x30(0x18)
	struct FLinearColor Color; // 0x48(0x10)
	struct FLinearColor BackgroundColor; // 0x58(0x10)
	struct UTexture* IconTextureSmall; // 0x68(0x08)
	struct UTexture* IconTextureLarge; // 0x70(0x08)
	struct UTexture* IconRankTriangleUp; // 0x78(0x08)
	struct UTexture* IconRankTriangleDown; // 0x80(0x08)
};

// ScriptStruct ShooterGame.ComponentDataStream
// Size: 0x18 (Inherited: 0x00)
struct FComponentDataStream {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ConcatenatedListModel_MapIndexOuterToInnerResult
// Size: 0x18 (Inherited: 0x00)
struct FConcatenatedListModel_MapIndexOuterToInnerResult {
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x00(0x10)
	int32_t ListModelIndex; // 0x10(0x04)
	int32_t ListItemIndex; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ConcatenatedListModel_Entry
// Size: 0x18 (Inherited: 0x00)
struct FConcatenatedListModel_Entry {
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ConfigDTO
// Size: 0x58 (Inherited: 0x00)
struct FConfigDTO {
	char pad_0[0x50]; // 0x00(0x50)
	struct FDateTime LastApplication; // 0x50(0x08)
};

// ScriptStruct ShooterGame.FoWDatabaseEntry
// Size: 0x18 (Inherited: 0x00)
struct FFoWDatabaseEntry {
	struct AActor* Subject; // 0x00(0x08)
	enum class EFoWRelevancyResult FoWStatus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector ActorLocation; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.FiltersActionEvent
// Size: 0x60 (Inherited: 0x00)
struct FFiltersActionEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString Screen; // 0x10(0x10)
	struct FString ActionType; // 0x20(0x10)
	struct TArray<struct FCriterion> ActiveCriteria; // 0x30(0x10)
	struct FPlatformInfo PlatformInfo; // 0x40(0x20)
};

// ScriptStruct ShooterGame.PlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.Criterion
// Size: 0x20 (Inherited: 0x00)
struct FCriterion {
	struct FString FilterGroup; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ArchiveData
// Size: 0x08 (Inherited: 0x00)
struct FArchiveData {
	struct UArchiveDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyData
// Size: 0x08 (Inherited: 0x00)
struct FMassRewardsCeremonyData {
	struct UMassRewardsCeremonyDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.AresEventData
// Size: 0x18 (Inherited: 0x00)
struct FAresEventData {
	struct UEventDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.TournamentsTeamIconData
// Size: 0x08 (Inherited: 0x00)
struct FTournamentsTeamIconData {
	struct UTournamentsTeamIconDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.LevelBorderData
// Size: 0x18 (Inherited: 0x00)
struct FLevelBorderData {
	struct ULevelBorderDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MatchmakingQueueData
// Size: 0x18 (Inherited: 0x00)
struct FMatchmakingQueueData {
	struct UMatchmakingQueueDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.StreamedVideoData
// Size: 0x18 (Inherited: 0x00)
struct FStreamedVideoData {
	struct UStreamedVideoDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ActRankBorderData
// Size: 0x18 (Inherited: 0x00)
struct FActRankBorderData {
	struct UActRankBorderDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PremierSeasonData
// Size: 0x08 (Inherited: 0x00)
struct FPremierSeasonData {
	struct UPremierSeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CompetitiveSeasonData
// Size: 0x08 (Inherited: 0x00)
struct FCompetitiveSeasonData {
	struct UCompetitiveSeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SubscriptionData
// Size: 0x08 (Inherited: 0x00)
struct FSubscriptionData {
	struct USubscriptionDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SeasonData
// Size: 0x08 (Inherited: 0x00)
struct FSeasonData {
	struct USeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ContentTierData
// Size: 0x18 (Inherited: 0x00)
struct FContentTierData {
	struct UContentTierDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ContractV2Data
// Size: 0x18 (Inherited: 0x00)
struct FContractV2Data {
	struct UContractDataAssetV2* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PlayerTitleData
// Size: 0x30 (Inherited: 0x00)
struct FPlayerTitleData {
	struct UPlayerTitleDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId PlayerTitleId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ArmorData
// Size: 0x08 (Inherited: 0x00)
struct FArmorData {
	struct UArmorDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.StorefrontItemData
// Size: 0x30 (Inherited: 0x00)
struct FStorefrontItemData {
	struct UStorefrontItemDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId StorefrontItemId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ObjectiveData
// Size: 0x08 (Inherited: 0x00)
struct FObjectiveData {
	struct UObjectiveDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MissionData
// Size: 0x08 (Inherited: 0x00)
struct FMissionData {
	struct UMissionDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PlayerCardData
// Size: 0x08 (Inherited: 0x00)
struct FPlayerCardData {
	struct UPlayerCardDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EquippableCharmLevelData
// Size: 0x38 (Inherited: 0x00)
struct FEquippableCharmLevelData {
	struct UEquippableCharmLevelDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId EquippableCharmLevelId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
	int32_t Level; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.EquippableCharmData
// Size: 0x58 (Inherited: 0x00)
struct FEquippableCharmData {
	struct UEquippableCharmDataAsset* DataAsset; // 0x00(0x08)
	struct TSet<struct FGuid> EquippableCharmLevels; // 0x08(0x50)
};

// ScriptStruct ShooterGame.JuiceBoxData
// Size: 0x08 (Inherited: 0x00)
struct FJuiceBoxData {
	struct UJuiceBoxDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CurrencyData
// Size: 0x08 (Inherited: 0x00)
struct FCurrencyData {
	struct UCurrencyDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.GameModeData
// Size: 0x08 (Inherited: 0x00)
struct FGameModeData {
	struct UGameModeDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MapData
// Size: 0x08 (Inherited: 0x00)
struct FMapData {
	struct UMapDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CharacterData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterData {
	struct UCharacterDataAsset* DataAsset; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.CharacterRoleData
// Size: 0x08 (Inherited: 0x00)
struct FCharacterRoleData {
	struct UCharacterRoleDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SprayEquipSlotData
// Size: 0x08 (Inherited: 0x00)
struct FSprayEquipSlotData {
	struct USprayEquipSlotDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SprayLevelData
// Size: 0x38 (Inherited: 0x00)
struct FSprayLevelData {
	struct USprayLevelDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId SprayLevelId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
	int32_t Level; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.SprayData
// Size: 0x58 (Inherited: 0x00)
struct FSprayData {
	struct USprayDataAsset* DataAsset; // 0x00(0x08)
	struct TSet<struct FGuid> SprayLevels; // 0x08(0x50)
};

// ScriptStruct ShooterGame.SocketData
// Size: 0x08 (Inherited: 0x00)
struct FSocketData {
	struct USocketDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EquippableData
// Size: 0xa8 (Inherited: 0x00)
struct FEquippableData {
	struct TSet<struct FGuid> EquippableAttachments; // 0x00(0x50)
	struct TSet<struct FGuid> EquippableSkins; // 0x50(0x50)
	struct UEquippableDataAsset* DataAsset; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.EquippableSkinData
// Size: 0xd0 (Inherited: 0x00)
struct FEquippableSkinData {
	struct FPrimaryAssetId EquippableSkinId; // 0x00(0x18)
	struct TSet<struct FGuid> EquippableSkinChromas; // 0x18(0x50)
	struct TSet<struct FGuid> EquippableSkinLevels; // 0x68(0x50)
	struct FGuid EquippableServiceId; // 0xb8(0x10)
	struct UEquippableSkinDataAsset* DataAsset; // 0xc8(0x08)
};

// ScriptStruct ShooterGame.EquippableSkinLevelData
// Size: 0x48 (Inherited: 0x00)
struct FEquippableSkinLevelData {
	struct FPrimaryAssetId EquippableSkinLevelId; // 0x00(0x18)
	struct FGuid ParentSkinId; // 0x18(0x10)
	struct FGuid ServiceId; // 0x28(0x10)
	int32_t Level; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UEquippableSkinLevelDataAsset* DataAsset; // 0x40(0x08)
};

// ScriptStruct ShooterGame.ThemeData
// Size: 0x70 (Inherited: 0x00)
struct FThemeData {
	struct FPrimaryAssetId ThemeID; // 0x00(0x18)
	struct UThemeDataAsset* DataAsset; // 0x18(0x08)
	struct TSet<struct FGuid> EquippableSkins; // 0x20(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinChromaData
// Size: 0x30 (Inherited: 0x00)
struct FEquippableSkinChromaData {
	struct FPrimaryAssetId EquippableSkinChromaId; // 0x00(0x18)
	struct FGuid ParentSkinId; // 0x18(0x10)
	struct UEquippableSkinChromaDataAsset* DataAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.EquippableAttachmentData
// Size: 0x30 (Inherited: 0x00)
struct FEquippableAttachmentData {
	struct FPrimaryAssetId AttachmentId; // 0x00(0x18)
	struct FGuid SocketUuid; // 0x18(0x10)
	struct UEquippableAttachmentDataAsset* DataAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.BaseHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FBaseHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMassRewardsCeremonyHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.TournamentsTeamIconHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FTournamentsTeamIconHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.LevelBorderHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FLevelBorderHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PremierSeasonHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FPremierSeasonHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CompetitiveSeasonHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FCompetitiveSeasonHandleLoadOptions {
	bool bLoadBorders; // 0x00(0x01)
	struct FActRankBorderHandleLoadOptions ActRankBorderHandleLoadOptions; // 0x01(0x01)
};

// ScriptStruct ShooterGame.ActRankBorderHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FActRankBorderHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SeasonHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FSeasonHandleLoadOptions {
	bool bLoadParentSeason; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SubscriptionHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FSubscriptionHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ContentTierHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FContentTierHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerTitleHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FPlayerTitleHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ArmorHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FArmorHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MissionHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FMissionHandleLoadOptions {
	bool bLoadObjectives; // 0x00(0x01)
	struct FObjectiveHandleLoadOptions ObjectiveLoadOptions; // 0x01(0x01)
};

// ScriptStruct ShooterGame.ObjectiveHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FObjectiveHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.StorefrontItemHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FStorefrontItemHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerCardHandleLoadOptions
// Size: 0x07 (Inherited: 0x00)
struct FPlayerCardHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLargeArt; // 0x01(0x01)
	bool bLoadWideArt; // 0x02(0x01)
	bool bLoadSmallArt; // 0x03(0x01)
	bool bLoadLargeMaterial; // 0x04(0x01)
	bool bLoadWideMaterial; // 0x05(0x01)
	bool bLoadSmallMaterial; // 0x06(0x01)
};

// ScriptStruct ShooterGame.MatchmakingQueueHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMatchmakingQueueHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.GameModeHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FGameModeHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MapHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMapHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.JuiceBoxHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FJuiceBoxHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CurrencyHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FCurrencyHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CharacterHandleLoadOptions
// Size: 0x07 (Inherited: 0x00)
struct FCharacterHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadCharacterRole; // 0x01(0x01)
	bool bLoadContract; // 0x02(0x01)
	bool bLoadFullPortrait; // 0x03(0x01)
	bool bLoadCharacterBackground; // 0x04(0x01)
	struct FCharacterRoleHandleLoadOptions CharacterRoleLoadOption; // 0x05(0x01)
	struct FContractV2HandleLoadOptions ContractLoadOptions; // 0x06(0x01)
};

// ScriptStruct ShooterGame.ContractV2HandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FContractV2HandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CharacterRoleHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FCharacterRoleHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AresEventHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FAresEventHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SprayEquipSlotHandleLoadOptions
// Size: 0x06 (Inherited: 0x00)
struct FSprayEquipSlotHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadEquippedSpray; // 0x01(0x01)
	struct FSprayHandleLoadOptions SprayLoadOptions; // 0x02(0x04)
};

// ScriptStruct ShooterGame.SprayHandleLoadOptions
// Size: 0x04 (Inherited: 0x00)
struct FSprayHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	struct FSprayLevelHandleLoadOptions LevelLoadOptions; // 0x02(0x02)
};

// ScriptStruct ShooterGame.SprayLevelHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FSprayLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSprayActor; // 0x01(0x01)
};

// ScriptStruct ShooterGame.EquippableHandleLoadOptions
// Size: 0x19 (Inherited: 0x00)
struct FEquippableHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSkins; // 0x01(0x01)
	bool bLoadEquippedSkin; // 0x02(0x01)
	struct FEquippableSkinHandleLoadOptions SkinLoadOptions; // 0x03(0x0e)
	bool bLoadAttachments; // 0x11(0x01)
	struct FEquippableAttachmentHandleLoadOptions AttachmentLoadOptions; // 0x12(0x01)
	bool bLoadEquippedCharmInstance; // 0x13(0x01)
	struct FEquippableCharmInstanceHandleLoadOptions CharmInstanceLoadOptions; // 0x14(0x05)
};

// ScriptStruct ShooterGame.EquippableCharmInstanceHandleLoadOptions
// Size: 0x05 (Inherited: 0x00)
struct FEquippableCharmInstanceHandleLoadOptions {
	bool bLoadCurrentLevel; // 0x00(0x01)
	struct FEquippableCharmHandleLoadOptions CharmLoadOptions; // 0x01(0x03)
	struct FEquippableCharmLevelHandleLoadOptions LevelLoadOptions; // 0x04(0x01)
};

// ScriptStruct ShooterGame.EquippableCharmLevelHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FEquippableCharmLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EquippableCharmHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableCharmHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	struct FEquippableCharmLevelHandleLoadOptions LevelLoadOptions; // 0x02(0x01)
};

// ScriptStruct ShooterGame.EquippableAttachmentHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FEquippableAttachmentHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinHandleLoadOptions
// Size: 0x0e (Inherited: 0x00)
struct FEquippableSkinHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	struct FEquippableSkinLevelHandleLoadOptions LevelLoadOptions; // 0x02(0x03)
	bool bLoadChromas; // 0x05(0x01)
	bool bLoadEquippedChroma; // 0x06(0x01)
	bool bLoadDefaultChroma; // 0x07(0x01)
	struct FEquippableSkinChromaHandleLoadOptions ChromaLoadOptions; // 0x08(0x03)
	bool bLoadTheme; // 0x0b(0x01)
	bool bLoadContentTier; // 0x0c(0x01)
	bool bLoadWallpaper; // 0x0d(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinChromaHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableSkinChromaHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSidegradeModel; // 0x01(0x01)
	bool bLoadStreamedVideo; // 0x02(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinLevelHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableSkinLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadMenuFXC; // 0x01(0x01)
	bool bLoadStreamedVideo; // 0x02(0x01)
};

// ScriptStruct ShooterGame.ThemeHandleLoadOptions
// Size: 0x0f (Inherited: 0x00)
struct FThemeHandleLoadOptions {
	bool bLoadEquippableSkins; // 0x00(0x01)
	struct FEquippableSkinHandleLoadOptions EquippableSkinLoadOptions; // 0x01(0x0e)
};

// ScriptStruct ShooterGame.SeasonServiceTimes
// Size: 0x10 (Inherited: 0x00)
struct FSeasonServiceTimes {
	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
};

// ScriptStruct ShooterGame.FullContentListingDTO
// Size: 0x30 (Inherited: 0x00)
struct FFullContentListingDTO {
	struct TArray<struct FSeasonDTO> Seasons; // 0x00(0x10)
	struct TArray<struct FEventDTO> Events; // 0x10(0x10)
	struct TArray<struct FString> DisabledIDs; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EventDTO
// Size: 0x48 (Inherited: 0x00)
struct FEventDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	bool IsEnabled; // 0x40(0x01)
	bool IsActive; // 0x41(0x01)
	bool DevelopmentOnly; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct ShooterGame.SeasonDTO
// Size: 0x48 (Inherited: 0x00)
struct FSeasonDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	bool IsEnabled; // 0x40(0x01)
	bool IsActive; // 0x41(0x01)
	bool DevelopmentOnly; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct ShooterGame.ContentListingDTO
// Size: 0x10 (Inherited: 0x00)
struct FContentListingDTO {
	struct TArray<struct FContentDTO> Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ContentDTO
// Size: 0x38 (Inherited: 0x00)
struct FContentDTO {
	struct FString Name; // 0x00(0x10)
	struct FString AssetName; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	bool IsEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.BaseUIData
// Size: 0x38 (Inherited: 0x00)
struct FBaseUIData {
	struct FText DisplayName; // 0x00(0x18)
	struct UTexture* DisplayIcon; // 0x18(0x08)
	struct FText DisplayTooltipTextLocalized; // 0x20(0x18)
};

// ScriptStruct ShooterGame.ContractDataAssetV2Chapter
// Size: 0x18 (Inherited: 0x00)
struct FContractDataAssetV2Chapter {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FContractDataAssetV2Level> Levels; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ContractDataAssetV2Level
// Size: 0x18 (Inherited: 0x00)
struct FContractDataAssetV2Level {
	struct UEditableReward* Reward; // 0x00(0x08)
	uint32_t XP; // 0x08(0x04)
	uint32_t VPCost; // 0x0c(0x04)
	bool bPurchasableWithVP; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.ContractDataAssetV2EventChapter
// Size: 0x18 (Inherited: 0x18)
struct FContractDataAssetV2EventChapter : FContractDataAssetV2Chapter {
};

// ScriptStruct ShooterGame.ContractDataAssetV2StoryChapter
// Size: 0x30 (Inherited: 0x18)
struct FContractDataAssetV2StoryChapter : FContractDataAssetV2Chapter {
	struct TArray<struct UEditableReward*> FreeChapterRewards; // 0x18(0x10)
	bool bIsEpilogue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.ContractDataAssetV2SpecialChapter
// Size: 0x18 (Inherited: 0x18)
struct FContractDataAssetV2SpecialChapter : FContractDataAssetV2Chapter {
};

// ScriptStruct ShooterGame.ItemProgressionDefinitionsV2
// Size: 0x10 (Inherited: 0x00)
struct FItemProgressionDefinitionsV2 {
	struct TArray<struct FItemProgressionDefinitionV2> Definitions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ItemProgressionDefinitionV2
// Size: 0xb0 (Inherited: 0x00)
struct FItemProgressionDefinitionV2 {
	struct FGuid ID; // 0x00(0x10)
	struct FEntitlementIdentifier item; // 0x10(0x20)
	struct FEntitlementIdentifier RequiredEntitlement; // 0x30(0x20)
	struct FProgressionSchedule ProgressionSchedule; // 0x50(0x20)
	struct FRewardSchedule RewardSchedule; // 0x70(0x30)
	struct TArray<struct FSidegrade> Sidegrades; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.Sidegrade
// Size: 0x30 (Inherited: 0x00)
struct FSidegrade {
	struct FGuid SidegradeID; // 0x00(0x10)
	struct TArray<struct FSidegradeOption> Options; // 0x10(0x10)
	struct FRewardSchedulePrerequisites Prerequisites; // 0x20(0x10)
};

// ScriptStruct ShooterGame.SidegradeOption
// Size: 0x30 (Inherited: 0x00)
struct FSidegradeOption {
	struct FGuid OptionID; // 0x00(0x10)
	struct FCost Cost; // 0x10(0x10)
	struct TArray<struct FEntitlementReward> Rewards; // 0x20(0x10)
};

// ScriptStruct ShooterGame.Cost
// Size: 0x10 (Inherited: 0x00)
struct FCost {
	struct TArray<struct FWalletCost> WalletCosts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.WalletCost
// Size: 0x18 (Inherited: 0x00)
struct FWalletCost {
	struct FGuid CurrencyID; // 0x00(0x10)
	int64_t AmountToDeduct; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ContractDefinitions
// Size: 0x20 (Inherited: 0x00)
struct FContractDefinitions {
	struct TArray<struct FContractDefinition> ContractDefinitions; // 0x00(0x10)
	struct FGuid NPEContractID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.UpgradeContractRequest
// Size: 0xa8 (Inherited: 0x00)
struct FUpgradeContractRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid CurrencyID; // 0x10(0x10)
	int32_t ExpectedCost; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FOrderMetadata MetaData; // 0x28(0x80)
};

// ScriptStruct ShooterGame.OrderMetadata
// Size: 0x80 (Inherited: 0x00)
struct FOrderMetadata {
	struct FString ClientVersion; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct TMap<struct FGuid, int32_t> Balances; // 0x20(0x50)
	struct FString PurchaseSource; // 0x70(0x10)
};

// ScriptStruct ShooterGame.UnlockSidegradeRequest
// Size: 0xb0 (Inherited: 0x00)
struct FUnlockSidegradeRequest {
	struct FGuid XID; // 0x00(0x10)
	struct TArray<struct FEntitlementReward> ExpectedRewards; // 0x10(0x10)
	struct TArray<struct FWalletCost> ExpectedCosts; // 0x20(0x10)
	struct FOrderMetadata MetaData; // 0x30(0x80)
};

// ScriptStruct ShooterGame.UnlockProgressRequest
// Size: 0xb0 (Inherited: 0x00)
struct FUnlockProgressRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid CurrencyID; // 0x10(0x10)
	int32_t ExpectedCost; // 0x20(0x04)
	int32_t CurrentTier; // 0x24(0x04)
	int32_t NewTier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FOrderMetadata MetaData; // 0x30(0x80)
};

// ScriptStruct ShooterGame.Contracts
// Size: 0x70 (Inherited: 0x00)
struct FContracts {
	int64_t Version; // 0x00(0x08)
	struct FGuid Subject; // 0x08(0x10)
	struct TArray<struct FContract> Contracts; // 0x18(0x10)
	struct FGuid ActiveSpecialContract; // 0x28(0x10)
	struct TArray<struct FMissionDTO> Missions; // 0x38(0x10)
	struct FMissionMetadata MissionMetadata; // 0x48(0x18)
	struct TArray<struct FContractMatchResults> ProcessedMatches; // 0x60(0x10)
};

// ScriptStruct ShooterGame.ContractMatchResults
// Size: 0x1a8 (Inherited: 0x00)
struct FContractMatchResults {
	struct FGuid ID; // 0x00(0x10)
	struct FXPGrants XPGrants; // 0x10(0x78)
	struct FActPointGrants ActPointGrants; // 0x88(0x28)
	struct TMap<struct FGuid, struct FRewardGrant> RewardGrants; // 0xb0(0x50)
	struct TMap<struct FGuid, struct FMissionDelta> MissionDeltas; // 0x100(0x50)
	struct TMap<struct FGuid, struct FContractDelta> ContractDeltas; // 0x150(0x50)
	bool CouldProgressMissions; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// ScriptStruct ShooterGame.ContractDelta
// Size: 0x18 (Inherited: 0x00)
struct FContractDelta {
	struct FGuid ID; // 0x00(0x10)
	int32_t TotalXPBefore; // 0x10(0x04)
	int32_t TotalXPAfter; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MissionDelta
// Size: 0xb0 (Inherited: 0x00)
struct FMissionDelta {
	struct FGuid ID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x10(0x50)
	struct TMap<struct FGuid, struct FObjectiveDelta> ObjectiveDeltas; // 0x60(0x50)
};

// ScriptStruct ShooterGame.ObjectiveDelta
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveDelta {
	struct FGuid ID; // 0x00(0x10)
	int32_t ProgressBefore; // 0x10(0x04)
	int32_t ProgressAfter; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ActPointGrants
// Size: 0x28 (Inherited: 0x00)
struct FActPointGrants {
	int32_t GamePlayed; // 0x00(0x04)
	int32_t GameWon; // 0x04(0x04)
	int32_t RoundPlayed; // 0x08(0x04)
	int32_t RoundWon; // 0x0c(0x04)
	struct FAggregateXPModifier Modifier; // 0x10(0x18)
};

// ScriptStruct ShooterGame.AggregateXPModifier
// Size: 0x18 (Inherited: 0x00)
struct FAggregateXPModifier {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FXPModifier> Modifiers; // 0x08(0x10)
};

// ScriptStruct ShooterGame.XPModifier
// Size: 0x20 (Inherited: 0x00)
struct FXPModifier {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	bool BaseOnly; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.XPGrants
// Size: 0x78 (Inherited: 0x00)
struct FXPGrants {
	int32_t GamePlayed; // 0x00(0x04)
	int32_t GameWon; // 0x04(0x04)
	int32_t RoundPlayed; // 0x08(0x04)
	int32_t RoundWon; // 0x0c(0x04)
	struct TMap<struct FGuid, int32_t> Missions; // 0x10(0x50)
	struct FAggregateXPModifier Modifier; // 0x60(0x18)
};

// ScriptStruct ShooterGame.MissionMetadata
// Size: 0x18 (Inherited: 0x00)
struct FMissionMetadata {
	bool NPECompleted; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime WeeklyCheckpoint; // 0x08(0x08)
	struct FDateTime WeeklyRefillTime; // 0x10(0x08)
};

// ScriptStruct ShooterGame.MissionDTO
// Size: 0x70 (Inherited: 0x00)
struct FMissionDTO {
	struct FDateTime ExpirationTime; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x18(0x50)
	bool Complete; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct ShooterGame.Contract
// Size: 0x70 (Inherited: 0x00)
struct FContract {
	struct FGuid ContractDefinitionID; // 0x00(0x10)
	struct FPlayerRewardState ContractProgression; // 0x10(0x58)
	uint32_t ProgressionLevelReached; // 0x68(0x04)
	uint32_t ProgressionTowardsNextLevel; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.PlayerRewardState
// Size: 0x58 (Inherited: 0x00)
struct FPlayerRewardState {
	uint32_t TotalProgressionEarned; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FGuid, int32_t> HighestRewardedLevel; // 0x08(0x50)
};

// ScriptStruct ShooterGame.ContractsXpModifier
// Size: 0x08 (Inherited: 0x00)
struct FContractsXpModifier {
	float Value; // 0x00(0x04)
	enum class EXPModifier Name; // 0x04(0x01)
	bool BaseOnly; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct ShooterGame.InstallStats
// Size: 0x20 (Inherited: 0x00)
struct FInstallStats {
	struct FString Version; // 0x00(0x10)
	int64_t NotInstalledProvisioners; // 0x10(0x08)
	int64_t InstalledProvisioners; // 0x18(0x08)
};

// ScriptStruct ShooterGame.MatchMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FMatchMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CoreGamePlayerDTO
// Size: 0x28 (Inherited: 0x00)
struct FCoreGamePlayerDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.CoreGameMatchDTO
// Size: 0x118 (Inherited: 0x00)
struct FCoreGameMatchDTO {
	struct FString MatchID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString State; // 0x18(0x10)
	struct FString MapID; // 0x28(0x10)
	struct FString ModeID; // 0x38(0x10)
	struct FConnectionDetailsDTO ConnectionDetails; // 0x48(0x30)
	struct FPostGameDetailsDTO PostGameDetails; // 0x78(0x18)
	struct FString ProvisioningFlow; // 0x90(0x10)
	enum class EProvisioningFlowID ProvisioningFlowID; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString GamePodID; // 0xa8(0x10)
	struct FString AllMUCName; // 0xb8(0x10)
	struct FString TeamMUCName; // 0xc8(0x10)
	struct FString TeamVoiceID; // 0xd8(0x10)
	bool IsReconnectable; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FCoreGameMatchPlayerDTO> Players; // 0xf0(0x10)
	struct FCoreGameMatchmakingData MatchmakingData; // 0x100(0x18)
};

// ScriptStruct ShooterGame.CoreGameMatchmakingData
// Size: 0x18 (Inherited: 0x00)
struct FCoreGameMatchmakingData {
	struct FString QueueID; // 0x00(0x10)
	bool IsRanked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CoreGameMatchPlayerDTO
// Size: 0xf8 (Inherited: 0x00)
struct FCoreGameMatchPlayerDTO {
	struct FString Subject; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString CharacterID; // 0x20(0x10)
	struct FPlayerIdentity PlayerIdentity; // 0x30(0x48)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x78(0x78)
	bool IsCoach; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct ShooterGame.MMRSeasonBadgeInfo
// Size: 0x78 (Inherited: 0x00)
struct FMMRSeasonBadgeInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x18(0x50)
	int32_t Rank; // 0x68(0x04)
	int32_t LeaderboardRank; // 0x6c(0x04)
	struct USeasonDataAsset* SeasonAsset; // 0x70(0x08)
};

// ScriptStruct ShooterGame.PlayerIdentity
// Size: 0x48 (Inherited: 0x00)
struct FPlayerIdentity {
	struct FString Subject; // 0x00(0x10)
	struct FGuid PlayerCardID; // 0x10(0x10)
	struct FGuid PlayerTitleId; // 0x20(0x10)
	int32_t AccountLevel; // 0x30(0x04)
	struct FGuid PreferredLevelBorderID; // 0x34(0x10)
	bool Incognito; // 0x44(0x01)
	bool HideAccountLevel; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct ShooterGame.PostGameDetailsDTO
// Size: 0x18 (Inherited: 0x00)
struct FPostGameDetailsDTO {
	struct FDateTime Start; // 0x00(0x08)
	struct TArray<struct FPostGamePlayerDTO> Players; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PostGamePlayerDTO
// Size: 0x10 (Inherited: 0x00)
struct FPostGamePlayerDTO {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ConnectionDetailsDTO
// Size: 0x30 (Inherited: 0x00)
struct FConnectionDetailsDTO {
	struct TArray<struct FString> GameServerHosts; // 0x00(0x10)
	int64_t GameServerPort; // 0x10(0x08)
	uint32_t GameServerObfuscatedIP; // 0x18(0x04)
	uint32_t GameClientHash; // 0x1c(0x04)
	struct FString PlayerKey; // 0x20(0x10)
};

// ScriptStruct ShooterGame.CoreGameMatchLoadoutsDTO
// Size: 0x10 (Inherited: 0x00)
struct FCoreGameMatchLoadoutsDTO {
	struct TArray<struct FCoreGamePlayerLoadoutDTO> Loadouts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CoreGamePlayerLoadoutDTO
// Size: 0x70 (Inherited: 0x00)
struct FCoreGamePlayerLoadoutDTO {
	struct FMegapacketLoadout Loadout; // 0x00(0x60)
	struct FString CharacterID; // 0x60(0x10)
};

// ScriptStruct ShooterGame.MegapacketLoadout
// Size: 0x60 (Inherited: 0x00)
struct FMegapacketLoadout {
	struct FMegapacketSprayLoadout Sprays; // 0x00(0x10)
	struct TMap<struct FGuid, struct FMegapacketLoadoutItem> Items; // 0x10(0x50)
};

// ScriptStruct ShooterGame.MegapacketLoadoutItem
// Size: 0x70 (Inherited: 0x00)
struct FMegapacketLoadoutItem {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
	struct TMap<struct FGuid, struct FMegapacketSocket> Sockets; // 0x20(0x50)
};

// ScriptStruct ShooterGame.MegapacketSocket
// Size: 0x30 (Inherited: 0x00)
struct FMegapacketSocket {
	struct FGuid ID; // 0x00(0x10)
	struct FMegapacketSocketItem item; // 0x10(0x20)
};

// ScriptStruct ShooterGame.MegapacketSocketItem
// Size: 0x20 (Inherited: 0x00)
struct FMegapacketSocketItem {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MegapacketSprayLoadout
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketSprayLoadout {
	struct TArray<struct FMegapacketSpray> SpraySelections; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketSpray
// Size: 0x30 (Inherited: 0x00)
struct FMegapacketSpray {
	struct FGuid SocketID; // 0x00(0x10)
	struct FGuid SprayID; // 0x10(0x10)
	struct FGuid LevelID; // 0x20(0x10)
};

// ScriptStruct ShooterGame.TimerState
// Size: 0x01 (Inherited: 0x00)
struct FTimerState {
	bool bPaused; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CrosshairProfileData
// Size: 0x18 (Inherited: 0x00)
struct FCrosshairProfileData {
	int32_t CurrentProfile; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCrosshairSettings> Profiles; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CrosshairSettings
// Size: 0x130 (Inherited: 0x00)
struct FCrosshairSettings {
	struct FLineCrosshairSettings Primary; // 0x00(0x80)
	struct FLineCrosshairSettings ADS; // 0x80(0x80)
	struct FSniperCrosshairSettings Sniper; // 0x100(0x18)
	bool bUsePrimaryCrosshairForADS; // 0x118(0x01)
	bool bUseCustomCrosshairOnAllPrimary; // 0x119(0x01)
	bool bUseAdvancedOptions; // 0x11a(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)
	struct FString ProfileName; // 0x120(0x10)
};

// ScriptStruct ShooterGame.SniperCrosshairSettings
// Size: 0x18 (Inherited: 0x00)
struct FSniperCrosshairSettings {
	struct FColor CenterDotColor; // 0x00(0x04)
	struct FColor CenterDotColorCustom; // 0x04(0x04)
	bool bUseCustomCenterDotColor; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CenterDotSize; // 0x0c(0x04)
	float CenterDotOpacity; // 0x10(0x04)
	bool bDisplayCenterDot; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.LineCrosshairSettings
// Size: 0x80 (Inherited: 0x00)
struct FLineCrosshairSettings {
	struct FColor Color; // 0x00(0x04)
	struct FColor ColorCustom; // 0x04(0x04)
	bool bUseCustomColor; // 0x08(0x01)
	bool bHasOutline; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float OutlineThickness; // 0x0c(0x04)
	struct FColor OutlineColor; // 0x10(0x04)
	float OutlineOpacity; // 0x14(0x04)
	float CenterDotSize; // 0x18(0x04)
	float CenterDotOpacity; // 0x1c(0x04)
	bool bDisplayCenterDot; // 0x20(0x01)
	bool bFadeCrosshairWithFiringError; // 0x21(0x01)
	bool bShowSpectatedPlayerCrosshair; // 0x22(0x01)
	bool bHideCrosshair; // 0x23(0x01)
	bool bTouchCrosshairHighlightEnabled; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FColor TouchCrosshairHighlightColor; // 0x28(0x04)
	bool bFixMinErrorAcrossWeapons; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FLineCrosshairSectionSettings InnerLines; // 0x30(0x28)
	struct FLineCrosshairSectionSettings OuterLines; // 0x58(0x28)
};

// ScriptStruct ShooterGame.LineCrosshairSectionSettings
// Size: 0x28 (Inherited: 0x00)
struct FLineCrosshairSectionSettings {
	float LineThickness; // 0x00(0x04)
	float LineLength; // 0x04(0x04)
	float LineLengthVertical; // 0x08(0x04)
	bool bAllowVertScaling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float LineOffset; // 0x10(0x04)
	bool bShowMovementError; // 0x14(0x01)
	bool bShowShootingError; // 0x15(0x01)
	bool bShowMinError; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float Opacity; // 0x18(0x04)
	bool bShowLines; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float FiringErrorScale; // 0x20(0x04)
	float MovementErrorScale; // 0x24(0x04)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_Internal_PendingNodeData
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_Internal_PendingNodeData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_Internal_CueData
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_Internal_CueData {
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_CueInfo
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_CueInfo {
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x00(0x10)
	struct FCueHandlerAnimationConductorNode_CueSettings Settings; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_CueSettings
// Size: 0x02 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_CueSettings {
	bool bCueMustTrigger; // 0x00(0x01)
	bool bConsumeCue; // 0x01(0x01)
};

// ScriptStruct ShooterGame.CustomGameModel_TeamBacking
// Size: 0x50 (Inherited: 0x00)
struct FCustomGameModel_TeamBacking {
	struct TMap<struct FString, struct UPartyPlayerModel*> Backing; // 0x00(0x50)
};

// ScriptStruct ShooterGame.QueuedStateTransition
// Size: 0x38 (Inherited: 0x00)
struct FQueuedStateTransition {
	char pad_0[0x18]; // 0x00(0x18)
	bool bIsSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UStateComponent* QueuedNextState; // 0x20(0x08)
	struct UStateTransitionContext* QueuedContext; // 0x28(0x08)
	float TimeRemaining; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ZoomQueuedStateTransition
// Size: 0x40 (Inherited: 0x38)
struct FZoomQueuedStateTransition : FQueuedStateTransition {
	bool bUnZoom; // 0x38(0x01)
	bool bRememberZoomLevel; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ShooterGame.RedeemTicketRewardsRequest
// Size: 0x20 (Inherited: 0x00)
struct FRedeemTicketRewardsRequest {
	struct FGuid TicketID; // 0x00(0x10)
	struct TArray<struct FGuid> RewardSlotIDs; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PendingDamageEvent
// Size: 0x38 (Inherited: 0x00)
struct FPendingDamageEvent {
	struct UDamageResponse* DamageResponse; // 0x00(0x08)
	struct FDeathResponse DeathResponse; // 0x08(0x30)
};

// ScriptStruct ShooterGame.DeathResponse
// Size: 0x30 (Inherited: 0x00)
struct FDeathResponse {
	struct TArray<struct FAresAssist> AssistsList; // 0x00(0x10)
	int32_t KillsForKiller; // 0x10(0x04)
	int32_t KillsForVictim; // 0x14(0x04)
	struct UAnimMontage* DeathAnimMontage; // 0x18(0x08)
	struct AEffectContainer* DeathMontageEffectOverride; // 0x20(0x08)
	struct UObject* DeathMontageEffectOverrideContext; // 0x28(0x08)
};

// ScriptStruct ShooterGame.HealthValue
// Size: 0x08 (Inherited: 0x00)
struct FHealthValue {
	float Life; // 0x00(0x04)
	float MaximumLife; // 0x04(0x04)
};

// ScriptStruct ShooterGame.DamageTuning
// Size: 0x228 (Inherited: 0x00)
struct FDamageTuning {
	struct FRuntimeFloatCurve DistanceToDamageCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve DistanceToRegionalDamageMultiplierCurve[0x3]; // 0x88(0x198)
	struct UShooterDamageType* DamageType; // 0x220(0x08)
};

// ScriptStruct ShooterGame.NetworkedDamageResponseData
// Size: 0x80 (Inherited: 0x00)
struct FNetworkedDamageResponseData {
	float DamageTaken; // 0x00(0x04)
	float DamageDealt; // 0x04(0x04)
	bool bDamageKilledTarget; // 0x08(0x01)
	bool bAliveAfterDamage; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct AController* EventInstigator; // 0x10(0x08)
	struct AActor* DamageCauser; // 0x18(0x08)
	struct FVector_NetQuantize100 DamageOrigin; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AAresEquippable* EquippableUsed; // 0x30(0x08)
	struct UDamageType* DamageType; // 0x38(0x08)
	struct TArray<struct FLifeChangeEvent> LifeChangeEvents; // 0x40(0x10)
	struct APawn* EventInstigatorPawn; // 0x50(0x08)
	struct AShooterPlayerState* DamagerPlayerState; // 0x58(0x08)
	enum class EAresRegionalDamage RegionalDamage; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLifeChangeTimestamp LifeChangeTimestamp; // 0x64(0x14)
	int32_t VictimRespawnNumber; // 0x78(0x04)
	bool bEquippableUsedZoomed; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct ShooterGame.LifeChangeTimestamp
// Size: 0x14 (Inherited: 0x00)
struct FLifeChangeTimestamp {
	struct FNetworkedMovementTimestamp MovementTimestamp; // 0x00(0x10)
	int32_t LifeChangeEventIndex; // 0x10(0x04)
};

// ScriptStruct ShooterGame.LifeChangeEvent
// Size: 0x18 (Inherited: 0x00)
struct FLifeChangeEvent {
	struct UDamageSectionComponent* ChangedComponent; // 0x00(0x08)
	float LifeResult; // 0x08(0x04)
	float DeltaLife; // 0x0c(0x04)
	bool bAliveAfterChange; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.NetworkedPointDamageResponseData
// Size: 0xd0 (Inherited: 0x80)
struct FNetworkedPointDamageResponseData : FNetworkedDamageResponseData {
	struct UPrimitiveComponent* DamagedComponent; // 0x80(0x08)
	struct FName DamagedBone; // 0x88(0x0c)
	bool bIsWallPenetration; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float FalloffMultiplier; // 0x98(0x04)
	struct FVector_NetQuantizeNormal DamageDirection; // 0x9c(0x0c)
	struct FVector_NetQuantize DamageImpactLocation; // 0xa8(0x0c)
	struct FVector_NetQuantizeNormal DamageImpactNormal; // 0xb4(0x0c)
	struct FVector_NetQuantize DamageImpactBoneRelativeLocation; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct ShooterGame.NetworkedRadialDamageResponseData
// Size: 0xf8 (Inherited: 0x80)
struct FNetworkedRadialDamageResponseData : FNetworkedDamageResponseData {
	struct FRadialDamageEvent RadialDamageEvent; // 0x80(0x40)
	struct UPrimitiveComponent* DamagedComponent; // 0xc0(0x08)
	struct FName DamagedBone; // 0xc8(0x0c)
	struct FVector_NetQuantizeNormal DamageDirection; // 0xd4(0x0c)
	struct FVector_NetQuantize DamageImpactLocation; // 0xe0(0x0c)
	struct FVector_NetQuantizeNormal DamageImpactNormal; // 0xec(0x0c)
};

// ScriptStruct ShooterGame.GraphStyleParams
// Size: 0x1a0 (Inherited: 0x00)
struct FGraphStyleParams {
	float XAxisLineLength; // 0x00(0x04)
	float YAxisLineLength; // 0x04(0x04)
	float AxisLineThickness; // 0x08(0x04)
	struct FLinearColor AxisColor; // 0x0c(0x10)
	float CurveLineThickness; // 0x1c(0x04)
	float CurvePointsRadius; // 0x20(0x04)
	float CurvePointsLineThickness; // 0x24(0x04)
	struct FVector2D CurveCircleDrawOffset; // 0x28(0x08)
	struct FAresHudFontParams GraphTitleFontParams; // 0x30(0x70)
	struct FVector2D GraphTitleDrawOffset; // 0xa0(0x08)
	struct FAresHudFontParams ValueLabelFontParams; // 0xa8(0x70)
	float ValueLabelSeparation; // 0x118(0x04)
	bool bShowGraphCurrentValue; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FAresHudFontParams GraphCurrentValueFontParams; // 0x120(0x70)
	struct FVector2D GraphCurrentValueDrawOffset; // 0x190(0x08)
	struct FVector2D GraphCurrentValueSeparationOffset; // 0x198(0x08)
};

// ScriptStruct ShooterGame.FiringTimeDebugTuning
// Size: 0x58 (Inherited: 0x00)
struct FFiringTimeDebugTuning {
	struct FFiringLineTuning FiringLine; // 0x00(0x0c)
	struct FFiringLineTuning InputQueueLine; // 0x0c(0x0c)
	struct FLinearColor EntryTypeColor[0x4]; // 0x18(0x40)
};

// ScriptStruct ShooterGame.FiringLineTuning
// Size: 0x0c (Inherited: 0x00)
struct FFiringLineTuning {
	float LineStartHeight; // 0x00(0x04)
	float LineEndHeight; // 0x04(0x04)
	float LineThickness; // 0x08(0x04)
};

// ScriptStruct ShooterGame.FiringTimeEntry
// Size: 0x10 (Inherited: 0x00)
struct FFiringTimeEntry {
	float Timestamp; // 0x00(0x04)
	enum class EFiringTimeEntryType EntryType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UFiringStateComponent* SourceFiringState; // 0x08(0x08)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraphPage
// Size: 0x10 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraphPage {
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraph> Graphs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraph
// Size: 0x1f0 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraph {
	struct FGraphStyleParams GraphStyle; // 0x00(0x1a0)
	struct FText Title; // 0x1a0(0x18)
	struct TArray<struct FName> VariableNames; // 0x1b8(0x10)
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraphPlot> Plots; // 0x1c8(0x10)
	struct FVector2D GraphDrawOffset; // 0x1d8(0x08)
	float GraphScale; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct UShooterCharacterAnimInstance* AnimInstance; // 0x1e8(0x08)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraphPlot
// Size: 0x10 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraphPlot {
	struct FName VariableName; // 0x00(0x0c)
	float MaxValue; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.ClassCount
// Size: 0x10 (Inherited: 0x00)
struct FClassCount {
	struct UObject* Class; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.TickTimingData
// Size: 0xa0 (Inherited: 0x00)
struct FTickTimingData {
	struct TMap<struct AActor*, struct FTickTiming> ActorTiming; // 0x00(0x50)
	struct TMap<struct UActorComponent*, struct FTickTiming> ComponentTiming; // 0x50(0x50)
};

// ScriptStruct ShooterGame.TickTiming
// Size: 0x08 (Inherited: 0x00)
struct FTickTiming {
	float TotalMS; // 0x00(0x04)
	float BlueprintMS; // 0x04(0x04)
};

// ScriptStruct ShooterGame.DecalList
// Size: 0x10 (Inherited: 0x00)
struct FDecalList {
	struct TArray<struct UDecalComponent*> List; // 0x00(0x10)
};

// ScriptStruct ShooterGame.DecalProxyEntry
// Size: 0x60 (Inherited: 0x00)
struct FDecalProxyEntry {
	struct FDecalData DecalData; // 0x00(0x40)
	struct UDecalComponent* DecalComponent; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct ShooterGame.DecalEntry
// Size: 0x58 (Inherited: 0x00)
struct FDecalEntry {
	struct FDecalData DecalData; // 0x00(0x40)
	struct UDecalComponent* DecalComponent; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct ShooterGame.NameUpdateDTO
// Size: 0x10 (Inherited: 0x00)
struct FNameUpdateDTO {
	struct FString IDToken; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SubjectsDTO
// Size: 0x10 (Inherited: 0x00)
struct FSubjectsDTO {
	struct TArray<struct FString> Subjects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.NamesDTO
// Size: 0x10 (Inherited: 0x00)
struct FNamesDTO {
	struct TArray<struct FNameDTO> Names; // 0x00(0x10)
};

// ScriptStruct ShooterGame.NameDTO
// Size: 0x30 (Inherited: 0x00)
struct FNameDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
};

// ScriptStruct ShooterGame.DropInPlayerLoadingState
// Size: 0x20 (Inherited: 0x00)
struct FDropInPlayerLoadingState {
	struct AAresPlayerStateBase* DropInPlayerState; // 0x00(0x08)
	bool bOwningClientFinishedLoading; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct AAresPlayerStateBase*> ClientsStillLoading; // 0x10(0x10)
};

// ScriptStruct ShooterGame.DropInPlayerAssets
// Size: 0x60 (Inherited: 0x00)
struct FDropInPlayerAssets {
	struct FString CharacterID; // 0x00(0x10)
	struct TArray<struct FMegapacketSpray> SpraySelections; // 0x10(0x10)
	struct TArray<struct FGuid> EquippableSkinItemIDs; // 0x20(0x10)
	struct TArray<struct FGuid> EquippableSkinLevelItemIDs; // 0x30(0x10)
	struct TArray<struct FGuid> EquippableSkinChromaItemIDs; // 0x40(0x10)
	struct TArray<struct FGuid> EquippableCharmLevelItemIDs; // 0x50(0x10)
};

// ScriptStruct ShooterGame.DropInRequest
// Size: 0x20 (Inherited: 0x00)
struct FDropInRequest {
	struct FString MatchID; // 0x00(0x10)
	struct TArray<struct FMegapacketPlayer> Players; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MegapacketPlayer
// Size: 0xf8 (Inherited: 0x00)
struct FMegapacketPlayer {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
	struct FName TeamID; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString PartyID; // 0x40(0x10)
	struct FString CharacterID; // 0x50(0x10)
	struct FString Key; // 0x60(0x10)
	struct FMegapacketLoadout Loadout; // 0x70(0x60)
	struct FMegapacketContracts Contracts; // 0xd0(0x10)
	struct TArray<struct FString> AccessibleCharacters; // 0xe0(0x10)
	int32_t CompetitiveTier; // 0xf0(0x04)
	bool IsModerator; // 0xf4(0x01)
	bool UseBroadcastHUD; // 0xf5(0x01)
	bool IsCoach; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
};

// ScriptStruct ShooterGame.MegapacketContracts
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketContracts {
	struct TArray<struct FMegapacketMission> Missions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketMission
// Size: 0x60 (Inherited: 0x00)
struct FMegapacketMission {
	struct FGuid ID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x10(0x50)
};

// ScriptStruct ShooterGame.FreePooledEffect
// Size: 0x30 (Inherited: 0x00)
struct FFreePooledEffect {
	bool bShouldActorTick; // 0x00(0x01)
	bool bActorHidden; // 0x01(0x01)
	bool bActorCollisionEnabled; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct AEffectContainer* FXC; // 0x08(0x08)
	struct TArray<struct UActorComponent*> TickingComponents; // 0x10(0x10)
	struct TArray<struct UAresAudioComponent*> AudioComponents; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PendingReplicationEffect
// Size: 0x30 (Inherited: 0x00)
struct FPendingReplicationEffect {
	char pad_0[0x8]; // 0x00(0x08)
	struct FEffectID EffectID; // 0x08(0x20)
	struct AEffectContainer* EffectType; // 0x28(0x08)
};

// ScriptStruct ShooterGame.EffectID
// Size: 0x20 (Inherited: 0x00)
struct FEffectID {
	struct FName SourceID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t EffectID; // 0x10(0x08)
	bool bLocalEffect; // 0x18(0x01)
	bool bTransient; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct ShooterGame.PendingStopEffect
// Size: 0x30 (Inherited: 0x00)
struct FPendingStopEffect {
	float MovementTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FEffectID EffectID; // 0x08(0x20)
	bool bHasStarted; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.PendingStartEffect
// Size: 0xf0 (Inherited: 0x00)
struct FPendingStartEffect {
	float MovementTime; // 0x00(0x04)
	bool bContinuous; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct FActiveEffectInfo EffectInfo; // 0x10(0xe0)
};

// ScriptStruct ShooterGame.ActiveEffectInfo
// Size: 0xe0 (Inherited: 0x00)
struct FActiveEffectInfo {
	struct FEffectID EffectID; // 0x00(0x20)
	struct AEffectContainer* EffectType; // 0x20(0x08)
	struct FEffectData EffectData; // 0x28(0x58)
	struct FTransform Transform; // 0x80(0x30)
	struct FName Socket; // 0xb0(0x0c)
	float StartTimeStamp; // 0xbc(0x04)
	struct AEffectContainer* EffectContainer; // 0xc0(0x08)
	struct FTimerHandle ProxyTimerHandle; // 0xc8(0x08)
	enum class EAresAlliance AllianceFilter; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct ShooterGame.EffectData
// Size: 0x58 (Inherited: 0x00)
struct FEffectData {
	struct TWeakObjectPtr<struct AActor> WaitOnReplicationActor; // 0x00(0x08)
	struct TArray<struct FEffectDataFloat> FloatValues; // 0x08(0x10)
	struct TArray<struct FEffectDataVector> VectorValues; // 0x18(0x10)
	struct TArray<struct FEffectDataObject> ObjectValues; // 0x28(0x10)
	struct TArray<struct FEffectDataClass> ClassValues; // 0x38(0x10)
	struct TArray<struct FEffectDataText> TextValues; // 0x48(0x10)
};

// ScriptStruct ShooterGame.EffectDataText
// Size: 0x28 (Inherited: 0x00)
struct FEffectDataText {
	struct FGameplayTag Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
};

// ScriptStruct ShooterGame.EffectDataClass
// Size: 0x40 (Inherited: 0x00)
struct FEffectDataClass {
	struct FGameplayTag Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftClassPtr<UObject> Class; // 0x10(0x30)
};

// ScriptStruct ShooterGame.EffectDataObject
// Size: 0x14 (Inherited: 0x00)
struct FEffectDataObject {
	struct FGameplayTag Name; // 0x00(0x0c)
	struct TWeakObjectPtr<struct UObject> Object; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.EffectDataVector
// Size: 0x18 (Inherited: 0x00)
struct FEffectDataVector {
	struct FGameplayTag Name; // 0x00(0x0c)
	struct FVector Vector; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.EffectDataFloat
// Size: 0x10 (Inherited: 0x00)
struct FEffectDataFloat {
	struct FGameplayTag Name; // 0x00(0x0c)
	float Float; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.EmbeddedEffectInfo
// Size: 0x30 (Inherited: 0x00)
struct FEmbeddedEffectInfo {
	struct AEffectContainer* EffectType; // 0x00(0x08)
	struct FVector AttachOffset; // 0x08(0x0c)
	struct FRotator AttachRotation; // 0x14(0x0c)
	struct FName AttachSocket; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.WeaponEjectable
// Size: 0xa0 (Inherited: 0x00)
struct FWeaponEjectable {
	struct FName EjectableName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AAresEjectable* EjectableClass; // 0x10(0x08)
	struct FName AttachPoint; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UMaterialInterface* OverrideMaterial1P; // 0x28(0x08)
	struct UMaterialInterface* OverrideMaterial3P; // 0x30(0x08)
	struct UStaticMesh* OverrideMesh1P; // 0x38(0x08)
	struct UStaticMesh* OverrideMesh3P; // 0x40(0x08)
	struct UAresEjectablePool* Pool; // 0x48(0x08)
	bool bUse1PSocketVelocity; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
	struct FEjectableVelocitySample VelocitySamplePrev; // 0x60(0x20)
	struct FEjectableVelocitySample VelocitySampleCurr; // 0x80(0x20)
};

// ScriptStruct ShooterGame.EjectableVelocitySample
// Size: 0x20 (Inherited: 0x00)
struct FEjectableVelocitySample {
	float Time; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FQuat Rotation; // 0x10(0x10)
};

// ScriptStruct ShooterGame.EmojiEntry
// Size: 0x90 (Inherited: 0x00)
struct FEmojiEntry {
	struct FSlateBrush Brush; // 0x00(0x90)
};

// ScriptStruct ShooterGame.WeaponStatUIData
// Size: 0x68 (Inherited: 0x00)
struct FWeaponStatUIData {
	enum class EWeaponFireModeDisplayType FireMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FireRate; // 0x04(0x04)
	int32_t MagazineSize; // 0x08(0x04)
	float RunSpeedMultiplier; // 0x0c(0x04)
	float EquipTimeSeconds; // 0x10(0x04)
	float ReloadTimeSeconds; // 0x14(0x04)
	float FirstBulletAccuracy; // 0x18(0x04)
	int32_t ShotgunPelletCount; // 0x1c(0x04)
	enum class EWallPenetrationDisplayType WallPenetration; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FWeaponStatDamageUIData> DamageRanges; // 0x28(0x10)
	enum class EWeaponAltFireDisplayType AltFireType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FAltFireStats_ADS ADSStats; // 0x3c(0x14)
	struct FAltFireStats_AirBurst AirBurstStats; // 0x50(0x08)
	struct FAltFireStats_Shotgun AltShotgunStats; // 0x58(0x08)
	enum class EWeaponStatsFeature Feature; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ShooterGame.AltFireStats_Shotgun
// Size: 0x08 (Inherited: 0x00)
struct FAltFireStats_Shotgun {
	int32_t ShotgunPelletCount; // 0x00(0x04)
	float BurstRate; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AltFireStats_AirBurst
// Size: 0x08 (Inherited: 0x00)
struct FAltFireStats_AirBurst {
	float BurstDistance; // 0x00(0x04)
	int32_t ShotgunPelletCount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AltFireStats_ADS
// Size: 0x14 (Inherited: 0x00)
struct FAltFireStats_ADS {
	float ZoomMultiplier; // 0x00(0x04)
	float FireRate; // 0x04(0x04)
	float RunSpeedMultiplier; // 0x08(0x04)
	int32_t BurstCount; // 0x0c(0x04)
	float FirstBulletAccuracy; // 0x10(0x04)
};

// ScriptStruct ShooterGame.WeaponStatDamageUIData
// Size: 0x14 (Inherited: 0x00)
struct FWeaponStatDamageUIData {
	float RangeStartMeters; // 0x00(0x04)
	float RangeEndMeters; // 0x04(0x04)
	float HeadDamage; // 0x08(0x04)
	float BodyDamage; // 0x0c(0x04)
	float LegDamage; // 0x10(0x04)
};

// ScriptStruct ShooterGame.WeaponStatsFeature_ROFIncrease
// Size: 0x08 (Inherited: 0x00)
struct FWeaponStatsFeature_ROFIncrease {
	float MaxFireRate; // 0x00(0x04)
	float RampUpTime; // 0x04(0x04)
};

// ScriptStruct ShooterGame.StabilityAnimTuning
// Size: 0x88 (Inherited: 0x00)
struct FStabilityAnimTuning {
	struct FRuntimeFloatCurve KickBlendCurve; // 0x00(0x88)
};

// ScriptStruct ShooterGame.IdlePoseTuning
// Size: 0x18 (Inherited: 0x00)
struct FIdlePoseTuning {
	struct FVector FirstPersonMeshOffset; // 0x00(0x0c)
	struct FRotator FirstPersonMeshRotation; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.AnimLeanTuning
// Size: 0x0c (Inherited: 0x00)
struct FAnimLeanTuning {
	float PitchAndRollStrength; // 0x00(0x04)
	float YawStrength; // 0x04(0x04)
	float TranslationStrength; // 0x08(0x04)
};

// ScriptStruct ShooterGame.ItemSlotBlocking
// Size: 0x18 (Inherited: 0x00)
struct FItemSlotBlocking {
	bool bBlockAll; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EAresItemSlot> BlockedItemSlots; // 0x08(0x10)
};

// ScriptStruct ShooterGame.EquippableStateBuffInfo
// Size: 0x20 (Inherited: 0x00)
struct FEquippableStateBuffInfo {
	struct UAresGameplayBuff* BuffClass; // 0x00(0x08)
	float BuffLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAresAbilitySystemComponent* BuffTarget; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ShooterGame.EULAContent
// Size: 0x10 (Inherited: 0x00)
struct FEULAContent {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EULAAcceptanceState
// Size: 0x18 (Inherited: 0x00)
struct FEULAAcceptanceState {
	enum class EEULAAcceptanceState ParsedState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString State; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CreateFavoriteRequest
// Size: 0x10 (Inherited: 0x00)
struct FCreateFavoriteRequest {
	struct FGuid ItemId; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlayerFavorites
// Size: 0x60 (Inherited: 0x00)
struct FPlayerFavorites {
	struct FGuid Subject; // 0x00(0x10)
	struct TMap<struct FGuid, struct FFavorite> FavoritedContent; // 0x10(0x50)
};

// ScriptStruct ShooterGame.Favorite
// Size: 0x20 (Inherited: 0x00)
struct FFavorite {
	struct FGuid FavoriteID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.FindSpawnSpotTrace
// Size: 0x18 (Inherited: 0x00)
struct FFindSpawnSpotTrace {
	struct FVector SourceOffset; // 0x00(0x0c)
	struct FVector TargetOffset; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.ProjectileFireData
// Size: 0x30 (Inherited: 0x00)
struct FProjectileFireData {
	struct UFiringStateComponent* FiringState; // 0x00(0x08)
	struct TArray<struct FFiringResults> FiringResults; // 0x08(0x10)
	int32_t BurstShotNumber; // 0x18(0x04)
	int32_t AmmoRemaining; // 0x1c(0x04)
	bool bTracerEnabled; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t RandomSeed; // 0x24(0x04)
	int32_t YawSwitchBits; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.FiringStateVariables
// Size: 0x10 (Inherited: 0x00)
struct FFiringStateVariables {
	int32_t ShotsFiredThisEntry; // 0x00(0x04)
	int32_t RoundsUntilNextTracer; // 0x04(0x04)
	struct UStateComponent* ScriptNextState; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BurstTuning
// Size: 0x08 (Inherited: 0x00)
struct FBurstTuning {
	int32_t BurstShotsPerEntry; // 0x00(0x04)
	float BurstRecoveryTime; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ProjectileTuning
// Size: 0x20 (Inherited: 0x00)
struct FProjectileTuning {
	struct AProjectile* ProjectileFired; // 0x00(0x08)
	float SpeedScale; // 0x08(0x04)
	int32_t ProjectilesPerShot; // 0x0c(0x04)
	struct TArray<struct FVector2D> MultiProjectileOffsets; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ScheduledTimeStepChange
// Size: 0x08 (Inherited: 0x00)
struct FScheduledTimeStepChange {
	struct FTimeStampIndex TimeStampIndex; // 0x00(0x04)
	char MoveStepsPerSecond; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.AresFontStyle
// Size: 0x68 (Inherited: 0x00)
struct FAresFontStyle {
	struct UObject* FontObject; // 0x00(0x08)
	struct FName TypefaceFontName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* FontMaterial; // 0x18(0x08)
	struct FLinearColor Color; // 0x20(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x30(0x10)
	int32_t Size_Desktop; // 0x40(0x04)
	int32_t Size_Mobile; // 0x44(0x04)
	int32_t Size_Console; // 0x48(0x04)
	int32_t Tracking_Desktop; // 0x4c(0x04)
	int32_t Tracking_Mobile; // 0x50(0x04)
	int32_t Tracking_Console; // 0x54(0x04)
	bool bOverride_FontObject; // 0x58(0x01)
	bool bOverride_TypefaceFontName; // 0x59(0x01)
	bool bOverride_FontMaterial; // 0x5a(0x01)
	bool bOverride_Color; // 0x5b(0x01)
	bool bOverride_ShadowColorAndOpacity; // 0x5c(0x01)
	bool bOverride_Size_Desktop; // 0x5d(0x01)
	bool bOverride_Size_Mobile; // 0x5e(0x01)
	bool bOverride_Size_Console; // 0x5f(0x01)
	bool bOverride_Tracking_Desktop; // 0x60(0x01)
	bool bOverride_Tracking_Mobile; // 0x61(0x01)
	bool bOverride_Tracking_Console; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};

// ScriptStruct ShooterGame.FootstepABTestEvent
// Size: 0xa8 (Inherited: 0x00)
struct FFootstepABTestEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString TestName; // 0x68(0x10)
	struct FString CohortName; // 0x78(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x88(0x20)
};

// ScriptStruct ShooterGame.FootstepOverrideType
// Size: 0x10 (Inherited: 0x00)
struct FFootstepOverrideType {
	struct UPhysicalMaterial* OverrideMaterial; // 0x00(0x08)
	float EndTimeStamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.PhysicsDerivative
// Size: 0x18 (Inherited: 0x00)
struct FPhysicsDerivative {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.PhysicsState
// Size: 0x18 (Inherited: 0x00)
struct FPhysicsState {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.ForceModuleRecord
// Size: 0x28 (Inherited: 0x00)
struct FForceModuleRecord {
	struct AActor* Source; // 0x00(0x08)
	struct UForceModule* ModuleType; // 0x08(0x08)
	float ModuleDuration; // 0x10(0x04)
	struct FNetworkedMovementTimestamp Timestamp; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.FXCPoolWarmingListEntry
// Size: 0x18 (Inherited: 0x00)
struct FFXCPoolWarmingListEntry {
	struct FString ClassPath; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.GameDataEventBase
// Size: 0x08 (Inherited: 0x00)
struct FGameDataEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ShooterAssisterDataModel
// Size: 0x10 (Inherited: 0x00)
struct FShooterAssisterDataModel {
	enum class EAresAssistType AssistType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UShooterPlayerStateDataModel* Assister; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundDataModel
// Size: 0x28 (Inherited: 0x00)
struct FRoundDataModel {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UShooterTeamStateDataModel* WinningTeam; // 0x08(0x08)
	struct UShooterTeamStateDataModel* AttackingTeam; // 0x10(0x08)
	struct UShooterTeamStateDataModel* DefendingTeam; // 0x18(0x08)
	enum class EAresRoundOutcome RoundResult; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.GameFeatureSubclass
// Size: 0x18 (Inherited: 0x00)
struct FGameFeatureSubclass {
	struct AActor* Class; // 0x00(0x08)
	struct TArray<struct FGameFeatureAlternateClass> AlternateClasses; // 0x08(0x10)
};

// ScriptStruct ShooterGame.GameFeatureAlternateClass
// Size: 0x10 (Inherited: 0x00)
struct FGameFeatureAlternateClass {
	enum class EGameFeatureToggleName ToggleName; // 0x00(0x01)
	bool bToggleValue; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AActor* Class; // 0x08(0x08)
};

// ScriptStruct ShooterGame.SessionLoopStatePrediction
// Size: 0x10 (Inherited: 0x00)
struct FSessionLoopStatePrediction {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ReconcileResult
// Size: 0x0c (Inherited: 0x00)
struct FReconcileResult {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.GameplayNotificationSlot
// Size: 0x28 (Inherited: 0x00)
struct FGameplayNotificationSlot {
	char pad_0[0x8]; // 0x00(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct UGameplayNotificationWidget* ActiveWidget; // 0x10(0x08)
	struct TArray<struct UGameplayNotificationWidget*> PrioritizedWidgets; // 0x18(0x10)
};

// ScriptStruct ShooterGame.HUDPhaseContext
// Size: 0x18 (Inherited: 0x00)
struct FHUDPhaseContext {
	struct FText GamePhaseDisplayText; // 0x00(0x18)
};

// ScriptStruct ShooterGame.HUDVisibilityConfig
// Size: 0x0d (Inherited: 0x00)
struct FHUDVisibilityConfig {
	bool bHideFirstPersonHUD; // 0x00(0x01)
	bool bHideTeamInfo; // 0x01(0x01)
	bool bNeverShowTeamInfo; // 0x02(0x01)
	bool bHideCurrentRound; // 0x03(0x01)
	bool bNeverShowCurrentRound; // 0x04(0x01)
	bool bShowRoundTransition; // 0x05(0x01)
	bool bShowSideSwitchTransition; // 0x06(0x01)
	bool bAlwaysShowScoreboard; // 0x07(0x01)
	bool bDebugDrawCharacters; // 0x08(0x01)
	bool bHideInWorldGameplayHud; // 0x09(0x01)
	bool bShowTeammateLoadout; // 0x0a(0x01)
	bool bShowPlayerIntention; // 0x0b(0x01)
	bool bShowRoundPhaseText; // 0x0c(0x01)
};

// ScriptStruct ShooterGame.HUDTimerConfig
// Size: 0x68 (Inherited: 0x00)
struct FHUDTimerConfig {
	bool bOverrideLine1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Line1Override; // 0x08(0x18)
	bool bOverrideLine2; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FText Line2Override; // 0x28(0x18)
	struct FTextureWrapper TimerImage; // 0x40(0x08)
	int32_t SecondsRemainingToShowCentiseconds; // 0x48(0x04)
	int32_t LowTimerThreshhold; // 0x4c(0x04)
	struct FLinearColor LowTimerColor; // 0x50(0x10)
	bool bHideTimerBoundingBox; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ShooterGame.TextureWrapper
// Size: 0x08 (Inherited: 0x00)
struct FTextureWrapper {
	struct UTexture* Texture; // 0x00(0x08)
};

// ScriptStruct ShooterGame.IndividualGameStatistic
// Size: 0x50 (Inherited: 0x00)
struct FIndividualGameStatistic {
	struct FName KeyName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FGameStatisticValueBucket> RoundValues; // 0x28(0x10)
	struct FGameStatisticValueBucket LatestDataBucket; // 0x38(0x0c)
	float GameAlliedValueSum; // 0x44(0x04)
	float GameEnemyValueSum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.GameStatisticValueBucket
// Size: 0x0c (Inherited: 0x00)
struct FGameStatisticValueBucket {
	int32_t RoundNum; // 0x00(0x04)
	float AlliedValue; // 0x04(0x04)
	float EnemyValue; // 0x08(0x04)
};

// ScriptStruct ShooterGame.HovercardCacheEntry
// Size: 0x08 (Inherited: 0x00)
struct FHovercardCacheEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ImpactEffectInstancePool
// Size: 0x20 (Inherited: 0x00)
struct FImpactEffectInstancePool {
	struct TArray<struct UImpactEffectInstance*> Pooled; // 0x00(0x10)
	struct TArray<struct UImpactEffectInstance*> Active; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CurrentUsableInfo
// Size: 0x28 (Inherited: 0x00)
struct FCurrentUsableInfo {
	struct UUsableComponent* CurrentUsingComponent; // 0x00(0x08)
	enum class EUseFinishType UseFinishType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ChangeId; // 0x0c(0x04)
	float CurrentUsingStartTime; // 0x10(0x04)
	struct FNetworkedMovementTimestamp CurrentUsingStartMovementTime; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.NetworkedPredictedUse
// Size: 0x20 (Inherited: 0x00)
struct FNetworkedPredictedUse {
	struct UUsableComponent* UsableComponent; // 0x00(0x08)
	struct FNetworkedMovementTimestamp Timestamp; // 0x08(0x10)
	enum class EUseFinishType UseType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.RiotMobileLoginStatus
// Size: 0x18 (Inherited: 0x00)
struct FRiotMobileLoginStatus {
	bool IsReady; // 0x00(0x01)
	enum class ERiotMobileLoginStatusState State; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString ErrorDescription; // 0x08(0x10)
};

// ScriptStruct ShooterGame.LatencyMultiDataPayload
// Size: 0x10 (Inherited: 0x00)
struct FLatencyMultiDataPayload {
	struct TArray<struct FLatencyDataPayload> Packets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.LatencyDataPayload
// Size: 0x48 (Inherited: 0x00)
struct FLatencyDataPayload {
	struct FString Timestamp; // 0x00(0x10)
	uint32_t PeriodInSeconds; // 0x10(0x04)
	uint32_t Sent; // 0x14(0x04)
	uint32_t Lost; // 0x18(0x04)
	uint32_t AverageRTT; // 0x1c(0x04)
	uint32_t Jitter; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Destination; // 0x28(0x10)
	struct FString ProxyAddress; // 0x38(0x10)
};

// ScriptStruct ShooterGame.LegalInfoDTO
// Size: 0x10 (Inherited: 0x00)
struct FLegalInfoDTO {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresCrosshairImage
// Size: 0x20 (Inherited: 0x00)
struct FAresCrosshairImage {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x10)
	enum class EAresDrawOrigin DrawOrigin; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.ClientStartupTimes
// Size: 0x48 (Inherited: 0x00)
struct FClientStartupTimes {
	struct FString InstanceId; // 0x00(0x10)
	double StartupTime; // 0x10(0x08)
	struct FString DeviceModel; // 0x18(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x28(0x20)
};

// ScriptStruct ShooterGame.ClientLoadTimes
// Size: 0x68 (Inherited: 0x00)
struct FClientLoadTimes {
	struct FString InstanceId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	double LoadingScreenTimeSecs; // 0x20(0x08)
	double PlatformReadyTimeSecs; // 0x28(0x08)
	double ClientReadyTimeSecs; // 0x30(0x08)
	double PreloadingTimeSecs; // 0x38(0x08)
	struct FPreloadMetrics PreloadMetrics; // 0x40(0x28)
};

// ScriptStruct ShooterGame.PreloadMetrics
// Size: 0x28 (Inherited: 0x00)
struct FPreloadMetrics {
	struct FPreloadSystemMetric UI; // 0x00(0x08)
	struct FPreloadSystemMetric BaseEquippables; // 0x08(0x08)
	struct FPreloadSystemMetric Personalization; // 0x10(0x08)
	struct FPreloadSystemMetric Characters; // 0x18(0x08)
	struct FPreloadSystemMetric Map; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PreloadSystemMetric
// Size: 0x08 (Inherited: 0x00)
struct FPreloadSystemMetric {
	int32_t LoadedCount; // 0x00(0x04)
	int32_t RequestedCount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ClientLaunchTimes
// Size: 0x18 (Inherited: 0x00)
struct FClientLaunchTimes {
	struct FString InstanceId; // 0x00(0x10)
	double InitialMainMenuLoadSecs; // 0x10(0x08)
};

// ScriptStruct ShooterGame.LocalePreferenceInfo
// Size: 0x10 (Inherited: 0x00)
struct FLocalePreferenceInfo {
	struct FString Locale; // 0x00(0x10)
};

// ScriptStruct ShooterGame.LoginQueueQueueToken
// Size: 0x18 (Inherited: 0x00)
struct FLoginQueueQueueToken {
	uint64_t QueuePos; // 0x00(0x08)
	float RetryAfter; // 0x08(0x04)
	int32_t WaitTime; // 0x0c(0x04)
	int32_t TicketID; // 0x10(0x04)
	bool Full; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.LoginQueueQueuedTokenRequest
// Size: 0x40 (Inherited: 0x00)
struct FLoginQueueQueuedTokenRequest {
	struct FString Userinfo; // 0x00(0x10)
	struct FString Entitlements; // 0x10(0x10)
	struct FString ClientName; // 0x20(0x10)
	struct FString QueueToken; // 0x30(0x10)
};

// ScriptStruct ShooterGame.LoginQueueTokenRequest
// Size: 0x30 (Inherited: 0x00)
struct FLoginQueueTokenRequest {
	struct FString Userinfo; // 0x00(0x10)
	struct FString Entitlements; // 0x10(0x10)
	struct FString ClientName; // 0x20(0x10)
};

// ScriptStruct ShooterGame.LoginQueueTokenResponse
// Size: 0x28 (Inherited: 0x00)
struct FLoginQueueTokenResponse {
	struct FString Token; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	enum class ELoginQueueTokenType TypeEnum; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.AresMainMenuNavBarData
// Size: 0x28 (Inherited: 0x00)
struct FAresMainMenuNavBarData {
	enum class EAresMainMenuTopNavigationState BackButtonTarget; // 0x00(0x01)
	bool bInheritBannerText; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText BannerText; // 0x08(0x18)
	bool bInheritShownElements; // 0x20(0x01)
	bool bShowSettingsButton; // 0x21(0x01)
	bool bShowHomeButton; // 0x22(0x01)
	bool bShowSocialButton; // 0x23(0x01)
	bool bShowCurrency; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ShooterGame.ActivePingData
// Size: 0x48 (Inherited: 0x00)
struct FActivePingData {
	struct FEffectID EffectID; // 0x00(0x20)
	struct FVector PingLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FMapPingData PingData; // 0x30(0x10)
	float PingEndTimestamp; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.MapPingData
// Size: 0x10 (Inherited: 0x00)
struct FMapPingData {
	struct AEffectContainer* PingEffect; // 0x00(0x08)
	struct UTexture* IconImage; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MassRewardsPlayer
// Size: 0x28 (Inherited: 0x00)
struct FMassRewardsPlayer {
	int64_t Version; // 0x00(0x08)
	struct FGuid Subject; // 0x08(0x10)
	struct TArray<struct FMassRewardCeremony> Ceremonies; // 0x18(0x10)
};

// ScriptStruct ShooterGame.MassRewardCeremony
// Size: 0x30 (Inherited: 0x00)
struct FMassRewardCeremony {
	struct FString Type; // 0x00(0x10)
	struct FGuid SourceID; // 0x10(0x10)
	struct TArray<struct FMassReward> Rewards; // 0x20(0x10)
};

// ScriptStruct ShooterGame.MassReward
// Size: 0x38 (Inherited: 0x00)
struct FMassReward {
	struct FString Type; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	struct FGuid ItemTypeID; // 0x20(0x10)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.MatchDetailsDebugOverrides
// Size: 0x20 (Inherited: 0x00)
struct FMatchDetailsDebugOverrides {
	int32_t SelfInitialRank; // 0x00(0x04)
	struct FName AgentAllyOverride; // 0x04(0x0c)
	struct FName AgentOpponentOverride; // 0x10(0x0c)
	bool IsRanked; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.MatchDetailsEnemyInteractionList
// Size: 0x38 (Inherited: 0x00)
struct FMatchDetailsEnemyInteractionList {
	struct TArray<struct FMatchDetailsEnemyInteraction> Interactions; // 0x00(0x10)
	int32_t Kills; // 0x10(0x04)
	int32_t Deaths; // 0x14(0x04)
	int32_t Assists; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCharacterUIData* Character; // 0x20(0x08)
	struct FString Subject; // 0x28(0x10)
};

// ScriptStruct ShooterGame.MatchDetailsEnemyInteraction
// Size: 0x78 (Inherited: 0x00)
struct FMatchDetailsEnemyInteraction {
	enum class EMatchDetailsInteractionType InteractionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UEquippableUIData* SelfWeapon; // 0x08(0x08)
	struct UEquippableUIData* EnemyWeapon; // 0x10(0x08)
	struct FPlayerRoundDamageDTOV2 DamageReceived; // 0x18(0x20)
	struct FPlayerRoundDamageDTOV2 DamageDealt; // 0x38(0x20)
	int32_t Distance; // 0x58(0x04)
	int32_t RoundNum; // 0x5c(0x04)
	bool RoundWin; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UArmorUIData* SelfArmor; // 0x68(0x08)
	struct UArmorUIData* EnemyArmor; // 0x70(0x08)
};

// ScriptStruct ShooterGame.ProcessedMatchDetails
// Size: 0x238 (Inherited: 0x00)
struct FProcessedMatchDetails {
	struct FMatchInfoDTO MatchInfo; // 0x00(0xb8)
	struct UMapUIData* MapUIData; // 0xb8(0x08)
	struct UGameModeDataAsset* GameModeDataAsset; // 0xc0(0x08)
	struct USeasonDataAsset* SeasonDataAsset; // 0xc8(0x08)
	struct UCompetitiveSeasonDataAsset* CompetitiveSeasonDataAsset; // 0xd0(0x08)
	struct FDateTime GameStartTime; // 0xd8(0x08)
	struct FTimespan GameLength; // 0xe0(0x08)
	struct TMap<struct FName, struct FTeamDetailsDTO> Teams; // 0xe8(0x50)
	struct TMap<struct FString, struct FProcessedPlayerDetails> Players; // 0x138(0x50)
	struct TMap<int32_t, struct FProcessedRoundResult> RoundResults; // 0x188(0x50)
	struct TArray<struct FProcessedKillEvent> KillEvents; // 0x1d8(0x10)
	char pad_1E8[0x50]; // 0x1e8(0x50)
};

// ScriptStruct ShooterGame.ProcessedKillEvent
// Size: 0xa8 (Inherited: 0x00)
struct FProcessedKillEvent {
	struct FKillDetailsDTO KillEvent; // 0x00(0x80)
	float Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UEquippableUIData* EquippableUIData; // 0x88(0x08)
	struct UCharacterAbilityUIData* CharacterAbilityUIData; // 0x90(0x08)
	struct UCharacterUIData* KillerCharacterUIData; // 0x98(0x08)
	struct UCharacterUIData* VictimCharacterUIData; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.ProcessedRoundResult
// Size: 0x120 (Inherited: 0x00)
struct FProcessedRoundResult {
	struct FRoundResultDTO RoundResultRaw; // 0x00(0xa0)
	struct TMap<struct FString, struct FProcessedPlayerRoundResult> PlayerRoundResultMap; // 0xa0(0x50)
	struct TArray<struct FProcessedKillEvent> Kills; // 0xf0(0x10)
	struct FName FirstBloodTeam; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FProcessedPlayerRoundEconomyInfo> PlayerEconomies; // 0x110(0x10)
};

// ScriptStruct ShooterGame.ProcessedPlayerRoundEconomyInfo
// Size: 0x50 (Inherited: 0x00)
struct FProcessedPlayerRoundEconomyInfo {
	struct FPlayerRoundEconomyInfoDTO Data; // 0x00(0x40)
	struct UEquippableUIData* WeaponUIData; // 0x40(0x08)
	struct UArmorUIData* ArmorUIData; // 0x48(0x08)
};

// ScriptStruct ShooterGame.ProcessedPlayerRoundResult
// Size: 0x220 (Inherited: 0x00)
struct FProcessedPlayerRoundResult {
	struct FString Subject; // 0x00(0x10)
	int32_t RoundNum; // 0x10(0x04)
	int32_t RoundKills; // 0x14(0x04)
	int32_t RoundDeaths; // 0x18(0x04)
	int32_t RoundAssists; // 0x1c(0x04)
	int32_t RoundDamageDealt; // 0x20(0x04)
	bool IsBombPlanter; // 0x24(0x01)
	bool IsBombDefuser; // 0x25(0x01)
	bool IsRoundWinner; // 0x26(0x01)
	bool GotFirstBlood; // 0x27(0x01)
	int32_t RoundScore; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FProcessedKillEvent> Kills; // 0x30(0x10)
	struct FProcessedPlayerRoundEconomyInfo EconomyInfo; // 0x40(0x50)
	struct TMap<struct FString, struct FPlayerRoundDamageDTOV2> Damage; // 0x90(0x50)
	char pad_E0[0x140]; // 0xe0(0x140)
};

// ScriptStruct ShooterGame.ProcessedPlayerDetails
// Size: 0x260 (Inherited: 0x00)
struct FProcessedPlayerDetails {
	struct FPlayerDetailsDTO PlayerDetailsRaw; // 0x00(0xd0)
	int32_t BestRound; // 0xd0(0x04)
	int32_t BestRoundBeforeOT; // 0xd4(0x04)
	int32_t TotalDamageDealt; // 0xd8(0x04)
	int32_t TotalLoadoutValue; // 0xdc(0x04)
	int32_t TotalMoneySpent; // 0xe0(0x04)
	int32_t BombPlants; // 0xe4(0x04)
	int32_t BombDefuses; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UCharacterUIData* CharacterUIData; // 0xf0(0x08)
	struct UTexture2D* FullPortrait; // 0xf8(0x08)
	struct FAbilityEffectDTO AbilityEffects; // 0x100(0x140)
	struct UCharacterDataAsset* CharacterDataAsset; // 0x240(0x08)
	struct UPlayerCardDataAsset* PlayerCardAsset; // 0x248(0x08)
	struct UPlayerTitleDataAsset* PlayerTitleDataAsset; // 0x250(0x08)
	struct ULevelBorderDataAsset* LevelBorderDataAsset; // 0x258(0x08)
};

// ScriptStruct ShooterGame.PlayerRoundDamageDTO
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRoundDamageDTO {
	int32_t Round; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Receiver; // 0x08(0x10)
	int32_t Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PlayerScoreDTO
// Size: 0x18 (Inherited: 0x00)
struct FPlayerScoreDTO {
	struct FString Subject; // 0x00(0x10)
	int32_t Score; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MatchHistoryRequestContext
// Size: 0x28 (Inherited: 0x00)
struct FMatchHistoryRequestContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.FullMatchHistory
// Size: 0x20 (Inherited: 0x00)
struct FFullMatchHistory {
	struct TArray<struct FMatchDetailsDTO> History; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerHistory
// Size: 0x30 (Inherited: 0x00)
struct FPlayerHistory {
	struct FString Subject; // 0x00(0x10)
	int32_t BeginIndex; // 0x10(0x04)
	int32_t EndIndex; // 0x14(0x04)
	int32_t Total; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPlayerHistoryEntry> History; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PlayerHistoryEntry
// Size: 0x20 (Inherited: 0x00)
struct FPlayerHistoryEntry {
	struct FString MatchID; // 0x00(0x10)
	struct FString TeamID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.LeaderboardMapKey
// Size: 0x20 (Inherited: 0x00)
struct FLeaderboardMapKey {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.MatchScoreBreakdown
// Size: 0x38 (Inherited: 0x00)
struct FMatchScoreBreakdown {
	int32_t HighestPlayerScore; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMatchTeamScoreBreakdown Friendly; // 0x08(0x18)
	struct FMatchTeamScoreBreakdown Enemy; // 0x20(0x18)
};

// ScriptStruct ShooterGame.MatchTeamScoreBreakdown
// Size: 0x18 (Inherited: 0x00)
struct FMatchTeamScoreBreakdown {
	int32_t TotalScore; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMatchPlayerScoreBreakdown*> PerPlayerScores; // 0x08(0x10)
};

// ScriptStruct ShooterGame.GamePausedText
// Size: 0x120 (Inherited: 0x00)
struct FGamePausedText {
	struct FText PausedText; // 0x00(0x18)
	struct FVector2D DrawOffset; // 0x18(0x08)
	struct FAresHudFontParams FontParams; // 0x20(0x70)
	struct FText PausedByText; // 0x90(0x18)
	struct FVector2D PausedByDrawOffset; // 0xa8(0x08)
	struct FAresHudFontParams PausedByFontParams; // 0xb0(0x70)
};

// ScriptStruct ShooterGame.RoundNumber
// Size: 0xa0 (Inherited: 0x00)
struct FRoundNumber {
	struct FVector2D RoundNumberDrawOffset; // 0x00(0x08)
	struct FAresHudFontParams RoundNumberFontParams; // 0x08(0x70)
	struct FAresHudBackgroundImage BackgroundImage; // 0x78(0x28)
};

// ScriptStruct ShooterGame.MatchTimer
// Size: 0xb8 (Inherited: 0x00)
struct FMatchTimer {
	struct FVector2D MatchTimerDrawOffset; // 0x00(0x08)
	struct FAresHudFontParams MatchTimerFontParams; // 0x08(0x70)
	struct FText NotInRoundText; // 0x78(0x18)
	struct FAresHudBackgroundImage BackgroundImage; // 0x90(0x28)
};

// ScriptStruct ShooterGame.TeamMoney
// Size: 0x148 (Inherited: 0x00)
struct FTeamMoney {
	struct FTeamMoneyText MoneyText; // 0x00(0x88)
	struct FAresHudTextLabel MoneyTextLabel; // 0x88(0x98)
	struct FAresHudBackgroundImage BackgroundImage; // 0x120(0x28)
};

// ScriptStruct ShooterGame.TeamMoneyText
// Size: 0x88 (Inherited: 0x00)
struct FTeamMoneyText {
	struct FVector2D DrawOffset; // 0x00(0x08)
	struct FAresHudFontParams FontParams; // 0x08(0x70)
	struct FLinearColor TextTint; // 0x78(0x10)
};

// ScriptStruct ShooterGame.TeamIcons
// Size: 0x50 (Inherited: 0x00)
struct FTeamIcons {
	struct FVector2D IconOffsets[0x2]; // 0x00(0x10)
	struct FLinearColor IconTints[0x2]; // 0x10(0x20)
	struct UTexture* BlueTeamIcon; // 0x30(0x08)
	struct UTexture* RedTeamIcon; // 0x38(0x08)
	struct FAresHudImageParams TeamIconImageParams; // 0x40(0x10)
};

// ScriptStruct ShooterGame.TeamScore
// Size: 0x178 (Inherited: 0x00)
struct FTeamScore {
	struct FTeamScoreText ScoreText; // 0x00(0x78)
	struct FAresHudTextLabel ScoreTextLabel; // 0x78(0x98)
	struct FLinearColor ScoreTextTint; // 0x110(0x10)
	struct FLinearColor ScoreIncrementTint; // 0x120(0x10)
	struct FAresTimedInterpolant ScoreIncrementInterpolant; // 0x130(0x1c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FAresHudBackgroundImage ScoreBackground; // 0x150(0x28)
};

// ScriptStruct ShooterGame.TeamScoreText
// Size: 0x78 (Inherited: 0x00)
struct FTeamScoreText {
	struct FVector2D DrawOffset; // 0x00(0x08)
	struct FAresHudFontParams FontParams; // 0x08(0x70)
};

// ScriptStruct ShooterGame.AresQueueStatus
// Size: 0x20 (Inherited: 0x00)
struct FAresQueueStatus {
	struct FString QueueID; // 0x00(0x10)
	int32_t NumPartiesInQueue; // 0x10(0x04)
	int32_t NumPlayersInQueue; // 0x14(0x04)
	bool IsSweepingOn; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.MatchRecoveryPipelineDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FMatchRecoveryPipelineDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.MatchRecoveryContext
// Size: 0x20 (Inherited: 0x00)
struct FMatchRecoveryContext {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestoreRoundDataPipelineDataModel
// Size: 0x48 (Inherited: 0x00)
struct FRoundRestoreRoundDataPipelineDataModel {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct ShooterGame.RoundRestoreGameModeInfoPipelineDataModel
// Size: 0x30 (Inherited: 0x00)
struct FRoundRestoreGameModeInfoPipelineDataModel {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RoundRestoreTeamPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreTeamPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AresRoundResultPipelineDataModel
// Size: 0x30 (Inherited: 0x00)
struct FAresRoundResultPipelineDataModel {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RoundRestorePlayerPipelineDataModel
// Size: 0x60 (Inherited: 0x00)
struct FRoundRestorePlayerPipelineDataModel {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventoryPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestoreInventorySlotPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventorySlotPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryItemPipelineDataModel
// Size: 0x18 (Inherited: 0x00)
struct FRoundRestoreInventoryItemPipelineDataModel {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.RoundRestorePlayerStatsPipelineDataModel
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestorePlayerStatsPipelineDataModel {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MatchResultBaseEvent
// Size: 0x10 (Inherited: 0x00)
struct FMatchResultBaseEvent {
	struct FString EventType; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MissionResults
// Size: 0x10 (Inherited: 0x00)
struct FMissionResults {
	struct TArray<struct FParticipantMissionResults> Participants; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ParticipantMissionResults
// Size: 0x20 (Inherited: 0x00)
struct FParticipantMissionResults {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FMegapacketMission> Missions; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MatchResults
// Size: 0x70 (Inherited: 0x00)
struct FMatchResults {
	struct FMatchInfo MatchInfo; // 0x00(0x40)
	struct TArray<struct FParticipantMatchResults> ParticipantResults; // 0x40(0x10)
	struct TArray<struct FRoundResult> RoundResults; // 0x50(0x10)
	struct TArray<struct FTeamResults> TeamResults; // 0x60(0x10)
};

// ScriptStruct ShooterGame.TeamResults
// Size: 0x1c (Inherited: 0x00)
struct FTeamResults {
	struct FName TeamID; // 0x00(0x0c)
	bool WonMatch; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t RoundsWon; // 0x10(0x04)
	int32_t RoundsPlayed; // 0x14(0x04)
	int32_t NumPoints; // 0x18(0x04)
};

// ScriptStruct ShooterGame.RoundResult
// Size: 0x28 (Inherited: 0x00)
struct FRoundResult {
	int32_t RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RoundResult; // 0x08(0x10)
	struct FName WinningTeam; // 0x18(0x0c)
	enum class EAresRoundOutcome RoundResultCode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ShooterGame.ParticipantMatchResults
// Size: 0x148 (Inherited: 0x00)
struct FParticipantMatchResults {
	struct FString Subject; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FName TeamID; // 0x20(0x0c)
	int32_t Score; // 0x2c(0x04)
	int32_t RoundsPlayed; // 0x30(0x04)
	int32_t Kills; // 0x34(0x04)
	int32_t Deaths; // 0x38(0x04)
	int32_t Assists; // 0x3c(0x04)
	int64_t PlaytimeMilliseconds; // 0x40(0x08)
	bool IsABot; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x50(0xa8)
	struct TMap<struct FString, float> BehaviorFactors; // 0xf8(0x50)
};

// ScriptStruct ShooterGame.NewPlayerExperienceDetails
// Size: 0xa8 (Inherited: 0x00)
struct FNewPlayerExperienceDetails {
	struct FBasicMovement BasicMovement; // 0x00(0x0c)
	struct FBasicGunSkill BasicGunSkill; // 0x0c(0x10)
	struct FSneakMission SneakMission; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDroneKill DroneKill; // 0x30(0x20)
	struct FAdvancedShootingAdaptive AdvancedShootingAdaptive; // 0x50(0x20)
	struct FAbility Ability; // 0x70(0x14)
	struct FBombPlant BombPlant; // 0x84(0x10)
	struct FDefendBombSite DefendBombSite; // 0x94(0x10)
	struct FSettingStatus SettingStatus; // 0xa4(0x02)
	char pad_A6[0x2]; // 0xa6(0x02)
};

// ScriptStruct ShooterGame.SettingStatus
// Size: 0x02 (Inherited: 0x00)
struct FSettingStatus {
	bool IsMouseSensitivityDefault; // 0x00(0x01)
	bool IsCrosshairDefault; // 0x01(0x01)
};

// ScriptStruct ShooterGame.BaseNewPlayerExperienceStruct
// Size: 0x04 (Inherited: 0x00)
struct FBaseNewPlayerExperienceStruct {
	int32_t IdleTimeMillis; // 0x00(0x04)
};

// ScriptStruct ShooterGame.BaseBasicNewPlayerExperienceStruct
// Size: 0x08 (Inherited: 0x04)
struct FBaseBasicNewPlayerExperienceStruct : FBaseNewPlayerExperienceStruct {
	int32_t ObjectiveCompleteTimeMillis; // 0x04(0x04)
};

// ScriptStruct ShooterGame.DefendBombSite
// Size: 0x10 (Inherited: 0x08)
struct FDefendBombSite : FBaseBasicNewPlayerExperienceStruct {
	bool Success; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.BombPlant
// Size: 0x10 (Inherited: 0x08)
struct FBombPlant : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.Ability
// Size: 0x14 (Inherited: 0x08)
struct FAbility : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Attempts; // 0x0c(0x04)
	int32_t DamageTaken; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AdvancedShootingAdaptive
// Size: 0x20 (Inherited: 0x04)
struct FAdvancedShootingAdaptive : FBaseNewPlayerExperienceStruct {
	int32_t Attempts; // 0x04(0x04)
	int32_t AdaptiveBotAverageDurationMillisAllAttempts; // 0x08(0x04)
	int32_t AdaptiveBotAverageDurationMillisFirstAttempt; // 0x0c(0x04)
	struct TArray<struct FAdvancedBotKillDetails> KillDetailsFirstAttempt; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AdvancedBotKillDetails
// Size: 0x0c (Inherited: 0x00)
struct FAdvancedBotKillDetails {
	int32_t BotSurvivedDurationMillis; // 0x00(0x04)
	int32_t BotLevelDurationMillis; // 0x04(0x04)
	bool IsKill; // 0x08(0x01)
	bool IsHeadshot; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct ShooterGame.DroneKill
// Size: 0x20 (Inherited: 0x08)
struct FDroneKill : FBaseBasicNewPlayerExperienceStruct {
	int32_t TotalShots; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SneakMission
// Size: 0x10 (Inherited: 0x08)
struct FSneakMission : FBaseBasicNewPlayerExperienceStruct {
	int32_t Attempts; // 0x08(0x04)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.BasicGunSkill
// Size: 0x10 (Inherited: 0x08)
struct FBasicGunSkill : FBaseBasicNewPlayerExperienceStruct {
	int32_t Attempts; // 0x08(0x04)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.BasicMovement
// Size: 0x0c (Inherited: 0x08)
struct FBasicMovement : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.MatchInfo
// Size: 0x40 (Inherited: 0x00)
struct FMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	int64_t PlaytimeMilliseconds; // 0x30(0x08)
	bool IsValid; // 0x38(0x01)
	enum class EMatchCompletionState CompletionState; // 0x39(0x01)
	bool ShouldMatchDisablePenalties; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct ShooterGame.KillDetails
// Size: 0x28 (Inherited: 0x00)
struct FKillDetails {
	struct FName PlayerMovementType; // 0x00(0x0c)
	int32_t Headshots; // 0x0c(0x04)
	int32_t TotalShots; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString WeaponName; // 0x18(0x10)
};

// ScriptStruct ShooterGame.Megapacket
// Size: 0x2e8 (Inherited: 0x00)
struct FMegapacket {
	struct TArray<struct FMegapacketPlayer> Players; // 0x00(0x10)
	struct FMegapacketMatchInfo MatchInfo; // 0x10(0x80)
	struct FMegapacketMetadata MetaData; // 0x90(0x258)
};

// ScriptStruct ShooterGame.MegapacketMetadata
// Size: 0x258 (Inherited: 0x00)
struct FMegapacketMetadata {
	struct FCustomGameMetadata CustomGameMetadata; // 0x00(0xa8)
	struct FLoadTestMetadata LoadTestMetadata; // 0xa8(0x20)
	struct FPregameMetadata PregameMetadata; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FMatchmakingMetadata MatchmakingMetadata; // 0xd0(0x18)
	struct FGameMetadata GameMetadata; // 0xe8(0xa0)
	struct FTournamentMetadata TournamentMetadata; // 0x188(0x80)
	struct FTournamentRosterMetadata RosterMetadata; // 0x208(0x50)
};

// ScriptStruct ShooterGame.GameMetadata
// Size: 0xa0 (Inherited: 0x00)
struct FGameMetadata {
	struct TMap<struct FName, struct FString> Config; // 0x00(0x50)
	struct TMap<struct FString, struct FString> Rules; // 0x50(0x50)
};

// ScriptStruct ShooterGame.MatchmakingMetadata
// Size: 0x18 (Inherited: 0x00)
struct FMatchmakingMetadata {
	struct FString QueueID; // 0x00(0x10)
	bool IsRanked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.PregameMetadata
// Size: 0x01 (Inherited: 0x00)
struct FPregameMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.LoadTestMetadata
// Size: 0x20 (Inherited: 0x00)
struct FLoadTestMetadata {
	struct FString LoadTestID; // 0x00(0x10)
	int32_t InstanceId; // 0x10(0x04)
	int32_t NumPointsToWinGame; // 0x14(0x04)
	int32_t BotsToAdd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CustomGameMetadata
// Size: 0xa8 (Inherited: 0x00)
struct FCustomGameMetadata {
	struct FString OwnerSubject; // 0x00(0x10)
	struct FString PartyID; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString GameDescription; // 0x30(0x10)
	struct FString Module; // 0x40(0x10)
	bool ForcePostProcessing; // 0x50(0x01)
	bool AllowGameModifiers; // 0x51(0x01)
	bool TournamentModeEnabled; // 0x52(0x01)
	bool UseCustomTeamColors; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString FirstTeamName; // 0x58(0x10)
	struct FString FirstTeamColor; // 0x68(0x10)
	struct FString SecondTeamName; // 0x78(0x10)
	struct FString SecondTeamColor; // 0x88(0x10)
	struct FMatchRecoveryMetadata MatchRecoveryData; // 0x98(0x10)
};

// ScriptStruct ShooterGame.MatchRecoveryMetadata
// Size: 0x10 (Inherited: 0x00)
struct FMatchRecoveryMetadata {
	struct TArray<struct FRoundRestoreRoundData> Rounds; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreRoundData
// Size: 0x48 (Inherited: 0x00)
struct FRoundRestoreRoundData {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRoundRestoreGameModeInfo GameModeInfo; // 0x08(0x30)
	struct TArray<struct FRoundRestorePlayer> Players; // 0x38(0x10)
};

// ScriptStruct ShooterGame.RoundRestorePlayer
// Size: 0x80 (Inherited: 0x00)
struct FRoundRestorePlayer {
	struct FString PlayerID; // 0x00(0x10)
	struct TSoftClassPtr<UObject> CharacterClass; // 0x10(0x30)
	struct FString CharacterClassGUID; // 0x40(0x10)
	struct FRoundRestoreInventory Inventory; // 0x50(0x20)
	struct FRoundRestorePlayerStats Stats; // 0x70(0x10)
};

// ScriptStruct ShooterGame.RoundRestorePlayerStats
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestorePlayerStats {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
	int32_t Score; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RoundRestoreInventory
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventory {
	struct TArray<struct FRoundRestoreInventorySlot> ItemSlots; // 0x00(0x10)
	float ShieldAmount; // 0x10(0x04)
	int32_t UltimatePoints; // 0x14(0x04)
	int32_t Money; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.RoundRestoreInventorySlot
// Size: 0x18 (Inherited: 0x00)
struct FRoundRestoreInventorySlot {
	enum class EAresItemSlot Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FRoundRestoreInventoryItem> Items; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryItem
// Size: 0x38 (Inherited: 0x00)
struct FRoundRestoreInventoryItem {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x30)
	int32_t ResourceUnits; // 0x30(0x04)
	bool bUsesAbilityResources; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ShooterGame.RoundRestoreGameModeInfo
// Size: 0x30 (Inherited: 0x00)
struct FRoundRestoreGameModeInfo {
	struct FString GameModeName; // 0x00(0x10)
	struct TArray<struct FRoundRestoreTeam> Teams; // 0x10(0x10)
	struct TArray<struct FRoundRestoreRoundResult> RoundResultHistory; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreRoundResult
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreRoundResult {
	struct FName WinningTeam; // 0x00(0x0c)
	enum class EAresRoundOutcome RoundResult; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FName> EliminatedTeams; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreTeam
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestoreTeam {
	struct FName TeamName; // 0x00(0x0c)
	enum class EAresTeamRole TeamRole; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.MegapacketMatchInfo
// Size: 0x80 (Inherited: 0x00)
struct FMegapacketMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	struct FString MapID; // 0x10(0x10)
	struct FString GamePodID; // 0x20(0x10)
	struct FString Mode; // 0x30(0x10)
	struct FString ProvisioningFlowID; // 0x40(0x10)
	bool IsMatchSampled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString SeasonID; // 0x58(0x10)
	struct FString ClientPlatformType; // 0x68(0x10)
	enum class EAresPlatformType ClientPlatformEnum; // 0x78(0x01)
	bool AllowDefaultEncryptionKey; // 0x79(0x01)
	bool CanProgressContracts; // 0x7a(0x01)
	bool CanProgressMissions; // 0x7b(0x01)
	int32_t TeamSize; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.RFC190Scope
// Size: 0x50 (Inherited: 0x00)
struct FRFC190Scope {
	struct FString environment; // 0x00(0x10)
	struct FString datacenter; // 0x10(0x10)
	struct FString deployment; // 0x20(0x10)
	struct FString product; // 0x30(0x10)
	struct FString Component; // 0x40(0x10)
};

// ScriptStruct ShooterGame.AresMeleeTuning
// Size: 0x18 (Inherited: 0x00)
struct FAresMeleeTuning {
	float AttackDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UDamageType* DamageType; // 0x08(0x08)
	struct AEffectContainer* ImpactFXC; // 0x10(0x08)
};

// ScriptStruct ShooterGame.MemoryPerfStatsComponent
// Size: 0x100 (Inherited: 0x00)
struct FMemoryPerfStatsComponent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FTestIdentifiers TestIdentifiers; // 0x20(0x40)
	struct FMemoryPerfStats MemoryPerfStats; // 0x60(0xa0)
};

// ScriptStruct ShooterGame.MemoryPerfStats
// Size: 0xa0 (Inherited: 0x00)
struct FMemoryPerfStats {
	float PhysicalMemoryUtilizationPercentForProcess; // 0x00(0x04)
	float PhysicalMemoryUtilizationPercentSystemwide; // 0x04(0x04)
	float PhysicalMemoryUtilizationForProcessMB; // 0x08(0x04)
	int32_t NameTableMemorySize; // 0x0c(0x04)
	uint64_t StaticMeshStandardMemory; // 0x10(0x08)
	uint64_t StaticMeshRenderingMemory; // 0x18(0x08)
	uint64_t SkeletalMeshStandardMemory; // 0x20(0x08)
	uint64_t SkeletalMeshRenderingMemory; // 0x28(0x08)
	uint64_t TextureStandardMemory; // 0x30(0x08)
	uint64_t TextureRenderingMemory; // 0x38(0x08)
	uint64_t MaterialStandardMemory; // 0x40(0x08)
	uint64_t MaterialRenderingMemory; // 0x48(0x08)
	uint64_t ParticlesStandardMemory; // 0x50(0x08)
	uint64_t ParticlesRenderingMemory; // 0x58(0x08)
	uint64_t AnimationStandardMemory; // 0x60(0x08)
	uint64_t BodySetupStandardMemory; // 0x68(0x08)
	uint64_t MapBuildDataRegistryStandard; // 0x70(0x08)
	uint64_t UmbraStandardMemory; // 0x78(0x08)
	uint64_t AudioStandardMemory; // 0x80(0x08)
	uint64_t WidgetStandardMemory; // 0x88(0x08)
	uint64_t OtherStandardMemory; // 0x90(0x08)
	uint64_t OtherRenderingMemory; // 0x98(0x08)
};

// ScriptStruct ShooterGame.TestIdentifiers
// Size: 0x40 (Inherited: 0x00)
struct FTestIdentifiers {
	struct FString TestSuite; // 0x00(0x10)
	struct FString TestParameters; // 0x10(0x10)
	struct FString Scenario; // 0x20(0x10)
	struct FString TestCase; // 0x30(0x10)
};

// ScriptStruct ShooterGame.ObjectiveStatusTracker
// Size: 0x08 (Inherited: 0x00)
struct FObjectiveStatusTracker {
	enum class EObjectiveStatus Status; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Counter; // 0x04(0x04)
};

// ScriptStruct ShooterGame.MissionStatusTracker
// Size: 0x08 (Inherited: 0x00)
struct FMissionStatusTracker {
	enum class EMissionStatus Status; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Counter; // 0x04(0x04)
};

// ScriptStruct ShooterGame.CompetitiveUpdateRequestContext
// Size: 0x18 (Inherited: 0x00)
struct FCompetitiveUpdateRequestContext {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ProcessedSeasonInfo
// Size: 0x98 (Inherited: 0x00)
struct FProcessedSeasonInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	int32_t RankIndex; // 0x14(0x04)
	int32_t RankTier; // 0x18(0x04)
	int32_t Rank; // 0x1c(0x04)
	int32_t CapstoneWins; // 0x20(0x04)
	int32_t CapstoneTier; // 0x24(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x28(0x50)
	int32_t TotalWinsNeededForRank; // 0x78(0x04)
	int32_t LeaderboardPosition; // 0x7c(0x04)
	int32_t RankedRating; // 0x80(0x04)
	int32_t CompetitiveTier; // 0x84(0x04)
	int32_t GamesNeededForRating; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct USeasonDataAsset* SeasonAsset; // 0x90(0x08)
};

// ScriptStruct ShooterGame.Leaderboard
// Size: 0x88 (Inherited: 0x00)
struct FLeaderboard {
	struct FGuid SeasonID; // 0x00(0x10)
	struct TMap<int32_t, struct FLeaderboardTierDetails> TierDetails; // 0x10(0x50)
	int32_t TotalPlayers; // 0x60(0x04)
	int32_t StartIndex; // 0x64(0x04)
	struct FString Query; // 0x68(0x10)
	struct TArray<struct FLeaderboardPlayer> Players; // 0x78(0x10)
};

// ScriptStruct ShooterGame.LeaderboardPlayer
// Size: 0x68 (Inherited: 0x00)
struct FLeaderboardPlayer {
	struct FString Puuid; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
	struct FGuid PlayerCardID; // 0x30(0x10)
	struct FGuid TitleId; // 0x40(0x10)
	int32_t RankedRating; // 0x50(0x04)
	int32_t CompetitiveTier; // 0x54(0x04)
	int32_t LeaderboardRank; // 0x58(0x04)
	int32_t NumberOfWins; // 0x5c(0x04)
	bool IsAnonymized; // 0x60(0x01)
	bool IsBanned; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct ShooterGame.LeaderboardTierDetails
// Size: 0x0c (Inherited: 0x00)
struct FLeaderboardTierDetails {
	int32_t RankedRatingThreshold; // 0x00(0x04)
	int32_t StartingPage; // 0x04(0x04)
	int32_t StartingIndex; // 0x08(0x04)
};

// ScriptStruct ShooterGame.HideActRankBadgeRequestBody
// Size: 0x01 (Inherited: 0x00)
struct FHideActRankBadgeRequestBody {
	bool Hide; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AnonymizePlayerRequestBody
// Size: 0x01 (Inherited: 0x00)
struct FAnonymizePlayerRequestBody {
	bool Anonymize; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MMRPlayer
// Size: 0xa8 (Inherited: 0x00)
struct FMMRPlayer {
	struct FString Subject; // 0x00(0x10)
	bool NewPlayerExperienceFinished; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FMMRMatchInfo LatestCompetitiveUpdate; // 0x18(0x30)
	int64_t Version; // 0x48(0x08)
	struct TMap<struct FString, struct FMMRQueueSkill> QueueSkills; // 0x50(0x50)
	bool IsLeaderboardAnonymized; // 0xa0(0x01)
	bool IsActRankBadgeHidden; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// ScriptStruct ShooterGame.MMRQueueSkill
// Size: 0x68 (Inherited: 0x00)
struct FMMRQueueSkill {
	int32_t CompetitiveTier; // 0x00(0x04)
	int32_t TotalGamesNeededForRating; // 0x04(0x04)
	int32_t RecentGamesNeededForRating; // 0x08(0x04)
	int32_t CurrentSeasonGamesNeededForRating; // 0x0c(0x04)
	int32_t TotalGamesNeededForLeaderboard; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FGuid, struct FMMRSeasonInfo> SeasonalInfoBySeasonID; // 0x18(0x50)
};

// ScriptStruct ShooterGame.MMRSeasonInfo
// Size: 0x88 (Inherited: 0x00)
struct FMMRSeasonInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x18(0x50)
	int32_t CapstoneWins; // 0x68(0x04)
	int32_t Rank; // 0x6c(0x04)
	int32_t TotalWinsNeededForRank; // 0x70(0x04)
	int32_t LeaderboardRank; // 0x74(0x04)
	int32_t RankedRating; // 0x78(0x04)
	int32_t CompetitiveTier; // 0x7c(0x04)
	int32_t GamesNeededForRating; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ShooterGame.MMRMatchInfo
// Size: 0x30 (Inherited: 0x00)
struct FMMRMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	int32_t TierBeforeUpdate; // 0x10(0x04)
	int32_t TierAfterUpdate; // 0x14(0x04)
	int32_t RankedRatingBeforeUpdate; // 0x18(0x04)
	int32_t RankedRatingAfterUpdate; // 0x1c(0x04)
	int32_t RankedRatingEarned; // 0x20(0x04)
	int32_t afkPenalty; // 0x24(0x04)
	int32_t RankedRatingPerformanceBonus; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.MMRCompetitiveUpdates
// Size: 0x28 (Inherited: 0x00)
struct FMMRCompetitiveUpdates {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FMMRMatchInfo> Matches; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.DirectConnectSettings
// Size: 0x50 (Inherited: 0x00)
struct FDirectConnectSettings {
	struct FString PlayerName; // 0x00(0x10)
	struct FString Team; // 0x10(0x10)
	struct FString Player; // 0x20(0x10)
	struct FString ServerIP; // 0x30(0x10)
	struct FString Port; // 0x40(0x10)
};

// ScriptStruct ShooterGame.AresMobileDeviceTelemetryEvent
// Size: 0x88 (Inherited: 0x00)
struct FAresMobileDeviceTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	uint32_t RoundNumber; // 0x10(0x04)
	uint32_t RoundDuration; // 0x14(0x04)
	float BatteryDrainedThisRound; // 0x18(0x04)
	float MinimumBatteryDuringPlay; // 0x1c(0x04)
	float MaximumBatteryDuringPlay; // 0x20(0x04)
	uint32_t EstimatedTimeSpentCharging; // 0x24(0x04)
	uint32_t EstimatedTimeSpentInLowPowerMode; // 0x28(0x04)
	float AverageDeviceTemperatureLevel; // 0x2c(0x04)
	float MinimumTemperatureLevel; // 0x30(0x04)
	float MaximumTemperatureLevel; // 0x34(0x04)
	struct FString DeviceModel; // 0x38(0x10)
	struct FString Puuid; // 0x48(0x10)
	struct FMobileDevicePlatformInfo PlatformInfo; // 0x58(0x20)
	struct FString InstanceId; // 0x78(0x10)
};

// ScriptStruct ShooterGame.MobileDevicePlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FMobileDevicePlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ModeVariables
// Size: 0x08 (Inherited: 0x00)
struct FModeVariables {
	int32_t Mode; // 0x00(0x04)
	int32_t NumModes; // 0x04(0x04)
};

// ScriptStruct ShooterGame.DropInEnabledUpdatedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FDropInEnabledUpdatedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundCeremonyUpdatedGameDataEvent
// Size: 0x18 (Inherited: 0x08)
struct FRoundCeremonyUpdatedGameDataEvent : FGameDataEventBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.WorldConfigurationUpdatedGameDataEvent
// Size: 0x70 (Inherited: 0x08)
struct FWorldConfigurationUpdatedGameDataEvent : FGameDataEventBase {
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct ShooterGame.TeamConfigurationGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FTeamConfigurationGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.PlayerConfigurationGameDataModel
// Size: 0x50 (Inherited: 0x00)
struct FPlayerConfigurationGameDataModel {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.WorldSnapshottedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FWorldSnapshottedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.ObserverSnapshotGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FObserverSnapshotGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.PlayerSnapshotGameDataModel
// Size: 0x158 (Inherited: 0x00)
struct FPlayerSnapshotGameDataModel {
	char pad_0[0x158]; // 0x00(0x158)
};

// ScriptStruct ShooterGame.AbilitySnapshotGameDataModel
// Size: 0x20 (Inherited: 0x00)
struct FAbilitySnapshotGameDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.EquippableItemSnapshotGameDataModel
// Size: 0xd0 (Inherited: 0x00)
struct FEquippableItemSnapshotGameDataModel {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct ShooterGame.MatchEndedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FMatchEndedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.MatchTimeoutstateChangedGameDataEvent
// Size: 0x18 (Inherited: 0x08)
struct FMatchTimeoutstateChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MatchPausedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchPausedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MatchBeganGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FMatchBeganGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.GameRestartedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameRestartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundEndedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FRoundEndedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundStartedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FRoundStartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.ModeConfigGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FModeConfigGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.NewRoundResultGameDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FNewRoundResultGameDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.RoundResultGameDataModel
// Size: 0x18 (Inherited: 0x00)
struct FRoundResultGameDataModel {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.RoundResultsChangedGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FRoundResultsChangedGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.TeamScoreChangedGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FTeamScoreChangedGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.GamePhaseChangedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FGamePhaseChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombStateChangedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombStateChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ScriptStateEffectInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FScriptStateEffectInfoArray {
	struct TArray<struct FScriptStateEffectInfo> Effects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ScriptStateEffectInfo
// Size: 0x38 (Inherited: 0x00)
struct FScriptStateEffectInfo {
	struct FEmbeddedEffectInfo Effect; // 0x00(0x30)
	bool bStopEffectOnStateEnd; // 0x30(0x01)
	bool bStopEffectOnStateInterrupt; // 0x31(0x01)
	bool bOwnerEffectOnly; // 0x32(0x01)
	enum class EStateContext Context; // 0x33(0x01)
	enum class EMovementSync MovementSync; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ShooterGame.MutedWordsListChangedEvent
// Size: 0x40 (Inherited: 0x00)
struct FMutedWordsListChangedEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString MutedWordsList; // 0x10(0x10)
	struct FString Platform; // 0x20(0x10)
	struct FString Affinity; // 0x30(0x10)
};

// ScriptStruct ShooterGame.NavQuerierClassOverride
// Size: 0x20 (Inherited: 0x00)
struct FNavQuerierClassOverride {
	struct FString QuerierClassName; // 0x00(0x10)
	struct TArray<struct FNavigationFilterArea> Overrides; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresClientLatencyEvent
// Size: 0xb0 (Inherited: 0x00)
struct FAresClientLatencyEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FMetric NetworkRTTms; // 0x20(0x14)
	struct FPingBuckets NetworkRTTmsBuckets; // 0x34(0x1c)
	uint64_t TotalPackets; // 0x50(0x08)
	uint64_t PacketsLost; // 0x58(0x08)
	uint64_t PacketsOverSizeSoftLimit; // 0x60(0x08)
	uint64_t PacketsOverSizeHardLimit; // 0x68(0x08)
	struct FString NetworkConnectionType; // 0x70(0x10)
	struct FString SimulatedNetworkDegradationPreset; // 0x80(0x10)
	struct FPacketDeltaTimeBuckets PacketDeltaTimeBuckets; // 0x90(0x1c)
	int32_t NetworkSmoothingLevel; // 0xac(0x04)
};

// ScriptStruct ShooterGame.AresServerBandwidthEvent
// Size: 0x38 (Inherited: 0x00)
struct FAresServerBandwidthEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	uint32_t DurationMs; // 0x20(0x04)
	uint32_t BytesDownloaded; // 0x24(0x04)
	uint32_t BytesUploaded; // 0x28(0x04)
	uint32_t PacketsUploaded; // 0x2c(0x04)
	uint32_t PacketsDownloaded; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ObfuscatedPlayerInformation
// Size: 0x30 (Inherited: 0x00)
struct FObfuscatedPlayerInformation {
	struct FUniqueNetIdRepl SubjectUniqueId; // 0x00(0x28)
	bool bIsAFK; // 0x28(0x01)
	enum class EConnectionStatus ConnectionStatus; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct ShooterGame.ObserverTargetSetGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FObserverTargetSetGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ObserverPawnMove
// Size: 0x1c (Inherited: 0x00)
struct FObserverPawnMove {
	float Timestamp; // 0x00(0x04)
	struct FVector_NetQuantize100 Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct ShooterGame.ObserverViewOptionsNetworkedData
// Size: 0x04 (Inherited: 0x00)
struct FObserverViewOptionsNetworkedData {
	bool bFriendlyOutlinesEnabled; // 0x00(0x01)
	bool bEnemyOutlinesEnabled; // 0x01(0x01)
	bool bSightLinesEnabled; // 0x02(0x01)
	bool bMinimapEnabled; // 0x03(0x01)
};

// ScriptStruct ShooterGame.RoomInfo
// Size: 0x20 (Inherited: 0x00)
struct FRoomInfo {
	struct UAkRoomComponent* RoomComponent; // 0x00(0x08)
	struct TArray<int32_t> ExitPortalIndex; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ShooterGame.PortalInfo
// Size: 0x20 (Inherited: 0x00)
struct FPortalInfo {
	struct AAkAcousticPortal* PortalActor; // 0x00(0x08)
	struct FVector PortalLocation; // 0x08(0x0c)
	int32_t FrontRoomIndex; // 0x14(0x04)
	int32_t BackRoomIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Reordered
// Size: 0x18 (Inherited: 0x00)
struct FOrderedListModelChangeEventData_Reordered {
	int32_t FirstIndex; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventDataRange
// Size: 0x08 (Inherited: 0x00)
struct FOrderedListModelChangeEventDataRange {
	struct FIndexRange Range; // 0x00(0x08)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Replaced
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Replaced : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Removed
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Removed : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Inserted
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Inserted : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Reset
// Size: 0x01 (Inherited: 0x00)
struct FOrderedListModelChangeEventData_Reset {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RTPLogEntry
// Size: 0x50 (Inherited: 0x00)
struct FRTPLogEntry {
	struct FString Message_str; // 0x00(0x10)
	struct FString GameId_str; // 0x10(0x10)
	int64_t GameStartTime_int; // 0x20(0x08)
	double FirstTime; // 0x28(0x08)
	double LastTime; // 0x30(0x08)
	uint32_t Count; // 0x38(0x04)
	uint32_t Verbosity; // 0x3c(0x04)
	struct FName Category_str; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.PagedListLocation
// Size: 0x08 (Inherited: 0x00)
struct FPagedListLocation {
	int32_t PageNumber; // 0x00(0x04)
	int32_t IndexOnPage; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ParallelAnimationConductorNode_InternalChildData
// Size: 0x18 (Inherited: 0x00)
struct FParallelAnimationConductorNode_InternalChildData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x08(0x10)
};

// ScriptStruct ShooterGame.QueueIneligiblePlayers
// Size: 0x10 (Inherited: 0x00)
struct FQueueIneligiblePlayers {
	struct TArray<struct FString> Players; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinMatchRequest
// Size: 0x60 (Inherited: 0x00)
struct FJoinMatchRequest {
	struct FString TeamID; // 0x00(0x10)
	struct TMap<struct FString, struct FString> subjectToCharacterID; // 0x10(0x50)
};

// ScriptStruct ShooterGame.PartyInviteRequest
// Size: 0x10 (Inherited: 0x00)
struct FPartyInviteRequest {
	struct TArray<struct FString> Subjects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MakeRosterPartyRequest
// Size: 0x20 (Inherited: 0x00)
struct FMakeRosterPartyRequest {
	struct FString RosterID; // 0x00(0x10)
	struct FString QueueID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SoloExperienceRequest
// Size: 0x18 (Inherited: 0x00)
struct FSoloExperienceRequest {
	enum class ESoloExperienceType GameType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Module; // 0x08(0x10)
};

// ScriptStruct ShooterGame.StartCustomGameRequest
// Size: 0x50 (Inherited: 0x00)
struct FStartCustomGameRequest {
	struct TMap<struct FString, struct FString> GameRules; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ChangeQueueRequest
// Size: 0x10 (Inherited: 0x00)
struct FChangeQueueRequest {
	struct FString QueueID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetPreferredGamePodsRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetPreferredGamePodsRequest {
	struct TArray<struct FString> GamePodIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetLookingForMoreRequest
// Size: 0x01 (Inherited: 0x00)
struct FSetLookingForMoreRequest {
	bool LookingForMore; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SetAccessibilityRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetAccessibilityRequest {
	struct FString Accessibility; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PartyMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FPartyMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SetPlayerBroadcastHUDStatusRequest
// Size: 0x18 (Inherited: 0x00)
struct FSetPlayerBroadcastHUDStatusRequest {
	struct FString PlayerToSetBroadcastHUDStatus; // 0x00(0x10)
	bool BroadcastHUDStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.SetPlayerModeratorStatusRequest
// Size: 0x18 (Inherited: 0x00)
struct FSetPlayerModeratorStatusRequest {
	struct FString PlayerToSetModeratorStatus; // 0x00(0x10)
	bool ModeratorStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.ChangeTeamRequestBody
// Size: 0x10 (Inherited: 0x00)
struct FChangeTeamRequestBody {
	struct FString PlayerToPutOnTeam; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinRequestDTO
// Size: 0x20 (Inherited: 0x00)
struct FJoinRequestDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString JoinType; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CustomGameCollection
// Size: 0x10 (Inherited: 0x00)
struct FCustomGameCollection {
	struct TArray<struct FCustomGameSummary> Games; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CustomGameSummary
// Size: 0x68 (Inherited: 0x00)
struct FCustomGameSummary {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString Map; // 0x30(0x10)
	struct FString Owner; // 0x40(0x10)
	int32_t Count; // 0x50(0x04)
	int32_t Limit; // 0x54(0x04)
	struct FString ClientVersion; // 0x58(0x10)
};

// ScriptStruct ShooterGame.AresParty
// Size: 0x290 (Inherited: 0x00)
struct FAresParty {
	struct FString ID; // 0x00(0x10)
	struct FString MUCName; // 0x10(0x10)
	struct FString VoiceRoomID; // 0x20(0x10)
	struct TArray<struct FAresPartyMember> Members; // 0x30(0x10)
	struct FCustomGameData CustomGameData; // 0x40(0x108)
	struct FMatchmakingData MatchmakingData; // 0x148(0x38)
	struct FTournamentData TournamentData; // 0x180(0x20)
	struct FString ClientVersion; // 0x1a0(0x10)
	int64_t Version; // 0x1b0(0x08)
	bool LookingForMore; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FCheatData CheatData; // 0x1c0(0x18)
	struct TArray<struct FString> EligibleQueues; // 0x1d8(0x10)
	struct TArray<struct FPartyXPBonus> XPBonuses; // 0x1e8(0x10)
	struct FString State; // 0x1f8(0x10)
	struct FString PreviousState; // 0x208(0x10)
	enum class EAresPartyAccessibility Accessibility; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct FString StateTransitionReason; // 0x220(0x10)
	struct TArray<struct FPartyInvite> Invites; // 0x230(0x10)
	struct TArray<struct FPartyRequest> Requests; // 0x240(0x10)
	struct FDateTime QueueEntryTime; // 0x250(0x08)
	struct FAresPartyErrorNotification ErrorNotification; // 0x258(0x20)
	int64_t RestrictedSeconds; // 0x278(0x08)
	struct TArray<struct FQueueIneligibility> QueueIneligibilities; // 0x280(0x10)
};

// ScriptStruct ShooterGame.QueueIneligibility
// Size: 0x30 (Inherited: 0x00)
struct FQueueIneligibility {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FString> QueueIDs; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
};

// ScriptStruct ShooterGame.AresPartyErrorNotification
// Size: 0x20 (Inherited: 0x00)
struct FAresPartyErrorNotification {
	struct FString ErrorType; // 0x00(0x10)
	struct TArray<struct FString> ErroredPlayers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PartyRequest
// Size: 0x58 (Inherited: 0x00)
struct FPartyRequest {
	struct FString ID; // 0x00(0x10)
	struct FString PartyID; // 0x10(0x10)
	struct TArray<struct FString> Subjects; // 0x20(0x10)
	struct FString RequestedBySubject; // 0x30(0x10)
	struct FDateTime CreatedAt; // 0x40(0x08)
	int32_t ExpiresIn; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime ExpiresAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PartyInvite
// Size: 0x58 (Inherited: 0x00)
struct FPartyInvite {
	struct FString ID; // 0x00(0x10)
	struct FString PartyID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString InvitedBySubject; // 0x30(0x10)
	struct FDateTime CreatedAt; // 0x40(0x08)
	int32_t ExpiresIn; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime ExpiresAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PartyXPBonus
// Size: 0x18 (Inherited: 0x00)
struct FPartyXPBonus {
	struct FString ID; // 0x00(0x10)
	bool Applied; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CheatData
// Size: 0x18 (Inherited: 0x00)
struct FCheatData {
	struct FString GamePodOverride; // 0x00(0x10)
	bool ForcePostGameProcessing; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.MatchmakingData
// Size: 0x38 (Inherited: 0x00)
struct FMatchmakingData {
	struct FString QueueID; // 0x00(0x10)
	struct TArray<struct FQueueIneligibleMemberPair> QueueIneligibleMemberPairs; // 0x10(0x10)
	struct TArray<struct FString> PreferredGamePods; // 0x20(0x10)
	float SkillDisparityRRPenalty; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.QueueIneligibleMemberPair
// Size: 0x20 (Inherited: 0x00)
struct FQueueIneligibleMemberPair {
	struct FString SubjectOne; // 0x00(0x10)
	struct FString SubjectTwo; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CustomGameData
// Size: 0x108 (Inherited: 0x00)
struct FCustomGameData {
	struct FCustomGameSettings Settings; // 0x00(0xa8)
	struct FCustomGameTeams Membership; // 0xa8(0x50)
	int32_t MaxPartySize; // 0xf8(0x04)
	bool AutobalanceEnabled; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	int32_t AutobalanceMinPlayers; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct ShooterGame.CustomGameTeams
// Size: 0x50 (Inherited: 0x00)
struct FCustomGameTeams {
	struct TArray<struct FCustomGamePlayer> TeamOne; // 0x00(0x10)
	struct TArray<struct FCustomGamePlayer> TeamTwo; // 0x10(0x10)
	struct TArray<struct FCustomGamePlayer> TeamSpectate; // 0x20(0x10)
	struct TArray<struct FCustomGamePlayer> TeamOneCoaches; // 0x30(0x10)
	struct TArray<struct FCustomGamePlayer> TeamTwoCoaches; // 0x40(0x10)
};

// ScriptStruct ShooterGame.CustomGamePlayer
// Size: 0x10 (Inherited: 0x00)
struct FCustomGamePlayer {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CustomGameSettings
// Size: 0xa8 (Inherited: 0x00)
struct FCustomGameSettings {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	struct FString Mode; // 0x30(0x10)
	struct FString GamePod; // 0x40(0x10)
	bool UseBots; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FString, struct FString> GameRules; // 0x58(0x50)
};

// ScriptStruct ShooterGame.AresPartyMember
// Size: 0x128 (Inherited: 0x00)
struct FAresPartyMember {
	struct FString Subject; // 0x00(0x10)
	int32_t CompetitiveTier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FPlayerIdentity PlayerIdentity; // 0x18(0x48)
	struct FPartyMemberSeasonalInfo SeasonalInfo; // 0x60(0x30)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x90(0x78)
	bool IsOwner; // 0x108(0x01)
	bool IsReady; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	int32_t QueueEligibleRemainingAccountLevels; // 0x10c(0x04)
	struct TArray<struct FPingInfo> Pings; // 0x110(0x10)
	bool IsModerator; // 0x120(0x01)
	bool UseBroadcastHUD; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// ScriptStruct ShooterGame.PartyMemberReadyStatus
// Size: 0x01 (Inherited: 0x00)
struct FPartyMemberReadyStatus {
	bool Ready; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PartyPlayer
// Size: 0x58 (Inherited: 0x00)
struct FPartyPlayer {
	int32_t Version; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Subject; // 0x08(0x10)
	struct FString SessionClientID; // 0x18(0x10)
	struct FString CurrentPartyID; // 0x28(0x10)
	struct TArray<struct FPartyInvite> Invites; // 0x38(0x10)
	struct TArray<struct FPartyRequest> Requests; // 0x48(0x10)
};

// ScriptStruct ShooterGame.CustomGameConfigs
// Size: 0x90 (Inherited: 0x00)
struct FCustomGameConfigs {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> EnabledMaps; // 0x08(0x10)
	struct TArray<struct FString> EnabledModes; // 0x18(0x10)
	struct TArray<struct FQueueConfig> Queues; // 0x28(0x10)
	struct TMap<struct FString, struct FPingServiceInfo> GamePodPingServiceInfo; // 0x38(0x50)
	struct FDateTime QueueConfigsLastUpdated; // 0x88(0x08)
};

// ScriptStruct ShooterGame.PingServiceInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingServiceInfo {
	struct TArray<struct FString> PingProxyAddresses; // 0x00(0x10)
	uint32_t SecurityHash; // 0x10(0x04)
	uint32_t ObfuscatedIP; // 0x14(0x04)
};

// ScriptStruct ShooterGame.QueueConfig
// Size: 0x78 (Inherited: 0x00)
struct FQueueConfig {
	struct FString QueueID; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t TeamSize; // 0x14(0x04)
	int32_t HighSkillTier; // 0x18(0x04)
	bool AllowFullPartyBypassSkillRestrictions; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString Mode; // 0x20(0x10)
	bool IsRanked; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t MinimumAccountLevelRequired; // 0x34(0x04)
	int32_t PartyMaxCompetitiveTierRange; // 0x38(0x04)
	int32_t FullPartyMaxCompetitiveTierRange; // 0x3c(0x04)
	int32_t MaxPartySize; // 0x40(0x04)
	int32_t MinPartySize; // 0x44(0x04)
	struct TArray<int32_t> InvalidPartySizes; // 0x48(0x10)
	int32_t MaxPartySizeHighSkill; // 0x58(0x04)
	bool IsTournament; // 0x5c(0x01)
	bool RequireRoster; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	int64_t TimeUntilNextScheduleChangeSeconds; // 0x60(0x08)
	struct TArray<struct FGuid> DisabledContent; // 0x68(0x10)
};

// ScriptStruct ShooterGame.WallSpanList
// Size: 0xa8 (Inherited: 0x00)
struct FWallSpanList {
	struct TArray<struct FWallSpanInfo> Spans; // 0x00(0x10)
	bool bLastPointInWall; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FHitResult EntranceToLastPoint; // 0x14(0x94)
};

// ScriptStruct ShooterGame.WallSpanInfo
// Size: 0x128 (Inherited: 0x00)
struct FWallSpanInfo {
	struct FHitResult Entrance; // 0x00(0x94)
	struct FHitResult Exit; // 0x94(0x94)
};

// ScriptStruct ShooterGame.Equip
// Size: 0x18 (Inherited: 0x00)
struct FEquip {
	int32_t AlternateLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FSkinParam> Params; // 0x08(0x10)
};

// ScriptStruct ShooterGame.SkinParam
// Size: 0x20 (Inherited: 0x00)
struct FSkinParam {
	struct FName ParamName; // 0x00(0x0c)
	enum class EAresParamType ParamType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString ParamValue; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerMapping
// Size: 0x68 (Inherited: 0x00)
struct FPlayerMapping {
	struct TArray<struct FEquippableMapping> EquippableMappings; // 0x00(0x10)
	struct TArray<struct FSprayMapping> SprayMappings; // 0x10(0x10)
	struct FLoadoutIdentityMapping IdentityMapping; // 0x20(0x34)
	struct FGuid Subject; // 0x54(0x10)
	bool bIncognito; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct ShooterGame.LoadoutIdentityMapping
// Size: 0x34 (Inherited: 0x00)
struct FLoadoutIdentityMapping {
	struct FGuid PlayerCardID; // 0x00(0x10)
	struct FGuid PlayerTitleId; // 0x10(0x10)
	struct FGuid PreferredLevelBorderID; // 0x20(0x10)
	bool bHideAccountLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct ShooterGame.SprayMapping
// Size: 0x18 (Inherited: 0x00)
struct FSprayMapping {
	struct USprayEquipSlotDataAsset* SprayEquipSlotDataAsset; // 0x00(0x08)
	struct USprayDataAsset* SprayDataAsset; // 0x08(0x08)
	struct USprayLevelDataAsset* SprayLevelDataAsset; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EquippableMapping
// Size: 0x50 (Inherited: 0x00)
struct FEquippableMapping {
	struct UEquippableDataAsset* EquippableDataAsset; // 0x00(0x08)
	struct UEquippableSkinDataAsset* EquippableSkinDataAsset; // 0x08(0x08)
	struct UEquippableSkinLevelDataAsset* EquippableSkinLevelDataAsset; // 0x10(0x08)
	struct UEquippableSkinChromaDataAsset* EquippableSkinChromaDataAsset; // 0x18(0x08)
	struct UEquippableCharmDataAsset* EquippableCharmDataAsset; // 0x20(0x08)
	struct UEquippableCharmLevelDataAsset* EquippableCharmLevelDataAsset; // 0x28(0x08)
	struct FGuid EquippableCharmInstance; // 0x30(0x10)
	struct TArray<struct FAttachmentMappingV2> EquippableAttachments; // 0x40(0x10)
};

// ScriptStruct ShooterGame.AttachmentMappingV2
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentMappingV2 {
	struct USocketDataAsset* SocketAsset; // 0x00(0x08)
	struct UEquippableAttachmentDataAsset* AttachmentAsset; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerLoadout
// Size: 0x70 (Inherited: 0x00)
struct FPlayerLoadout {
	struct FGuid Subject; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FGunLoadout> Guns; // 0x18(0x10)
	struct TArray<struct FSprayLoadout> Sprays; // 0x28(0x10)
	bool Incognito; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FLoadoutIdentity Identity; // 0x3c(0x34)
};

// ScriptStruct ShooterGame.LoadoutIdentity
// Size: 0x34 (Inherited: 0x00)
struct FLoadoutIdentity {
	struct FGuid PlayerCardID; // 0x00(0x10)
	struct FGuid PlayerTitleId; // 0x10(0x10)
	struct FGuid PreferredLevelBorderID; // 0x20(0x10)
	bool HideAccountLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct ShooterGame.SprayLoadout
// Size: 0x30 (Inherited: 0x00)
struct FSprayLoadout {
	struct FGuid EquipSlotID; // 0x00(0x10)
	struct FGuid SprayID; // 0x10(0x10)
	struct FGuid SprayLevelId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.GunLoadout
// Size: 0x80 (Inherited: 0x00)
struct FGunLoadout {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid SkinID; // 0x10(0x10)
	struct FGuid SkinLevelID; // 0x20(0x10)
	struct FGuid ChromaID; // 0x30(0x10)
	struct FGuid CharmInstanceID; // 0x40(0x10)
	struct FGuid CharmID; // 0x50(0x10)
	struct FGuid CharmLevelID; // 0x60(0x10)
	struct TArray<struct FAttachmentLoadout> Attachments; // 0x70(0x10)
};

// ScriptStruct ShooterGame.AttachmentLoadout
// Size: 0x30 (Inherited: 0x00)
struct FAttachmentLoadout {
	struct FGuid SocketID; // 0x00(0x10)
	struct FGuid AttachmentId; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PingRequestContainer
// Size: 0x10 (Inherited: 0x00)
struct FPingRequestContainer {
	struct TArray<struct UPingRequest*> Requests; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PingableEndpoint
// Size: 0x90 (Inherited: 0x00)
struct FPingableEndpoint {
	enum class EEndpointType Type; // 0x00(0x01)
	enum class EEndpointState State; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FPingRecord Stats; // 0x08(0x18)
	struct FAddressablePingServiceInfo ServiceInfo; // 0x20(0x28)
	struct FLatencyDataPayload LatencyPayload; // 0x48(0x48)
};

// ScriptStruct ShooterGame.AddressablePingServiceInfo
// Size: 0x28 (Inherited: 0x18)
struct FAddressablePingServiceInfo : FPingServiceInfo {
	struct FString Address; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PingRecord
// Size: 0x18 (Inherited: 0x00)
struct FPingRecord {
	char pad_0[0x10]; // 0x00(0x10)
	uint32_t ProcessedCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.IgnoreBody
// Size: 0x01 (Inherited: 0x00)
struct FIgnoreBody {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EmptyBody
// Size: 0x01 (Inherited: 0x00)
struct FEmptyBody {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerAffinityToken
// Size: 0x10 (Inherited: 0x00)
struct FPlayerAffinityToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlatformToken
// Size: 0x40 (Inherited: 0x00)
struct FPlatformToken {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformOS; // 0x10(0x10)
	struct FString PlatformOSVersion; // 0x20(0x10)
	struct FString PlatformChipset; // 0x30(0x10)
};

// ScriptStruct ShooterGame.EntitlementsToken
// Size: 0x20 (Inherited: 0x00)
struct FEntitlementsToken {
	struct FString Token; // 0x00(0x10)
	struct TArray<struct FString> Entitlements; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RSOToken
// Size: 0x18 (Inherited: 0x00)
struct FRSOToken {
	struct FString AccessToken; // 0x00(0x10)
	struct FDateTime Expiration; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PlatformErrorEvent
// Size: 0x48 (Inherited: 0x00)
struct FPlatformErrorEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString BuildVersion; // 0x10(0x10)
	struct FString ErrorComponent; // 0x20(0x10)
	int32_t ErrorCode; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ErrorDescription; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PlatformInitializerCycleEntry
// Size: 0x10 (Inherited: 0x00)
struct FPlatformInitializerCycleEntry {
	struct UInitSystem* System; // 0x00(0x08)
	struct UInitSystem* RequiredBy; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlatformInitializerEntry
// Size: 0x20 (Inherited: 0x00)
struct FPlatformInitializerEntry {
	struct UInitSystem* System; // 0x00(0x08)
	enum class EPlatformInitializerSystemImportance Importance; // 0x08(0x01)
	enum class EPlatformInitializerSystemState State; // 0x09(0x01)
	enum class EPlatformInitializerTimeoutOptions TimeoutOptions; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FDateTime InitStartTime; // 0x10(0x08)
	bool bTimedOut; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.PlatformPlayerSubject
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPlayerSubject {
	struct FString String; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlayerAlias
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAlias {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerPerfStat
// Size: 0x24 (Inherited: 0x00)
struct FPlayerPerfStat {
	float CurrentTickMax; // 0x00(0x04)
	float CurrentTickMin; // 0x04(0x04)
	float CurrentTickAverage; // 0x08(0x04)
	float CurrentTickSum; // 0x0c(0x04)
	float CurrentTickExpSmooth; // 0x10(0x04)
	float WorldDurationSum; // 0x14(0x04)
	float SlidingWindowSum; // 0x18(0x04)
	float SlidingWindowDuration; // 0x1c(0x04)
	uint32_t SlidingWindowSampleCount; // 0x20(0x04)
};

// ScriptStruct ShooterGame.GraphMetricEntry
// Size: 0x18 (Inherited: 0x00)
struct FGraphMetricEntry {
	enum class EPlayerPerfStatField MetricStat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor MetricColor; // 0x04(0x10)
	enum class EGraphMetricTextPlacement MetricTextPlacement; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.TextMetricEntry
// Size: 0x14 (Inherited: 0x00)
struct FTextMetricEntry {
	enum class EPlayerPerfStatField MetricStat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor TextColor; // 0x04(0x10)
};

// ScriptStruct ShooterGame.SurveyResponseDTO
// Size: 0x28 (Inherited: 0x00)
struct FSurveyResponseDTO {
	struct FDateTime CreatedAt; // 0x00(0x08)
	struct TArray<struct FQuestionResponseDTO> questionResponses; // 0x08(0x10)
	struct TArray<struct FResponseActionDTO> actions; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ResponseActionDTO
// Size: 0x18 (Inherited: 0x00)
struct FResponseActionDTO {
	struct FString Action; // 0x00(0x10)
	struct FDateTime Timestamp; // 0x10(0x08)
};

// ScriptStruct ShooterGame.QuestionResponseDTO
// Size: 0x58 (Inherited: 0x00)
struct FQuestionResponseDTO {
	int32_t questionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, struct FString> responseData; // 0x08(0x50)
};

// ScriptStruct ShooterGame.SurveyDTO
// Size: 0x48 (Inherited: 0x00)
struct FSurveyDTO {
	bool IsSurveyAvailable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID; // 0x04(0x04)
	struct FString Title; // 0x08(0x10)
	struct FString Caption; // 0x18(0x10)
	struct FString Type; // 0x28(0x10)
	struct FSurveyQuestionContainerDTO Data; // 0x38(0x10)
};

// ScriptStruct ShooterGame.SurveyQuestionContainerDTO
// Size: 0x10 (Inherited: 0x00)
struct FSurveyQuestionContainerDTO {
	struct TArray<struct FSurveyQuestionDTO> Questions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SurveyQuestionDTO
// Size: 0x28 (Inherited: 0x00)
struct FSurveyQuestionDTO {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Type; // 0x08(0x10)
	struct FString Question; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PlayerFeedbackPayload
// Size: 0xa8 (Inherited: 0x00)
struct FPlayerFeedbackPayload {
	struct FString AgentPlayed; // 0x00(0x10)
	struct TArray<struct FString> AgentsPlayedAgainst; // 0x10(0x10)
	struct TArray<struct FString> AgentsPlayedWith; // 0x20(0x10)
	struct FString QueueID; // 0x30(0x10)
	struct FString MapID; // 0x40(0x10)
	float Mmr; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Platform; // 0x58(0x10)
	struct FString Puuid; // 0x68(0x10)
	struct FString PurchaseSource; // 0x78(0x10)
	struct TArray<struct FString> PurchasedItems; // 0x88(0x10)
	struct FString Rank; // 0x98(0x10)
};

// ScriptStruct ShooterGame.PlayerFeedbackMetadataConstants
// Size: 0x01 (Inherited: 0x00)
struct FPlayerFeedbackMetadataConstants {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerShotTakenGameDataEvent
// Size: 0x58 (Inherited: 0x08)
struct FPlayerShotTakenGameDataEvent : FGameDataEventBase {
	char pad_8[0x50]; // 0x08(0x50)
};

// ScriptStruct ShooterGame.DamageGameDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FDamageGameDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.PlayerLoadoutChangedGameDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FPlayerLoadoutChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.PlayerRecoveredGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerRecoveredGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerDownedGameDataEvent
// Size: 0x28 (Inherited: 0x08)
struct FPlayerDownedGameDataEvent : FGameDataEventBase {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.PlayerResurrectedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerResurrectedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerKilledGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FPlayerKilledGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.PlayerSpawnedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerSpawnedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerScoreDebugEntry
// Size: 0x10 (Inherited: 0x00)
struct FPlayerScoreDebugEntry {
	int32_t Delta; // 0x00(0x04)
	struct FName Reason; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.PlayerSettingChangedEvent
// Size: 0x30 (Inherited: 0x00)
struct FPlayerSettingChangedEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString SettingName; // 0x10(0x10)
	struct FString Version; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PlayerSettingStringChangedEvent
// Size: 0x50 (Inherited: 0x30)
struct FPlayerSettingStringChangedEvent : FPlayerSettingChangedEvent {
	struct FString OldValue; // 0x30(0x10)
	struct FString Value; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PlayerSettingBoolChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingBoolChangedEvent : FPlayerSettingChangedEvent {
	bool OldValue; // 0x30(0x01)
	bool Value; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct ShooterGame.PlayerSettingFloatChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingFloatChangedEvent : FPlayerSettingChangedEvent {
	float OldValue; // 0x30(0x04)
	float Value; // 0x34(0x04)
};

// ScriptStruct ShooterGame.PlayerSettingIntChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingIntChangedEvent : FPlayerSettingChangedEvent {
	int32_t OldValue; // 0x30(0x04)
	int32_t Value; // 0x34(0x04)
};

// ScriptStruct ShooterGame.DataArrivedDebugEntry
// Size: 0x08 (Inherited: 0x00)
struct FDataArrivedDebugEntry {
	struct FTimeStampIndex TimelineTimestamp; // 0x00(0x04)
	float ArrivalTimestamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.CalculatedProjectileStep
// Size: 0x1c (Inherited: 0x00)
struct FCalculatedProjectileStep {
	float Timestamp; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector Velocity; // 0x10(0x0c)
};

// ScriptStruct ShooterGame.PregameMatchLoadouts
// Size: 0x18 (Inherited: 0x00)
struct FPregameMatchLoadouts {
	struct TArray<struct FMegapacketLoadout> Loadouts; // 0x00(0x10)
	bool LoadoutsValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.PregameMatch
// Size: 0x260 (Inherited: 0x00)
struct FPregameMatch {
	struct FString ID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString PregameState; // 0x18(0x10)
	struct TArray<struct FPregameTeam> Teams; // 0x28(0x10)
	struct TArray<struct FString> ObserverSubjects; // 0x38(0x10)
	struct TArray<struct FPregameMatchCoach> MatchCoaches; // 0x48(0x10)
	int32_t EnemyTeamLockCount; // 0x58(0x04)
	int32_t EnemyTeamSize; // 0x5c(0x04)
	struct FDateTime LastUpdated; // 0x60(0x08)
	struct FString MapID; // 0x68(0x10)
	struct TArray<struct FGuid> MapSelectPool; // 0x78(0x10)
	struct TArray<struct FGuid> BannedMapIDs; // 0x88(0x10)
	struct TMap<struct FString, struct FString> CastedVotes; // 0x98(0x50)
	struct TArray<struct FPregameStep> MapSelectSteps; // 0xe8(0x10)
	int32_t MapSelectStep; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString Team1; // 0x100(0x10)
	struct FString Mode; // 0x110(0x10)
	struct FString VoiceSessionID; // 0x120(0x10)
	struct FString MUCName; // 0x130(0x10)
	struct FString QueueID; // 0x140(0x10)
	struct FString GamePodID; // 0x150(0x10)
	struct FString ProvisioningFlowID; // 0x160(0x10)
	enum class EProvisioningFlowID ProvisioningFlowEnum; // 0x170(0x01)
	bool IsRanked; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	int64_t PhaseTimeRemainingNS; // 0x178(0x08)
	int64_t StepTimeRemainingNS; // 0x180(0x08)
	bool AltModesFlagADA; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FTournamentMetadata TournamentMetadata; // 0x190(0x80)
	struct FTournamentRosterMetadata RosterMetadata; // 0x210(0x50)
};

// ScriptStruct ShooterGame.PregameMatchCoach
// Size: 0x20 (Inherited: 0x00)
struct FPregameMatchCoach {
	struct FString Subject; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PregameTeam
// Size: 0x20 (Inherited: 0x00)
struct FPregameTeam {
	struct TArray<struct FPregameMatchPlayer> Players; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PregameMatchPlayer
// Size: 0x110 (Inherited: 0x00)
struct FPregameMatchPlayer {
	struct FString Subject; // 0x00(0x10)
	struct FString CharacterID; // 0x10(0x10)
	struct FString CharacterSelectionState; // 0x20(0x10)
	struct FString PregamePlayerState; // 0x30(0x10)
	int32_t CompetitiveTier; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FPlayerIdentity PlayerIdentity; // 0x48(0x48)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x90(0x78)
	bool IsCaptain; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct ShooterGame.PregameCastVoteInternal
// Size: 0x30 (Inherited: 0x00)
struct FPregameCastVoteInternal {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.PregamePlayer
// Size: 0x28 (Inherited: 0x00)
struct FPregamePlayer {
	struct FString Subject; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString MatchID; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PregameMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FPregameMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierEventDisplay
// Size: 0xa8 (Inherited: 0x00)
struct FPremierEventDisplay {
	struct FGuid UUID; // 0x00(0x10)
	enum class EPremierEventType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftClassPtr<UObject> Icon; // 0x48(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> MapAssets; // 0x78(0x10)
	struct TArray<struct FPremierEventScheduleDateTimes> ScheduleDateTimes; // 0x88(0x10)
	struct FDateTime EarliestStartTime; // 0x98(0x08)
	struct FDateTime LatestEndTime; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.PremierEventScheduleDateTimes
// Size: 0x10 (Inherited: 0x00)
struct FPremierEventScheduleDateTimes {
	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PremierEvent
// Size: 0xe0 (Inherited: 0x00)
struct FPremierEvent {
	struct FGuid UUID; // 0x00(0x10)
	int32_t WeekNumber; // 0x10(0x04)
	enum class EPremierEventDayOfWeek DayOfWeek; // 0x14(0x01)
	enum class EPremierEventType Type; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftClassPtr<UObject> Icon; // 0x48(0x30)
	struct TSoftClassPtr<UObject> Schedule; // 0x78(0x30)
	enum class EPremierEventMapSelectionStrategy MapSelectionStrategy; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TSoftClassPtr<UObject> MapPool; // 0xb0(0x30)
};

// ScriptStruct ShooterGame.PremierEventDivisionSchedule
// Size: 0x2c (Inherited: 0x00)
struct FPremierEventDivisionSchedule {
	int32_t Division; // 0x00(0x04)
	struct FTimecode StartTime; // 0x04(0x14)
	struct FTimecode Duration; // 0x18(0x14)
};

// ScriptStruct ShooterGame.PremierDivisionData
// Size: 0x58 (Inherited: 0x08)
struct FPremierDivisionData : FTableRowBase {
	int32_t Division; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DivisionName; // 0x10(0x18)
	struct FLinearColor PrimaryColor; // 0x28(0x10)
	struct FLinearColor SecondaryColor; // 0x38(0x10)
	struct UTexture* IconTextureSmall; // 0x48(0x08)
	struct UTexture* IconTextureLarge; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistory
// Size: 0x20 (Inherited: 0x00)
struct FPremierRosterMatchHistory {
	struct TArray<struct FPremierRosterMatchHistoryMatchEntry> LeagueMatchHistory; // 0x00(0x10)
	struct TArray<struct FPremierRosterMatchHistoryTournamentEntry> TournamentMatchHistory; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryTournamentEntry
// Size: 0x88 (Inherited: 0x00)
struct FPremierRosterMatchHistoryTournamentEntry {
	struct FString TournamentID; // 0x00(0x10)
	uint32_t FinalPlacement; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t FinalPlacementLeaguePointsBonus; // 0x18(0x08)
	int64_t LeaguePointsBefore; // 0x20(0x08)
	int64_t LeaguePointsAfter; // 0x28(0x08)
	int64_t LeaguePointsEarned; // 0x30(0x08)
	struct TMap<struct FString, int64_t> MatchEntries; // 0x38(0x50)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryMatchEntry
// Size: 0x28 (Inherited: 0x00)
struct FPremierRosterMatchHistoryMatchEntry {
	struct FString MatchID; // 0x00(0x10)
	int64_t LeaguePointsBefore; // 0x10(0x08)
	int64_t LeaguePointsAfter; // 0x18(0x08)
	int64_t LeaguePointsEarned; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PremierRoster
// Size: 0x30 (Inherited: 0x00)
struct FPremierRoster {
	struct FString ID; // 0x00(0x10)
	int32_t LeaguePoints; // 0x10(0x04)
	int32_t MaxLeaguePoints; // 0x14(0x04)
	int32_t Division; // 0x18(0x04)
	int32_t LeaguePointsBonusMatchesRemaining; // 0x1c(0x04)
	int32_t LeaguePointsBonusMatchesTotal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t Version; // 0x28(0x08)
};

// ScriptStruct ShooterGame.PremierSeasonsDTO
// Size: 0x10 (Inherited: 0x00)
struct FPremierSeasonsDTO {
	struct TArray<struct FPremierSeasonDTO> PremierSeasons; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierSeasonDTO
// Size: 0x30 (Inherited: 0x00)
struct FPremierSeasonDTO {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid CompetitiveSeasonID; // 0x10(0x10)
	struct TArray<struct FPremierEventDTO> Events; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PremierEventDTO
// Size: 0x50 (Inherited: 0x00)
struct FPremierEventDTO {
	struct FGuid ID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct TArray<struct FPremierEventDivisionScheduleDTO> SchedulePerDivision; // 0x20(0x10)
	struct FString MapSelectionStrategy; // 0x30(0x10)
	struct TArray<struct FGuid> MapPoolMapIds; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PremierEventDivisionScheduleDTO
// Size: 0x30 (Inherited: 0x00)
struct FPremierEventDivisionScheduleDTO {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime StartDateTime; // 0x08(0x08)
	struct FDateTime EndDateTime; // 0x10(0x08)
	struct FString QueueID; // 0x18(0x10)
	int32_t RequiredMaxLeaguePoints; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.PresenceResourceMap
// Size: 0x50 (Inherited: 0x00)
struct FPresenceResourceMap {
	struct TMap<struct FString, struct FPresenceProductMap> Map; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PresenceProductMap
// Size: 0x50 (Inherited: 0x00)
struct FPresenceProductMap {
	struct TMap<struct FString, struct FAresPresenceInfo> Map; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresPresenceInfo
// Size: 0x258 (Inherited: 0x00)
struct FAresPresenceInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Pid; // 0x10(0x10)
	struct FString Resource; // 0x20(0x10)
	struct FString Subject; // 0x30(0x10)
	struct FString product; // 0x40(0x10)
	enum class EChatPresenceProduct ProductEnum; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString Patchline; // 0x58(0x10)
	struct FString Platform; // 0x68(0x10)
	struct FString State; // 0x78(0x10)
	enum class EChatPresenceState StateEnum; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	int64_t Time; // 0x90(0x08)
	struct FString Msg; // 0x98(0x10)
	struct FString Actor; // 0xa8(0x10)
	struct FString Details; // 0xb8(0x10)
	struct FString Location; // 0xc8(0x10)
	struct FString Private; // 0xd8(0x10)
	struct FAresPresenceData Data; // 0xe8(0x170)
};

// ScriptStruct ShooterGame.AresPresenceData
// Size: 0x170 (Inherited: 0x00)
struct FAresPresenceData {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SessionLoopState; // 0x08(0x10)
	struct FString PartyOwnerSessionLoopState; // 0x18(0x10)
	struct FText CustomGameName; // 0x28(0x18)
	struct FString CustomGameTeam; // 0x40(0x10)
	struct FString PartyOwnerMatchMap; // 0x50(0x10)
	struct FString PartyOwnerMatchCurrentTeam; // 0x60(0x10)
	int32_t PartyOwnerMatchScoreAllyTeam; // 0x70(0x04)
	int32_t PartyOwnerMatchScoreEnemyTeam; // 0x74(0x04)
	enum class EProvisioningFlowID PartyOwnerProvisioningFlow; // 0x78(0x01)
	enum class EProvisioningFlowID ProvisioningFlow; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FString MatchMap; // 0x80(0x10)
	struct FString PartyID; // 0x90(0x10)
	bool IsPartyOwner; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString PartyState; // 0xa8(0x10)
	struct FString PartyAccessibility; // 0xb8(0x10)
	int32_t MaxPartySize; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString QueueID; // 0xd0(0x10)
	bool PartyLFM; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FString PartyClientVersion; // 0xe8(0x10)
	int32_t PartySize; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString TournamentID; // 0x100(0x10)
	struct FString RosterID; // 0x110(0x10)
	int64_t PartyVersion; // 0x120(0x08)
	struct FDateTime QueueEntryTime; // 0x128(0x08)
	struct FString PlayerCardID; // 0x130(0x10)
	struct FString PlayerTitleId; // 0x140(0x10)
	struct FString PreferredLevelBorderID; // 0x150(0x10)
	int32_t AccountLevel; // 0x160(0x04)
	int32_t CompetitiveTier; // 0x164(0x04)
	int32_t LeaderboardPosition; // 0x168(0x04)
	bool IsIdle; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
};

// ScriptStruct ShooterGame.ChatPresenceDeleteRequest
// Size: 0x10 (Inherited: 0x00)
struct FChatPresenceDeleteRequest {
	struct FString product; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ChatPresenceUpdateRequest
// Size: 0x1d8 (Inherited: 0x00)
struct FChatPresenceUpdateRequest {
	struct FString State; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
	struct FAresPresenceDataWrapper Private; // 0x20(0x170)
	struct FChatPresenceSharedData Shared; // 0x190(0x48)
};

// ScriptStruct ShooterGame.ChatPresenceSharedData
// Size: 0x48 (Inherited: 0x00)
struct FChatPresenceSharedData {
	struct FString Actor; // 0x00(0x10)
	struct FString Details; // 0x10(0x10)
	struct FString Location; // 0x20(0x10)
	struct FString product; // 0x30(0x10)
	int64_t Time; // 0x40(0x08)
};

// ScriptStruct ShooterGame.AresPresenceDataWrapper
// Size: 0x170 (Inherited: 0x00)
struct FAresPresenceDataWrapper {
	struct FAresPresenceData AresData; // 0x00(0x170)
};

// ScriptStruct ShooterGame.PresenceData
// Size: 0x178 (Inherited: 0x00)
struct FPresenceData {
	int32_t PresenceCounter; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAresPresenceDataWrapper AresDataWrapper; // 0x08(0x170)
};

// ScriptStruct ShooterGame.ProgressModelSet_ChildData
// Size: 0x30 (Inherited: 0x00)
struct FProgressModelSet_ChildData {
	struct TScriptInterface<IProgressModel> ProgressModel; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct ShooterGame.ProjectileThrowTuning
// Size: 0x40 (Inherited: 0x00)
struct FProjectileThrowTuning {
	struct FGameFeatureSubclass ProjectileClass; // 0x00(0x18)
	struct AProjectile* ProjectileType; // 0x18(0x08)
	float SpeedScale; // 0x20(0x04)
	float UpwardArc; // 0x24(0x04)
	float UpwardShift; // 0x28(0x04)
	struct FVector ThrowOffset; // 0x2c(0x0c)
	float ThrowDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.ProjectileCollisionResponse
// Size: 0x10 (Inherited: 0x00)
struct FProjectileCollisionResponse {
	enum class EProjectileCollisionProcessInstruction ProcessInstruction; // 0x00(0x01)
	bool bVelocitySet; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Velocity; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.ProjectileEstimationInfo
// Size: 0x34 (Inherited: 0x00)
struct FProjectileEstimationInfo {
	float ProjectileSpeed; // 0x00(0x04)
	float ProjectileGravityScale; // 0x04(0x04)
	struct FVector ImpartActorVelocityPercentVector; // 0x08(0x0c)
	float ImpartVelocityMatchingDirectionFraction; // 0x14(0x04)
	bool bUseTrueVerticalVelocity; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DownwardVelocityScale; // 0x1c(0x04)
	char bBounceAngleAffectsFriction : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Bounciness; // 0x24(0x04)
	float Friction; // 0x28(0x04)
	float BounceVelocityProjectileStopThreshold; // 0x2c(0x04)
	float BounceStopSurfaceAngle; // 0x30(0x04)
};

// ScriptStruct ShooterGame.RegisterDeviceRequest
// Size: 0x30 (Inherited: 0x00)
struct FRegisterDeviceRequest {
	struct FString device_token; // 0x00(0x10)
	struct FString Platform; // 0x10(0x10)
	struct FString Locale; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RankChargeInfo
// Size: 0x08 (Inherited: 0x00)
struct FRankChargeInfo {
	float CostToBuyRank; // 0x00(0x04)
	int32_t NumCharges; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RateLimiter
// Size: 0x30 (Inherited: 0x00)
struct FRateLimiter {
	char pad_0[0x18]; // 0x00(0x18)
	enum class ERateLimiterMethod RateLimiterMethod; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CooldownSeconds; // 0x1c(0x04)
	uint32_t MaxActionInTimeWindow; // 0x20(0x04)
	float RollingTimeWindowDurationSeconds; // 0x24(0x04)
	float ExtendedCooldownSeconds; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.ReflectedPlayerSettings
// Size: 0x1e0 (Inherited: 0x00)
struct FReflectedPlayerSettings {
	struct TMap<struct FName, struct FBaseFloatSetting> FloatSettings; // 0x00(0x50)
	struct TMap<struct FName, struct FBaseIntSetting> IntSettings; // 0x50(0x50)
	struct TMap<struct FName, struct FBaseBoolSetting> BoolSettings; // 0xa0(0x50)
	struct TMap<struct FName, struct FFloatSettingChangedDelegateList> FloatSettingChangedEvents; // 0xf0(0x50)
	struct TMap<struct FName, struct FIntSettingChangedDelegateList> IntSettingChangedEvents; // 0x140(0x50)
	struct TMap<struct FName, struct FBoolSettingChangedDelegateList> BoolSettingChangedEvents; // 0x190(0x50)
};

// ScriptStruct ShooterGame.ReloadStateVariables
// Size: 0x18 (Inherited: 0x00)
struct FReloadStateVariables {
	struct UStateComponent* ScriptInterruptState; // 0x00(0x08)
	struct UStateTransitionContext* ScriptInterruptContext; // 0x08(0x08)
	bool bForceExitDueToPreventReloadAttribute; // 0x10(0x01)
	enum class EReloadSubstate ReloadSubstate; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float ReloadSubstateEndTimestamp; // 0x14(0x04)
};

// ScriptStruct ShooterGame.RemoteCharacterUpdate
// Size: 0x20 (Inherited: 0x00)
struct FRemoteCharacterUpdate {
	uint32_t ShooterCharacterNetGuidValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FComponentDataStream ComponentDataStream; // 0x08(0x18)
};

// ScriptStruct ShooterGame.RemoteClientMovementSnapShot
// Size: 0x24 (Inherited: 0x00)
struct FRemoteClientMovementSnapShot {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Acceleration; // 0x18(0x0c)
};

// ScriptStruct ShooterGame.AresTeamListEntry
// Size: 0x08 (Inherited: 0x00)
struct FAresTeamListEntry {
	struct UBaseTeamComponent* Team; // 0x00(0x08)
};

// ScriptStruct ShooterGame.RemoteNetworkedInfo
// Size: 0x28 (Inherited: 0x08)
struct FRemoteNetworkedInfo : FAresTeamListEntry {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.EquippableResourceResponse
// Size: 0x10 (Inherited: 0x00)
struct FEquippableResourceResponse {
	struct UResourceComponent* ResourceComponent; // 0x00(0x08)
	struct UStateComponent* State; // 0x08(0x08)
};

// ScriptStruct ShooterGame.EquippableInventoryEventResponse
// Size: 0x60 (Inherited: 0x00)
struct FEquippableInventoryEventResponse {
	enum class EEquipType EquipType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct AAresEquippable*> Equippables; // 0x08(0x50)
	struct UStateComponent* ToState; // 0x58(0x08)
};

// ScriptStruct ShooterGame.ActorContextResponse
// Size: 0x30 (Inherited: 0x00)
struct FActorContextResponse {
	enum class EActorEvent Event; // 0x00(0x01)
	enum class EActorCombination Combination; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct AActor*> ActorsToRespond; // 0x08(0x10)
	struct FName StateName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UStateComponent* State; // 0x28(0x08)
};

// ScriptStruct ShooterGame.TriggerEventInputResponse
// Size: 0x20 (Inherited: 0x00)
struct FTriggerEventInputResponse {
	struct FTriggerInput Input; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float Delay; // 0x04(0x04)
	bool bCanRespondOutOfGameplay; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FDelegate Delegate; // 0x0c(0x14)
};

// ScriptStruct ShooterGame.StateChangeInputResponse
// Size: 0x20 (Inherited: 0x00)
struct FStateChangeInputResponse {
	struct FTriggerInput Input; // 0x00(0x02)
	enum class EAresActivationInputType ActivationType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName StateName; // 0x04(0x0c)
	float Delay; // 0x10(0x04)
	bool bCanRespondOutOfGameplay; // 0x14(0x01)
	bool bCanRespondWhileSuppressed; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct UStateComponent* State; // 0x18(0x08)
};

// ScriptStruct ShooterGame.PlayerAvoidList
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAvoidList {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FAvoidListEntry> AvoidList; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AvoidListEntry
// Size: 0x10 (Inherited: 0x00)
struct FAvoidListEntry {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AddAvoidListEntryRequest
// Size: 0x48 (Inherited: 0x00)
struct FAddAvoidListEntryRequest {
	bool OverrideEntries; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MatchID; // 0x08(0x10)
	struct FString QueueID; // 0x18(0x10)
	struct FString Affinity; // 0x28(0x10)
	struct FString Platform; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PlayerRestrictionV2
// Size: 0x28 (Inherited: 0x00)
struct FPlayerRestrictionV2 {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FPlayerPenaltyV2> Penalties; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PlayerPenaltyV2
// Size: 0x50 (Inherited: 0x00)
struct FPlayerPenaltyV2 {
	struct FString ID; // 0x00(0x10)
	int64_t IssuingGameStartUnixMillis; // 0x10(0x08)
	struct FDateTime Expiry; // 0x18(0x08)
	int64_t GamesRemaining; // 0x20(0x08)
	struct FWarningEffect WarningEffect; // 0x28(0x18)
	struct FQueueRestrictionEffect QueueRestrictionEffect; // 0x40(0x10)
};

// ScriptStruct ShooterGame.QueueRestrictionEffect
// Size: 0x10 (Inherited: 0x00)
struct FQueueRestrictionEffect {
	struct TArray<struct FString> QueueIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.WarningEffect
// Size: 0x18 (Inherited: 0x00)
struct FWarningEffect {
	struct FString WarningType; // 0x00(0x10)
	int64_t WarningTier; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PlayerReportTokenResult
// Size: 0x10 (Inherited: 0x00)
struct FPlayerReportTokenResult {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.InterventionFeedback
// Size: 0x38 (Inherited: 0x00)
struct FInterventionFeedback {
	struct FString MatchID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct TArray<struct FString> Participants; // 0x18(0x10)
	struct TArray<struct FRestrictionsSubjectInfractions> FlaggedSubjects; // 0x28(0x10)
};

// ScriptStruct ShooterGame.RestrictionsSubjectInfractions
// Size: 0x20 (Inherited: 0x00)
struct FRestrictionsSubjectInfractions {
	struct FString Subject; // 0x00(0x10)
	struct TArray<enum class EInfractionType> Infractions; // 0x10(0x10)
};

// ScriptStruct ShooterGame.IdempotentRewindable
// Size: 0x10 (Inherited: 0x00)
struct FIdempotentRewindable {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ERewindState RewindState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.RiotClientLaunchParams
// Size: 0x90 (Inherited: 0x00)
struct FRiotClientLaunchParams {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InstallPath; // 0x08(0x10)
	struct FString CommandLineArgs; // 0x18(0x10)
	struct FString DesiredRegion; // 0x28(0x10)
	struct FRiotPlatformClientSettings ClientSettings; // 0x38(0x50)
	bool bHeadless; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct ShooterGame.PatchlineMetadata
// Size: 0x60 (Inherited: 0x00)
struct FPatchlineMetadata {
	struct FString product; // 0x00(0x10)
	struct FString Channel; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	struct FString PublishedAt; // 0x30(0x10)
	struct FString ReleaseID; // 0x40(0x10)
	struct FString DeployedAt; // 0x50(0x10)
};

// ScriptStruct ShooterGame.RiotClientRegionLocale
// Size: 0x40 (Inherited: 0x00)
struct FRiotClientRegionLocale {
	struct FString Locale; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
	struct FString WebLanguage; // 0x20(0x10)
	struct FString WebRegion; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RiotClientPluginStatus
// Size: 0x10 (Inherited: 0x00)
struct FRiotClientPluginStatus {
	struct FString State; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RSOCredentials
// Size: 0x38 (Inherited: 0x00)
struct FRSOCredentials {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ShooterGame.RiotStatus
// Size: 0x50 (Inherited: 0x00)
struct FRiotStatus {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FString> Locales; // 0x20(0x10)
	struct TArray<struct FRiotStatusMaintenance> Maintenances; // 0x30(0x10)
	struct TArray<struct FRiotStatusIncident> Incidents; // 0x40(0x10)
};

// ScriptStruct ShooterGame.RiotStatusIncident
// Size: 0x78 (Inherited: 0x00)
struct FRiotStatusIncident {
	struct FString Archive_At; // 0x00(0x10)
	struct FString Incident_Severity; // 0x10(0x10)
	struct TArray<struct FRiotStatusUpdate> Updates; // 0x20(0x10)
	struct FString Created_At; // 0x30(0x10)
	struct TArray<struct FString> Platforms; // 0x40(0x10)
	struct FString Updated_At; // 0x50(0x10)
	int32_t ID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FRiotStatusTranslation> Titles; // 0x68(0x10)
};

// ScriptStruct ShooterGame.RiotStatusTranslation
// Size: 0x20 (Inherited: 0x00)
struct FRiotStatusTranslation {
	struct FString Content; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RiotStatusUpdate
// Size: 0x60 (Inherited: 0x00)
struct FRiotStatusUpdate {
	struct FString Updated_At; // 0x00(0x10)
	bool Publish; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Author; // 0x18(0x10)
	struct FString Created_At; // 0x28(0x10)
	struct TArray<struct FRiotStatusTranslation> Translations; // 0x38(0x10)
	struct TArray<struct FString> PublishLocations; // 0x48(0x10)
	int32_t ID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.RiotStatusMaintenance
// Size: 0x78 (Inherited: 0x00)
struct FRiotStatusMaintenance {
	struct FString Archive_At; // 0x00(0x10)
	struct TArray<struct FRiotStatusUpdate> Updates; // 0x10(0x10)
	struct FString Created_At; // 0x20(0x10)
	struct TArray<struct FString> Platforms; // 0x30(0x10)
	struct FString Updated_At; // 0x40(0x10)
	int32_t ID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Maintenance_Status; // 0x58(0x10)
	struct TArray<struct FRiotStatusTranslation> Titles; // 0x68(0x10)
};

// ScriptStruct ShooterGame.RiotWarning
// Size: 0x50 (Inherited: 0x00)
struct FRiotWarning {
	struct TMap<struct FString, struct FRiotWarningMessage> RiotWarningMessageMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.RiotWarningMessage
// Size: 0x70 (Inherited: 0x00)
struct FRiotWarningMessage {
	struct FString AcknowledgeText; // 0x00(0x10)
	struct FString Category; // 0x10(0x10)
	struct FString Locale; // 0x20(0x10)
	struct FString Message; // 0x30(0x10)
	struct FString Title; // 0x40(0x10)
	struct FString SeeMoreURL; // 0x50(0x10)
	struct FString SeeMoreLabel; // 0x60(0x10)
};

// ScriptStruct ShooterGame.RMSNotification
// Size: 0x58 (Inherited: 0x00)
struct FRMSNotification {
	struct FString Resource; // 0x00(0x10)
	struct FString Service; // 0x10(0x10)
	struct FString Version; // 0x20(0x10)
	int64_t Timestamp; // 0x30(0x08)
	struct FString Body; // 0x38(0x10)
	struct FString Payload; // 0x48(0x10)
};

// ScriptStruct ShooterGame.RMSSession
// Size: 0x01 (Inherited: 0x00)
struct FRMSSession {
	enum class ERMSConnectionState State; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RNetProcessInfo
// Size: 0x18 (Inherited: 0x00)
struct FRNetProcessInfo {
	int32_t Pid; // 0x00(0x04)
	int32_t RestartCountdownSeconds; // 0x04(0x04)
	struct FString Status; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RNetEvent
// Size: 0x28 (Inherited: 0x00)
struct FRNetEvent {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.RiotClientHeartbeatResponse
// Size: 0x01 (Inherited: 0x00)
struct FRiotClientHeartbeatResponse {
	bool Success; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RiotClientHeartbeat
// Size: 0x08 (Inherited: 0x00)
struct FRiotClientHeartbeat {
	enum class ERiotClientHeartbeatPhase Phase; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SessionTTL; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ClutchMuteTelemetryEvent
// Size: 0x40 (Inherited: 0x00)
struct FClutchMuteTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString RoomID; // 0x20(0x10)
	int32_t RoundNumber; // 0x30(0x04)
	float GamePhaseElapsedTime; // 0x34(0x04)
	float GamePhaseRemainingTime; // 0x38(0x04)
	bool EnablingMute; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct ShooterGame.PushToTalkSettingsV2
// Size: 0x18 (Inherited: 0x00)
struct FPushToTalkSettingsV2 {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FPushToTalkKeyCombo> KeyCombos; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PushToTalkKeyCombo
// Size: 0x20 (Inherited: 0x00)
struct FPushToTalkKeyCombo {
	struct TArray<struct FPushToTalkKeyBinding> KeyBindings; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PushToTalkKeyBinding
// Size: 0x04 (Inherited: 0x00)
struct FPushToTalkKeyBinding {
	uint32_t Key; // 0x00(0x04)
};

// ScriptStruct ShooterGame.InitializeProviderBody
// Size: 0x10 (Inherited: 0x00)
struct FInitializeProviderBody {
	struct FString Provider; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AudioProperties
// Size: 0x04 (Inherited: 0x00)
struct FAudioProperties {
	int32_t MicEnergy; // 0x00(0x04)
};

// ScriptStruct ShooterGame.VoiceDevices
// Size: 0x10 (Inherited: 0x00)
struct FVoiceDevices {
	struct TArray<struct FVoiceDevice> Devices; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VoiceDevice
// Size: 0x28 (Inherited: 0x00)
struct FVoiceDevice {
	struct FString Name; // 0x00(0x10)
	struct FString Handle; // 0x10(0x10)
	bool Is_Current_Device; // 0x20(0x01)
	bool Is_Effective_Device; // 0x21(0x01)
	bool Is_Default; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct ShooterGame.VoiceSessions
// Size: 0x10 (Inherited: 0x00)
struct FVoiceSessions {
	struct TArray<struct FVoiceSession> Sessions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VoiceSession
// Size: 0x38 (Inherited: 0x00)
struct FVoiceSession {
	struct FString ID; // 0x00(0x10)
	bool IsMuted; // 0x10(0x01)
	bool IsTransmitEnabled; // 0x11(0x01)
	bool IsRestricted; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct FVoiceSessionParticipant> Participants; // 0x18(0x10)
	struct FName Status; // 0x28(0x0c)
	int32_t Volume; // 0x34(0x04)
};

// ScriptStruct ShooterGame.VoiceSessionProperties
// Size: 0x01 (Inherited: 0x00)
struct FVoiceSessionProperties {
	bool IsTransmitEnabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.VoiceParticipantSettings
// Size: 0x08 (Inherited: 0x00)
struct FVoiceParticipantSettings {
	bool IsMuted; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Volume; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RNetVoiceSettingsPTTOnly
// Size: 0x01 (Inherited: 0x00)
struct FRNetVoiceSettingsPTTOnly {
	bool LocalMicMuted; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RNetVoiceSettings
// Size: 0x38 (Inherited: 0x00)
struct FRNetVoiceSettings {
	struct FString CurrentCaptureDeviceHandle; // 0x00(0x10)
	struct FString CurrentRenderDeviceHandle; // 0x10(0x10)
	int32_t MicLevel; // 0x20(0x04)
	int32_t SpeakerLevel; // 0x24(0x04)
	int32_t VadHangoverTime; // 0x28(0x04)
	int32_t VadSensitivity; // 0x2c(0x04)
	bool LoopbackEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.RiotKeyValueStoredSettingsDTO
// Size: 0x98 (Inherited: 0x00)
struct FRiotKeyValueStoredSettingsDTO {
	struct FSettings Data; // 0x00(0x98)
};

// ScriptStruct ShooterGame.Settings
// Size: 0x98 (Inherited: 0x00)
struct FSettings {
	int32_t RoamingSetttingsVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAresFloatSettingDTO> FloatSettings; // 0x08(0x10)
	struct TArray<struct FAresIntSettingDTO> IntSettings; // 0x18(0x10)
	struct TArray<struct FAresBoolSettingDTO> BoolSettings; // 0x28(0x10)
	struct TArray<struct FAresStringSettingDTO> StringSettings; // 0x38(0x10)
	struct TArray<struct FActionMappingDTO> ActionMappings; // 0x48(0x10)
	struct TArray<struct FAxisMappingDTO> AxisMappings; // 0x58(0x10)
	struct TArray<struct FConsoleSettingDTO> ConsoleSettings; // 0x68(0x10)
	struct TArray<struct FConsoleSettingDTO> AudioSettings; // 0x78(0x10)
	struct TArray<struct FName> SettingsProfiles; // 0x88(0x10)
};

// ScriptStruct ShooterGame.ConsoleSettingDTO
// Size: 0x20 (Inherited: 0x00)
struct FConsoleSettingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RosterMUCToken
// Size: 0x40 (Inherited: 0x00)
struct FRosterMUCToken {
	struct FString Typ; // 0x00(0x10)
	struct FString Chn; // 0x10(0x10)
	struct FString Tgt; // 0x20(0x10)
	struct FString Token; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RosterRoleChangeBody
// Size: 0x01 (Inherited: 0x00)
struct FRosterRoleChangeBody {
	enum class ERosterMemberRole Role; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RosterCreateBody
// Size: 0x90 (Inherited: 0x00)
struct FRosterCreateBody {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FRosterMetadata MetaData; // 0x20(0x70)
};

// ScriptStruct ShooterGame.RosterUnverifiedMetadataBody
// Size: 0x40 (Inherited: 0x00)
struct FRosterUnverifiedMetadataBody {
	struct FRosterUnverifiedMetadata Unverified; // 0x00(0x40)
};

// ScriptStruct ShooterGame.RosterAffinity
// Size: 0x20 (Inherited: 0x00)
struct FRosterAffinity {
	struct FString GameShardZone; // 0x00(0x10)
	struct FString Affinity; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RosterPlayer
// Size: 0x48 (Inherited: 0x00)
struct FRosterPlayer {
	struct FString Puuid; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct TArray<struct FRosterInfo> Rosters; // 0x18(0x10)
	struct TArray<struct FRosterInvite> Invites; // 0x28(0x10)
	int64_t UpdatedAt; // 0x38(0x08)
	int64_t CreatedAt; // 0x40(0x08)
};

// ScriptStruct ShooterGame.RosterInfo
// Size: 0x20 (Inherited: 0x00)
struct FRosterInfo {
	struct FString Realm; // 0x00(0x10)
	struct FString RosterID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RoundParticipantsInfo
// Size: 0x18 (Inherited: 0x00)
struct FRoundParticipantsInfo {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct AShooterPlayerState*> PenalizedPlayers; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreRecoveryOutput
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestoreRecoveryOutput {
	struct TArray<struct FRoundRestoreRoundData> Rounds; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreSnapshot
// Size: 0x58 (Inherited: 0x00)
struct FRoundRestoreSnapshot {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ShooterGame.RoundStateLog
// Size: 0x38 (Inherited: 0x00)
struct FRoundStateLog {
	struct FString RoundHeader; // 0x00(0x10)
	struct TArray<struct FRoundStateLogPlayer> Players; // 0x10(0x10)
	struct FRoundStateLogMatchState MatchState; // 0x20(0x18)
};

// ScriptStruct ShooterGame.RoundStateLogMatchState
// Size: 0x18 (Inherited: 0x00)
struct FRoundStateLogMatchState {
	bool bSidesAreSwapped; // 0x00(0x01)
	bool bIsOvertime; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRoundStateLogRoundResult> RoundHistory; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundStateLogRoundResult
// Size: 0x28 (Inherited: 0x00)
struct FRoundStateLogRoundResult {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString WinningTeam; // 0x08(0x10)
	struct FString Outcome; // 0x18(0x10)
};

// ScriptStruct ShooterGame.RoundStateLogPlayer
// Size: 0x78 (Inherited: 0x00)
struct FRoundStateLogPlayer {
	struct FString PlayerName; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	struct FString TeamName; // 0x20(0x10)
	struct FString PrimaryWeapon; // 0x30(0x10)
	struct FString SecondaryWeapon; // 0x40(0x10)
	struct TArray<struct FRoundStateLogAbility> Abilities; // 0x50(0x10)
	int32_t UltimatePoints; // 0x60(0x04)
	int32_t Kills; // 0x64(0x04)
	int32_t Deaths; // 0x68(0x04)
	int32_t Assists; // 0x6c(0x04)
	int32_t ArmorAmount; // 0x70(0x04)
	int32_t Money; // 0x74(0x04)
};

// ScriptStruct ShooterGame.RoundStateLogAbility
// Size: 0x18 (Inherited: 0x00)
struct FRoundStateLogAbility {
	struct FString AbilityName; // 0x00(0x10)
	int32_t AbilityCharges; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.UserInfoToken
// Size: 0x70 (Inherited: 0x00)
struct FUserInfoToken {
	struct FString Sub; // 0x00(0x10)
	struct FString Country; // 0x10(0x10)
	struct FString Aud; // 0x20(0x10)
	bool Account_Verified; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	int64_t Iat; // 0x38(0x08)
	struct FUserAccount Acct; // 0x40(0x20)
	struct FBanClaims Ban; // 0x60(0x10)
};

// ScriptStruct ShooterGame.BanClaims
// Size: 0x10 (Inherited: 0x00)
struct FBanClaims {
	struct TArray<struct FRestrictionClaims> Restrictions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RestrictionClaims
// Size: 0x38 (Inherited: 0x00)
struct FRestrictionClaims {
	struct FString Type; // 0x00(0x10)
	struct FString Scope; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
	struct FRestrictionInfo Dat; // 0x30(0x08)
};

// ScriptStruct ShooterGame.RestrictionInfo
// Size: 0x08 (Inherited: 0x00)
struct FRestrictionInfo {
	int64_t ExpirationMillis; // 0x00(0x08)
};

// ScriptStruct ShooterGame.UserAccount
// Size: 0x20 (Inherited: 0x00)
struct FUserAccount {
	struct FString game_name; // 0x00(0x10)
	struct FString Tag_Line; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RSOParsedIdToken
// Size: 0x40 (Inherited: 0x00)
struct FRSOParsedIdToken {
	struct FString Sub; // 0x00(0x10)
	struct FString Country; // 0x10(0x10)
	struct FRSOAccount Acct; // 0x20(0x20)
};

// ScriptStruct ShooterGame.RSOAccount
// Size: 0x20 (Inherited: 0x00)
struct FRSOAccount {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RSOUserInfo
// Size: 0x48 (Inherited: 0x00)
struct FRSOUserInfo {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString Country; // 0x30(0x10)
	bool AccountVerified; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.ActiveScriptStateEffect
// Size: 0x30 (Inherited: 0x00)
struct FActiveScriptStateEffect {
	struct FEffectID EffectID; // 0x00(0x20)
	enum class EMovementSync MovementSync; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UEffectManagerComponent* TargetEffectManager; // 0x28(0x08)
};

// ScriptStruct ShooterGame.ServerRoundMetrics
// Size: 0x578 (Inherited: 0x00)
struct FServerRoundMetrics {
	int32_t RoundNumber_int; // 0x00(0x04)
	float FinalMS; // 0x04(0x04)
	float MedianMS; // 0x08(0x04)
	float MedianMS_Processing; // 0x0c(0x04)
	float MinMS; // 0x10(0x04)
	float MinMS_Processing; // 0x14(0x04)
	float MaxMS; // 0x18(0x04)
	float MaxMS_Processing; // 0x1c(0x04)
	float FlatMeanMS; // 0x20(0x04)
	float FlatMeanMS_Processing; // 0x24(0x04)
	float RoundDuration; // 0x28(0x04)
	int32_t PlayerCount_int; // 0x2c(0x04)
	int32_t ConcurrentServers_int; // 0x30(0x04)
	struct FAresObjectMetrics ObjectMetrics; // 0x34(0x50)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x84(0x474)
	struct FServerFrameBuckets FrameBuckets; // 0x4f8(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x514(0x64)
};

// ScriptStruct ShooterGame.ServerFilteredPerformanceProfile
// Size: 0xb0 (Inherited: 0x00)
struct FServerFilteredPerformanceProfile {
	struct TArray<struct FServerPerRoundPerformanceData> PerRoundPerformanceData; // 0x00(0x10)
	char GameplayFlagsFilter; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FGameEventMatchInfo MatchInfo; // 0x18(0x68)
	struct FServerHardwareInfo HardwareInfo; // 0x80(0x30)
};

// ScriptStruct ShooterGame.ServerPerRoundPerformanceData
// Size: 0x588 (Inherited: 0x00)
struct FServerPerRoundPerformanceData {
	int64_t RoundDuration; // 0x00(0x08)
	int32_t RoundNumber; // 0x08(0x04)
	struct FMetric TotalFrameTime; // 0x0c(0x14)
	struct FMetric ProcessingTime; // 0x20(0x14)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x34(0x474)
	struct FServerFrameBuckets FrameBuckets; // 0x4a8(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x4c4(0x64)
	struct FAresObjectMetrics ObjectMetrics; // 0x528(0x50)
	int32_t ConcurrentServers; // 0x578(0x04)
	float MaxTickRate; // 0x57c(0x04)
	char MoveTimestepsPerSecond; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
};

// ScriptStruct ShooterGame.ServerEndOfRoundPerformanceProfile
// Size: 0x5f0 (Inherited: 0x00)
struct FServerEndOfRoundPerformanceProfile {
	struct FMetric TotalFrameTime; // 0x00(0x14)
	struct FMetric ProcessingTime; // 0x14(0x14)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x28(0x474)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FString MatchID; // 0x4a0(0x10)
	int32_t RoundNumber; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	int64_t RoundDuration; // 0x4b8(0x08)
	int32_t ConcurrentServers; // 0x4c0(0x04)
	struct FAresObjectMetrics ObjectMetrics; // 0x4c4(0x50)
	struct FServerFrameBuckets FrameBuckets; // 0x514(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x530(0x64)
	char MoveTimestepsPerSecond; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)
	float MaxTickRate; // 0x598(0x04)
	struct FNetworkPacketStats NetworkPacketStats; // 0x59c(0x54)
};

// ScriptStruct ShooterGame.ServerGameplaySystemSummaryEvent
// Size: 0xc8 (Inherited: 0x00)
struct FServerGameplaySystemSummaryEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FServerGameplaySystemSummary CombatData; // 0x78(0x28)
	struct FServerGameplaySystemSummary NonCombatData; // 0xa0(0x28)
};

// ScriptStruct ShooterGame.ServerGameplaySystemSummary
// Size: 0x28 (Inherited: 0x00)
struct FServerGameplaySystemSummary {
	uint32_t AutonomousForwardPredictCount; // 0x00(0x04)
	float AutonomousForwardPredictMeanDuration; // 0x04(0x04)
	float AutonomousForwardPredictMaxDuration; // 0x08(0x04)
	uint32_t AutonomousQueueSizeCount; // 0x0c(0x04)
	float AutonomousQueueSizeMean; // 0x10(0x04)
	float AutonomousQueueSizeMax; // 0x14(0x04)
	float AutonomousMoveProcessingDelayMean; // 0x18(0x04)
	float AutonomousMoveProcessingDelayStdDeviation; // 0x1c(0x04)
	float AutonomousMoveProcessingDelayP95; // 0x20(0x04)
	uint32_t SoftDisconnectCount; // 0x24(0x04)
};

// ScriptStruct ShooterGame.ClientDisconnectEvent
// Size: 0xb0 (Inherited: 0x00)
struct FClientDisconnectEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FString DisconnectReason; // 0x78(0x10)
	struct FString DisconnectContext; // 0x88(0x10)
	struct FString DisconnectOutcome; // 0x98(0x10)
	float DisconnectDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ShooterGame.PlayerSecurityViolationDisconnectEvent
// Size: 0xd8 (Inherited: 0x00)
struct FPlayerSecurityViolationDisconnectEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventPlayerInfo PlayerInfo; // 0x68(0x60)
	struct FString SecurityViolation; // 0xc8(0x10)
};

// ScriptStruct ShooterGame.PlayerDiscrepancyDetectedEvent
// Size: 0xe0 (Inherited: 0x00)
struct FPlayerDiscrepancyDetectedEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventPlayerInfo PlayerInfo; // 0x68(0x60)
	struct FString DiscrepancyType; // 0xc8(0x10)
	int32_t ServerValue; // 0xd8(0x04)
	int32_t ClientValue; // 0xdc(0x04)
};

// ScriptStruct ShooterGame.InventoryChangeEvent
// Size: 0x3e8 (Inherited: 0x00)
struct FInventoryChangeEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	int32_t PreTransactionMoney; // 0xf0(0x04)
	int32_t PreTransactionMoneyReceiver; // 0xf4(0x04)
	int32_t PreTransactionMoneySender; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FGameEventInventory StartingInventory; // 0x100(0x148)
	struct FGameEventInventory EndingInventory; // 0x248(0x148)
	struct FString ItemId; // 0x390(0x10)
	struct FString ItemName; // 0x3a0(0x10)
	struct FString ReceiverId; // 0x3b0(0x10)
	struct FString SenderId; // 0x3c0(0x10)
	struct FString TransactionType; // 0x3d0(0x10)
	int32_t ItemCost; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
};

// ScriptStruct ShooterGame.PlayerRoundSnapshotEvent
// Size: 0x290 (Inherited: 0x00)
struct FPlayerRoundSnapshotEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FGameEventCharacterState PlayerState; // 0xf0(0x1a0)
};

// ScriptStruct ShooterGame.AbilityUsageEvent
// Size: 0x2e8 (Inherited: 0x00)
struct FAbilityUsageEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FGameEventCharacterState PlayerState; // 0xf0(0x1a0)
	struct FAbilityUsageInfo AbilityInfo; // 0x290(0x58)
};

// ScriptStruct ShooterGame.AbilityUsageInfo
// Size: 0x58 (Inherited: 0x00)
struct FAbilityUsageInfo {
	struct FString AbilityId; // 0x00(0x10)
	struct FString AbilityName; // 0x10(0x10)
	struct FVector EffectLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FAbilityEffectInfo> AbilityEffects; // 0x30(0x10)
	float DestroyedCount; // 0x40(0x04)
	int32_t CastEventID; // 0x44(0x04)
	struct FString UsageType; // 0x48(0x10)
};

// ScriptStruct ShooterGame.AbilityEffectInfo
// Size: 0x28 (Inherited: 0x00)
struct FAbilityEffectInfo {
	struct FString Tag; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAbilityPerTargetEffectInfo> AffectedTargets; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AbilityPerTargetEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FAbilityPerTargetEffectInfo {
	struct FString TargetPlayerSubject; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ServerHitRegSystemRoundSummaryEvent
// Size: 0x90 (Inherited: 0x00)
struct FServerHitRegSystemRoundSummaryEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	int32_t DroppedShotCount; // 0x78(0x04)
	int32_t DisagreedShotCount; // 0x7c(0x04)
	int32_t ShotsPastRewindLimitCount; // 0x80(0x04)
	int32_t TotalServerShots; // 0x84(0x04)
	int32_t TotalClientShots; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ShooterGame.VoteCompleteEvent
// Size: 0xc8 (Inherited: 0x00)
struct FVoteCompleteEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString VoteType; // 0x90(0x10)
	struct FString OptionSelected; // 0xa0(0x10)
	struct TArray<struct FVoteOptionInfo> OptionVotes; // 0xb0(0x10)
	int32_t NumNonParticipants; // 0xc0(0x04)
	int32_t NumPenalizedPlayers; // 0xc4(0x04)
};

// ScriptStruct ShooterGame.VoteOptionInfo
// Size: 0x18 (Inherited: 0x00)
struct FVoteOptionInfo {
	struct FString OptionName; // 0x00(0x10)
	int32_t VoteCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.TickerStatus
// Size: 0x30 (Inherited: 0x00)
struct FTickerStatus {
	enum class ETickerSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
	int32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.TickerObject
// Size: 0x18 (Inherited: 0x00)
struct FTickerObject {
	enum class ETickerSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct ShooterGame.SessionReconnectDTO
// Size: 0x01 (Inherited: 0x00)
struct FSessionReconnectDTO {
	bool Reconnect; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SessionDTO
// Size: 0xb8 (Inherited: 0x00)
struct FSessionDTO {
	struct FString Raw; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString CXNState; // 0x20(0x10)
	struct FString ClientId; // 0x30(0x10)
	struct FString LoopState; // 0x40(0x10)
	int64_t Version; // 0x50(0x08)
	struct FDateTime LastHeartbeatTime; // 0x58(0x08)
	struct FDateTime ExpiredTime; // 0x60(0x08)
	int64_t HeartbeatIntervalMillis; // 0x68(0x08)
	struct FTimespan HeartbeatInterval; // 0x70(0x08)
	struct FString HeartbeatIntervalMSString; // 0x78(0x10)
	struct FString PlaytimeNotification; // 0x88(0x10)
	int32_t PlaytimeMinutes; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString RestrictionType; // 0xa0(0x10)
	struct FDateTime UserInfoValidTime; // 0xb0(0x08)
};

// ScriptStruct ShooterGame.SessionConnectRequestDTO
// Size: 0x58 (Inherited: 0x00)
struct FSessionConnectRequestDTO {
	bool IsRestricted; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Pas; // 0x08(0x10)
	struct FString Lq; // 0x18(0x10)
	struct FString UserInfoToken; // 0x28(0x10)
	struct FSessionPlatformInfo PlatformInfo; // 0x38(0x20)
};

// ScriptStruct ShooterGame.SessionPlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FSessionPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AimTargetScore
// Size: 0x10 (Inherited: 0x00)
struct FAimTargetScore {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.SpectatorFocusObjectCameraSettings
// Size: 0x10 (Inherited: 0x00)
struct FSpectatorFocusObjectCameraSettings {
	float CameraSpectatorFocusObjectPitchLowerBound; // 0x00(0x04)
	float CameraSpectatorFocusObjectPitchUpperBound; // 0x04(0x04)
	float CameraSpectatorFocusObjectRotationSpeed; // 0x08(0x04)
	float CameraSpectatorFocusObjectMinimumDistance; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresThidPersonDebugCameraSettings
// Size: 0x20 (Inherited: 0x00)
struct FAresThidPersonDebugCameraSettings {
	float ArmLengthMin; // 0x00(0x04)
	float ArmLengthMax; // 0x04(0x04)
	float ArmLengthZoomStep; // 0x08(0x04)
	bool bDoCollisionTest; // 0x0c(0x01)
	bool bEnableCameraLag; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float CameraLagSpeed; // 0x10(0x04)
	bool bEnableCameraRotationLag; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CameraRotationLagSpeed; // 0x18(0x04)
	bool bReversePitchRotationControls; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.CharacterReveal
// Size: 0x28 (Inherited: 0x00)
struct FCharacterReveal {
	struct FVector Location; // 0x00(0x0c)
	float Time[0x2]; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString CalloutSubRegion; // 0x18(0x10)
};

// ScriptStruct ShooterGame.DefaultSkeletalMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FDefaultSkeletalMeshInfo {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct UObject* AnimInstanceClass; // 0x08(0x08)
	bool bVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CharacterScaleData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterScaleData {
	float CharacterScaleHeightOffset; // 0x00(0x04)
	float OriginalCrouchCompressionAmount; // 0x04(0x04)
	float OriginalBaseEyeHeight; // 0x08(0x04)
	float OriginalCrouchedEyeHeight; // 0x0c(0x04)
	float OriginalCapsuleRadius; // 0x10(0x04)
	float OriginalCapsuleHalfHeight; // 0x14(0x04)
};

// ScriptStruct ShooterGame.DeadAndSettledRespawnData
// Size: 0x04 (Inherited: 0x00)
struct FDeadAndSettledRespawnData {
	bool bReachedDeadAndSettledState; // 0x00(0x01)
	bool bWasCoreMeshTickEnabled; // 0x01(0x01)
	bool bWasCosmeticMeshTickEnabled; // 0x02(0x01)
	bool bWasCosmeticMeshSimulatingPhysics; // 0x03(0x01)
};

// ScriptStruct ShooterGame.CharacterClassDamageTypeModifer
// Size: 0x38 (Inherited: 0x00)
struct FCharacterClassDamageTypeModifer {
	struct TSoftClassPtr<UObject> DamageTypeClassAsset; // 0x00(0x30)
	float DamageModifier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.CharacterClassCostModifer
// Size: 0x10 (Inherited: 0x00)
struct FCharacterClassCostModifer {
	struct UAresPurchasable* PurchasableClassAsset; // 0x00(0x08)
	float CostModifier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.CharacterClassSlotModifer
// Size: 0x10 (Inherited: 0x00)
struct FCharacterClassSlotModifer {
	struct AAresEquippableSlot* PurchasableSlotAsset; // 0x00(0x08)
	float CostModifier; // 0x08(0x04)
	int32_t SlotLimitModifier; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.StartingEquippable
// Size: 0x30 (Inherited: 0x00)
struct FStartingEquippable {
	struct TSoftClassPtr<UObject> EquippableClassAsset; // 0x00(0x30)
};

// ScriptStruct ShooterGame.AresDeathCameraSettings
// Size: 0x40 (Inherited: 0x00)
struct FAresDeathCameraSettings {
	float ArmLengthMin; // 0x00(0x04)
	float ArmLengthMax; // 0x04(0x04)
	float ArmHorizontalOffset; // 0x08(0x04)
	bool bDoCollisionTest; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ProbeSize; // 0x10(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x14(0x01)
	enum class EAresInterpolationFunction InterpolationFunction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float DeathCameraSwitchDelay; // 0x18(0x04)
	float FadeToBlackStartTime; // 0x1c(0x04)
	float FadeToBlackDuration; // 0x20(0x04)
	bool ShouldFadeAudioOnDeath; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SpringArmPitchOffset; // 0x28(0x04)
	float CameraPitchOffset; // 0x2c(0x04)
	struct UCurveFloat* CameraLerpCurve; // 0x30(0x08)
	enum class EAresDeathCamFocusPoint DeathCamFocusPoint; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ShooterGame.Ares3PCameraSettings
// Size: 0x1c (Inherited: 0x00)
struct FAres3PCameraSettings {
	float ArmLengthMin; // 0x00(0x04)
	float ArmLengthMax; // 0x04(0x04)
	float ArmLengthZoomStep; // 0x08(0x04)
	bool bDoCollisionTest; // 0x0c(0x01)
	bool bEnableCameraLag; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float CameraLagSpeed; // 0x10(0x04)
	bool bEnableCameraRotationLag; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CameraRotationLagSpeed; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AimOffsetBlendspaceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FAimOffsetBlendspaceSlotArray {
	struct UAimOffsetBlendSpace* PrimaryBlendspace; // 0x00(0x08)
	struct UAimOffsetBlendSpace* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.Blendspace1DSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FBlendspace1DSlotArray {
	struct UBlendSpace1D* PrimaryBlendspace; // 0x00(0x08)
	struct UBlendSpace1D* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.BlendspaceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FBlendspaceSlotArray {
	struct UBlendSpace* PrimaryBlendspace; // 0x00(0x08)
	struct UBlendSpace* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AnimSequenceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceSlotArray {
	struct UAnimSequence* PrimaryAnimSequence; // 0x00(0x08)
	struct UAnimSequence* SecondaryAnimSequence; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PendingAnimUpdate
// Size: 0x40 (Inherited: 0x00)
struct FPendingAnimUpdate {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAnimUpdate AnimUpdate; // 0x08(0x28)
	struct UAnimInstanceReplicationComponent* AnimInstanceReplicationComponent; // 0x30(0x08)
	struct UAnimationStateComponent* AnimationStateComponent; // 0x38(0x08)
};

// ScriptStruct ShooterGame.AnimUpdate
// Size: 0x28 (Inherited: 0x00)
struct FAnimUpdate {
	struct TArray<struct FAnimInstanceStateMachines> AnimInstancesStateMachines; // 0x00(0x10)
	struct TArray<struct FBlendSpacesUpdate> BlendSpacesUpdate; // 0x10(0x10)
	struct FAnimationStateReplicationData AnimStateReplicationData; // 0x20(0x08)
};

// ScriptStruct ShooterGame.BlendSpacesUpdate
// Size: 0x18 (Inherited: 0x00)
struct FBlendSpacesUpdate {
	float NetworkTimeAdjustment; // 0x00(0x04)
	int32_t AnimInstanceID; // 0x04(0x04)
	struct TArray<struct FAnimBlendSpaceInfo> BlendSpaces; // 0x08(0x10)
};

// ScriptStruct ShooterGame.BodySectionEntry
// Size: 0x18 (Inherited: 0x00)
struct FBodySectionEntry {
	enum class EAresBodySection BodySection; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Bones; // 0x08(0x10)
};

// ScriptStruct ShooterGame.DebugProjectileFireSnapshot
// Size: 0x48 (Inherited: 0x00)
struct FDebugProjectileFireSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AProjectile* ProjectileFired; // 0x08(0x08)
	struct FVector FiringDirection; // 0x10(0x0c)
	struct FVector FiringLocation; // 0x1c(0x0c)
	float ErrorDegrees; // 0x28(0x04)
	float ErrorPower; // 0x2c(0x04)
	int32_t ErrorRetries; // 0x30(0x04)
	int32_t RandomSeed; // 0x34(0x04)
	struct FVector CharacterVelocity; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.RepSocketTransform
// Size: 0x40 (Inherited: 0x00)
struct FRepSocketTransform {
	struct FName BoneName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ShooterGame.DebugProjectileFiringTuning
// Size: 0x10 (Inherited: 0x00)
struct FDebugProjectileFiringTuning {
	struct FDebugLineTuning FiringDirectionTuning; // 0x00(0x0c)
	float LineDrawLength; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DebugLineTuning
// Size: 0x0c (Inherited: 0x00)
struct FDebugLineTuning {
	float LineStartRadius; // 0x00(0x04)
	float LineEndRadius; // 0x04(0x04)
	float LineThickness; // 0x08(0x04)
};

// ScriptStruct ShooterGame.DebugServerHitRegTuning
// Size: 0x1c (Inherited: 0x00)
struct FDebugServerHitRegTuning {
	struct FDebugImpactPointTuning ImpactPointTuning; // 0x00(0x0c)
	struct FDebugLineTuning RayTraceTuning; // 0x0c(0x0c)
	struct FDebugRewindTimeTuning RewindTimeTuning; // 0x18(0x04)
};

// ScriptStruct ShooterGame.DebugRewindTimeTuning
// Size: 0x04 (Inherited: 0x00)
struct FDebugRewindTimeTuning {
	float TextHeightOffset; // 0x00(0x04)
};

// ScriptStruct ShooterGame.DebugImpactPointTuning
// Size: 0x0c (Inherited: 0x00)
struct FDebugImpactPointTuning {
	struct FVector ImpactPointBoxExtents; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.DebugProjectileTargetCheckingEntry
// Size: 0x30 (Inherited: 0x00)
struct FDebugProjectileTargetCheckingEntry {
	float StartTimeStamp; // 0x00(0x04)
	struct FVector SphereCastStart; // 0x04(0x0c)
	struct FVector SphereCastEnd; // 0x10(0x0c)
	float SphereRadius; // 0x1c(0x04)
	struct TArray<struct FVector> ImpactPoints; // 0x20(0x10)
};

// ScriptStruct ShooterGame.DebugPruneComplexRewindEntry
// Size: 0x30 (Inherited: 0x00)
struct FDebugPruneComplexRewindEntry {
	float StartTimeStamp; // 0x00(0x04)
	struct FVector SphereCastStart; // 0x04(0x0c)
	struct FVector SphereCastEnd; // 0x10(0x0c)
	float SphereRadius; // 0x1c(0x04)
	struct TArray<struct FVector> ImpactPoints; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ReplicatedDebugHitRegSample
// Size: 0x50 (Inherited: 0x00)
struct FReplicatedDebugHitRegSample {
	struct TArray<struct FName> HitBoxSocketNames; // 0x00(0x10)
	struct TArray<struct FTransform> HitBoxSocketWorldTransforms; // 0x10(0x10)
	struct FTransform ActorTransform; // 0x20(0x30)
};

// ScriptStruct ShooterGame.ShotResult
// Size: 0xd8 (Inherited: 0x00)
struct FShotResult {
	struct FShotResultMetadata ClientShotMetadata; // 0x00(0x68)
	struct FShotResultMetadata ServerShotMetadata; // 0x68(0x68)
	bool bReceivedServerResults; // 0xd0(0x01)
	bool bReceivedClientResults; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct ShooterGame.ShotResultMetadata
// Size: 0x68 (Inherited: 0x00)
struct FShotResultMetadata {
	struct TArray<struct AShooterCharacter*> ShooterCharactersHit; // 0x00(0x10)
	struct TArray<struct FName> BonesHit; // 0x10(0x10)
	struct FVector InitialImpactLocation; // 0x20(0x0c)
	struct FVector FiringLocation; // 0x2c(0x0c)
	struct FVector FiringDirection; // 0x38(0x0c)
	struct FStabilityValues StabilityValues; // 0x44(0x14)
	struct FVector MovementVelocity; // 0x58(0x0c)
	bool bUsedPredictedLocation; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct ShooterGame.StabilityValues
// Size: 0x14 (Inherited: 0x00)
struct FStabilityValues {
	float StabilityIndex; // 0x00(0x04)
	struct FErrorValues Error; // 0x04(0x08)
	struct FRecoilValues Recoil; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.RecoilValues
// Size: 0x08 (Inherited: 0x00)
struct FRecoilValues {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ErrorValues
// Size: 0x08 (Inherited: 0x00)
struct FErrorValues {
	float FiringError; // 0x00(0x04)
	float MovementError; // 0x04(0x04)
};

// ScriptStruct ShooterGame.NetworkedClientShotResult
// Size: 0x70 (Inherited: 0x00)
struct FNetworkedClientShotResult {
	struct FNetworkedShotId ShotId; // 0x00(0x08)
	struct FShotResultMetadata ShotMetadata; // 0x08(0x68)
};

// ScriptStruct ShooterGame.NetworkedShotId
// Size: 0x08 (Inherited: 0x00)
struct FNetworkedShotId {
	uint32_t ShotIdPrimary; // 0x00(0x04)
	uint32_t ShotIdSecondary; // 0x04(0x04)
};

// ScriptStruct ShooterGame.StabilityMovementData
// Size: 0x10 (Inherited: 0x00)
struct FStabilityMovementData {
	enum class EAresMovementType MovementType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Velocity; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.AresJumpLandSlowTuningV2
// Size: 0x10 (Inherited: 0x00)
struct FAresJumpLandSlowTuningV2 {
	float JumpFallDistanceForSlowV2; // 0x00(0x04)
	int32_t MaxJumpsPerSecondThrottle; // 0x04(0x04)
	struct UForceModule* JumpLandSlowForceModule; // 0x08(0x08)
};

// ScriptStruct ShooterGame.AresJumpTuning
// Size: 0x20 (Inherited: 0x00)
struct FAresJumpTuning {
	float MaxJumpHeight; // 0x00(0x04)
	float JumpTotalTime; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	float JumpAccelerationSpeedLimit; // 0x10(0x04)
	float JumpAngleThresholdForConvertingForwardAccelToLateralDegrees; // 0x14(0x04)
	float JumpAccelerationCounterSteerMultiplier; // 0x18(0x04)
	float StartAngleForJumpAccelerationCounterSteerMultiplier; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresMovementTuning
// Size: 0xcc (Inherited: 0x00)
struct FAresMovementTuning {
	struct FAresPerMovementStateData BaseValues; // 0x00(0x1c)
	struct FAresPerMovementStateData DefaultStateMultipliers[0x6]; // 0x1c(0xa8)
	float MinimumAboveMaxSpeedDecayRate; // 0xc4(0x04)
	float JumpLandSlowMaxSpeedDecayRate; // 0xc8(0x04)
};

// ScriptStruct ShooterGame.AresPerMovementStateData
// Size: 0x1c (Inherited: 0x00)
struct FAresPerMovementStateData {
	float Accel; // 0x00(0x04)
	float Friction; // 0x04(0x04)
	float FrictionMin; // 0x08(0x04)
	float BrakingFriction; // 0x0c(0x04)
	float MaxSpeed; // 0x10(0x04)
	struct FVector2D InputDirectionalMultipliers; // 0x14(0x08)
};

// ScriptStruct ShooterGame.GunNamesToEquippableDataAssetTableRow
// Size: 0x38 (Inherited: 0x08)
struct FGunNamesToEquippableDataAssetTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> Equippable; // 0x08(0x30)
};

// ScriptStruct ShooterGame.DamagePenetration
// Size: 0x08 (Inherited: 0x00)
struct FDamagePenetration {
	enum class DamageSectionType Target; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Amount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.EquippedSkin
// Size: 0x20 (Inherited: 0x00)
struct FEquippedSkin {
	struct FGuid BaseManifest; // 0x00(0x10)
	struct FGuid SkinManifest; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresRespawnGlobals
// Size: 0x08 (Inherited: 0x00)
struct FAresRespawnGlobals {
	float RespawnPointSearchRadius; // 0x00(0x04)
	float RespawnPointSearchVerticalDistance; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresStoreGlobals
// Size: 0x08 (Inherited: 0x00)
struct FAresStoreGlobals {
	int32_t TotalPurchaseLimit; // 0x00(0x04)
	bool bDisallowDropping; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.AresAccessibilityGlobals
// Size: 0x24 (Inherited: 0x00)
struct FAresAccessibilityGlobals {
	float AllyFresnelOffset; // 0x00(0x04)
	float EnemyFresnelOffset; // 0x04(0x04)
	struct FColor AllyColor; // 0x08(0x04)
	struct FColor HUDAllyColor; // 0x0c(0x04)
	struct FColor DefaultEnemyColor; // 0x10(0x04)
	struct FColor HUDEnemyColor; // 0x14(0x04)
	struct FColor TritanopiaEnemyColor; // 0x18(0x04)
	struct FColor DeuteranopiaEnemyColor; // 0x1c(0x04)
	struct FColor ProtanopiaEnemyColor; // 0x20(0x04)
};

// ScriptStruct ShooterGame.AresDecalManagerGlobals
// Size: 0x04 (Inherited: 0x00)
struct FAresDecalManagerGlobals {
	int32_t MaxLiveDecals; // 0x00(0x04)
};

// ScriptStruct ShooterGame.AresHUDGlobals
// Size: 0x3c0 (Inherited: 0x00)
struct FAresHUDGlobals {
	struct FSlateFontInfo DefaultFont; // 0x00(0x60)
	bool KeyLocationsAlwaysOn; // 0x60(0x01)
	bool bEnableSuperSquareCrosshair; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FCanvasIcon SuperSquareCrosshairEdgeTexture; // 0x68(0x18)
	struct FCanvasIcon SuperSquareCrosshairCornerTexture; // 0x80(0x18)
	float SuperSquareCrosshairWidth; // 0x98(0x04)
	float SuperSquareCrosshairLength; // 0x9c(0x04)
	struct FColor SuperSquareColor; // 0xa0(0x04)
	float SuperSquareMinRadiusPixels; // 0xa4(0x04)
	struct FCanvasIcon SuperSquareCenterTexture; // 0xa8(0x18)
	bool bDrawSuperSquareOffsetLine; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinVisualCrossHairSpread; // 0xc4(0x04)
	float ResourceBarScalePerSecond; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UTexture* CastingCircleActivePiece; // 0xd0(0x08)
	struct TSoftObjectPtr<UTexture> CastingCircleActivePieceAsset; // 0xd8(0x30)
	struct UTexture* CastingCircleInactivePiece; // 0x108(0x08)
	struct TSoftObjectPtr<UTexture> CastingCircleInactivePieceAsset; // 0x110(0x30)
	struct UMaterialInterface* CircularMinimapMaterial; // 0x140(0x08)
	struct UAkAudioEvent* KillConfirmEvent; // 0x148(0x08)
	struct TSoftObjectPtr<UAkAudioEvent> KillConfirmEventAsset; // 0x150(0x30)
	struct UParticleSystem* LastKnownPositionParticle; // 0x180(0x08)
	struct TSoftObjectPtr<UParticleSystem> LastKnownPositionParticleAsset; // 0x188(0x30)
	struct UAkAudioEvent* UIErrorEvent; // 0x1b8(0x08)
	struct TSoftObjectPtr<UAkAudioEvent> UIErrorEventAsset; // 0x1c0(0x30)
	struct FAresDeathRecapHUDGlobals DeathRecapGlobals; // 0x1f0(0xc0)
	struct FAresHUDMinimapDangerZonesSettings MinimapDangerZonesSettings; // 0x2b0(0x110)
};

// ScriptStruct ShooterGame.AresHUDMinimapDangerZonesSettings
// Size: 0x110 (Inherited: 0x00)
struct FAresHUDMinimapDangerZonesSettings {
	struct TSoftObjectPtr<UMaterialInterface> MinimapDangerZoneAsset; // 0x00(0x30)
	struct TSoftObjectPtr<UCurveFloat> AlphaOverLifetimeCurve; // 0x30(0x30)
	float RegionLifeTime; // 0x60(0x04)
	float RegionExpansionSpeedScaleFactor; // 0x64(0x04)
	float RegionInitialExpansionSize_Worldspace; // 0x68(0x04)
	float VisibleNearRegionDestroyRadius_Worldspace; // 0x6c(0x04)
	struct FName AliveTimeSecondsParameterName; // 0x70(0x0c)
	struct FName AliveTimePercentParameterName; // 0x7c(0x0c)
	struct FName LifeCurveAlphaParameterName; // 0x88(0x0c)
	struct FName LookupTableRowTexcoordParameterName; // 0x94(0x0c)
	struct FName CurrentUncertaintyRadiusWorldspaceParameterName; // 0xa0(0x0c)
	struct FName CurrentUncertaintyRadiusPercentageParameterName; // 0xac(0x0c)
	struct FName MinimapScaleAndBiasParameterName; // 0xb8(0x0c)
	struct FName MinimapUITextureParameterName; // 0xc4(0x0c)
	struct FName MinimapUIDangerZonesTextureParameterName; // 0xd0(0x0c)
	struct FName MinimapUIDangerZonesLUTTextureParameterName; // 0xdc(0x0c)
	struct FName MinimapClipUVOffsetParameterName; // 0xe8(0x0c)
	struct FName MinimapClipScaleParameterName; // 0xf4(0x0c)
	struct FName DistanceLookupTableTextureParameterName; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct ShooterGame.AresDeathRecapHUDGlobals
// Size: 0xc0 (Inherited: 0x00)
struct FAresDeathRecapHUDGlobals {
	int32_t InitialXPos; // 0x00(0x04)
	int32_t InitialYPos; // 0x04(0x04)
	int32_t NewLineSize; // 0x08(0x04)
	struct FColor NeutralFontColor; // 0x0c(0x04)
	struct FColor EnemyFontColor; // 0x10(0x04)
	struct FColor MyFontColor; // 0x14(0x04)
	struct FColor FontShadowColor; // 0x18(0x04)
	bool bEnableFontOutline; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FColor FontOutlineColor; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UFont* DeathRecapFont; // 0x28(0x08)
	struct TSoftObjectPtr<UFont> DeathRecapFontAsset; // 0x30(0x30)
	int32_t MinLeftLineLength; // 0x60(0x04)
	int32_t DamageDealtXPosPadding; // 0x64(0x04)
	int32_t MinRightLineLength; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UTexture2D* DeathRecapBackground; // 0x70(0x08)
	struct TSoftObjectPtr<UTexture2D> DeathRecapBackgroundAsset; // 0x78(0x30)
	struct FColor DeathRecapDamageDealtColor1; // 0xa8(0x04)
	struct FColor DeathRecapDamageDealtColor2; // 0xac(0x04)
	struct FColor DeathRecapDamageTakenColor1; // 0xb0(0x04)
	struct FColor DeathRecapDamageTakenColor2; // 0xb4(0x04)
	int32_t DeathRecapItemYPadding; // 0xb8(0x04)
	float DeathRecapFadeTime; // 0xbc(0x04)
};

// ScriptStruct ShooterGame.AresTheme
// Size: 0x18 (Inherited: 0x00)
struct FAresTheme {
	struct FName ThemeName; // 0x00(0x0c)
	struct FColor Colors[0x3]; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.AresAudioGlobals
// Size: 0x10 (Inherited: 0x00)
struct FAresAudioGlobals {
	struct AAresSoundHandler* SoundHandlerClass; // 0x00(0x08)
	float BulletWhizConsiderationRadius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresInputGlobals
// Size: 0x14 (Inherited: 0x00)
struct FAresInputGlobals {
	float MouseScalePitch; // 0x00(0x04)
	float MouseScaleYaw; // 0x04(0x04)
	float NormalFoV; // 0x08(0x04)
	float NormalFoV1P; // 0x0c(0x04)
	float TouchFoV; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AresGameGlobals
// Size: 0x48 (Inherited: 0x00)
struct FAresGameGlobals {
	int32_t TeamSelectTime; // 0x00(0x04)
	int32_t PreRoundTime; // 0x04(0x04)
	int32_t SwitchingTeamsTime; // 0x08(0x04)
	int32_t GameEndedTime; // 0x0c(0x04)
	struct UShooterDamageType* InternalDamageType; // 0x10(0x08)
	struct TSoftClassPtr<UObject> InternalDamageTypeAsset; // 0x18(0x30)
};

// ScriptStruct ShooterGame.MainMenuGameModeEntry
// Size: 0x48 (Inherited: 0x00)
struct FMainMenuGameModeEntry {
	struct FString DisplayName; // 0x00(0x10)
	struct AGameMode* Asset; // 0x10(0x08)
	struct TSoftClassPtr<UObject> GameModeAsset; // 0x18(0x30)
};

// ScriptStruct ShooterGame.MainMenuLevelEntry
// Size: 0x38 (Inherited: 0x00)
struct FMainMenuLevelEntry {
	struct FString DisplayName; // 0x00(0x10)
	struct FText DisplayNameText; // 0x10(0x18)
	struct FString AssetName; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AresCheatData
// Size: 0x70 (Inherited: 0x00)
struct FAresCheatData {
	struct APawn* TargetMannequinClass; // 0x00(0x08)
	struct TSoftClassPtr<UObject> TargetMannequinClassAsset; // 0x08(0x30)
	struct TSoftClassPtr<UObject> MannequinPlayerControllerClassAsset; // 0x38(0x30)
	struct FColor DebugMessageColor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.AresCharacterSelectResources
// Size: 0x178 (Inherited: 0x00)
struct FAresCharacterSelectResources {
	struct USkeletalMesh* CharacterSelectMesh; // 0x00(0x08)
	struct TSoftObjectPtr<USkeletalMesh> CharacterSelectMeshAsset; // 0x08(0x30)
	struct TArray<struct FAresCharacterSelectCharacterAttachment> CharacterSelectAttachments; // 0x38(0x10)
	struct FVector CharacterScale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct UObject* CharacterSelectAnimGraphClass; // 0x58(0x08)
	struct TSoftClassPtr<UObject> CharacterSelectAnimGraphClassAsset; // 0x60(0x30)
	struct UTexture* ClassIcon; // 0x90(0x08)
	struct TSoftObjectPtr<UTexture> ClassIconAsset; // 0x98(0x30)
	struct TSoftObjectPtr<UTexture> ClassIconAsset2; // 0xc8(0x30)
	struct TSoftObjectPtr<UTexture> LockedInIconAsset; // 0xf8(0x30)
	struct FString CharacterBackgroundText; // 0x128(0x10)
	struct FString CharacterQuoteText; // 0x138(0x10)
	struct FText CharacterBackgroundLocalizedText; // 0x148(0x18)
	struct FText CharacterQuoteLocalizedText; // 0x160(0x18)
};

// ScriptStruct ShooterGame.AresCharacterSelectCharacterAttachment
// Size: 0xc8 (Inherited: 0x00)
struct FAresCharacterSelectCharacterAttachment {
	struct USkeletalMesh* AttachedMesh; // 0x00(0x08)
	struct TSoftObjectPtr<USkeletalMesh> AttachedMeshAsset; // 0x08(0x30)
	struct FRotator AttachRotation; // 0x38(0x0c)
	struct FName AttachSocket; // 0x44(0x0c)
	enum class EAnimationMode AnimationMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UObject* AnimGraphClass; // 0x58(0x08)
	struct TSoftClassPtr<UObject> AnimGraphClassAsset; // 0x60(0x30)
	struct UAnimationAsset* AnimToPlay; // 0x90(0x08)
	struct TSoftObjectPtr<UAnimationAsset> AnimToPlayAsset; // 0x98(0x30)
};

// ScriptStruct ShooterGame.MatchStartEvent
// Size: 0xa0 (Inherited: 0x00)
struct FMatchStartEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString InstanceId; // 0x68(0x10)
	struct TArray<struct FGameEventPlayerInfo> PlayerInfos; // 0x78(0x10)
	struct FGameServerLoadTestInfo GameServerLoadTestInfo; // 0x88(0x18)
};

// ScriptStruct ShooterGame.GameServerLoadTestInfo
// Size: 0x18 (Inherited: 0x00)
struct FGameServerLoadTestInfo {
	struct FString LoadTestID; // 0x00(0x10)
	int32_t ServerInstanceID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresTeamCount
// Size: 0x10 (Inherited: 0x08)
struct FAresTeamCount : FAresTeamListEntry {
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresTeamEconomy
// Size: 0x18 (Inherited: 0x08)
struct FAresTeamEconomy : FAresTeamListEntry {
	int32_t LoadoutValue; // 0x08(0x04)
	int32_t AverageLoadoutValue; // 0x0c(0x04)
	int32_t InventoryValue; // 0x10(0x04)
	int32_t MoneyValue; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresTeamInfo
// Size: 0x18 (Inherited: 0x08)
struct FAresTeamInfo : FAresTeamListEntry {
	enum class EAresTeamRole InitialRole; // 0x08(0x01)
	enum class EAresTeamRole TeamRole; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t Wins; // 0x0c(0x04)
	int32_t Points; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresGameInfo
// Size: 0x48 (Inherited: 0x00)
struct FAresGameInfo {
	float DisplayRemainingTime; // 0x00(0x04)
	float LocalDisplayRemainingTime; // 0x04(0x04)
	bool bLocallyPredictTimeAdvancing; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GameStateMachineStateLengthSeconds; // 0x0c(0x04)
	float GamePhaseElapsedTime; // 0x10(0x04)
	float GameStateMachineStateElapsedTime; // 0x14(0x04)
	bool bIsStoreEnabled; // 0x18(0x01)
	bool bIsInfiniteAbilitiesEnabled; // 0x19(0x01)
	bool bIsInfiniteAmmoEnabled; // 0x1a(0x01)
	bool bIsInfiniteReserveEnabled; // 0x1b(0x01)
	bool bIsInfiniteMoneyEnabled; // 0x1c(0x01)
	bool bIsIgnoreShoppingRestrictionsEnabled; // 0x1d(0x01)
	bool bIsMatchTimerPaused; // 0x1e(0x01)
	bool bIsIntentionEnabled; // 0x1f(0x01)
	float AuthGameplayStartTimestamp; // 0x20(0x04)
	float AuthGameplayEndTimestamp; // 0x24(0x04)
	float LocalGameplayStartTimestamp; // 0x28(0x04)
	float LocalGameplayEndTimestamp; // 0x2c(0x04)
	bool bGameplayActive; // 0x30(0x01)
	bool bIsDropInEnabled; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0x38(0x08)
	float MatchTimeoutExpireTimeStamp; // 0x40(0x04)
	enum class EAresMatchTimeoutState MatchTimeoutState; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ShooterGame.DebugCustomTeamColor
// Size: 0x10 (Inherited: 0x00)
struct FDebugCustomTeamColor {
	struct FName Team; // 0x00(0x0c)
	struct FColor TeamColor; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.CustomTeamColor
// Size: 0x10 (Inherited: 0x00)
struct FCustomTeamColor {
	struct UBaseTeamComponent* Team; // 0x00(0x08)
	struct FColor TeamColor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresPlatformMatchInfo
// Size: 0x10 (Inherited: 0x00)
struct FAresPlatformMatchInfo {
	struct FString MatchID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresHeightDifference
// Size: 0x28 (Inherited: 0x00)
struct FAresHeightDifference {
	struct FCanvasIcon HeightIcon; // 0x00(0x18)
	struct FVector2D OffsetFromParentIcon; // 0x18(0x08)
	float HeightDifference; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.ClientErrorMessage
// Size: 0x20 (Inherited: 0x00)
struct FClientErrorMessage {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AnnouncerHUD
// Size: 0x04 (Inherited: 0x00)
struct FAnnouncerHUD {
	float PortraitScale; // 0x00(0x04)
};

// ScriptStruct ShooterGame.CharacterHUD
// Size: 0x60 (Inherited: 0x00)
struct FCharacterHUD {
	struct UMaterialInstanceConstant* SmokeScreenMaterial; // 0x00(0x08)
	struct FName SmokeScreenMaterialParameter; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMaterialInstanceDynamic* SmokeScreenMaterialInstance; // 0x18(0x08)
	struct UParticleSystem* SmokeScreenParticleSystem; // 0x20(0x08)
	struct FName SmokeScreenParticleSystemParameter; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UParticleSystemComponent* SmokeScreenParticleSystemComponent; // 0x38(0x08)
	float MinCharacterNameTextScale; // 0x40(0x04)
	float MaxCharacterNameTextScale; // 0x44(0x04)
	float MinNameTextScaleDistance; // 0x48(0x04)
	float MaxNameTextScaleDistance; // 0x4c(0x04)
	float MinNameClipScaleDistance; // 0x50(0x04)
	float MaxNameClipScaleDistance; // 0x54(0x04)
	float MinDistanceNameClipRadius; // 0x58(0x04)
	float MaxDistanceNameClipRadius; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.AresIntentionTargetDrawInfo
// Size: 0x58 (Inherited: 0x00)
struct FAresIntentionTargetDrawInfo {
	struct TMap<struct AShooterPlayerState*, struct FAresPlayerIntention> AssignedIntentions; // 0x00(0x50)
	bool bDrawHighlighted; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ShooterGame.AresPlayerIntention
// Size: 0x0c (Inherited: 0x00)
struct FAresPlayerIntention {
	struct TWeakObjectPtr<struct AKeyLocationObject> Target; // 0x00(0x08)
	enum class EAresPlayerIntentionType IntentionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresDebugHudTuning
// Size: 0x80 (Inherited: 0x00)
struct FAresDebugHudTuning {
	float RectangleDrawThickness; // 0x00(0x04)
	struct FColor RectangleDrawColor; // 0x04(0x04)
	struct FAresHudFontParams NameTextFontParams; // 0x08(0x70)
	float HudAlpha; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.AresHudTuning
// Size: 0x04 (Inherited: 0x00)
struct FAresHudTuning {
	float SymmetricFontScalingThreshold; // 0x00(0x04)
};

// ScriptStruct ShooterGame.AresHUDDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FAresHUDDebugMessage {
	char pad_0[0x10]; // 0x00(0x10)
	float ExpireTime; // 0x10(0x04)
	enum class EDebugMessagePosition Position; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.AresHUDDebugTextLine
// Size: 0x18 (Inherited: 0x00)
struct FAresHUDDebugTextLine {
	struct FString ScreenMessage; // 0x00(0x10)
	struct FColor DisplayColor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.PreDisconnectReasonInfo
// Size: 0x20 (Inherited: 0x00)
struct FPreDisconnectReasonInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.VisualizeRestoreData
// Size: 0xa0 (Inherited: 0x00)
struct FVisualizeRestoreData {
	struct TMap<struct UPrimitiveComponent*, struct FVisualizeRestoreComponent> RestoreMap; // 0x00(0x50)
	struct TMap<struct UDecalComponent*, struct FVisualizeRestoreComponent> DecalRestoreMap; // 0x50(0x50)
};

// ScriptStruct ShooterGame.VisualizeRestoreComponent
// Size: 0x18 (Inherited: 0x00)
struct FVisualizeRestoreComponent {
	bool bHidden; // 0x00(0x01)
	bool bComponentHiddenInGame; // 0x01(0x01)
	bool bActorHiddenInGame; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct UMaterialInterface*> SavedMaterials; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ExplicitFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FExplicitFloatCurve {
	struct FRuntimeFloatCurve Curve; // 0x00(0x88)
};

// ScriptStruct ShooterGame.ClassInclusionExclusionFilter
// Size: 0x50 (Inherited: 0x00)
struct FClassInclusionExclusionFilter {
	struct TArray<struct TSoftClassPtr<UObject>> IncludedClasses; // 0x00(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ExcludedClasses; // 0x10(0x10)
	struct TSoftClassPtr<UObject> MustHaveComponent; // 0x20(0x30)
};

// ScriptStruct ShooterGame.NormalDistributionParameters
// Size: 0x08 (Inherited: 0x00)
struct FNormalDistributionParameters {
	float Mean; // 0x00(0x04)
	float StdDev; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresDebugTextReplicated
// Size: 0x18 (Inherited: 0x00)
struct FAresDebugTextReplicated {
	struct FString Text; // 0x00(0x10)
	float LifeTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresDebugLineReplicated
// Size: 0x2c (Inherited: 0x00)
struct FAresDebugLineReplicated {
	struct FVector LineStart; // 0x00(0x0c)
	struct FVector LineEnd; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	bool bPersistentLines; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float LifeTime; // 0x20(0x04)
	char DepthPriority; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float Thickness; // 0x28(0x04)
};

// ScriptStruct ShooterGame.AresDebugSphereReplicated
// Size: 0x24 (Inherited: 0x00)
struct FAresDebugSphereReplicated {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	int32_t Segments; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
	bool bPersistentLines; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LifeTime; // 0x1c(0x04)
	char DepthPriority; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct ShooterGame.AresGameRewardReplicated
// Size: 0x30 (Inherited: 0x00)
struct FAresGameRewardReplicated {
	struct FName RewardName; // 0x00(0x0c)
	struct FAresGameReward Reward; // 0x0c(0x24)
};

// ScriptStruct ShooterGame.AresGameRewardTuning
// Size: 0x58 (Inherited: 0x00)
struct FAresGameRewardTuning {
	struct FName RewardName; // 0x00(0x0c)
	struct FName RewardDisplayName; // 0x0c(0x0c)
	struct FText RewardDisplayText; // 0x18(0x18)
	struct FAresGameReward DefaultReward; // 0x30(0x24)
	enum class EAresRewardGrantStrategy WhenToGrantReward; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct ShooterGame.AresGameRewardMultiplier
// Size: 0x24 (Inherited: 0x00)
struct FAresGameRewardMultiplier {
	float Multipliers[0x9]; // 0x00(0x24)
};

// ScriptStruct ShooterGame.AresHitImpactParticle
// Size: 0x18 (Inherited: 0x00)
struct FAresHitImpactParticle {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UCurveFloat* ScaleDistance; // 0x08(0x08)
	enum class EAresHitImpactParticleOrientation Orientation; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresWaveSpawnInfo
// Size: 0x18 (Inherited: 0x00)
struct FAresWaveSpawnInfo {
	struct TArray<struct AActor*> WaveMinionClasses; // 0x00(0x10)
	float SpawnFrequency; // 0x10(0x04)
	float SpawnTimeRemaining; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresInputInterpolant
// Size: 0x14 (Inherited: 0x00)
struct FAresInputInterpolant {
	float InputRangeStart; // 0x00(0x04)
	float InputRangeEnd; // 0x04(0x04)
	float OutputRangeStart; // 0x08(0x04)
	float OutputRangeEnd; // 0x0c(0x04)
	enum class EAresInterpolationFunction InterpolationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.AresPlayerRoundInfo
// Size: 0x14 (Inherited: 0x00)
struct FAresPlayerRoundInfo {
	int32_t RoundNumber; // 0x00(0x04)
	int32_t StartOfRoundMoney; // 0x04(0x04)
	int32_t StartOfRoundLoadoutValue; // 0x08(0x04)
	int32_t EndOfRoundMoney; // 0x0c(0x04)
	int32_t EndOfRoundLoadoutValue; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AresRoundResult
// Size: 0x20 (Inherited: 0x00)
struct FAresRoundResult {
	struct FName WinningTeam; // 0x00(0x0c)
	enum class EAresRoundOutcome RoundResult; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct UBaseTeamComponent*> EliminatedTeams; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ShooterGameTimeMarker
// Size: 0x0c (Inherited: 0x00)
struct FShooterGameTimeMarker {
	float PausableUndilatedWorldTime; // 0x00(0x04)
	int32_t RoundNumber; // 0x04(0x04)
	enum class EAresGamePhase GamePhase; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.DegradedNetworkSimulationPresets
// Size: 0x10 (Inherited: 0x00)
struct FDegradedNetworkSimulationPresets {
	struct TArray<struct FNamedNetworkPresets> Presets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.NamedNetworkPresets
// Size: 0x88 (Inherited: 0x00)
struct FNamedNetworkPresets {
	struct FString Name; // 0x00(0x10)
	struct FNetworkDegradationSettings Mean; // 0x10(0x3c)
	struct FNetworkDegradationSettings StdDev; // 0x4c(0x3c)
};

// ScriptStruct ShooterGame.NetworkDegradationSettings
// Size: 0x3c (Inherited: 0x00)
struct FNetworkDegradationSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LagMean; // 0x04(0x04)
	float LagVariance; // 0x08(0x04)
	float BaselinePacketLoss; // 0x0c(0x04)
	struct FBurstPacketLossSettings BurstLoss; // 0x10(0x2c)
};

// ScriptStruct ShooterGame.BurstPacketLossSettings
// Size: 0x2c (Inherited: 0x00)
struct FBurstPacketLossSettings {
	bool bSimulateBurstLoss; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NextStartTime; // 0x04(0x04)
	float NextDurationMS; // 0x08(0x04)
	float NextLossPercentage; // 0x0c(0x04)
	bool bIsActive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FNormalDistributionParameters DurationMs; // 0x14(0x08)
	struct FNormalDistributionParameters PeriodSeconds; // 0x1c(0x08)
	struct FNormalDistributionParameters LossPercentage; // 0x24(0x08)
};

// ScriptStruct ShooterGame.CurrentNetworkSimulationSettings
// Size: 0x18 (Inherited: 0x00)
struct FCurrentNetworkSimulationSettings {
	struct FString PresetName; // 0x00(0x10)
	bool bEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.SkeletalPoseSnapshot
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalPoseSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t FrameCounter; // 0x08(0x08)
	bool bOnDemand; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FTransform> ComponentSpaceTransforms; // 0x18(0x10)
};

// ScriptStruct ShooterGame.SniperCrosshairMaterial
// Size: 0x40 (Inherited: 0x00)
struct FSniperCrosshairMaterial {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName DistortionParameterName; // 0x08(0x0c)
	struct FVector2D DrawExtents; // 0x14(0x08)
	enum class ESniperCrosshairMaterialType MaterialType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName ColorParameterName; // 0x20(0x0c)
	struct FName OpacityParameterName; // 0x2c(0x0c)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x38(0x08)
};

// ScriptStruct ShooterGame.SpawnActorInfo
// Size: 0x50 (Inherited: 0x00)
struct FSpawnActorInfo {
	struct FGameFeatureSubclass ActorClass; // 0x00(0x18)
	struct AActor* ActorType; // 0x18(0x08)
	struct FTransform Offset; // 0x20(0x30)
};

// ScriptStruct ShooterGame.SpawnPointDebugData
// Size: 0xd8 (Inherited: 0x00)
struct FSpawnPointDebugData {
	struct FSpawnPointData SpawnPointData; // 0x00(0x78)
	struct FVector SpawnPointLocation; // 0x78(0x0c)
	float HalfHeight; // 0x84(0x04)
	float Radius; // 0x88(0x04)
	struct FRotator Rotation; // 0x8c(0x0c)
	bool bInitialSpawnPoint; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString SpawnPointActorName; // 0xa0(0x10)
	float FFATeamScore; // 0xb0(0x04)
	int32_t FFATeamNumVisibleEnemyCharacters; // 0xb4(0x04)
	bool FFATeamSpawnPointDataStale; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float AttackerTeamScore; // 0xbc(0x04)
	int32_t AttackerTeamNumVisibleEnemyCharacters; // 0xc0(0x04)
	bool AttackerTeamSpawnPointDataStale; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float DefenderTeamScore; // 0xc8(0x04)
	int32_t DefenderTeamNumVisibleEnemyCharacters; // 0xcc(0x04)
	bool DefenderTeamSpawnPointDataStale; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct ShooterGame.FixedRateDecayForStability
// Size: 0xa0 (Inherited: 0x00)
struct FFixedRateDecayForStability {
	struct FRuntimeFloatCurve DecayRateAtStability; // 0x00(0x88)
	float AdditionalDecayRate; // 0x88(0x04)
	enum class EDecayBehaviorBelowDesired IncreaseBehaviorWhenNotFiring; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float IncreaseRate; // 0x90(0x04)
	float CurrentValue; // 0x94(0x04)
	float CurrentDecayStartValue; // 0x98(0x04)
	float CurrentDecayStartTime; // 0x9c(0x04)
};

// ScriptStruct ShooterGame.StabilityFiringValues
// Size: 0x10 (Inherited: 0x00)
struct FStabilityFiringValues {
	float StabilityIndex; // 0x00(0x04)
	float Error; // 0x04(0x04)
	float PitchRecoil; // 0x08(0x04)
	float YawRecoil; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.YawDirectionManipulator
// Size: 0x2c (Inherited: 0x00)
struct FYawDirectionManipulator {
	float BaseYawSwitchChance; // 0x00(0x04)
	float YawSwitchStabilityMultipliers[0x6]; // 0x04(0x18)
	enum class EStabilityInterpolationType YawSwitchChanceIncreaseInterpolationType; // 0x1c(0x01)
	enum class EStabilityInterpolationType YawSwitchChanceRecoveryInterpolationType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float TimeToSwitchYaw; // 0x20(0x04)
	enum class EStabilityInterpolationType YawSwitchOverInterpolationType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float ProtectedBulletCount; // 0x28(0x04)
};

// ScriptStruct ShooterGame.StabilityInterpolation
// Size: 0x64 (Inherited: 0x00)
struct FStabilityInterpolation {
	struct FStabilityInterpolationVariable InterpolationVariables[0x5]; // 0x00(0x64)
};

// ScriptStruct ShooterGame.StabilityInterpolationVariable
// Size: 0x14 (Inherited: 0x00)
struct FStabilityInterpolationVariable {
	float StartValue; // 0x00(0x04)
	float TargetValue; // 0x04(0x04)
	float InterpolationTimeRemaining; // 0x08(0x04)
	float InterpolationDuration; // 0x0c(0x04)
	enum class EStabilityInterpolationType InterpolationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.StabilityVariable
// Size: 0x7c8 (Inherited: 0x00)
struct FStabilityVariable {
	struct FRuntimeFloatCurve FiringCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve MovementCurves[0x6]; // 0x88(0x330)
	struct FRuntimeFloatCurve TaggingOverrideCurves[0x6]; // 0x3b8(0x330)
	float StabilityStateMultipliers[0x6]; // 0x6e8(0x18)
	float ADSStabilityMultipliers[0x6]; // 0x700(0x18)
	float ADSStabilityAddends[0x6]; // 0x718(0x18)
	struct FRuntimeFloatCurve CrouchingOrInZoomStabilityStateModifier; // 0x730(0x88)
	char pad_7B8[0x10]; // 0x7b8(0x10)
};

// ScriptStruct ShooterGame.StabilityValuePercents
// Size: 0x14 (Inherited: 0x00)
struct FStabilityValuePercents {
	struct FErrorValuePercents Error; // 0x00(0x0c)
	struct FRecoilValuePercents Recoil; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.RecoilValuePercents
// Size: 0x08 (Inherited: 0x00)
struct FRecoilValuePercents {
	float PitchPercent; // 0x00(0x04)
	float YawPercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ErrorValuePercents
// Size: 0x0c (Inherited: 0x00)
struct FErrorValuePercents {
	float FiringErrorPercent; // 0x00(0x04)
	float MovementErrorPercent; // 0x04(0x04)
	float TotalErrorPercent; // 0x08(0x04)
};

// ScriptStruct ShooterGame.CameraTuning
// Size: 0x250 (Inherited: 0x00)
struct FCameraTuning {
	struct FCameraFollowTuning CameraFollowTuning; // 0x00(0x118)
	struct FCameraPopTuning CameraPopTuning; // 0x118(0x120)
	struct FAdsCameraPopTuning AdsCameraPopTuning; // 0x238(0x08)
	struct FAdsCameraShakeTuning AdsCameraShakeTuning; // 0x240(0x08)
	float AdsForwardOffset; // 0x248(0x04)
	bool bAdsAnimationEnabled; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
};

// ScriptStruct ShooterGame.AdsCameraShakeTuning
// Size: 0x08 (Inherited: 0x00)
struct FAdsCameraShakeTuning {
	float RotationCameraShakePercent; // 0x00(0x04)
	float TranslationCameraShakePercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AdsCameraPopTuning
// Size: 0x08 (Inherited: 0x00)
struct FAdsCameraPopTuning {
	float WeaponPitchCameraPopPercent; // 0x00(0x04)
	float WeaponYawCameraPopPercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.CameraPopTuning
// Size: 0x120 (Inherited: 0x00)
struct FCameraPopTuning {
	struct FRuntimeFloatCurve PitchPopCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve YawPopCurve; // 0x88(0x88)
	float PitchMinPop; // 0x110(0x04)
	float PitchMaxPop; // 0x114(0x04)
	float YawMinPop; // 0x118(0x04)
	float YawMaxPop; // 0x11c(0x04)
};

// ScriptStruct ShooterGame.CameraFollowTuning
// Size: 0x118 (Inherited: 0x00)
struct FCameraFollowTuning {
	float PitchRecoilFollowPercent; // 0x00(0x04)
	float YawRecoilFollowPercent; // 0x04(0x04)
	struct FRuntimeFloatCurve PitchFollowPercentCurve; // 0x08(0x88)
	struct FRuntimeFloatCurve YawFollowPercentCurve; // 0x90(0x88)
};

// ScriptStruct ShooterGame.StateContext
// Size: 0x18 (Inherited: 0x00)
struct FStateContext {
	struct UStateComponent* CurrentState; // 0x00(0x08)
	struct UStateTransitionContext* TransitionContext; // 0x08(0x08)
	float AuthStartWorldTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.StateMetadata
// Size: 0x04 (Inherited: 0x00)
struct FStateMetadata {
	float TimeForNextTick; // 0x00(0x04)
};

// ScriptStruct ShooterGame.StateTransition
// Size: 0x20 (Inherited: 0x00)
struct FStateTransition {
	bool bIsSet; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UStateComponent* NextState; // 0x08(0x08)
	struct UStateTransitionContext* TransitionContext; // 0x10(0x08)
	float DeltaTimeConsumed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.RevealInfo
// Size: 0x08 (Inherited: 0x00)
struct FRevealInfo {
	bool bInRevealRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RangeChangeTimestamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.EntitlementTypeInfo
// Size: 0xd0 (Inherited: 0x00)
struct FEntitlementTypeInfo {
	enum class EAresContentType AresContentType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ItemTypeUUID; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSet<struct FOwnedEntitlement> OwnedEntitlements; // 0x18(0x50)
	struct TSet<struct FGuid> OwnedItems; // 0x68(0x50)
	bool bInitialized; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FMulticastInlineDelegate OnChangeDelegate; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.OwnedEntitlement
// Size: 0x34 (Inherited: 0x00)
struct FOwnedEntitlement {
	struct FGuid EntitlementTypeID; // 0x00(0x10)
	enum class EAresContentType TypeID; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ServiceId; // 0x14(0x10)
	struct FGuid InstanceId; // 0x24(0x10)
};

// ScriptStruct ShooterGame.StoreOfferReward
// Size: 0x30 (Inherited: 0x00)
struct FStoreOfferReward {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct URewardModel* RewardModel; // 0x28(0x08)
};

// ScriptStruct ShooterGame.WalletCurrency
// Size: 0x58 (Inherited: 0x00)
struct FWalletCurrency {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, int32_t> subCurrencies; // 0x08(0x50)
};

// ScriptStruct ShooterGame.EntitlementsRMSPayload
// Size: 0x50 (Inherited: 0x00)
struct FEntitlementsRMSPayload {
	struct FString ItemId; // 0x00(0x10)
	struct FString entitlementId; // 0x10(0x10)
	struct FString resourceOperation; // 0x20(0x10)
	struct FString EntitlementTypeID; // 0x30(0x10)
	struct FString ItemTypeID; // 0x40(0x10)
};

// ScriptStruct ShooterGame.OrderRMSPayload
// Size: 0x40 (Inherited: 0x00)
struct FOrderRMSPayload {
	struct FString eventTypeId; // 0x00(0x10)
	struct FString OrderID; // 0x10(0x10)
	struct FString EventType; // 0x20(0x10)
	struct FString Status; // 0x30(0x10)
};

// ScriptStruct ShooterGame.GetEntitlementsResponse
// Size: 0x20 (Inherited: 0x00)
struct FGetEntitlementsResponse {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct TArray<struct FStoreEntitlement> Entitlements; // 0x10(0x10)
};

// ScriptStruct ShooterGame.StoreEntitlement
// Size: 0x30 (Inherited: 0x00)
struct FStoreEntitlement {
	struct FGuid TypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	struct FGuid InstanceId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.GetOffersResponse
// Size: 0x20 (Inherited: 0x00)
struct FGetOffersResponse {
	struct TArray<struct UStoreOffer*> Offers; // 0x00(0x10)
	struct TArray<struct FUpgradeCurrencyOfferResponse> UpgradeCurrencyOffers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.UpgradeCurrencyOfferResponse
// Size: 0x20 (Inherited: 0x00)
struct FUpgradeCurrencyOfferResponse {
	struct FGuid OfferId; // 0x00(0x10)
	struct FGuid StorefrontItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GetStorefrontResponseV2
// Size: 0xa8 (Inherited: 0x00)
struct FGetStorefrontResponseV2 {
	struct FBundleLayout FeaturedBundle; // 0x00(0x60)
	struct FSkinsPanelLayout SkinsPanelLayout; // 0x60(0x18)
	struct FBonusStoreStorefront BonusStore; // 0x78(0x18)
	struct FJuiceBoxStorefront JuiceBoxStore; // 0x90(0x18)
};

// ScriptStruct ShooterGame.JuiceBoxStorefront
// Size: 0x18 (Inherited: 0x00)
struct FJuiceBoxStorefront {
	struct TArray<struct FJuiceBoxOffer> Offers; // 0x00(0x10)
	bool IsEligibleForJuice; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.JuiceBoxOffer
// Size: 0x4c (Inherited: 0x00)
struct FJuiceBoxOffer {
	struct FGuid JuiceBoxOfferID; // 0x00(0x10)
	struct FGuid StorefrontItemId; // 0x10(0x10)
	struct FGuid JuiceBoxID; // 0x20(0x10)
	int32_t Amount; // 0x30(0x04)
	int32_t BonusAmount; // 0x34(0x04)
	struct FGuid PurchaseCurrency; // 0x38(0x10)
	int32_t PurchaseCost; // 0x48(0x04)
};

// ScriptStruct ShooterGame.BonusStoreStorefront
// Size: 0x18 (Inherited: 0x00)
struct FBonusStoreStorefront {
	struct TArray<struct FBonusStoreOfferDTO> BonusStoreOffers; // 0x00(0x10)
	int32_t BonusStoreRemainingDurationInSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.BonusStoreOfferDTO
// Size: 0x78 (Inherited: 0x00)
struct FBonusStoreOfferDTO {
	struct FGuid BonusOfferID; // 0x00(0x10)
	struct UStoreOffer* Offer; // 0x10(0x08)
	int32_t DiscountPercent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FGuid, int32_t> DiscountCosts; // 0x20(0x50)
	bool IsSeen; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ShooterGame.SkinsPanelLayout
// Size: 0x18 (Inherited: 0x00)
struct FSkinsPanelLayout {
	struct TArray<struct FGuid> SingleItemOffers; // 0x00(0x10)
	int32_t SingleItemOffersRemainingDurationInSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.BundleLayout
// Size: 0x60 (Inherited: 0x00)
struct FBundleLayout {
	struct FStorefrontBundle Bundle; // 0x00(0x48)
	struct TArray<struct FStorefrontBundle> Bundles; // 0x48(0x10)
	int32_t BundleRemainingDurationInSeconds; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.StorefrontBundle
// Size: 0x48 (Inherited: 0x00)
struct FStorefrontBundle {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid DataAssetID; // 0x10(0x10)
	struct FGuid CurrencyID; // 0x20(0x10)
	struct TArray<struct FStorefrontBundleItem> Items; // 0x30(0x10)
	int32_t DurationRemainingInSeconds; // 0x40(0x04)
	bool WholesaleOnly; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ShooterGame.StorefrontBundleItem
// Size: 0x48 (Inherited: 0x00)
struct FStorefrontBundleItem {
	struct FEntitlementReward item; // 0x00(0x28)
	int32_t BasePrice; // 0x28(0x04)
	struct FGuid CurrencyID; // 0x2c(0x10)
	float DiscountPercent; // 0x3c(0x04)
	int32_t DiscountedPrice; // 0x40(0x04)
	bool IsPromoItem; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ShooterGame.GetStorefrontRequest
// Size: 0x10 (Inherited: 0x00)
struct FGetStorefrontRequest {
	struct FString IDToken; // 0x00(0x10)
};

// ScriptStruct ShooterGame.OpenJuiceBoxRequest
// Size: 0xa8 (Inherited: 0x00)
struct FOpenJuiceBoxRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid JuiceBoxID; // 0x10(0x10)
	int32_t OpenQuantity; // 0x20(0x04)
	int32_t ExpectedInInventory; // 0x24(0x04)
	struct FOrderMetadata MetaData; // 0x28(0x80)
};

// ScriptStruct ShooterGame.CreateJuiceOrderRequest
// Size: 0x120 (Inherited: 0x00)
struct FCreateJuiceOrderRequest {
	char JuiceOrderType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid XID; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FOrderMetadata MetaData; // 0x18(0x80)
	struct FJuiceCraftRewards ExpectedRewards; // 0x98(0x38)
	struct TMap<struct FGuid, int32_t> ExpectedCosts; // 0xd0(0x50)
};

// ScriptStruct ShooterGame.JuiceCraftRewards
// Size: 0x38 (Inherited: 0x00)
struct FJuiceCraftRewards {
	struct FItemProgressionDTO ExpectedProgression; // 0x00(0x18)
	struct TArray<struct FEntitlementReward> ExpectedEntitlementRewards; // 0x18(0x10)
	struct TArray<struct FWalletReward> ExpectedWalletRewards; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ItemProgressionDTO
// Size: 0x18 (Inherited: 0x00)
struct FItemProgressionDTO {
	struct FGuid ItemProgressionDefinitionID; // 0x00(0x10)
	uint32_t CurrentTier; // 0x10(0x04)
	uint32_t NewTier; // 0x14(0x04)
};

// ScriptStruct ShooterGame.CreateBundleOrderRequest
// Size: 0x100 (Inherited: 0x00)
struct FCreateBundleOrderRequest {
	struct FGuid XID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> ExpectedCosts; // 0x10(0x50)
	struct TArray<struct FEntitlementReward> ExpectedEntitlementRewards; // 0x60(0x10)
	struct TArray<struct FWalletReward> ExpectedWalletRewards; // 0x70(0x10)
	struct FOrderMetadata MetaData; // 0x80(0x80)
};

// ScriptStruct ShooterGame.RevealNightMarketOffersRequest
// Size: 0x10 (Inherited: 0x00)
struct FRevealNightMarketOffersRequest {
	struct TArray<struct FGuid> RevealedOfferIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CreateOrderRequest
// Size: 0x100 (Inherited: 0x00)
struct FCreateOrderRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid OfferId; // 0x10(0x10)
	struct TMap<struct FGuid, int32_t> PurchasePrice; // 0x20(0x50)
	struct FString IDToken; // 0x70(0x10)
	struct FOrderMetadata MetaData; // 0x80(0x80)
};

// ScriptStruct ShooterGame.QueryWalletRequest
// Size: 0x04 (Inherited: 0x00)
struct FQueryWalletRequest {
	int32_t QueryType; // 0x00(0x04)
};

// ScriptStruct ShooterGame.GetWalletResponse
// Size: 0x50 (Inherited: 0x00)
struct FGetWalletResponse {
	struct TMap<struct FGuid, int32_t> Balances; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ChromaInspectEvent
// Size: 0x70 (Inherited: 0x00)
struct FChromaInspectEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FString ClientSessionID; // 0x20(0x10)
	struct FString OfferType; // 0x30(0x10)
	struct FString OfferId; // 0x40(0x10)
	struct FString ItemId; // 0x50(0x10)
	struct FString ChromaID; // 0x60(0x10)
};

// ScriptStruct ShooterGame.StoreInteractionEvent
// Size: 0x70 (Inherited: 0x00)
struct FStoreInteractionEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FString ClientSessionID; // 0x20(0x10)
	struct FString OfferType; // 0x30(0x10)
	struct FString EventType; // 0x40(0x10)
	struct FString OfferId; // 0x50(0x10)
	struct FString ItemId; // 0x60(0x10)
};

// ScriptStruct ShooterGame.StrategicOutcomeOfRound
// Size: 0x40 (Inherited: 0x00)
struct FStrategicOutcomeOfRound {
	int32_t RoundNumber; // 0x00(0x04)
	enum class EAresRoundOutcome RoundOutcome; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UBaseTeamComponent* RoundVictor; // 0x08(0x08)
	struct TArray<struct FPlayerOutcomeOfRound> PlayerDeaths; // 0x10(0x10)
	struct TArray<struct AShooterPlayerState*> RemainingRedPlayers; // 0x20(0x10)
	struct TArray<struct AShooterPlayerState*> RemainingBluePlayers; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PlayerOutcomeOfRound
// Size: 0x30 (Inherited: 0x00)
struct FPlayerOutcomeOfRound {
	struct FVector DeathLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRoundTimestamp DeathTime; // 0x10(0x18)
	struct AShooterPlayerState* PlayerState; // 0x28(0x08)
};

// ScriptStruct ShooterGame.StreamedVideoFile
// Size: 0x28 (Inherited: 0x00)
struct FStreamedVideoFile {
	enum class EStreamedVideoQuality Quality; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Culture; // 0x08(0x10)
	struct FFilePath FilePath; // 0x18(0x10)
};

// ScriptStruct ShooterGame.QueuedMessage
// Size: 0x58 (Inherited: 0x00)
struct FQueuedMessage {
	struct TArray<uint64_t> Data; // 0x00(0x10)
	struct UScriptStruct* StaticStructDef; // 0x10(0x08)
	enum class EQueuedMessageType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString EventID; // 0x20(0x10)
	struct FString LogMessage; // 0x30(0x10)
	struct FString MetricName; // 0x40(0x10)
	int32_t MetricValue; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ShooterGame.SampleLog
// Size: 0x38 (Inherited: 0x00)
struct FSampleLog {
	struct FString ID; // 0x00(0x10)
	struct FString SampleLevel; // 0x10(0x10)
	bool WasSampled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString Version; // 0x28(0x10)
};

// ScriptStruct ShooterGame.CertPinFailureEvent
// Size: 0x38 (Inherited: 0x00)
struct FCertPinFailureEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	int32_t NumberOfCertificates; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FString> Certificates; // 0x28(0x10)
};

// ScriptStruct ShooterGame.GameEventCommsMuteInGame
// Size: 0xb0 (Inherited: 0x00)
struct FGameEventCommsMuteInGame {
	struct FString ReporterPuuid; // 0x00(0x10)
	struct FString OffenderPuuid; // 0x10(0x10)
	struct FString MatchID; // 0x20(0x10)
	struct FString CommsMethod; // 0x30(0x10)
	struct FString MuteMethod; // 0x40(0x10)
	bool MuteValue; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString ReporterOffenderAllianceType; // 0x58(0x10)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString ReporterTeamName; // 0x90(0x10)
	struct FString OffenderTeamName; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.GameEventCommsMute
// Size: 0x68 (Inherited: 0x00)
struct FGameEventCommsMute {
	struct FString ReporterPuuid; // 0x00(0x10)
	struct FString OffenderPuuid; // 0x10(0x10)
	struct FString MatchID; // 0x20(0x10)
	struct FString CommsMethod; // 0x30(0x10)
	struct FString MuteMethod; // 0x40(0x10)
	bool MuteValue; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString ReporterOffenderAllianceType; // 0x58(0x10)
};

// ScriptStruct ShooterGame.TeleportLocationCheckRing
// Size: 0x08 (Inherited: 0x00)
struct FTeleportLocationCheckRing {
	float RingRadius; // 0x00(0x04)
	int32_t NumPoints; // 0x04(0x04)
};

// ScriptStruct ShooterGame.InitializeAliasRequest
// Size: 0x20 (Inherited: 0x00)
struct FInitializeAliasRequest {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GeneratedAccount
// Size: 0x80 (Inherited: 0x00)
struct FGeneratedAccount {
	struct FUserAccountInfo AccountInfo; // 0x00(0x70)
	struct FString GeneratedPassword; // 0x70(0x10)
};

// ScriptStruct ShooterGame.UserAccountInfo
// Size: 0x70 (Inherited: 0x00)
struct FUserAccountInfo {
	struct FGuid Puuid; // 0x00(0x10)
	struct FString Username; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString TagLine; // 0x30(0x10)
	struct FString Region; // 0x40(0x10)
	struct FString GasAccountId; // 0x50(0x10)
	struct FString CreatedDatetime; // 0x60(0x10)
};

// ScriptStruct ShooterGame.AtlasCreateAccountBody
// Size: 0x40 (Inherited: 0x00)
struct FAtlasCreateAccountBody {
	struct FString Username; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
	struct FString EmailAddress; // 0x20(0x10)
	struct FString BirthDate; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RSOTokenRequestBody
// Size: 0x20 (Inherited: 0x00)
struct FRSOTokenRequestBody {
	struct FString GrantType; // 0x00(0x10)
	struct TArray<struct FString> Scopes; // 0x10(0x10)
};

// ScriptStruct ShooterGame.TextChatDraftTextInfo
// Size: 0x18 (Inherited: 0x00)
struct FTextChatDraftTextInfo {
	struct FText DraftText; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ChatSettings
// Size: 0x01 (Inherited: 0x00)
struct FChatSettings {
	bool ChatFilterDisabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SetActiveConversationRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetActiveConversationRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MarkMessageReadRequest
// Size: 0x10 (Inherited: 0x00)
struct FMarkMessageReadRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.LeaveMucRequest
// Size: 0x10 (Inherited: 0x00)
struct FLeaveMucRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinMucRequest
// Size: 0x50 (Inherited: 0x00)
struct FJoinMucRequest {
	struct FString ID; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString TargetRegion; // 0x20(0x10)
	struct FString Password; // 0x30(0x10)
	struct FString Type; // 0x40(0x10)
};

// ScriptStruct ShooterGame.MUCParticipants
// Size: 0x10 (Inherited: 0x00)
struct FMUCParticipants {
	struct TArray<struct FMUCParticipant> Participants; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MUCParticipant
// Size: 0x60 (Inherited: 0x00)
struct FMUCParticipant {
	struct FString Cid; // 0x00(0x10)
	struct FString Pid; // 0x10(0x10)
	struct FString game_name; // 0x20(0x10)
	struct FString game_tag; // 0x30(0x10)
	struct FText Name; // 0x40(0x18)
	bool Muted; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ShooterGame.MucMessageRequest
// Size: 0x38 (Inherited: 0x00)
struct FMucMessageRequest {
	struct FString Cid; // 0x00(0x10)
	struct FText Message; // 0x10(0x18)
	struct FString Type; // 0x28(0x10)
};

// ScriptStruct ShooterGame.MUCMessages
// Size: 0x10 (Inherited: 0x00)
struct FMUCMessages {
	struct TArray<struct FMUCMessage> Messages; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MuteRequest
// Size: 0x18 (Inherited: 0x00)
struct FMuteRequest {
	struct FString Puuid; // 0x00(0x10)
	bool Muted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.MUCInfos
// Size: 0x10 (Inherited: 0x00)
struct FMUCInfos {
	struct TArray<struct FMUCInfo> Conversations; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MUCInfo
// Size: 0x30 (Inherited: 0x00)
struct FMUCInfo {
	struct FString Cid; // 0x00(0x10)
	enum class ETextChatRoomType RoomType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Type; // 0x18(0x10)
	bool MutedRestriction; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.TimedEvent
// Size: 0x1c (Inherited: 0x00)
struct FTimedEvent {
	float TimeSeconds; // 0x00(0x04)
	struct FDelegate EventToBroadcast; // 0x04(0x14)
	enum class EAresTimerDirection TimeDirection; // 0x18(0x01)
	bool bIsMarkedToRemove; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct ShooterGame.TournamentMatchupStatusUpdatedRMSNotification
// Size: 0x40 (Inherited: 0x00)
struct FTournamentMatchupStatusUpdatedRMSNotification {
	struct FString TournamentID; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FString NewStatus; // 0x20(0x10)
	struct FString OldStatus; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TournamentStatusUpdatedRMSNotification
// Size: 0x10 (Inherited: 0x00)
struct FTournamentStatusUpdatedRMSNotification {
	struct FString TournamentID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MatchupGameMetadata
// Size: 0x50 (Inherited: 0x00)
struct FMatchupGameMetadata {
	struct TMap<struct FString, int32_t> RosterScores; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentsTeamColorData
// Size: 0x40 (Inherited: 0x08)
struct FTournamentsTeamColorData : FTableRowBase {
	struct FText ColorName; // 0x08(0x18)
	struct FGuid Guid; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TracerEffects
// Size: 0x08 (Inherited: 0x00)
struct FTracerEffects {
	struct AAresTracerInterface* Template; // 0x00(0x08)
};

// ScriptStruct ShooterGame.TransformSnapshot
// Size: 0x50 (Inherited: 0x00)
struct FTransformSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	bool bWasTeleport; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct ShooterGame.DestinationURL
// Size: 0x20 (Inherited: 0x00)
struct FDestinationURL {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Host; // 0x08(0x10)
	int32_t Port; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.LoadingScreenTeam
// Size: 0x20 (Inherited: 0x00)
struct FLoadingScreenTeam {
	struct FName TeamID; // 0x00(0x0c)
	enum class EAresTeam Team; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FLoadingScreenPlayer> Players; // 0x10(0x10)
};

// ScriptStruct ShooterGame.LoadingScreenPlayer
// Size: 0x48 (Inherited: 0x00)
struct FLoadingScreenPlayer {
	struct FString Subject; // 0x00(0x10)
	bool bMe; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCharacterDataAsset* Character; // 0x18(0x08)
	struct UPlayerCardDataAsset* PlayerCard; // 0x20(0x08)
	struct UPlayerTitleDataAsset* PlayerTitle; // 0x28(0x08)
	int32_t AccountLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ULevelBorderDataAsset* LevelBorder; // 0x38(0x08)
	bool bHideAccountLevel; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.UIActionEvent
// Size: 0x60 (Inherited: 0x00)
struct FUIActionEvent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString EventPageName; // 0x30(0x10)
	struct FString ActionType; // 0x40(0x10)
	struct FString ActionTarget; // 0x50(0x10)
};

// ScriptStruct ShooterGame.AmmoHudInfo
// Size: 0x10 (Inherited: 0x00)
struct FAmmoHudInfo {
	struct FAmmoStoreHudInfo Magazine; // 0x00(0x08)
	struct FAmmoStoreHudInfo Reserve; // 0x08(0x08)
};

// ScriptStruct ShooterGame.AmmoStoreHudInfo
// Size: 0x08 (Inherited: 0x00)
struct FAmmoStoreHudInfo {
	int32_t Ammo; // 0x00(0x04)
	int32_t MaxAmmo; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AuthUsableUser
// Size: 0x08 (Inherited: 0x00)
struct FAuthUsableUser {
	struct UInteractableUserComponent* User; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ValueDisagreementTimerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FValueDisagreementTimerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ShooterGame.VanguardErrorEvent
// Size: 0x48 (Inherited: 0x00)
struct FVanguardErrorEvent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString Error; // 0x30(0x10)
	int32_t ErrorCode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.VoteSlashCommandEntry
// Size: 0x10 (Inherited: 0x00)
struct FVoteSlashCommandEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VoteRecord
// Size: 0x20 (Inherited: 0x00)
struct FVoteRecord {
	int32_t Round; // 0x00(0x04)
	int32_t VoteID; // 0x04(0x04)
	struct AGameplayVote* Vote; // 0x08(0x08)
	struct AShooterPlayerState* Requester; // 0x10(0x08)
	struct UGameplayVoteOptionComponent* Result; // 0x18(0x08)
};

// ScriptStruct ShooterGame.VoteQueue
// Size: 0x18 (Inherited: 0x08)
struct FVoteQueue : FAresTeamListEntry {
	struct TArray<struct AGameplayVote*> Queue; // 0x08(0x10)
};

// ScriptStruct ShooterGame.WallPenHitResult
// Size: 0xa8 (Inherited: 0x00)
struct FWallPenHitResult {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct ShooterGame.ImpactEffects
// Size: 0x28 (Inherited: 0x00)
struct FImpactEffects {
	struct AEffectContainer* ImpactEffects[0x5]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.WidgetAnimationSettings
// Size: 0x18 (Inherited: 0x00)
struct FWidgetAnimationSettings {
	float StartAtTime; // 0x00(0x04)
	float EndAtTime; // 0x04(0x04)
	int32_t NumLoopsToPlay; // 0x08(0x04)
	enum class EUMGSequencePlayMode PlayMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float PlaybackSpeed; // 0x10(0x04)
	bool bRestoreState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.WidgetLayoutData
// Size: 0x50 (Inherited: 0x00)
struct FWidgetLayoutData {
	struct TMap<struct FString, struct FWidgetLayoutPreset> Layouts; // 0x00(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutPreset
// Size: 0x58 (Inherited: 0x00)
struct FWidgetLayoutPreset {
	enum class EWidgetLayoutPresetType RootPresetIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FString, struct FWidgetLayout> WidgetTagToLayoutMap; // 0x08(0x50)
};

// ScriptStruct ShooterGame.WidgetLayout
// Size: 0x108 (Inherited: 0x00)
struct FWidgetLayout {
	struct FVector2D Position; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	float Opacity; // 0x0c(0x04)
	enum class EWidgetVisibilityState VisibilityState; // 0x10(0x01)
	bool AllowedForPreset; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TMap<enum class EWidgetLayoutSettingName, float> FloatSettings; // 0x18(0x50)
	struct TMap<enum class EWidgetLayoutSettingName, bool> BoolSettings; // 0x68(0x50)
	struct TMap<struct FString, struct FWidgetLayoutSettingValueMap> BoolSettingWeaponOverrides; // 0xb8(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutSettingValueMap
// Size: 0x50 (Inherited: 0x00)
struct FWidgetLayoutSettingValueMap {
	struct TMap<enum class EWidgetLayoutSettingName, bool> SettingMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutSettingOverrides
// Size: 0xa0 (Inherited: 0x00)
struct FWidgetLayoutSettingOverrides {
	struct TMap<enum class EWidgetLayoutSettingName, float> FloatSettings; // 0x00(0x50)
	struct TMap<enum class EWidgetLayoutSettingName, bool> BoolSettings; // 0x50(0x50)
};

// ScriptStruct ShooterGame.WidgetPool
// Size: 0x10 (Inherited: 0x00)
struct FWidgetPool {
	struct TArray<struct UUserWidget*> AvailableWidgets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ZoomLevelInfo
// Size: 0x0c (Inherited: 0x00)
struct FZoomLevelInfo {
	float Multiplier; // 0x00(0x04)
	bool bUseDefaultFov1P; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Fov1P; // 0x08(0x04)
};

// ScriptStruct ShooterGame.ZoomTransition
// Size: 0x24 (Inherited: 0x00)
struct FZoomTransition {
	struct FZoomTransitionDescription TransitionDescription; // 0x00(0x20)
	enum class EZoomTransitionState TransitionState; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct ShooterGame.ZoomTransitionDescription
// Size: 0x20 (Inherited: 0x00)
struct FZoomTransitionDescription {
	float SourceFov; // 0x00(0x04)
	float SourceFov1P; // 0x04(0x04)
	int32_t SourceZoomLevel; // 0x08(0x04)
	float TargetFov; // 0x0c(0x04)
	float TargetFov1P; // 0x10(0x04)
	int32_t TargetZoomLevel; // 0x14(0x04)
	float TotalTransitionTimeDuration; // 0x18(0x04)
	enum class EZoomCooldownOption CooldownOption; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.ZoomTransitionSettings
// Size: 0x14 (Inherited: 0x00)
struct FZoomTransitionSettings {
	float ZoomInInitialTimeDuration; // 0x00(0x04)
	float CosmeticZoomInTriggerPercent; // 0x04(0x04)
	float ZoomInSuccessiveTimeDuration; // 0x08(0x04)
	float ZoomOutTimeDuration; // 0x0c(0x04)
	float ZoomCooldownTimeDuration; // 0x10(0x04)
};

// ScriptStruct ShooterGame.ZoomValidStates
// Size: 0x20 (Inherited: 0x00)
struct FZoomValidStates {
	struct TArray<struct UScriptStateComponent*> StateList; // 0x00(0x10)
	bool bInvalidStates; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UScriptStateComponent* StateToTransitionTo; // 0x18(0x08)
};

