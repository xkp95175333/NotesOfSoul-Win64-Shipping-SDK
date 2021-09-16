// Enum NotesOfSoul.EEventType
enum class EEventType : uint8 {
	KnockDown_UI,
	SeizeSoul_UI,
	RepairElementSolt_UI,
	CompleteRepairElementSolt_UI,
	QuitTheGame_UI,
	Reconnection_UI,
	MatchTime_UI,
	LiftUp_UI,
	BaGuaRefresh_UI,
	UnlockFinalSkills_UI,
	GameEnd_UI,
	PropRefresh_UI,
	ElementRefresh_UI,
	TipsStartNightSkill_UI,
	LangrenShaSpeakingPhaseBegin_UI,
	LangrenShaVoteStageBegin_UI,
	EEventType_MAX,
};

// Enum NotesOfSoul.ENOSElementSlotType
enum class ENOSElementSlotType : uint8 {
	Bagua,
	Gold,
	Wood,
	Terra,
	Fire,
	Water,
	ENOSElementSlotType_MAX,
};

// Enum NotesOfSoul.EHealthState
enum class EHealthState : uint8 {
	Full,
	Damage,
	Crawl,
	Dead,
	RunningDog25Boy,
	EHealthState_MAX,
};

// Enum NotesOfSoul.EPlayerOnlineState
enum class EPlayerOnlineState : uint8 {
	Connecting,
	Connected,
	DisConnect,
	EPlayerOnlineState_MAX,
};

// Enum NotesOfSoul.ECharacterCategory
enum class ECharacterCategory : uint8 {
	None,
	Ghost,
	Human,
	Spectator,
	WolfMan,
	ECharacterCategory_MAX,
};

// Enum NotesOfSoul.EHumanType
enum class EHumanType : uint8 {
	InValid,
	Gold,
	Water,
	Wood,
	Fire,
	Terra,
	EHumanType_MAX,
};

// Enum NotesOfSoul.ENOSAbilityInputID
enum class ENOSAbilityInputID : uint8 {
	None,
	Confirm,
	Cancel,
	SprintKeyW,
	KeyboardS,
	All_KeyBoardTab,
	All_KeyBoardM,
	All_KeyBoardV,
	All_KeyBoardE,
	All_KeyboardK,
	All_SpaceBar,
	All_KeyBoardN,
	All_KeyBoardH,
	All_KeyBoardY,
	All_KeyBoardT,
	All_MouseMiddeButton,
	Human_MouseLeftButton,
	Human_MouseRightButton,
	Human_KeyboardR,
	Human_KeyboardF,
	Human_KeyboardG,
	Human_KeyboardX,
	Human_Key1,
	Human_Key2,
	Human_Key3,
	Human_Key4,
	Human_Key5,
	Human_KeyF1,
	Human_KeyF2,
	Human_KeyF3,
	Human_KeyboardQ,
	Human_KeyLeftShift,
	Human_KeyLeftCtrl,
	Human_KeyboardC,
	Human_LeftAlt,
	Ghost_MouseLeftButton,
	Ghost_MouseRightButton,
	Ghost_KeyBoard1,
	Ghost_KeyBoard2,
	Ghost_KeyBoard3,
	Ghost_KeyBoardR,
	Ghost_LeftShift,
	Ghost_KeyBoardZ,
	Ghost_KeyBoardF1,
	Ghost_KeyBoardF2,
	Ghost_KeyBoardF3,
	Ghost_KeyBoardF4,
	ENOSAbilityInputID_MAX,
};

// Enum NotesOfSoul.ECustomReplicatedEvent
enum class ECustomReplicatedEvent : uint8 {
	GameCustom1,
	GameCustom2,
	GameCustom3,
	GameCustom4,
	GameCustom5,
	GameCustom6,
	ECustomReplicatedEvent_MAX,
};

// Enum NotesOfSoul.EAudioPlayType
enum class EAudioPlayType : uint8 {
	SoundEffect,
	SoundNoLoop,
	SoundLoop,
	EAudioPlayType_MAX,
};

// Enum NotesOfSoul.E_PlayerActionType
enum class E_PlayerActionType : uint8 {
	PlayerWalk,
	PlayerRun,
	PlayerCrawlWalk,
	PlayerJump,
	PlayerCrouch,
	PlayerUnCrouch,
	PlayerLanded,
	GhostTrackHuman,
	PlayerBeAttacked,
	GhostHasAttacked,
	PlayerBeInjured,
	PlayerBeCrawled,
	PlayerBeCrawling,
	PlayerDeathOrKill,
	PlayerTreat,
	PlayerTreatComplete,
	PlayerHeartBeat,
	PlayerPickUpItem,
	PlayerThrowItem,
	DisplayHumanType,
	PlayerGlideLoop,
	E_PlayerActionType_MAX,
};

// Enum NotesOfSoul.EPawnModelArmSettingType
enum class EPawnModelArmSettingType : uint8 {
	Settlement,
	LRSVote,
	EPawnModelArmSettingType_MAX,
};

// Enum NotesOfSoul.EXingTiType
enum class EXingTiType : uint8 {
	None,
	XingTi_EyeLash,
	XingTi_Eyebrow,
	XingTi_FaceTatto,
	XingTi_BodyTatto,
	XingTi_Pinch,
	XingTi_Material,
	EXingTiType_MAX,
};

// Enum NotesOfSoul.ECameraOverlapType
enum class ECameraOverlapType : uint8 {
	OverLapNormal,
	OverLapGang,
	OverLapBigjump,
	OverLapWavnGUN,
	OverLapBow,
	OverLapPiSkillB,
	OverLapGhostCrouch,
	ECameraOverlapType_MAX,
};

// Enum NotesOfSoul.ECameraType
enum class ECameraType : uint8 {
	Normal,
	Vlaut,
	Climb,
	Duopo,
	Bigjump,
	CameraShihun,
	GhostSkillA,
	GhostSkillB,
	GhostSkillC,
	Glide,
	Cabinet,
	ButterFly,
	GhostTrail,
	YCXRSkill,
	PullHuman,
	ECameraType_MAX,
};

// Enum NotesOfSoul.EMaterialManageType
enum class EMaterialManageType : uint8 {
	priorityone,
	prioritytwo,
	prioritythree,
	priorityfour,
	EMaterialManageType_MAX,
};

// Enum NotesOfSoul.EFourthCommoditiesType
enum class EFourthCommoditiesType : uint8 {
	None,
	EFourthCommoditiesType_MAX,
};

// Enum NotesOfSoul.EThirdCommoditiesType
enum class EThirdCommoditiesType : uint8 {
	None,
	ZhongZi,
	ZuoWu,
	TouShi,
	FaShi,
	MianShi,
	ShangYi,
	BeiBu,
	XiaZhuang,
	XieZi,
	TuiJian,
	XianShi,
	DaoJu,
	EThirdCommoditiesType_MAX,
};

// Enum NotesOfSoul.EPageType
enum class EPageType : uint8 {
	None,
	Main,
	TaoZhuang,
	TouBu,
	ShangShen,
	XiaShen,
	LiBao,
	XingTi,
	WuQi,
	GuiWu,
	ShiHunDongZuo,
	ZhongZhi,
	KuangWu,
	BaoWu,
	XiaoFeiJiFen,
	SuiYu,
	Other,
	EPageType_MAX,
};

// Enum NotesOfSoul.EShopType
enum class EShopType : uint8 {
	None,
	OldCoinShop,
	RMBShop,
	SeedShop,
	ExchangeShop,
	GiveGiftShop,
	TreasuresShop,
	ItemMarket,
	Top_Up,
	EShopType_MAX,
};

// Enum NotesOfSoul.ECommodityType
enum class ECommodityType : uint8 {
	None,
	UpperCloth,
	LowerCloth,
	Head,
	Face,
	Back,
	Hair,
	Shoes,
	HumanSuit,
	GhostSuit,
	HunmanSocialMovements,
	GhostSocialMovements,
	HunmanMvpMovements,
	GhostMvpMovements,
	HunmanSound,
	GhostSound,
	GhostFog,
	HumanTalent,
	HumanItem,
	GhostItem,
	Seed,
	Crop,
	Ore,
	Treasure,
	IntimacyItem,
	Title,
	ExperienceCard,
	HumanNakedModel,
	GhostNakedModel,
	HumanWeapons,
	GhostWeapons,
	HeadPortrait,
	PictureFrame,
	Human,
	Ghost,
	ECommodityType_MAX,
};

// Enum NotesOfSoul.EAccessoriesType
enum class EAccessoriesType : uint8 {
	None,
	ConjoinedBody,
	UpperCloth,
	LowerCloth,
	Head,
	Face,
	Back,
	Flix,
	Hair,
	Shoes,
	Exclusive,
	GhostCloth,
	GhostFlix,
	GhostConjoinedBody,
	HumanSuit,
	GhostSuit,
	HumanNakedModel,
	GhostNakedModel,
	HumanWeapons,
	GhostWeapons,
	GhostFog,
	EAccessoriesType_MAX,
};

// Enum NotesOfSoul.EClothQualityType
enum class EClothQualityType : uint8 {
	None,
	White,
	Blue,
	Pruple,
	Golden,
	Red,
	EClothQualityType_MAX,
};

// Enum NotesOfSoul.ECharacterType
enum class ECharacterType : uint8 {
	None,
	Human,
	Ghost,
	ECharacterType_MAX,
};

// Enum NotesOfSoul.ESpectatorCamp
enum class ESpectatorCamp : uint8 {
	None,
	Human,
	Ghost,
	ESpectatorCamp_MAX,
};

// Enum NotesOfSoul.ESpectatorMode
enum class ESpectatorMode : uint8 {
	Follow,
	Spectator,
	God,
	ESpectatorMode_MAX,
};

// Enum NotesOfSoul.ENOS_DamageType
enum class ENOS_DamageType : uint8 {
	NormalAttack,
	Sliding,
	GhostSkill,
	GhostLongRangeSkill,
	HumanSkill,
	DropDown,
	CrashByJump,
	Other,
	ENOS_MAX,
};

// Enum NotesOfSoul.EMoveAxis
enum class EMoveAxis : uint8 {
	X,
	Y,
	Z,
	EMoveAxis_MAX,
};

// Enum NotesOfSoul.EIntimacyAwardType
enum class EIntimacyAwardType : uint8 {
	None,
	Coin,
	GhostItem,
	GhostSkill,
	HumanSkill,
	Item0,
	Item1,
	Item2,
	TreasureBox,
	Title0,
	Title1,
	Title2,
	HumanSkin0,
	HumanSkin1,
	HumanSkin2,
	HumanSkin3,
	HumanSkin4,
	HumanSkin5,
	HumanSkin6,
	HumanSkin7,
	GhostSkin0,
	EIntimacyAwardType_MAX,
};

// Enum NotesOfSoul.ELangRenShaPhase
enum class ELangRenShaPhase : uint8 {
	None,
	SpeakingStage,
	VoteState,
	ItemUse,
	VoteResultDisplay,
	ELangRenShaPhase_MAX,
};

// Enum NotesOfSoul.ENOSPropRefreshPlaces
enum class ENOSPropRefreshPlaces : uint8 {
	Dove,
	Ground,
	Box,
	ENOSPropRefreshPlaces_MAX,
};

// Enum NotesOfSoul.ENOSSpawnPointType
enum class ENOSSpawnPointType : uint8 {
	DoveSpawnPoint,
	ItemSpawnPoint,
	ElementBoxSpawnPoint,
	ElementSlotSpawnPoint,
	ENOSSpawnPointType_MAX,
};

// Enum NotesOfSoul.EAddFightScoreTerm
enum class EAddFightScoreTerm : uint8 {
	H_AuxiliaryScore_OpenProp,
	H_AuxiliaryScore_GetProp,
	H_AuxiliaryScore_RemedyOrRescueTeammate,
	H_AuxiliaryScore_SaveTeammate,
	H_AuxiliaryScore_RelieveTeammateDebuff,
	H_SurvivalScore_DismantleGhostPlaceStuff,
	H_SurvivalScore_BePursuit,
	H_BePursuitPerXSecondGetScore,
	H_SurvivalScore_EscapePursuit,
	H_EscapePursuitCD,
	H_SurvivalScore_CauseEffectPropHitGhost,
	H_SealScore_GetFragment,
	H_SealScore_SealEye,
	G_AttackScore_Soul,
	G_AttackScore_KnockDown,
	G_AttackScore_EatSoul,
	G_PursuitScore_FindHuman,
	G_FindHumanCD,
	G_PursuitScore_KeepPursuit,
	G_KeepPursuitPerXSecondGetScore,
	G_AttackScore_EliminateSevenVigour,
	G_DefenseScore_DefenseEye,
	G_DefenseEyeBaseScore,
	G_DefenseScore_HumanAbortEyeSeal,
	G_HumanAbortEyeSealAddScoreCD,
	EAddFightScoreTerm_MAX,
};

// Enum NotesOfSoul.EAddFightScoreType
enum class EAddFightScoreType : uint8 {
	HG_ScoreTypeOne,
	HG_ScoreTypeTwo,
	HG_ScoreTypeThree,
	HG_ScoreTypeEnd,
	HG_MAX,
};

// Enum NotesOfSoul.EMapHUDType
enum class EMapHUDType : uint8 {
	None,
	LoginGameMap,
	GhostRoomMap,
	HumanRoomMap,
	ReadyFight_Normal,
	FightMap_Normal,
	EMapHUDType_MAX,
};

// Enum NotesOfSoul.EPrintExtendMode
enum class EPrintExtendMode : uint8 {
	None,
	Normal,
	EPrintExtendMode_MAX,
};

// Enum NotesOfSoul.ESKillAction
enum class ESKillAction : uint8 {
	Skill_2,
	Skill_3,
	Skill_4,
	Skill_MAX,
};

// Enum NotesOfSoul.ESKillState
enum class ESKillState : uint8 {
	HoldGhostLamp,
	RemoteControlLamp,
	ESKillState_MAX,
};

// Enum NotesOfSoul.EPaperManState
enum class EPaperManState : uint8 {
	FallDown,
	Escape,
	Hit,
	Delivery,
	EPaperManState_MAX,
};

// Enum NotesOfSoul.XiaoXiaoJiangCurrentState
enum class XiaoXiaoJiangCurrentState : uint8 {
	Idle,
	Patrol,
	Chasing,
	Swoop,
	Hug,
	HugCD,
	NoHugCD,
	XiaoXiaoJiangCurrentState_MAX,
};

// Enum NotesOfSoul.EInvisibleType
enum class EInvisibleType : uint8 {
	ToGhost,
	ToHuman,
	ToAll,
	ToTarget,
	ToTargetNoInvisible,
	ToTargetsInvisible,
	ToTargetsNoInvisible,
	EInvisibleType_MAX,
};

// Enum NotesOfSoul.EPerspectiveType
enum class EPerspectiveType : uint8 {
	ToGhost,
	ToHuman,
	ToAll,
	ToTarget,
	EPerspectiveType_MAX,
};

// Enum NotesOfSoul.EPlayerMarkingPointType
enum class EPlayerMarkingPointType : uint8 {
	Path,
	Ghost,
	ElementSlot,
	ElementBox,
	Item,
	EPlayerMarkingPointType_MAX,
};

// Enum NotesOfSoul.EPlayerPunishType
enum class EPlayerPunishType : uint8 {
	Cheating,
	LessDistance,
	ChasePlayer,
	UnSkill,
	UnAttack,
	UnOpenItem,
	UnBoxing,
	UNActiveZhenYan,
	UnRescueOthersPlayer,
	DisConnected,
	ZuAnStyle,
	UnMoveOneMin,
	UnMoveTwoMin,
	ConfirmUnMove,
	EnableScreenShotUpload,
	EPlayerPunishType_MAX,
};

// Enum NotesOfSoul.EMovementState
enum class EMovementState : uint8 {
	Idel,
	Moveing,
	Rotation,
	Back,
	EMovementState_MAX,
};

// Enum NotesOfSoul.ESpiderState
enum class ESpiderState : uint8 {
	Idle,
	Patrol,
	Pursuit,
	Follow,
	ESpiderState_MAX,
};

// Enum NotesOfSoul.EGhostTalentType
enum class EGhostTalentType : uint8 {
	Exclusive,
	Curse,
	Seal,
	EGhostTalentType_MAX,
};

// Enum NotesOfSoul.EHumanTalentType
enum class EHumanTalentType : uint8 {
	Invalid,
	BaiHu,
	XuanWu,
	CangLong,
	ZhuQue,
	QiLin,
	EHumanTalentType_MAX,
};

// Enum NotesOfSoul.EDisableSkillsType
enum class EDisableSkillsType : uint8 {
	None,
	SkillsR,
	Skills1,
	Skills2,
	skills3,
	EDisableSkillsType_MAX,
};

// Enum NotesOfSoul.EWaitThreeDirection
enum class EWaitThreeDirection : uint8 {
	Forward,
	Right,
	Upward,
	Custom,
	EWaitThreeDirection_MAX,
};

// Enum NotesOfSoul.EWordsAudioType
enum class EWordsAudioType : uint8 {
	BeAttacked,
	Power,
	BeCure,
	Territory,
	ShiHun,
	EWordsAudioType_MAX,
};

// Enum NotesOfSoul.ESpawnBloodPoolResult
enum class ESpawnBloodPoolResult : uint8 {
	Success,
	TraceFail,
	TeleportCollision,
	NearElementSlot,
	NearBloodyPool,
	ESpawnBloodPoolResult_MAX,
};

// Enum NotesOfSoul.XiaoXiaoJiangBehaviourState
enum class XiaoXiaoJiangBehaviourState : uint8 {
	Idle,
	Walk,
	Run,
	Rotate,
	Swoop,
	HoldHuman,
	XiaoXiaoJiangBehaviourState_MAX,
};

// Enum NotesOfSoul.EPuppetState
enum class EPuppetState : uint8 {
	E_Idel,
	E_Start,
	E_Move,
	E_Element,
	E_Crouch,
	E_MAX,
};

// Enum NotesOfSoul.EPurchaseSeasonPassType
enum class EPurchaseSeasonPassType : uint8 {
	Senior_Normal,
	Senior_Additional_2,
	Senior_MAX,
};

// Enum NotesOfSoul.ESeasonPassType
enum class ESeasonPassType : uint8 {
	Normal,
	Senior,
	ESeasonPassType_MAX,
};

// Enum NotesOfSoul.EBroadcastType
enum class EBroadcastType : uint8 {
	BaGua,
	EBroadcastType_MAX,
};

// ScriptStruct NotesOfSoul.EventRelevantData
// Size: 0x40 (Inherited: 0x08)
struct FEventRelevantData : FTableRowBase {
	struct TArray<struct UObject*> RelevantObject; // 0x08(0x10)
	struct TArray<struct FString> RelevantString; // 0x18(0x10)
	struct TArray<float> RelevantFloat; // 0x28(0x10)
	enum class EEventType CurEventType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct NotesOfSoul.SettleInfo
// Size: 0x90 (Inherited: 0x00)
struct FSettleInfo {
	int64_t RoomID; // 0x00(0x08)
	int32_t IsCustomRoom; // 0x08(0x04)
	int32_t IsCrash; // 0x0c(0x04)
	int32_t WinCamp; // 0x10(0x04)
	int32_t MatchType; // 0x14(0x04)
	int32_t GameStartTime; // 0x18(0x04)
	int32_t GameEndTime; // 0x1c(0x04)
	struct TArray<struct FGhostSettle> GhostInfo; // 0x20(0x10)
	struct TArray<struct FHumanSettle> HumanInfo; // 0x30(0x10)
	struct TMap<enum class ENOSElementSlotType, int32_t> ElementSlotInfo; // 0x40(0x50)
};

// ScriptStruct NotesOfSoul.HumanSettle
// Size: 0x44 (Inherited: 0x00)
struct FHumanSettle {
	int32_t UID; // 0x00(0x04)
	bool bWin; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t AccountExp; // 0x08(0x04)
	float AddExpScale; // 0x0c(0x04)
	int32_t intimacy; // 0x10(0x04)
	float AddIntimacyScale; // 0x14(0x04)
	int32_t bGetBox; // 0x18(0x04)
	int32_t SoulCoin; // 0x1c(0x04)
	float AddSoulCoinScale; // 0x20(0x04)
	int32_t SealElementSlotNum; // 0x24(0x04)
	int32_t score; // 0x28(0x04)
	int32_t BravePoint; // 0x2c(0x04)
	int32_t UseItemTimes; // 0x30(0x04)
	int32_t CureAmount; // 0x34(0x04)
	int32_t PullNum; // 0x38(0x04)
	bool IsHasTeam; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t RoleId; // 0x40(0x04)
};

// ScriptStruct NotesOfSoul.GhostSettle
// Size: 0x3c (Inherited: 0x00)
struct FGhostSettle {
	int32_t UID; // 0x00(0x04)
	int32_t AccountExp; // 0x04(0x04)
	float AddExpScale; // 0x08(0x04)
	int32_t intimacy; // 0x0c(0x04)
	float AddIntimacyScale; // 0x10(0x04)
	int32_t bGetBox; // 0x14(0x04)
	int32_t SoulCoin; // 0x18(0x04)
	float AddSoulCoinScale; // 0x1c(0x04)
	int32_t score; // 0x20(0x04)
	int32_t GhostGetDownNum; // 0x24(0x04)
	int32_t GhostDieOutNum; // 0x28(0x04)
	int32_t BravePoint; // 0x2c(0x04)
	int32_t SubSoulsGain; // 0x30(0x04)
	bool IsHasTeam; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t RoleId; // 0x38(0x04)
};

// ScriptStruct NotesOfSoul.NOS_BUFFInfo
// Size: 0x0c (Inherited: 0x00)
struct FNOS_BUFFInfo {
	int32_t BuffID; // 0x00(0x04)
	float RemainTime; // 0x04(0x04)
	float Duration; // 0x08(0x04)
};

// ScriptStruct NotesOfSoul.NOS_PlayerActionSoundTable
// Size: 0x60 (Inherited: 0x08)
struct FNOS_PlayerActionSoundTable : FTableRowBase {
	int32_t SkinId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class E_PlayerActionType, struct FNOS_SoundInfo> ActionSoundInfoMap; // 0x10(0x50)
};

// ScriptStruct NotesOfSoul.NOS_SoundInfo
// Size: 0x80 (Inherited: 0x00)
struct FNOS_SoundInfo {
	bool bIsMaterialSound; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x08(0x28)
	struct TMap<enum class EPhysicalSurface, struct TSoftObjectPtr<struct USoundBase>> MaterialSound; // 0x30(0x50)
};

// ScriptStruct NotesOfSoul.CloseAccountsInfo
// Size: 0xa0 (Inherited: 0x08)
struct FCloseAccountsInfo : FTableRowBase {
	int32_t CharacterID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> FightScore; // 0x10(0x10)
	int32_t FightScorSum; // 0x20(0x04)
	int32_t UID; // 0x24(0x04)
	struct FHumanConfig HumanConfig; // 0x28(0x38)
	struct FGhostConfig GhostConfig; // 0x60(0x30)
	struct FString PlayerName; // 0x90(0x10)
};

// ScriptStruct NotesOfSoul.MapInfo
// Size: 0x50 (Inherited: 0x08)
struct FMapInfo : FTableRowBase {
	int32_t MapID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText MapName; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> MapIco; // 0x28(0x28)
};

// ScriptStruct NotesOfSoul.NOS_Skin
// Size: 0x1b0 (Inherited: 0x00)
struct FNOS_Skin {
	int32_t SkinId; // 0x00(0x04)
	int32_t SkinType; // 0x04(0x04)
	int32_t CharacterID; // 0x08(0x04)
	enum class EClothQualityType SkinQuality; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FSkinConsume Consume; // 0x10(0x58)
	struct FSkinConsume Consume_Discount; // 0x68(0x58)
	bool bIsDiscount; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t EffectID; // 0xc4(0x04)
	int32_t BaseSkinID; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FSkinConsume SloveInfo; // 0xd0(0x58)
	struct FSkinConsume IntimacyInfo; // 0x128(0x58)
	float ExpAddtion; // 0x180(0x04)
	float IntimacyAddtion; // 0x184(0x04)
	float CoinAddtion; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FSkinStoreInfo StoreInfo; // 0x190(0x18)
	bool OnSale; // 0x1a8(0x01)
	bool HotSale; // 0x1a9(0x01)
	bool NewProduct; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
};

// ScriptStruct NotesOfSoul.SkinStoreInfo
// Size: 0x18 (Inherited: 0x00)
struct FSkinStoreInfo {
	int32_t purchase_limitation; // 0x00(0x04)
	float discount_parameters; // 0x04(0x04)
	struct TArray<int32_t> category_id_list; // 0x08(0x10)
};

// ScriptStruct NotesOfSoul.SkinConsume
// Size: 0x58 (Inherited: 0x00)
struct FSkinConsume {
	int32_t r_type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<int32_t, int32_t> ItemList; // 0x08(0x50)
};

// ScriptStruct NotesOfSoul.NOS_XingTi
// Size: 0x1f8 (Inherited: 0x08)
struct FNOS_XingTi : FTableRowBase {
	struct FNOS_XingTi_HaveModelType Base_EyeLash; // 0x08(0x58)
	struct FNOS_XingTi_HaveModelType Base_Eyebrow; // 0x60(0x58)
	struct FNOS_XingTi_Tattoo FaceTatto; // 0xb8(0x50)
	struct FNOS_XingTi_Tattoo BodyTatto; // 0x108(0x50)
	struct TMap<int32_t, struct FNOS_XingTi_Material> MaterialParam; // 0x158(0x50)
	struct TMap<int32_t, struct FNOS_XingTi_Pinch> Pinch; // 0x1a8(0x50)
};

// ScriptStruct NotesOfSoul.NOS_XingTi_Pinch
// Size: 0x48 (Inherited: 0x08)
struct FNOS_XingTi_Pinch : FTableRowBase {
	enum class EXingTiType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ActionID; // 0x0c(0x04)
	struct FText ActionName; // 0x10(0x18)
	struct FString Key; // 0x28(0x10)
	float Value; // 0x38(0x04)
	float Min; // 0x3c(0x04)
	float Max; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct NotesOfSoul.NOS_XingTi_Material
// Size: 0x50 (Inherited: 0x08)
struct FNOS_XingTi_Material : FTableRowBase {
	enum class EXingTiType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ActionID; // 0x0c(0x04)
	struct FText ActionName; // 0x10(0x18)
	struct FName SlotName; // 0x28(0x08)
	struct FString Key; // 0x30(0x10)
	float Value; // 0x40(0x04)
	bool IsOpenValueClamp; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
};

// ScriptStruct NotesOfSoul.NOS_XingTi_Tattoo
// Size: 0x50 (Inherited: 0x08)
struct FNOS_XingTi_Tattoo : FTableRowBase {
	enum class EXingTiType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ActionID; // 0x0c(0x04)
	struct FName SlotName; // 0x10(0x08)
	struct FText ActionName; // 0x18(0x18)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> UITexture; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Mapping; // 0x40(0x10)
};

// ScriptStruct NotesOfSoul.NOS_XingTi_HaveModelType
// Size: 0x58 (Inherited: 0x08)
struct FNOS_XingTi_HaveModelType : FTableRowBase {
	enum class EXingTiType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ActionID; // 0x0c(0x04)
	struct FText ActionName; // 0x10(0x18)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> UITexture; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<struct USkeletalMesh>> Models; // 0x38(0x10)
	struct TArray<SoftClassProperty> Anims; // 0x48(0x10)
};

// ScriptStruct NotesOfSoul.NOS_InteractionAnimTable
// Size: 0x38 (Inherited: 0x08)
struct FNOS_InteractionAnimTable : FTableRowBase {
	struct FName AnimName; // 0x08(0x08)
	struct TSoftObjectPtr<struct UAnimSequenceBase> AnimClass; // 0x10(0x28)
};

// ScriptStruct NotesOfSoul.NOS_QuickSocialContactConfig
// Size: 0x58 (Inherited: 0x00)
struct FNOS_QuickSocialContactConfig {
	int32_t ChracterID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FKey, int32_t> SocialMap; // 0x08(0x50)
};

// ScriptStruct NotesOfSoul.NOS_SocialContact
// Size: 0xb8 (Inherited: 0x08)
struct FNOS_SocialContact : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	int32_t CaracterID; // 0x0c(0x04)
	enum class ECommodityType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString AssetPath; // 0x18(0x10)
	struct TSoftObjectPtr<struct UTexture2D> SuitDressRoomThumbnail; // 0x28(0x28)
	struct FText DescribeText; // 0x50(0x18)
	struct FText CharacterName; // 0x68(0x18)
	struct FText AccessoriesName; // 0x80(0x18)
	int32_t EffectType; // 0x98(0x04)
	enum class EClothQualityType Quality; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FText GainText; // 0xa0(0x18)
};

// ScriptStruct NotesOfSoul.NOS_ItemTable
// Size: 0x108 (Inherited: 0x08)
struct FNOS_ItemTable : FTableRowBase {
	int32_t ItemId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText ItemName; // 0x10(0x18)
	struct FText ItemDes; // 0x28(0x18)
	int32_t Effect_Type; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	SoftClassProperty ItemClass; // 0x48(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> ModelClass; // 0x70(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ThumbnailTexture; // 0x98(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CommodityTexture; // 0xc0(0x28)
	struct FText UeserDes; // 0xe8(0x18)
	bool bForSale; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct NotesOfSoul.CamraSetingData
// Size: 0x60 (Inherited: 0x08)
struct FCamraSetingData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, struct FCamraData> CameraData; // 0x10(0x50)
};

// ScriptStruct NotesOfSoul.CamraData
// Size: 0x10 (Inherited: 0x00)
struct FCamraData {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.CharacterCustom
// Size: 0x78 (Inherited: 0x00)
struct FCharacterCustom {
	float Forhead; // 0x00(0x04)
	float eyebrows_wideAndhollow; // 0x04(0x04)
	float eyebrows_heightAndlower; // 0x08(0x04)
	float noseguard_bigAndsmall; // 0x0c(0x04)
	float bridge_heightAndlower; // 0x10(0x04)
	float nosewing_wideAndnorrow; // 0x14(0x04)
	float nosewing_bigAndsmall; // 0x18(0x04)
	float nose_bigAndSmall; // 0x1c(0x04)
	float cheek_lowerAndwide; // 0x20(0x04)
	float cheek_frontAndBackward; // 0x24(0x04)
	float cheekbone_wideAndnorrow; // 0x28(0x04)
	float cheekbone_heightAndlower; // 0x2c(0x04)
	float cheekbone_raiseAndhollow; // 0x30(0x04)
	float jaw_bigAndsmall; // 0x34(0x04)
	float jaw_frontAndbackward; // 0x38(0x04)
	float jaw_upAnddown; // 0x3c(0x04)
	float lip_frontAndbackward; // 0x40(0x04)
	float upeerlip_outerAndinner; // 0x44(0x04)
	float lowerlip_outerAndinner; // 0x48(0x04)
	float upperlip_thickAndthin; // 0x4c(0x04)
	float lowerlip_thickAndthin; // 0x50(0x04)
	float eye_frontAndbackward; // 0x54(0x04)
	float eye_bigAndsmall; // 0x58(0x04)
	float eyesLidHeight_upAnddowm; // 0x5c(0x04)
	float Browridge_frontAndbackward; // 0x60(0x04)
	float eyebrow_upAnddown; // 0x64(0x04)
	float eyebrow_thickAndthin; // 0x68(0x04)
	float jawbone_upAndlower; // 0x6c(0x04)
	float jawbone_outerAndinner; // 0x70(0x04)
	float jawbone_BigAndsmall; // 0x74(0x04)
};

// ScriptStruct NotesOfSoul.LocalFaceCustomData
// Size: 0x60 (Inherited: 0x08)
struct FLocalFaceCustomData : FTableRowBase {
	int32_t LocalFaceCustomId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, float> LocalFaceData; // 0x10(0x50)
};

// ScriptStruct NotesOfSoul.CharacterCustomData
// Size: 0x70 (Inherited: 0x08)
struct FCharacterCustomData : FTableRowBase {
	int32_t CharacterCustomid; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText CustomName; // 0x10(0x18)
	int32_t Category; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	struct FText FirstName; // 0x40(0x18)
	struct FText SecondName; // 0x58(0x18)
};

// ScriptStruct NotesOfSoul.MaterialManageData
// Size: 0x01 (Inherited: 0x00)
struct FMaterialManageData {
	enum class EMaterialManageType Priority; // 0x00(0x01)
};

// ScriptStruct NotesOfSoul.IntegrationGhostChangeDress
// Size: 0x3b0 (Inherited: 0x08)
struct FIntegrationGhostChangeDress : FTableRowBase {
	int32_t CharacterID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNOS_GhostSuit GhostSuit; // 0x10(0x350)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> AccessoriesMap; // 0x360(0x50)
};

// ScriptStruct NotesOfSoul.NOS_CommoditiesType
// Size: 0x28 (Inherited: 0x08)
struct FNOS_CommoditiesType : FTableRowBase {
	struct TArray<struct FNOS_CommoditiesCategory> CategoryInfo; // 0x08(0x10)
	struct TArray<int32_t> CategoryID; // 0x18(0x10)
};

// ScriptStruct NotesOfSoul.NOS_CommoditiesCategory
// Size: 0x10 (Inherited: 0x08)
struct FNOS_CommoditiesCategory : FTableRowBase {
	enum class ECharacterType CharacterType; // 0x08(0x01)
	enum class EShopType TopCategory; // 0x09(0x01)
	enum class EPageType SecondCategory; // 0x0a(0x01)
	enum class EThirdCommoditiesType ThirdCategory; // 0x0b(0x01)
	enum class EFourthCommoditiesType FourthCategory; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct NotesOfSoul.NOS_Accessories
// Size: 0x500 (Inherited: 0x28)
struct FNOS_Accessories : FNOS_CommoditiesType {
	int32_t CharacterID; // 0x28(0x04)
	int32_t AccessoriesID; // 0x2c(0x04)
	struct FText CharacterName; // 0x30(0x18)
	struct FText AccessoriesName; // 0x48(0x18)
	enum class EAccessoriesType AccessoriesType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t BaseSuitID; // 0x64(0x04)
	int32_t EffectType; // 0x68(0x04)
	int32_t SkinClass; // 0x6c(0x04)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> AccessoriesMaterialMap; // 0x70(0x50)
	struct FNOS_CharacterSpecialAssets SingleSpecialAssets; // 0xc0(0x140)
	struct TArray<int32_t> FakeSuitRelationID; // 0x200(0x10)
	struct TArray<struct FNOS_CharacterSpecialAssets> FakeSuitSpecialAssets; // 0x210(0x10)
	struct TArray<enum class EAccessoriesType> ConjoinedBodyTypeOccupy; // 0x220(0x10)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x230(0x28)
	struct FNOS_ExclusiveAssets RelationExclusive; // 0x258(0x50)
	struct FNOS_HairAccessory HairExclusive; // 0x2a8(0x118)
	struct TMap<int32_t, struct FNOS_Dyeing> DyeingProgramme; // 0x3c0(0x50)
	struct TArray<struct FNOS_Weapons> Weapons; // 0x410(0x10)
	struct TArray<struct FNOS_Shoes> Shoes; // 0x420(0x10)
	SoftClassProperty AnimInstance; // 0x430(0x28)
	struct TArray<struct FNOS_AccessoriesSubsidiaryMesh> AccessoriesSubsidiaryMesh; // 0x458(0x10)
	struct TArray<struct FNOS_AccessoriesNS> AccessoriesNS; // 0x468(0x10)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x478(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CommodityTexture; // 0x4a0(0x28)
	struct FText DressRoomDescription; // 0x4c8(0x18)
	enum class EClothQualityType SuitQuality; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct FText GainText; // 0x4e8(0x18)
};

// ScriptStruct NotesOfSoul.NOS_AccessoriesNS
// Size: 0x38 (Inherited: 0x00)
struct FNOS_AccessoriesNS {
	bool bNSApplyToAccessories; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AttachSocket; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<struct UNiagaraSystem> NS; // 0x10(0x28)
};

// ScriptStruct NotesOfSoul.NOS_AccessoriesSubsidiaryMesh
// Size: 0x30 (Inherited: 0x00)
struct FNOS_AccessoriesSubsidiaryMesh {
	struct FName AttachSocket; // 0x00(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x08(0x28)
};

// ScriptStruct NotesOfSoul.NOS_Shoes
// Size: 0x38 (Inherited: 0x00)
struct FNOS_Shoes {
	struct TSoftObjectPtr<struct UAnimSequence> Sequence; // 0x00(0x28)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct NotesOfSoul.NOS_Weapons
// Size: 0x118 (Inherited: 0x00)
struct FNOS_Weapons {
	struct FName SocketName; // 0x00(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x08(0x28)
	SoftClassProperty AnimInstance; // 0x30(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> RelaveentAnimSequence; // 0x58(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> AccessoriesMaterialMap; // 0x80(0x50)
	struct TSoftObjectPtr<struct UDestructibleMesh> RelaventDestructibleMesh; // 0xd0(0x28)
	struct TArray<struct TSoftObjectPtr<struct UNiagaraSystem>> RelaventNiagara; // 0xf8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> RelaventStaticMesh; // 0x108(0x10)
};

// ScriptStruct NotesOfSoul.NOS_Dyeing
// Size: 0x50 (Inherited: 0x00)
struct FNOS_Dyeing {
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> MeshMaterialMap; // 0x00(0x50)
};

// ScriptStruct NotesOfSoul.NOS_HairAccessory
// Size: 0x118 (Inherited: 0x00)
struct FNOS_HairAccessory {
	int32_t HairEffect; // 0x00(0x04)
	bool bHairColor; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float FlixBrightness; // 0x08(0x04)
	struct FColor FlixRootColor; // 0x0c(0x04)
	float FlixRoughness; // 0x10(0x04)
	float FlixScatter; // 0x14(0x04)
	struct FColor FlixTipColor; // 0x18(0x04)
	float FlixRandomHueVariation; // 0x1c(0x04)
	float FlixRandomValueVariation; // 0x20(0x04)
	bool FlixVariation; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TSoftObjectPtr<struct USkeletalMesh> FlixMesh; // 0x28(0x28)
	SoftClassProperty FlixAnimInstance; // 0x50(0x28)
	float GroomBrightness; // 0x78(0x04)
	float GroomNoise; // 0x7c(0x04)
	float GroomRoughness; // 0x80(0x04)
	float GroomRoughness1; // 0x84(0x04)
	float GroomRoughnessNoise; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FNOS_GroomAsset GroomAsset; // 0x90(0x78)
	struct FColor GroomColorHight; // 0x108(0x04)
	struct FColor GroomColorLow; // 0x10c(0x04)
	struct FColor GroomColorMid; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct NotesOfSoul.NOS_GroomAsset
// Size: 0x78 (Inherited: 0x00)
struct FNOS_GroomAsset {
	struct TSoftObjectPtr<struct UGroomBindingAsset> GroomBindingAsset; // 0x00(0x28)
	struct TSoftObjectPtr<struct UGroomAsset> GroomAsset; // 0x28(0x28)
	struct TSoftObjectPtr<struct UPhysicsAsset> PhyAsset; // 0x50(0x28)
};

// ScriptStruct NotesOfSoul.NOS_ExclusiveAssets
// Size: 0x50 (Inherited: 0x00)
struct FNOS_ExclusiveAssets {
	struct TSoftObjectPtr<struct USkeletalMesh> ExclusiveMesh; // 0x00(0x28)
	SoftClassProperty ExclusiveAnimBlueprint; // 0x28(0x28)
};

// ScriptStruct NotesOfSoul.NOS_CharacterSpecialAssets
// Size: 0x140 (Inherited: 0x00)
struct FNOS_CharacterSpecialAssets {
	struct TMap<struct FName, struct TSoftObjectPtr<struct UParticleSystem>> AllUsePS; // 0x00(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UNiagaraSystem>> AllUseNS; // 0x50(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> AllUseMaterials; // 0xa0(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct USoundBase>> AllWords; // 0xf0(0x50)
};

// ScriptStruct NotesOfSoul.NOS_GhostSuit
// Size: 0x350 (Inherited: 0x28)
struct FNOS_GhostSuit : FNOS_CommoditiesType {
	int32_t CharacterID; // 0x28(0x04)
	int32_t SuitID; // 0x2c(0x04)
	struct FText CharacterName; // 0x30(0x18)
	struct FText AccessoriesName; // 0x48(0x18)
	int32_t BaseSuitID; // 0x60(0x04)
	int32_t EffectType; // 0x64(0x04)
	int32_t SkinClass; // 0x68(0x04)
	enum class EAccessoriesType AccessoriesType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FNOS_GroomAsset GhostGroomAsset; // 0x70(0x78)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> AllAccessories; // 0xe8(0x50)
	struct TMap<struct FName, struct FNOS_ExtraMesh> SuitExtraMesh; // 0x138(0x50)
	struct FNOS_CharacterSpecialAssets SuitKitSpecialAssets; // 0x188(0x140)
	enum class EClothQualityType SuitQuality; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TSoftObjectPtr<struct UTexture2D> SuitDressRoomThumbnail; // 0x2d0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CommodityTexture; // 0x2f8(0x28)
	struct FText DressRoomDescription; // 0x320(0x18)
	struct FText GainText; // 0x338(0x18)
};

// ScriptStruct NotesOfSoul.NOS_ExtraMesh
// Size: 0x30 (Inherited: 0x00)
struct FNOS_ExtraMesh {
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x00(0x28)
	bool bEventServerLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct NotesOfSoul.IntegrationHumanChangeDress
// Size: 0x3b0 (Inherited: 0x08)
struct FIntegrationHumanChangeDress : FTableRowBase {
	int32_t CharacterID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNOS_HumanSuit HumanSuit; // 0x10(0x350)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> AccessoriesMap; // 0x360(0x50)
};

// ScriptStruct NotesOfSoul.NOS_HumanSuit
// Size: 0x350 (Inherited: 0x28)
struct FNOS_HumanSuit : FNOS_CommoditiesType {
	int32_t CharacterID; // 0x28(0x04)
	int32_t SuitID; // 0x2c(0x04)
	struct FText CharacterName; // 0x30(0x18)
	struct FText AccessoriesName; // 0x48(0x18)
	int32_t BaseSuitID; // 0x60(0x04)
	int32_t EffectType; // 0x64(0x04)
	int32_t SkinClass; // 0x68(0x04)
	enum class EAccessoriesType AccessoriesType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FNOS_GroomAsset HumanGroomAsset; // 0x70(0x78)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> AllAccessories; // 0xe8(0x50)
	struct TMap<struct FName, struct FNOS_ExtraMesh> SuitExtraMesh; // 0x138(0x50)
	enum class EClothQualityType SuitQuality; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FNOS_CharacterSpecialAssets SuitKitSpecialAssets; // 0x190(0x140)
	struct TSoftObjectPtr<struct UTexture2D> SuitDressRoomThumbnail; // 0x2d0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CommodityTexture; // 0x2f8(0x28)
	struct FText DressRoomDescription; // 0x320(0x18)
	struct FText GainText; // 0x338(0x18)
};

// ScriptStruct NotesOfSoul.TreasureChest
// Size: 0x90 (Inherited: 0x08)
struct FTreasureChest : FTableRowBase {
	int32_t TreasureChestID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TreasureChestName; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> PreviewImageNormal; // 0x28(0x28)
	struct TSoftObjectPtr<struct UTexture2D> PreviewImageEnaPanel; // 0x50(0x28)
	struct FText TreasureChestDescribe; // 0x78(0x18)
};

// ScriptStruct NotesOfSoul.HeadPortrait
// Size: 0x50 (Inherited: 0x08)
struct FHeadPortrait : FTableRowBase {
	int32_t IconLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText IconName; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> HeadPortraitTexture; // 0x28(0x28)
};

// ScriptStruct NotesOfSoul.HeadFrame
// Size: 0x38 (Inherited: 0x08)
struct FHeadFrame : FTableRowBase {
	int32_t HeadFrameLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> HeadFrameTexture; // 0x10(0x28)
};

// ScriptStruct NotesOfSoul.NOS_Intimacy
// Size: 0x90 (Inherited: 0x08)
struct FNOS_Intimacy : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> IntimacyTexture; // 0x28(0x28)
	struct TSoftObjectPtr<struct UStaticMesh> IntimacyMesh; // 0x50(0x28)
	struct FText Describe; // 0x78(0x18)
};

// ScriptStruct NotesOfSoul.NOS_Treasures
// Size: 0x68 (Inherited: 0x08)
struct FNOS_Treasures : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> TreasuresTexture; // 0x28(0x28)
	struct FText Describe; // 0x50(0x18)
};

// ScriptStruct NotesOfSoul.NOS_Coin
// Size: 0x78 (Inherited: 0x08)
struct FNOS_Coin : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
	struct TSoftObjectPtr<struct UTexture2D> CoinPureTexture; // 0x28(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CoinColorfulTexture; // 0x50(0x28)
};

// ScriptStruct NotesOfSoul.NOS_StoreRoll
// Size: 0x20 (Inherited: 0x08)
struct FNOS_StoreRoll : FTableRowBase {
	enum class EShopType ShopID; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> RollTextureList; // 0x10(0x10)
};

// ScriptStruct NotesOfSoul.NOS_HumanUnderwear
// Size: 0x100 (Inherited: 0x08)
struct FNOS_HumanUnderwear : FTableRowBase {
	int32_t CharacterID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> HeChangeNakedModelMaterialMap; // 0x10(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> BaChangeNakedModelMaterialMap; // 0x60(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> NoChangeNakedModelMaterialMap; // 0xb0(0x50)
};

// ScriptStruct NotesOfSoul.NOS_Store
// Size: 0xb0 (Inherited: 0x28)
struct FNOS_Store : FNOS_CommoditiesType {
	int32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText Name; // 0x30(0x18)
	enum class ECommodityType CommodityType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TMap<int32_t, struct FNOS_MoneyData> MonetaryParameters; // 0x50(0x50)
	int32_t PurchaseLimitationCount; // 0xa0(0x04)
	bool bHotSale; // 0xa4(0x01)
	bool bNewProduct; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	int32_t BuyType; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct NotesOfSoul.NOS_MoneyData
// Size: 0x18 (Inherited: 0x08)
struct FNOS_MoneyData : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	int32_t MonetaryPrice; // 0x0c(0x04)
	int32_t DiscountPrice; // 0x10(0x04)
	float DiscountParameters; // 0x14(0x04)
};

// ScriptStruct NotesOfSoul.NOS_ExtraStaticMesh
// Size: 0x30 (Inherited: 0x00)
struct FNOS_ExtraStaticMesh {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x00(0x28)
	bool bEventServerLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct NotesOfSoul.HomeMissionInfo
// Size: 0x78 (Inherited: 0x08)
struct FHomeMissionInfo : FTableRowBase {
	int32_t MissionID; // 0x08(0x04)
	int32_t MissionLevel; // 0x0c(0x04)
	struct FText MissionName; // 0x10(0x18)
	struct FText MissionInfo; // 0x28(0x18)
	struct FText MissionRequire; // 0x40(0x18)
	struct TArray<struct FRewardInfo> MissionRequireInfo; // 0x58(0x10)
	struct TArray<struct FRewardInfo> MissionRewards; // 0x68(0x10)
};

// ScriptStruct NotesOfSoul.RewardInfo
// Size: 0x10 (Inherited: 0x08)
struct FRewardInfo : FTableRowBase {
	int32_t ItemId; // 0x08(0x04)
	int32_t ItemNum; // 0x0c(0x04)
};

// ScriptStruct NotesOfSoul.Title
// Size: 0x28 (Inherited: 0x08)
struct FTitle : FTableRowBase {
	int32_t Grade; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Tiile; // 0x10(0x18)
};

// ScriptStruct NotesOfSoul.NOS_XiaoJiangRData
// Size: 0x10 (Inherited: 0x08)
struct FNOS_XiaoJiangRData : FTableRowBase {
	float Height; // 0x08(0x04)
	float Low; // 0x0c(0x04)
};

// ScriptStruct NotesOfSoul.NOS_Show3DModelOffset
// Size: 0x70 (Inherited: 0x08)
struct FNOS_Show3DModelOffset : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform SpawnTransform; // 0x10(0x30)
	struct FTransform CameraRelativeTransform; // 0x40(0x30)
};

// ScriptStruct NotesOfSoul.NOS_ActionInfo
// Size: 0x88 (Inherited: 0x08)
struct FNOS_ActionInfo : FTableRowBase {
	struct FText ActionwearName; // 0x08(0x18)
	struct TSoftObjectPtr<struct UAnimMontage> ActionMontage; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x48(0x28)
	struct FText DressRoomDescription; // 0x70(0x18)
};

// ScriptStruct NotesOfSoul.NOS_TitleInfo
// Size: 0x60 (Inherited: 0x08)
struct FNOS_TitleInfo : FTableRowBase {
	struct FText TitleName; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> TitleTexture; // 0x20(0x28)
	struct FText TitleDescription; // 0x48(0x18)
};

// ScriptStruct NotesOfSoul.NOS_BackInfo
// Size: 0x88 (Inherited: 0x08)
struct FNOS_BackInfo : FTableRowBase {
	struct FText HeadwearName; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> HeadwearMesh; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x48(0x28)
	struct FText DressRoomDescription; // 0x70(0x18)
};

// ScriptStruct NotesOfSoul.NOS_FaceInfo
// Size: 0x88 (Inherited: 0x08)
struct FNOS_FaceInfo : FTableRowBase {
	struct FText FacewearName; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> FacewearMesh; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x48(0x28)
	struct FText DressRoomDescription; // 0x70(0x18)
};

// ScriptStruct NotesOfSoul.NOS_HeadInfo
// Size: 0x88 (Inherited: 0x08)
struct FNOS_HeadInfo : FTableRowBase {
	struct FText HeadwearName; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> HeadwearMesh; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x48(0x28)
	struct FText DressRoomDescription; // 0x70(0x18)
};

// ScriptStruct NotesOfSoul.NOS_ClothInfo
// Size: 0x218 (Inherited: 0x08)
struct FNOS_ClothInfo : FTableRowBase {
	struct FText ClothName; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> CharacterMesh; // 0x20(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> ClothMesh; // 0x48(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> HairMesh; // 0x70(0x28)
	SoftClassProperty ClothMeshAnimBlueprint; // 0x98(0x28)
	SoftClassProperty HairMeshAnimBlueprint; // 0xc0(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<struct USkeletalMesh>> ExtraMesh; // 0xe8(0x50)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UNiagaraSystem>> NorAttackIndexAndNSMap; // 0x138(0x50)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> AllNeedUseMaterialsMap; // 0x188(0x50)
	struct TSoftObjectPtr<struct UTexture2D> DressRoomThumbnail; // 0x1d8(0x28)
	struct FText DressRoomDescription; // 0x200(0x18)
};

// ScriptStruct NotesOfSoul.NOS_GhostLocalData
// Size: 0xf8 (Inherited: 0x08)
struct FNOS_GhostLocalData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> CharacterNakedModel; // 0x20(0x28)
	SoftClassProperty HomeModelAnimBlueprint; // 0x48(0x28)
	SoftClassProperty DressRoomModelAnimBlueprint; // 0x70(0x28)
	SoftClassProperty SettlementPanelModelAnimBlueprint; // 0x98(0x28)
	SoftClassProperty BanPickModelAnimBlueprint; // 0xc0(0x28)
	struct TArray<int32_t> GhostSkillsID; // 0xe8(0x10)
};

// ScriptStruct NotesOfSoul.NOS_HumanLocalData
// Size: 0x1a0 (Inherited: 0x08)
struct FNOS_HumanLocalData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct TSoftObjectPtr<struct USkeletalMesh> CharacterNakedModel; // 0x20(0x28)
	bool IsGirl; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TSoftObjectPtr<struct USkeletalMesh> Underwear; // 0x50(0x28)
	SoftClassProperty UnderwearAnimBlueprint; // 0x78(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> Underpants; // 0xa0(0x28)
	SoftClassProperty UnderpantsAnimBlueprint; // 0xc8(0x28)
	SoftClassProperty HomeModelAnimBlueprint; // 0xf0(0x28)
	SoftClassProperty DressRoomModelAnimBlueprint; // 0x118(0x28)
	SoftClassProperty SettlementPanelModelAnimBlueprint; // 0x140(0x28)
	SoftClassProperty BanPickModelAnimBlueprint; // 0x168(0x28)
	struct TArray<int32_t> HumanAuxiliaryID; // 0x190(0x10)
};

// ScriptStruct NotesOfSoul.SpectatorInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpectatorInfo {
	struct TArray<struct ANOS_PlayerBase*> PlayerArray; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.SkeletalMeshMergeParams
// Size: 0x40 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
};

// ScriptStruct NotesOfSoul.SkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.SkelMeshMergeUVTransform
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.SkelMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.NOS_DamageData
// Size: 0x10 (Inherited: 0x00)
struct FNOS_DamageData {
	struct TArray<struct FString> AssistPlayerNames; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.HidWidget
// Size: 0x10 (Inherited: 0x00)
struct FHidWidget {
	struct UUserWidget* Widget; // 0x00(0x08)
	enum class ESlateVisibility VisibleState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct NotesOfSoul.NOS_UserSettings
// Size: 0x90 (Inherited: 0x00)
struct FNOS_UserSettings {
	struct FNOS_UserSettings_Normal NormalSettingInfo; // 0x00(0x28)
	struct FNOS_UserSettings_Sound SoundSettingInfo; // 0x28(0x2c)
	struct FNOS_UserSettings_View ViewSettingInfo; // 0x54(0x3c)
};

// ScriptStruct NotesOfSoul.NOS_UserSettings_View
// Size: 0x3c (Inherited: 0x00)
struct FNOS_UserSettings_View {
	int32_t ViewResolution; // 0x00(0x04)
	int32_t ViewMode; // 0x04(0x04)
	int32_t ViewQuality; // 0x08(0x04)
	int32_t ShadowQuality; // 0x0c(0x04)
	int32_t TextureQuality; // 0x10(0x04)
	int32_t VisualEffectQuality; // 0x14(0x04)
	int32_t ReSolutionScale; // 0x18(0x04)
	int32_t Contrast; // 0x1c(0x04)
	int32_t MSAA; // 0x20(0x04)
	bool IsOpenVerticalSync; // 0x24(0x01)
	bool IsOpenAO; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float GamaValue; // 0x28(0x04)
	bool IsOpenMotionBlur; // 0x2c(0x01)
	bool IsOpenEdgeSharpening; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Exposure; // 0x30(0x04)
	bool IsOpenHairEffcet; // 0x34(0x01)
	bool IsOpenRayTracing; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	int32_t DLSS; // 0x38(0x04)
};

// ScriptStruct NotesOfSoul.NOS_UserSettings_Sound
// Size: 0x2c (Inherited: 0x00)
struct FNOS_UserSettings_Sound {
	float MasterVolume; // 0x00(0x04)
	float MuiscVolume; // 0x04(0x04)
	float UIVolume; // 0x08(0x04)
	float AmbientVolume; // 0x0c(0x04)
	float EffectVolume; // 0x10(0x04)
	float VoiceVolume; // 0x14(0x04)
	float UserInterfaceVolume; // 0x18(0x04)
	int32_t MicrophoneVolume; // 0x1c(0x04)
	int32_t PlayerMicrophoneVolume; // 0x20(0x04)
	bool IsOpenMicrophone; // 0x24(0x01)
	bool IsOpenAllSound; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	int32_t ConvasationMode; // 0x28(0x04)
};

// ScriptStruct NotesOfSoul.NOS_UserSettings_Normal
// Size: 0x28 (Inherited: 0x00)
struct FNOS_UserSettings_Normal {
	bool IsOpenHighEnergy; // 0x00(0x01)
	bool IsShowFrameRate; // 0x01(0x01)
	bool IsShowGamePrompt; // 0x02(0x01)
	bool IsSwapUpDown; // 0x03(0x01)
	bool IsSwapLeftRight; // 0x04(0x01)
	bool IsOpenGreenMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float CameraSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurrentLanguage; // 0x10(0x10)
	bool IsAutoRecordingGame; // 0x20(0x01)
	bool IsAutoApplyGA; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t BodyColor; // 0x24(0x04)
};

// ScriptStruct NotesOfSoul.TurnAssets
// Size: 0x100 (Inherited: 0x00)
struct FTurnAssets {
	struct FTurnAsset NAseet_R_91; // 0x00(0x20)
	struct FTurnAsset NAseet_L_91; // 0x20(0x20)
	struct FTurnAsset NAseet_R_181; // 0x40(0x20)
	struct FTurnAsset NAseet_L_181; // 0x60(0x20)
	struct FTurnAsset CLFAseet_R_91; // 0x80(0x20)
	struct FTurnAsset CLFAseet_L_91; // 0xa0(0x20)
	struct FTurnAsset CLFAseet_R_181; // 0xc0(0x20)
	struct FTurnAsset CLFAseet_L_181; // 0xe0(0x20)
};

// ScriptStruct NotesOfSoul.TurnAsset
// Size: 0x20 (Inherited: 0x00)
struct FTurnAsset {
	struct UAnimSequenceBase* TurnAnimation; // 0x00(0x08)
	float AnimatedAngle; // 0x08(0x04)
	struct FName SlotName; // 0x0c(0x08)
	float PlayRate; // 0x14(0x04)
	bool ScaleTurnAngle; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct NotesOfSoul.ChatInfo
// Size: 0x80 (Inherited: 0x00)
struct FChatInfo {
	struct FText PlayerConfigName; // 0x00(0x18)
	struct FText Message; // 0x18(0x18)
	struct FText RemainningTime; // 0x30(0x18)
	struct FText GamePlayerName; // 0x48(0x18)
	struct FText SenderPlayerName; // 0x60(0x18)
	bool DisableChat; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct NotesOfSoul.SR_TeamAllSurrenderData
// Size: 0x10 (Inherited: 0x00)
struct FSR_TeamAllSurrenderData {
	struct TArray<struct FSR_TeamSurrenderData> SRData; // 0x00(0x10)
};

// ScriptStruct NotesOfSoul.SR_TeamSurrenderData
// Size: 0x10 (Inherited: 0x00)
struct FSR_TeamSurrenderData {
	struct ANOS_PSArenaBase* NOS_PSArenaBase; // 0x00(0x08)
	int32_t SurrenderStateIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct NotesOfSoul.SR_CheckData
// Size: 0x08 (Inherited: 0x00)
struct FSR_CheckData {
	int32_t AceeptNum; // 0x00(0x04)
	int32_t RefuseNum; // 0x04(0x04)
};

// ScriptStruct NotesOfSoul.SR_LauncherData
// Size: 0x10 (Inherited: 0x00)
struct FSR_LauncherData {
	struct ANOS_PSArenaBase* PlayerState; // 0x00(0x08)
	float BeginTimeSecond; // 0x08(0x04)
	bool IsBeginSurrender; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct NotesOfSoul.LRSAbilityState
// Size: 0x01 (Inherited: 0x00)
struct FLRSAbilityState {
	bool IsHuanHunFuActive; // 0x00(0x01)
};

// ScriptStruct NotesOfSoul.VoteInfo
// Size: 0x10 (Inherited: 0x00)
struct FVoteInfo {
	struct ANOS_PlayerHuman* Pawn; // 0x00(0x08)
	int32_t VoteNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct NotesOfSoul.NOSArrayPrintInfo
// Size: 0x14 (Inherited: 0x00)
struct FNOSArrayPrintInfo {
	int32_t GroundPropSpawnPointNum; // 0x00(0x04)
	int32_t PropBoxSpawnPointNum; // 0x04(0x04)
	int32_t DoveSpawnPointNum; // 0x08(0x04)
	int32_t ElementSpawnPointNum; // 0x0c(0x04)
	bool PropBatchConfig; // 0x10(0x01)
	bool PropPoolConfig; // 0x11(0x01)
	bool SlotElementSpawnConfig; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
};

// ScriptStruct NotesOfSoul.NOSPropPoolConfig
// Size: 0x28 (Inherited: 0x08)
struct FNOSPropPoolConfig : FTableRowBase {
	struct FDataTableRowHandle ItemRow; // 0x08(0x10)
	int32_t Num; // 0x18(0x04)
	int32_t Batch; // 0x1c(0x04)
	enum class ENOSPropRefreshPlaces Places; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct NotesOfSoul.NOSPropBatchConfig
// Size: 0x18 (Inherited: 0x08)
struct FNOSPropBatchConfig : FTableRowBase {
	int32_t Batch; // 0x08(0x04)
	int32_t PropNum; // 0x0c(0x04)
	enum class ENOSPropRefreshPlaces Places; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct NotesOfSoul.NOSPaperManConfig
// Size: 0x28 (Inherited: 0x08)
struct FNOSPaperManConfig : FTableRowBase {
	struct FDataTableRowHandle ItemRow; // 0x08(0x10)
	int32_t ItemNum; // 0x18(0x04)
	int32_t Batch; // 0x1c(0x04)
	bool bIsInbox; // 0x20(0x01)
	bool bIsPaperMan; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct NotesOfSoul.NOSElementSlotConfig
// Size: 0x70 (Inherited: 0x08)
struct FNOSElementSlotConfig : FTableRowBase {
	struct TArray<int32_t> ESSpawnPointIndex_2; // 0x08(0x10)
	struct TArray<int32_t> ESSpawnPointIndex_3; // 0x18(0x10)
	struct TArray<int32_t> ESSpawnPointIndex_4; // 0x28(0x10)
	struct TArray<int32_t> ESSpawnPointIndex_5; // 0x38(0x10)
	struct TArray<int32_t> ESSpawnPointIndex_6; // 0x48(0x10)
	struct TArray<int32_t> BaGuaSpawnPointIndex; // 0x58(0x10)
	bool isUse; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct NotesOfSoul.InvisibleData
// Size: 0x30 (Inherited: 0x00)
struct FInvisibleData {
	struct FGameplayTag StateTag; // 0x00(0x08)
	enum class EInvisibleType InvisibleType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct ANOS_PlayerBase* ToTargetPlayer; // 0x10(0x08)
	struct TArray<struct ANOS_PlayerBase*> ToTargetsPlayer; // 0x18(0x10)
	bool bShowIcon; // 0x28(0x01)
	bool bToSelf; // 0x29(0x01)
	bool bToSelfTrueHide; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct NotesOfSoul.EffectOutlineData
// Size: 0x0c (Inherited: 0x00)
struct FEffectOutlineData {
	struct FGameplayTag Tag; // 0x00(0x08)
	float Color; // 0x08(0x04)
};

// ScriptStruct NotesOfSoul.PerspectiveData
// Size: 0x20 (Inherited: 0x00)
struct FPerspectiveData {
	struct FGameplayTag StateTag; // 0x00(0x08)
	enum class EPerspectiveType PerspectiveType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct ANOS_PlayerBase* ToTargetPlayer; // 0x10(0x08)
	bool bShowIcon; // 0x18(0x01)
	bool bToSelf; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct NotesOfSoul.ActiveSkills
// Size: 0x70 (Inherited: 0x08)
struct FActiveSkills : FTableRowBase {
	int32_t SkillID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SkillsName; // 0x10(0x18)
	struct FText SkillsDes; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> SkillsIco; // 0x40(0x28)
	bool IsActive; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct NotesOfSoul.CharacterInfo
// Size: 0xa8 (Inherited: 0x08)
struct FCharacterInfo : FTableRowBase {
	int32_t CharacterID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText CharacterName; // 0x10(0x18)
	SoftClassProperty CharacterClass; // 0x28(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CharacterIco; // 0x50(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CharacterDressIco; // 0x78(0x28)
	bool IsExhibition; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct NotesOfSoul.ALSAnimCharacterInformation
// Size: 0x5c (Inherited: 0x00)
struct FALSAnimCharacterInformation {
	struct FRotator AimingRotation; // 0x00(0x0c)
	struct FRotator CharacterActorRotation; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FVector RelativeVelocityDirection; // 0x24(0x0c)
	struct FVector Acceleration; // 0x30(0x0c)
	struct FVector MovementInput; // 0x3c(0x0c)
	bool bIsMoving; // 0x48(0x01)
	bool bHasMovementInput; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float Speed; // 0x4c(0x04)
	float MovementInputAmount; // 0x50(0x04)
	float AimYawRate; // 0x54(0x04)
	float ZoomAmount; // 0x58(0x04)
};

// ScriptStruct NotesOfSoul.VoiceInfo
// Size: 0x10 (Inherited: 0x00)
struct FVoiceInfo {
	int64_t VoiceRoomID; // 0x00(0x08)
	int32_t VoiceTeamID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct NotesOfSoul.PunishMentPlayerDataInfo
// Size: 0x30 (Inherited: 0x00)
struct FPunishMentPlayerDataInfo {
	int32_t PlayerUID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class EPlayerPunishType> DataType; // 0x08(0x10)
	struct TArray<struct FString> DataInfo; // 0x18(0x10)
	int32_t ReportedByOtherTimes; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct NotesOfSoul.SoulInfor
// Size: 0x38 (Inherited: 0x08)
struct FSoulInfor : FTableRowBase {
	struct FString CharID; // 0x08(0x10)
	int32_t SoulID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString SoulName; // 0x20(0x10)
	float SoulWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct NotesOfSoul.TalentDatatable
// Size: 0xc0 (Inherited: 0x08)
struct FTalentDatatable : FTableRowBase {
	int32_t TalentID; // 0x08(0x04)
	bool IsInitiative; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText TalentName; // 0x10(0x18)
	struct FText TalentDes; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> TalentIco; // 0x40(0x28)
	SoftClassProperty TalentAbility; // 0x68(0x28)
	struct FText GainDes; // 0x90(0x18)
	struct FText UserDes; // 0xa8(0x18)
};

// ScriptStruct NotesOfSoul.GhostTalentDatatable
// Size: 0xc8 (Inherited: 0xc0)
struct FGhostTalentDatatable : FTalentDatatable {
	enum class EGhostTalentType Type; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t GhostID; // 0xc4(0x04)
};

// ScriptStruct NotesOfSoul.HumanTalentDatatable
// Size: 0xc8 (Inherited: 0xc0)
struct FHumanTalentDatatable : FTalentDatatable {
	enum class EHumanTalentType Type; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct NotesOfSoul.XiaoJiangHumanTrailInfo
// Size: 0x40 (Inherited: 0x00)
struct FXiaoJiangHumanTrailInfo {
	struct FTransform TrailPoint; // 0x00(0x30)
	bool IgnoreCalculate; // 0x30(0x01)
	char pad_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct NotesOfSoul.SeasonPassTable
// Size: 0x30 (Inherited: 0x08)
struct FSeasonPassTable : FTableRowBase {
	int32_t SeasonPassLockLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FSeasonPassReward> NormalReward; // 0x10(0x10)
	struct TArray<struct FSeasonPassReward> SeniorReward; // 0x20(0x10)
};

// ScriptStruct NotesOfSoul.SeasonPassReward
// Size: 0x08 (Inherited: 0x00)
struct FSeasonPassReward {
	int32_t RewardID; // 0x00(0x04)
	int32_t RewardValue; // 0x04(0x04)
};

// ScriptStruct NotesOfSoul.UIBroadcastInfo
// Size: 0x28 (Inherited: 0x00)
struct FUIBroadcastInfo {
	enum class EBroadcastType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText NoticeText; // 0x08(0x18)
	float NoticeTime; // 0x20(0x04)
	bool NeedCountDown; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

