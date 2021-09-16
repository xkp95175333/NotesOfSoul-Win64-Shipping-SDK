// Enum KxFramework.EInventoryType
enum class EInventoryType : uint8 {
	Other,
	Features,
	Flee,
	Restore,
	Defense,
	Control,
	Sutra,
	Element,
	EInventoryType_MAX,
};

// Enum KxFramework.EInputMode
enum class EInputMode : uint8 {
	None,
	GameUI,
	Game,
	UI,
	EInputMode_MAX,
};

// Enum KxFramework.EVoiceChannel
enum class EVoiceChannel : uint8 {
	Human,
	LangRen,
	EVoiceChannel_MAX,
};

// Enum KxFramework.EKxGameStateType
enum class EKxGameStateType : uint8 {
	Waiting,
	Loading,
	Ready,
	Gaming,
	GameOver,
	EKxGameStateType_MAX,
};

// Enum KxFramework.EKxServerType
enum class EKxServerType : uint8 {
	None,
	LoginServer,
	FriendServer,
	LobbyServer,
	SteamPayServer,
	GlobalChatServer,
	FriendLoginServer,
	SteamPayLoginServer,
	EKxServerType_MAX,
};

// Enum KxFramework.EKxOnlineState
enum class EKxOnlineState : uint8 {
	None,
	InLobby,
	InGame,
	OffLine,
	EKxOnlineState_MAX,
};

// Enum KxFramework.EKxFriendRelationship
enum class EKxFriendRelationship : uint8 {
	None,
	Couple,
	Gay,
	Girls,
	Buddy,
	EKxFriendRelationship_MAX,
};

// Enum KxFramework.EPersonInfoType
enum class EPersonInfoType : uint8 {
	EDefault,
	ePT_title,
	ePT_headicon,
	ePT_headbox,
	ePT_sex,
	EPersonInfoType_MAX,
};

// Enum KxFramework.EInviteType
enum class EInviteType : uint8 {
	TeamRoom,
	CustomRoom,
	UnionInvite,
	EInviteType_MAX,
};

// Enum KxFramework.EChatChannelType
enum class EChatChannelType : uint8 {
	NoneChatChannel,
	FriendChannel,
	TeamChannel,
	CustomRoomChannel,
	GuildChannel,
	LobbyChannel,
	EChatChannelType_MAX,
};

// Enum KxFramework.EBanPickState
enum class EBanPickState : uint8 {
	InvalidState,
	Ban,
	Pick,
	Setup,
	Suc,
	Close,
	GhostPick,
	GhostSetup,
	EBanPickState_MAX,
};

// Enum KxFramework.ETradeType
enum class ETradeType : uint8 {
	None,
	Sell,
	Buy,
	ETradeType_MAX,
};

// Enum KxFramework.EKxGameType
enum class EKxGameType : uint8 {
	Match,
	Rank,
	LangRenSha,
	Train,
	NoneMode,
	EKxGameType_MAX,
};

// Enum KxFramework.EBanPickOpType
enum class EBanPickOpType : uint8 {
	Invalid,
	BanMap,
	BanCharacter,
	PickMap,
	PickCharacter,
	SetItem,
	SetSkin,
	EBanPickOpType_MAX,
};

// Enum KxFramework.EGameTeamType
enum class EGameTeamType : uint8 {
	None,
	Team,
	Custom,
	EGameTeamType_MAX,
};

// Enum KxFramework.EGameMatchType
enum class EGameMatchType : uint8 {
	Match,
	Rank,
	LangRenSha,
	None,
	EGameMatchType_MAX,
};

// Enum KxFramework.ESortRole
enum class ESortRole : uint8 {
	None,
	PriceDescendingOrder,
	PriceAscendingOrder,
	ESortRole_MAX,
};

// Enum KxFramework.EKxElevatorDoorState
enum class EKxElevatorDoorState : uint8 {
	Opened,
	Opening,
	Closed,
	Closing,
	EKxElevatorDoorState_MAX,
};

// Enum KxFramework.EGMEAudoiRouteRecvType
enum class EGMEAudoiRouteRecvType : uint8 {
	AUDIO_RECV_INQUIRE_ERROR,
	AUDIO_NOT_RECV_FROM_ANYONE,
	AUDIO_RECV_FROM_ALL,
	AUDIO_RECV_BLACK_LIST,
	AUDIO_RECV_WHITE_LIST,
	AUDIO_MAX,
};

// Enum KxFramework.EGMEAudoiRouteSendType
enum class EGMEAudoiRouteSendType : uint8 {
	AUDIO_SEND_INQUIRE_ERROR,
	AUDIO_NOT_SEND_TO_ANYONE,
	AUDIO_SEND_TO_ALL,
	AUDIO_SEND_BLACK_LIST,
	AUDIO_SEND_WHITE_LIST,
};

// Enum KxFramework.EGuildItemLabel
enum class EGuildItemLabel : uint8 {
	None,
	Qualified,
	TimeLimit,
	EGuildItemLabel_MAX,
};

// Enum KxFramework.EGuildListSort
enum class EGuildListSort : uint8 {
	None,
	TeamID,
	Nationalities,
	TeamName,
	TeamLevel,
	TeamSeasonPoints,
	Activity,
	TeamNumber,
	EGuildListSort_MAX,
};

// Enum KxFramework.EGuildPersonSort
enum class EGuildPersonSort : uint8 {
	Normal,
	DutyUp,
	DutyDown,
	LevelUp,
	LevelDown,
	HumanDanUp,
	HumanDanDown,
	GhostDanUp,
	GhostDanDown,
	LoginDateUp,
	LoginDateDown,
	ContributionValueUp,
	ContributionValueDown,
	PersonSortMax,
	EGuildPersonSort_MAX,
};

// Enum KxFramework.EGuildRightType
enum class EGuildRightType : uint8 {
	None,
	Invite,
	KickoutNoraml,
	AnswerApply,
	SetDuty,
	CreateGuildRoom,
	ModifyAnnouncement,
	ModifyApplyCondition,
	UseGuildStorage,
	EGuildRightType_MAX,
};

// Enum KxFramework.EGuildRecordType
enum class EGuildRecordType : uint8 {
	RT_ALL_RECORD,
	RT_DUTY_CHANGE,
	RT_JOIN,
	RT_QUIT,
	RT_CHANGE_GUILD_NAME,
	RT_JuanZeng,
	RT_GUILD_LV_UP,
	RT_GuildBag,
	RT_GuildRankRecord,
	RT_GUILDGKD,
	RT_SPOILS_GRANT,
	RT_SEASON_POINT,
	RT_PLAYER_RECHARGE,
	RT_MAX,
};

// Enum KxFramework.EInteractType
enum class EInteractType : uint8 {
	Door,
	ElementSlot,
	PickUp,
	KillHuman,
	CureHuman,
	PullHuman,
	Element,
	Shelter,
	Teleporter,
	ZhenLing,
	Vehicle,
	KnockDownXiaoXiaoJiangHug,
	UnFreezeMovement,
	Dismantle,
	LinkLine,
	GhostInteract,
	None,
	EInteractType_MAX,
};

// Enum KxFramework.ERoomType
enum class ERoomType : uint8 {
	Single,
	Team,
	CustomRoomTeam,
	ERoomType_MAX,
};

// Enum KxFramework.ELogType
enum class ELogType : uint8 {
	Print,
	PrintLongTime,
	Log,
	Warning,
	Error,
	ELogType_MAX,
};

// ScriptStruct KxFramework.KxItemData
// Size: 0x20 (Inherited: 0x00)
struct FKxItemData {
	int32_t ItemId; // 0x00(0x04)
	bool DustCoveredEquipmentActived; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Durablility; // 0x08(0x04)
	enum class EInventoryType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<float> CustomFloat; // 0x10(0x10)
};

// ScriptStruct KxFramework.KxChatMessageInfor
// Size: 0x48 (Inherited: 0x00)
struct FKxChatMessageInfor {
	struct FText RemainingTime; // 0x00(0x18)
	struct FString PlayerName; // 0x18(0x10)
	struct FString NickName; // 0x28(0x10)
	struct FString Message; // 0x38(0x10)
};

// ScriptStruct KxFramework.KxFriendData
// Size: 0x48 (Inherited: 0x00)
struct FKxFriendData {
	int64_t UID; // 0x00(0x08)
	struct FString NickName; // 0x08(0x10)
	int32_t HeadImageID; // 0x18(0x04)
	int32_t HeadIconFrameID; // 0x1c(0x04)
	int32_t Level; // 0x20(0x04)
	enum class EKxOnlineState OnlineState; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t GroupID; // 0x28(0x04)
	int32_t Friendintimacy; // 0x2c(0x04)
	enum class EKxFriendRelationship FriendRelationship; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GuildName; // 0x38(0x10)
};

// ScriptStruct KxFramework.KxAccountData
// Size: 0x38 (Inherited: 0x00)
struct FKxAccountData {
	int64_t UID; // 0x00(0x08)
	int64_t SteamID; // 0x08(0x08)
	struct FString NickName; // 0x10(0x10)
	int32_t HeadImageID; // 0x20(0x04)
	int32_t HeadIconFrameID; // 0x24(0x04)
	bool IsLocked; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t LockRemainTime; // 0x2c(0x04)
	bool IsMacLocked; // 0x30(0x01)
	bool IsInBlackRoom; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct KxFramework.KxChatMessage
// Size: 0x40 (Inherited: 0x00)
struct FKxChatMessage {
	int64_t Receiver_ID; // 0x00(0x08)
	struct FString Receiver_Nickname; // 0x08(0x10)
	int64_t Sender_ID; // 0x18(0x08)
	struct FString Sender_Nickname; // 0x20(0x10)
	struct FString Msg; // 0x30(0x10)
};

// ScriptStruct KxFramework.ItemDataInfo
// Size: 0x10 (Inherited: 0x00)
struct FItemDataInfo {
	struct TArray<struct FItemData> item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.ItemData
// Size: 0x08 (Inherited: 0x00)
struct FItemData {
	int32_t config_id; // 0x00(0x04)
	int32_t item_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.PBNewHandMissionData
// Size: 0x20 (Inherited: 0x00)
struct FPBNewHandMissionData {
	bool is_complete; // 0x00(0x01)
	bool is_recive_award; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t mission_id; // 0x04(0x04)
	int32_t mission_type; // 0x08(0x04)
	int32_t progress; // 0x0c(0x04)
	struct TArray<int32_t> target_params; // 0x10(0x10)
};

// ScriptStruct KxFramework.IncTreasureBoxData
// Size: 0x18 (Inherited: 0x00)
struct FIncTreasureBoxData {
	struct TArray<struct FItemData> item_list; // 0x00(0x10)
	int32_t use_increasebox_count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct KxFramework.ServerrootInfor
// Size: 0xa0 (Inherited: 0x00)
struct FServerrootInfor {
	struct FServerBase Root; // 0x00(0xa0)
};

// ScriptStruct KxFramework.ServerBase
// Size: 0xa0 (Inherited: 0x00)
struct FServerBase {
	struct FOneServerVersionInfo Server; // 0x00(0xa0)
};

// ScriptStruct KxFramework.OneServerVersionInfo
// Size: 0xa0 (Inherited: 0x00)
struct FOneServerVersionInfo {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString lobbygate_ip; // 0x20(0x10)
	struct FString lobbygate_port; // 0x30(0x10)
	struct FString friend_ip; // 0x40(0x10)
	struct FString friend_port; // 0x50(0x10)
	struct FString market_ip; // 0x60(0x10)
	struct FString market_port; // 0x70(0x10)
	struct FString group; // 0x80(0x10)
	struct FString Flag; // 0x90(0x10)
};

// ScriptStruct KxFramework.UserGameBaseData
// Size: 0x1e0 (Inherited: 0x00)
struct FUserGameBaseData {
	int64_t account_create_time; // 0x00(0x08)
	int32_t account_exp; // 0x08(0x04)
	int32_t account_total_exp; // 0x0c(0x04)
	int32_t account_level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t gkd_id; // 0x18(0x08)
	struct FString guild_name; // 0x20(0x10)
	int64_t guild_uid; // 0x30(0x08)
	int32_t head_frame; // 0x38(0x04)
	int32_t head_icon; // 0x3c(0x04)
	struct FString nick_name; // 0x40(0x10)
	int64_t plateform_id; // 0x50(0x08)
	int32_t praise_num; // 0x58(0x04)
	struct FUserRankData rank_level; // 0x5c(0x60)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FRoleIntimacyData> role_info_list; // 0xc0(0x10)
	int32_t sex; // 0xd0(0x04)
	struct FUserTreasureBoxData treasure_box; // 0xd4(0x08)
	int32_t UID; // 0xdc(0x04)
	struct TArray<struct FGameResultStatisticsData> win_info_list; // 0xe0(0x10)
	struct FServerFaceCustomData pinch_face_data; // 0xf0(0x58)
	struct FSignedDateInfo sign_data; // 0x148(0x28)
	struct FDailyMissionList day_mission_data; // 0x170(0x68)
	int32_t curr_status; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// ScriptStruct KxFramework.DailyMissionList
// Size: 0x68 (Inherited: 0x00)
struct FDailyMissionList {
	struct TArray<struct FDailyMissionState> mission_list; // 0x00(0x10)
	int32_t day_mission_point; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t pre_day_time; // 0x18(0x08)
	struct TArray<int32_t> recvie_point_award_list; // 0x20(0x10)
	int64_t pre_week_time; // 0x30(0x08)
	struct TArray<struct FDailyMissionState> guild_mission_lists; // 0x38(0x10)
	struct TArray<struct FDailyMissionState> guild_week_mission_lists; // 0x48(0x10)
	int64_t guild_pre_day_time; // 0x58(0x08)
	int64_t guild_pre_week_time; // 0x60(0x08)
};

// ScriptStruct KxFramework.DailyMissionState
// Size: 0x20 (Inherited: 0x00)
struct FDailyMissionState {
	int32_t mission_id; // 0x00(0x04)
	int32_t mission_type; // 0x04(0x04)
	struct TArray<int32_t> target_params; // 0x08(0x10)
	int32_t progress; // 0x18(0x04)
	bool is_complete; // 0x1c(0x01)
	bool is_recive_award; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct KxFramework.SignedDateInfo
// Size: 0x28 (Inherited: 0x00)
struct FSignedDateInfo {
	int32_t sign_year; // 0x00(0x04)
	int32_t sign_month; // 0x04(0x04)
	struct TArray<int32_t> sign_day_list; // 0x08(0x10)
	struct TArray<int32_t> recive_award_node; // 0x18(0x10)
};

// ScriptStruct KxFramework.ServerFaceCustomData
// Size: 0x58 (Inherited: 0x00)
struct FServerFaceCustomData {
	int64_t UID; // 0x00(0x08)
	struct TMap<struct FString, float> ServerFaceData; // 0x08(0x50)
};

// ScriptStruct KxFramework.GameResultStatisticsData
// Size: 0x0c (Inherited: 0x00)
struct FGameResultStatisticsData {
	int32_t match_type; // 0x00(0x04)
	int32_t win_count; // 0x04(0x04)
	int32_t fail_count; // 0x08(0x04)
};

// ScriptStruct KxFramework.UserTreasureBoxData
// Size: 0x08 (Inherited: 0x00)
struct FUserTreasureBoxData {
	int32_t exchange_point; // 0x00(0x04)
	int32_t lucky_num; // 0x04(0x04)
};

// ScriptStruct KxFramework.RoleIntimacyData
// Size: 0x0c (Inherited: 0x00)
struct FRoleIntimacyData {
	int32_t intimacy; // 0x00(0x04)
	int32_t intimacy_level; // 0x04(0x04)
	int32_t role_id; // 0x08(0x04)
};

// ScriptStruct KxFramework.UserRankData
// Size: 0x60 (Inherited: 0x00)
struct FUserRankData {
	struct FRankLevel ghost_rank; // 0x00(0x18)
	struct FRankLevel ghost_top_rank; // 0x18(0x18)
	struct FRankLevel human_rank; // 0x30(0x18)
	struct FRankLevel human_top_rank; // 0x48(0x18)
};

// ScriptStruct KxFramework.RankLevel
// Size: 0x18 (Inherited: 0x00)
struct FRankLevel {
	int32_t Grade; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	int32_t Star; // 0x08(0x04)
	int32_t score; // 0x0c(0x04)
	int32_t zhu_ji_points; // 0x10(0x04)
	int32_t all_stars; // 0x14(0x04)
};

// ScriptStruct KxFramework.UserGameServerData
// Size: 0x1c8 (Inherited: 0x00)
struct FUserGameServerData {
	int32_t UID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t plateform_id; // 0x08(0x08)
	struct FString nick_name; // 0x10(0x10)
	int32_t head_icon; // 0x20(0x04)
	int32_t sex; // 0x24(0x04)
	int32_t praise_num; // 0x28(0x04)
	int32_t head_frame; // 0x2c(0x04)
	int64_t account_create_time; // 0x30(0x08)
	struct TArray<struct FPBMvpInfo> mvp_info_list; // 0x38(0x10)
	int32_t account_level; // 0x48(0x04)
	int32_t account_exp; // 0x4c(0x04)
	int64_t guild_uid; // 0x50(0x08)
	int64_t guild_name; // 0x58(0x08)
	struct FPBMailS mail_list; // 0x60(0x10)
	struct FRankLevelNew rank_level; // 0x70(0x80)
	struct FUserShowRole cur_show_role; // 0xf0(0x18)
	struct TArray<struct FAchievementInfo> achievement_list; // 0x108(0x10)
	struct TArray<struct FPBUserRoleInfo> role_info_list; // 0x118(0x10)
	struct FFUserSkinList skin_collect; // 0x128(0x10)
	struct TArray<struct FBattleWinInfo> win_info_list; // 0x138(0x10)
	int32_t ghost_killhuman_count; // 0x148(0x04)
	int32_t human_sealeye_count; // 0x14c(0x04)
	struct TArray<int32_t> receive_account_level_award; // 0x150(0x10)
	int64_t cur_max_mail_id; // 0x160(0x08)
	struct FPBPinchFaceData pinch_face_data; // 0x168(0x20)
	struct FPBGroupDataList group_data; // 0x188(0x10)
	int32_t isolduser; // 0x198(0x04)
	int32_t isget; // 0x19c(0x04)
	bool had_get_init_data; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	struct FExpCardInfo exp_card; // 0x1a4(0x08)
	struct FCoinCardInfo coin_card; // 0x1ac(0x08)
	int32_t zhu_ji_points; // 0x1b4(0x04)
	struct FRoleIntimacyCardInfo role_intimacy_card; // 0x1b8(0x08)
	int32_t last_market_time; // 0x1c0(0x04)
	int32_t left_present_time; // 0x1c4(0x04)
};

// ScriptStruct KxFramework.RoleIntimacyCardInfo
// Size: 0x08 (Inherited: 0x00)
struct FRoleIntimacyCardInfo {
	int32_t left_count; // 0x00(0x04)
	int32_t ratio; // 0x04(0x04)
};

// ScriptStruct KxFramework.CoinCardInfo
// Size: 0x08 (Inherited: 0x00)
struct FCoinCardInfo {
	int32_t left_count; // 0x00(0x04)
	int32_t ratio; // 0x04(0x04)
};

// ScriptStruct KxFramework.ExpCardInfo
// Size: 0x08 (Inherited: 0x00)
struct FExpCardInfo {
	int32_t left_count; // 0x00(0x04)
	int32_t ratio; // 0x04(0x04)
};

// ScriptStruct KxFramework.PBGroupDataList
// Size: 0x10 (Inherited: 0x00)
struct FPBGroupDataList {
	struct TArray<struct FPBGroupData> data_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.PBGroupData
// Size: 0x18 (Inherited: 0x00)
struct FPBGroupData {
	int32_t group_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString group_name; // 0x08(0x10)
};

// ScriptStruct KxFramework.PBPinchFaceData
// Size: 0x20 (Inherited: 0x00)
struct FPBPinchFaceData {
	struct TArray<struct FPinchFaceNode> pinch_list; // 0x00(0x10)
	struct FString setting_data; // 0x10(0x10)
};

// ScriptStruct KxFramework.PinchFaceNode
// Size: 0x10 (Inherited: 0x00)
struct FPinchFaceNode {
	int64_t pos; // 0x00(0x08)
	int64_t Num; // 0x08(0x08)
};

// ScriptStruct KxFramework.BattleWinInfo
// Size: 0x10 (Inherited: 0x00)
struct FBattleWinInfo {
	int32_t match_type; // 0x00(0x04)
	int32_t win_count; // 0x04(0x04)
	int32_t fail_count; // 0x08(0x04)
	int32_t ghost_or_humen; // 0x0c(0x04)
};

// ScriptStruct KxFramework.FUserSkinList
// Size: 0x10 (Inherited: 0x00)
struct FFUserSkinList {
	struct TArray<struct FUserSkinData> skin_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.UserSkinData
// Size: 0x10 (Inherited: 0x00)
struct FUserSkinData {
	int32_t config_id; // 0x00(0x04)
	int32_t skin_count; // 0x04(0x04)
	int32_t experience_card_start_time; // 0x08(0x04)
	int32_t experience_card_end_time; // 0x0c(0x04)
};

// ScriptStruct KxFramework.PBUserRoleInfo
// Size: 0x28 (Inherited: 0x00)
struct FPBUserRoleInfo {
	int32_t role_id; // 0x00(0x04)
	int32_t intimacy_level; // 0x04(0x04)
	int32_t intimacy; // 0x08(0x04)
	struct FBattleWins battle_info; // 0x0c(0x0c)
	struct TArray<int32_t> intimacy_reward_recived; // 0x18(0x10)
};

// ScriptStruct KxFramework.BattleWins
// Size: 0x0c (Inherited: 0x00)
struct FBattleWins {
	int32_t match_type; // 0x00(0x04)
	int32_t win_count; // 0x04(0x04)
	int32_t fail_count; // 0x08(0x04)
};

// ScriptStruct KxFramework.AchievementInfo
// Size: 0x08 (Inherited: 0x00)
struct FAchievementInfo {
	int32_t slot_index; // 0x00(0x04)
	int32_t achievement_id; // 0x04(0x04)
};

// ScriptStruct KxFramework.UserShowRole
// Size: 0x18 (Inherited: 0x00)
struct FUserShowRole {
	int32_t role_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> skin_list; // 0x08(0x10)
};

// ScriptStruct KxFramework.RankLevelNew
// Size: 0x80 (Inherited: 0x00)
struct FRankLevelNew {
	struct FRankNodeNew ghost_rank; // 0x00(0x20)
	struct FRankNodeNew human_rank; // 0x20(0x20)
	struct FRankNodeNew ghost_top_rank; // 0x40(0x20)
	struct FRankNodeNew human_top_rank; // 0x60(0x20)
};

// ScriptStruct KxFramework.RankNodeNew
// Size: 0x20 (Inherited: 0x00)
struct FRankNodeNew {
	int32_t Grade; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	struct FString Star; // 0x08(0x10)
	int32_t score; // 0x18(0x04)
	int32_t zhu_ji_points; // 0x1c(0x04)
};

// ScriptStruct KxFramework.PBMailS
// Size: 0x10 (Inherited: 0x00)
struct FPBMailS {
	struct TArray<struct FPBMail> mail_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.PBMail
// Size: 0x88 (Inherited: 0x00)
struct FPBMail {
	int64_t mail_id; // 0x00(0x08)
	int32_t mail_type; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t begin_time; // 0x10(0x08)
	int64_t invalid_time; // 0x18(0x08)
	struct FPBMailOperator sender; // 0x20(0x18)
	struct FPBMailOperator Target; // 0x38(0x18)
	struct FString Title; // 0x50(0x10)
	struct FString Content; // 0x60(0x10)
	struct FPBMailItemS Data; // 0x70(0x10)
	bool is_get; // 0x80(0x01)
	bool is_read; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t State; // 0x84(0x04)
};

// ScriptStruct KxFramework.PBMailItemS
// Size: 0x10 (Inherited: 0x00)
struct FPBMailItemS {
	struct TArray<struct FPBMailItem> mail_item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.PBMailItem
// Size: 0x08 (Inherited: 0x00)
struct FPBMailItem {
	int32_t item_id; // 0x00(0x04)
	int32_t item_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.PBMailOperator
// Size: 0x18 (Inherited: 0x00)
struct FPBMailOperator {
	int64_t UID; // 0x00(0x08)
	struct FString nick_name; // 0x08(0x10)
};

// ScriptStruct KxFramework.PBMvpInfo
// Size: 0x08 (Inherited: 0x00)
struct FPBMvpInfo {
	int32_t ghost_mvp_count; // 0x00(0x04)
	int32_t human_mvp_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.NoviceTimeLimitData
// Size: 0x20 (Inherited: 0x00)
struct FNoviceTimeLimitData {
	int64_t buy_time; // 0x00(0x08)
	bool is_complete; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FTimelimitGiftMissionData> mission_list; // 0x10(0x10)
};

// ScriptStruct KxFramework.TimelimitGiftMissionData
// Size: 0x20 (Inherited: 0x00)
struct FTimelimitGiftMissionData {
	bool is_complete; // 0x00(0x01)
	bool is_recive_award; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t mission_id; // 0x04(0x04)
	int32_t mission_type; // 0x08(0x04)
	int32_t progress; // 0x0c(0x04)
	struct TArray<int32_t> target_params; // 0x10(0x10)
};

// ScriptStruct KxFramework.PBNoviceMissionData
// Size: 0x20 (Inherited: 0x00)
struct FPBNoviceMissionData {
	int64_t pre_day_time; // 0x00(0x08)
	int32_t day_count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FPBNewHandMissionData> mission_list; // 0x10(0x10)
};

// ScriptStruct KxFramework.PBGrowFundData
// Size: 0x18 (Inherited: 0x00)
struct FPBGrowFundData {
	bool is_buy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> revice_awards; // 0x08(0x10)
};

// ScriptStruct KxFramework.PBBattleResultData
// Size: 0x68 (Inherited: 0x00)
struct FPBBattleResultData {
	int64_t room_id; // 0x00(0x08)
	int32_t win_camp; // 0x08(0x04)
	int32_t match_type; // 0x0c(0x04)
	int64_t game_start_time; // 0x10(0x08)
	int64_t game_end_time; // 0x18(0x08)
	struct FPBBattleGhostInfo ghost_info; // 0x20(0x20)
	struct TArray<struct FPBBattleHumanInfo> human_info; // 0x40(0x10)
	struct FPBBattleElementSlotInfo element_slot_info; // 0x50(0x18)
};

// ScriptStruct KxFramework.PBBattleElementSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FPBBattleElementSlotInfo {
	int32_t Gold; // 0x00(0x04)
	int32_t Wood; // 0x04(0x04)
	int32_t Terra; // 0x08(0x04)
	int32_t fire; // 0x0c(0x04)
	int32_t water; // 0x10(0x04)
	int32_t Bagua; // 0x14(0x04)
};

// ScriptStruct KxFramework.PBBattleHumanInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBBattleHumanInfo {
	int64_t room_id; // 0x00(0x08)
	int32_t win_camp; // 0x08(0x04)
	int32_t match_type; // 0x0c(0x04)
	int64_t game_start_time; // 0x10(0x08)
	int64_t game_end_time; // 0x18(0x08)
};

// ScriptStruct KxFramework.PBBattleGhostInfo
// Size: 0x20 (Inherited: 0x00)
struct FPBBattleGhostInfo {
	int64_t room_id; // 0x00(0x08)
	int32_t win_camp; // 0x08(0x04)
	int32_t match_type; // 0x0c(0x04)
	int64_t game_start_time; // 0x10(0x08)
	int64_t game_end_time; // 0x18(0x08)
};

// ScriptStruct KxFramework.PBBattleReportSingleList
// Size: 0x10 (Inherited: 0x00)
struct FPBBattleReportSingleList {
	struct TArray<struct FPBBattleReportSingle> brief_lsit; // 0x00(0x10)
};

// ScriptStruct KxFramework.PBBattleReportSingle
// Size: 0x48 (Inherited: 0x00)
struct FPBBattleReportSingle {
	int32_t UID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t room_id; // 0x08(0x08)
	int32_t map_id; // 0x10(0x04)
	int32_t time_len; // 0x14(0x04)
	int32_t score; // 0x18(0x04)
	int32_t is_win; // 0x1c(0x04)
	int32_t role_id; // 0x20(0x04)
	int32_t is_friend; // 0x24(0x04)
	struct TArray<int32_t> skill_list; // 0x28(0x10)
	int64_t create_time; // 0x38(0x08)
	int32_t match_type; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct KxFramework.GameLevelRank
// Size: 0x48 (Inherited: 0x00)
struct FGameLevelRank {
	int64_t UID; // 0x00(0x08)
	int32_t Guild_ID; // 0x08(0x04)
	int32_t All_Star; // 0x0c(0x04)
	int32_t win_count; // 0x10(0x04)
	int32_t Player_Flag; // 0x14(0x04)
	int32_t Grade; // 0x18(0x04)
	int32_t Level; // 0x1c(0x04)
	int32_t Star; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString NickName; // 0x28(0x10)
	struct FString guild_name; // 0x38(0x10)
};

// ScriptStruct KxFramework.GameMarketRank
// Size: 0x38 (Inherited: 0x00)
struct FGameMarketRank {
	int64_t UID; // 0x00(0x08)
	int32_t Guild_ID; // 0x08(0x04)
	int32_t account_level; // 0x0c(0x04)
	int32_t Market_Count; // 0x10(0x04)
	int32_t Player_Flag; // 0x14(0x04)
	struct FString NickName; // 0x18(0x10)
	struct FString guild_name; // 0x28(0x10)
};

// ScriptStruct KxFramework.GameGuildRank
// Size: 0x38 (Inherited: 0x00)
struct FGameGuildRank {
	int32_t Guild_ID; // 0x00(0x04)
	int32_t Guild_Level; // 0x04(0x04)
	int64_t UID; // 0x08(0x08)
	int32_t Guild_Prosperity; // 0x10(0x04)
	int32_t Player_Flag; // 0x14(0x04)
	struct FString NickName; // 0x18(0x10)
	struct FString guild_name; // 0x28(0x10)
};

// ScriptStruct KxFramework.KxTeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FKxTeamInfo {
	int32_t master_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString team_id; // 0x08(0x10)
	struct TArray<struct FUserGameBaseSimpleData> user_list; // 0x18(0x10)
	int32_t is_del; // 0x28(0x04)
	int32_t match_type; // 0x2c(0x04)
};

// ScriptStruct KxFramework.UserGameBaseSimpleData
// Size: 0xd0 (Inherited: 0x00)
struct FUserGameBaseSimpleData {
	int32_t UID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString nick_name; // 0x08(0x10)
	int32_t head_icon; // 0x18(0x04)
	int32_t head_frame; // 0x1c(0x04)
	int32_t sex; // 0x20(0x04)
	int32_t account_level; // 0x24(0x04)
	int64_t guild_uid; // 0x28(0x08)
	struct FString guild_name; // 0x30(0x10)
	struct FRankLevelNew rank_level; // 0x40(0x80)
	int32_t create_time; // 0xc0(0x04)
	int32_t online_time; // 0xc4(0x04)
	int32_t curr_status; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct KxFramework.CustomRoomInfo
// Size: 0x38 (Inherited: 0x00)
struct FCustomRoomInfo {
	int32_t master_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString room_id; // 0x08(0x10)
	struct TArray<struct FCustomRoomRoleInfo> user_list; // 0x18(0x10)
	int32_t is_del; // 0x28(0x04)
	int32_t game_type; // 0x2c(0x04)
	int32_t master_pos; // 0x30(0x04)
	int32_t curr_mapid; // 0x34(0x04)
};

// ScriptStruct KxFramework.CustomRoomRoleInfo
// Size: 0xe0 (Inherited: 0x00)
struct FCustomRoomRoleInfo {
	int32_t pos; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUserGameBaseSimpleData User; // 0x08(0xd0)
	int32_t status; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct KxFramework.SkinDataInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinDataInfo {
	struct TArray<struct FSkinData> skin_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.SkinData
// Size: 0x08 (Inherited: 0x00)
struct FSkinData {
	int32_t config_id; // 0x00(0x04)
	int32_t skin_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.ShopBuyItem
// Size: 0x10 (Inherited: 0x00)
struct FShopBuyItem {
	int32_t config_type; // 0x00(0x04)
	int32_t config_id; // 0x04(0x04)
	int32_t coin_id; // 0x08(0x04)
	int32_t nBuyCount; // 0x0c(0x04)
};

// ScriptStruct KxFramework.LobbyChatMessageList
// Size: 0x18 (Inherited: 0x00)
struct FLobbyChatMessageList {
	struct TArray<struct FLobbyChatMessage> chat_list; // 0x00(0x10)
	enum class EChatChannelType ChannelType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct KxFramework.LobbyChatMessage
// Size: 0x30 (Inherited: 0x00)
struct FLobbyChatMessage {
	int64_t UID; // 0x00(0x08)
	struct FString NickName; // 0x08(0x10)
	struct FString chatmsg; // 0x18(0x10)
	int32_t msg_time; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct KxFramework.TakedMatketRewardStr
// Size: 0x30 (Inherited: 0x00)
struct FTakedMatketRewardStr {
	int32_t UID; // 0x00(0x04)
	int32_t error_code; // 0x04(0x04)
	int32_t week_market_count; // 0x08(0x04)
	int32_t Market_Count; // 0x0c(0x04)
	struct TArray<int32_t> week_taken_marketrwd_id; // 0x10(0x10)
	struct TArray<int32_t> taken_marketrwd_id; // 0x20(0x10)
};

// ScriptStruct KxFramework.TakeMatketRewardStr
// Size: 0x28 (Inherited: 0x00)
struct FTakeMatketRewardStr {
	int32_t UID; // 0x00(0x04)
	int32_t error_code; // 0x04(0x04)
	struct TArray<int32_t> take_week_reward_ids; // 0x08(0x10)
	struct TArray<int32_t> take_reward_ids; // 0x18(0x10)
};

// ScriptStruct KxFramework.BanPickInfo
// Size: 0xe8 (Inherited: 0x00)
struct FBanPickInfo {
	enum class EBanPickState CurState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPlayerBPInfo GhostInfo; // 0x08(0x80)
	struct TArray<struct FPlayerBPInfo> HumanInfoMap; // 0x88(0x10)
	int32_t HumanFinalDisableMapID; // 0x98(0x04)
	int32_t HumanFinalDisableRoleID; // 0x9c(0x04)
	int32_t HumanSelectIndex; // 0xa0(0x04)
	int32_t GhostFinalDisableRoleID; // 0xa4(0x04)
	int32_t GhostFinalDisableMapID; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FWerewolfBPInfo WerewolfInfo; // 0xb0(0x38)
};

// ScriptStruct KxFramework.WerewolfBPInfo
// Size: 0x38 (Inherited: 0x00)
struct FWerewolfBPInfo {
	enum class EBanPickState CurState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t GhostBanID; // 0x04(0x04)
	struct TArray<struct FUserVoteInfo> VoteInfos; // 0x08(0x10)
	struct TArray<struct FPlayerBPInfo> PlayerBPInfos; // 0x18(0x10)
	struct TArray<int32_t> GhostSelectIDs; // 0x28(0x10)
};

// ScriptStruct KxFramework.PlayerBPInfo
// Size: 0x80 (Inherited: 0x00)
struct FPlayerBPInfo {
	int32_t UID; // 0x00(0x04)
	int32_t CampID; // 0x04(0x04)
	struct FString NickName; // 0x08(0x10)
	int32_t DisableMapID; // 0x18(0x04)
	int32_t DisableRoleID; // 0x1c(0x04)
	int32_t HumanRoleID; // 0x20(0x04)
	int32_t GhostRoleID; // 0x24(0x04)
	bool bConfrimRole; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<int32_t> HumanSkillIDs; // 0x30(0x10)
	struct TArray<int32_t> HumanItemIDs; // 0x40(0x10)
	struct TArray<int32_t> GhostItemIDs; // 0x50(0x10)
	struct TArray<int32_t> HumanSkinIDs; // 0x60(0x10)
	struct TArray<int32_t> GhostSkinIDs; // 0x70(0x10)
};

// ScriptStruct KxFramework.UserVoteInfo
// Size: 0x08 (Inherited: 0x00)
struct FUserVoteInfo {
	int32_t ghost_role_id; // 0x00(0x04)
	int32_t ghost_vote_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.ItemMarketUserInfo
// Size: 0x28 (Inherited: 0x00)
struct FItemMarketUserInfo {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t error_code; // 0x0c(0x04)
	struct FItemMarketOnSaleData self_tradebank_info; // 0x10(0x18)
};

// ScriptStruct KxFramework.ItemMarketOnSaleData
// Size: 0x18 (Inherited: 0x00)
struct FItemMarketOnSaleData {
	int32_t box_capacity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FItemMarketProduct> product_list; // 0x08(0x10)
};

// ScriptStruct KxFramework.ItemMarketProduct
// Size: 0x30 (Inherited: 0x00)
struct FItemMarketProduct {
	int64_t trade_id; // 0x00(0x08)
	int32_t product_id; // 0x08(0x04)
	int32_t Num; // 0x0c(0x04)
	int32_t price; // 0x10(0x04)
	int32_t UID; // 0x14(0x04)
	int64_t create_time; // 0x18(0x08)
	int64_t end_time; // 0x20(0x08)
	int32_t State; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct KxFramework.ItemMarketSaleItemRspInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemMarketSaleItemRspInfo {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t product_id; // 0x0c(0x04)
	int32_t Num; // 0x10(0x04)
	int32_t price; // 0x14(0x04)
	int32_t sale_hour; // 0x18(0x04)
	int32_t error_code; // 0x1c(0x04)
};

// ScriptStruct KxFramework.ItemMarketBuyItemRsp
// Size: 0x20 (Inherited: 0x00)
struct FItemMarketBuyItemRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t trade_id; // 0x10(0x08)
	int32_t price; // 0x18(0x04)
	int32_t error_code; // 0x1c(0x04)
};

// ScriptStruct KxFramework.ItemMarketOffSaleRsp
// Size: 0x20 (Inherited: 0x00)
struct FItemMarketOffSaleRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t trade_id; // 0x10(0x08)
	int32_t error_code; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct KxFramework.ItemMarketUserRecordDataRsp
// Size: 0x20 (Inherited: 0x00)
struct FItemMarketUserRecordDataRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t error_code; // 0x0c(0x04)
	struct TArray<struct FItemMarketRecordData> log_list; // 0x10(0x10)
};

// ScriptStruct KxFramework.ItemMarketRecordData
// Size: 0x48 (Inherited: 0x00)
struct FItemMarketRecordData {
	enum class ETradeType trade_type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t log_id; // 0x08(0x08)
	int64_t trade_id; // 0x10(0x08)
	int64_t product_id; // 0x18(0x08)
	int64_t price; // 0x20(0x08)
	int64_t seller_id; // 0x28(0x08)
	int64_t buyer_id; // 0x30(0x08)
	int64_t trade_time; // 0x38(0x08)
	int32_t tax; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct KxFramework.ItemMarketBuyBoothRsp
// Size: 0x14 (Inherited: 0x00)
struct FItemMarketBuyBoothRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t now_box; // 0x0c(0x04)
	int32_t error_code; // 0x10(0x04)
};

// ScriptStruct KxFramework.ItemMarketSearchRsp
// Size: 0x28 (Inherited: 0x00)
struct FItemMarketSearchRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t trade_count; // 0x0c(0x04)
	struct TArray<struct FItemMarketProduct> product_list; // 0x10(0x10)
	int32_t error_code; // 0x20(0x04)
	int32_t symbol; // 0x24(0x04)
};

// ScriptStruct KxFramework.KxUserInfo
// Size: 0x78 (Inherited: 0x00)
struct FKxUserInfo {
	int32_t UID; // 0x00(0x04)
	int32_t HeadIconID; // 0x04(0x04)
	struct FString NickName; // 0x08(0x10)
	int32_t PlatformID; // 0x18(0x04)
	int32_t UpdateType; // 0x1c(0x04)
	int32_t HeadFrameID; // 0x20(0x04)
	struct FKxRankData RankLevel; // 0x24(0x50)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct KxFramework.KxRankData
// Size: 0x50 (Inherited: 0x00)
struct FKxRankData {
	struct FKxRankInfo ghost_rank; // 0x00(0x14)
	struct FKxRankInfo ghost_top_rank; // 0x14(0x14)
	struct FKxRankInfo human_rank; // 0x28(0x14)
	struct FKxRankInfo human_top_rank; // 0x3c(0x14)
};

// ScriptStruct KxFramework.KxRankInfo
// Size: 0x14 (Inherited: 0x00)
struct FKxRankInfo {
	int32_t all_stars; // 0x00(0x04)
	int32_t Grade; // 0x04(0x04)
	int32_t Level; // 0x08(0x04)
	int32_t score; // 0x0c(0x04)
	int32_t Star; // 0x10(0x04)
};

// ScriptStruct KxFramework.JianbaoDataInfo
// Size: 0x10 (Inherited: 0x00)
struct FJianbaoDataInfo {
	int32_t endTime; // 0x00(0x04)
	int32_t gridId; // 0x04(0x04)
	int32_t ItemId; // 0x08(0x04)
	int32_t startTime; // 0x0c(0x04)
};

// ScriptStruct KxFramework.KxPlantReward
// Size: 0x08 (Inherited: 0x00)
struct FKxPlantReward {
	int32_t RewardID; // 0x00(0x04)
	int32_t RewardNum; // 0x04(0x04)
};

// ScriptStruct KxFramework.KxGridInfo
// Size: 0x10 (Inherited: 0x00)
struct FKxGridInfo {
	int32_t gridId; // 0x00(0x04)
	int32_t ItemId; // 0x04(0x04)
	int32_t jiaoShuiCiShu; // 0x08(0x04)
	int32_t startTime; // 0x0c(0x04)
};

// ScriptStruct KxFramework.HomMissionState
// Size: 0x10 (Inherited: 0x00)
struct FHomMissionState {
	int32_t MissionID; // 0x00(0x04)
	int32_t MissionStartTime; // 0x04(0x04)
	int32_t CurrentNum; // 0x08(0x04)
	int32_t State; // 0x0c(0x04)
};

// ScriptStruct KxFramework.Warehouse
// Size: 0x18 (Inherited: 0x00)
struct FWarehouse {
	int64_t Grid_ID; // 0x00(0x08)
	int64_t Item_UID; // 0x08(0x08)
	int32_t item_id; // 0x10(0x04)
	int32_t Item_Num; // 0x14(0x04)
};

// ScriptStruct KxFramework.GuildSimpleInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FGuildSimpleInfoArray {
	struct TArray<struct FGuildSimpleInfo> guildlist; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildSimpleInfo
// Size: 0x68 (Inherited: 0x00)
struct FGuildSimpleInfo {
	int64_t guildId; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	int32_t Level; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t president_id; // 0x20(0x08)
	struct FString president_name; // 0x28(0x10)
	int32_t build_time; // 0x38(0x04)
	int32_t Exp; // 0x3c(0x04)
	int32_t contribute; // 0x40(0x04)
	int32_t activeness; // 0x44(0x04)
	int32_t status; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString accouncenment; // 0x50(0x10)
	int32_t member_count; // 0x60(0x04)
	int32_t member_max_count; // 0x64(0x04)
};

// ScriptStruct KxFramework.GuildRecordList
// Size: 0x10 (Inherited: 0x00)
struct FGuildRecordList {
	struct TArray<struct FGuildRecordInfo> record_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildRecordInfo
// Size: 0xa8 (Inherited: 0x00)
struct FGuildRecordInfo {
	int32_t record_type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NickName; // 0x08(0x10)
	int32_t record_time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString duty_name; // 0x20(0x10)
	int32_t Guild_Level; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString guild_name; // 0x38(0x10)
	int32_t target_uid; // 0x48(0x04)
	int32_t duty_id; // 0x4c(0x04)
	int32_t gkd_change_num; // 0x50(0x04)
	int32_t gkd_cur_num; // 0x54(0x04)
	struct FString gkd_desc; // 0x58(0x10)
	int32_t item_id; // 0x68(0x04)
	int32_t gubi_num; // 0x6c(0x04)
	int32_t contribute; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FItemS spoils_item; // 0x78(0x10)
	int32_t season_point; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString op_mgr_name; // 0x90(0x10)
	int32_t rechage_num; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct KxFramework.ItemS
// Size: 0x10 (Inherited: 0x00)
struct FItemS {
	struct TArray<struct FItem> item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.Item
// Size: 0x08 (Inherited: 0x00)
struct FItem {
	int32_t config_id; // 0x00(0x04)
	int32_t item_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.GuildUserData
// Size: 0x100 (Inherited: 0x00)
struct FGuildUserData {
	int32_t UID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUserGameBaseSimpleData playerSimpleInfo; // 0x08(0xd0)
	struct FGuildMemberData guild_data; // 0xd8(0x24)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct KxFramework.GuildMemberData
// Size: 0x24 (Inherited: 0x00)
struct FGuildMemberData {
	int32_t UID; // 0x00(0x04)
	int32_t playerDutyId; // 0x04(0x04)
	int32_t playerContribute; // 0x08(0x04)
	int32_t playerWeekContribute; // 0x0c(0x04)
	int32_t playerStatus; // 0x10(0x04)
	int32_t last_get_salary_time; // 0x14(0x04)
	int32_t join_time; // 0x18(0x04)
	int32_t dkp; // 0x1c(0x04)
	bool bSpoilsMgr; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct KxFramework.GhostConfig
// Size: 0x30 (Inherited: 0x00)
struct FGhostConfig {
	int32_t Talent1; // 0x00(0x04)
	int32_t Talent2; // 0x04(0x04)
	int32_t Talent3; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> SkinIDArray; // 0x10(0x10)
	bool IsHasTeam; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AddExpRatio; // 0x24(0x04)
	float AddCoinRatio; // 0x28(0x04)
	float AddIntimacyRatio; // 0x2c(0x04)
};

// ScriptStruct KxFramework.HumanConfig
// Size: 0x38 (Inherited: 0x00)
struct FHumanConfig {
	int32_t Item1; // 0x00(0x04)
	int32_t Item2; // 0x04(0x04)
	int32_t Item3; // 0x08(0x04)
	int32_t Talent1ID; // 0x0c(0x04)
	int32_t Talent2ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> SkinIDArray; // 0x18(0x10)
	bool IsHasTeam; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AddExpRatio; // 0x2c(0x04)
	float AddCoinRatio; // 0x30(0x04)
	float AddIntimacyRatio; // 0x34(0x04)
};

// ScriptStruct KxFramework.KxBuffTable
// Size: 0x70 (Inherited: 0x08)
struct FKxBuffTable : FTableRowBase {
	struct FText BuffName; // 0x08(0x18)
	SoftClassProperty BuffClass; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> BuffIco; // 0x48(0x28)
};

// ScriptStruct KxFramework.KxFriendStateData
// Size: 0x10 (Inherited: 0x00)
struct FKxFriendStateData {
	int64_t UID; // 0x00(0x08)
	enum class EKxOnlineState OnlineState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct KxFramework.KxSellConfig
// Size: 0x18 (Inherited: 0x00)
struct FKxSellConfig {
	int32_t r_type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FKxSellData> r_data; // 0x08(0x10)
};

// ScriptStruct KxFramework.KxSellData
// Size: 0x58 (Inherited: 0x00)
struct FKxSellData {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, int32_t> ItemList; // 0x08(0x50)
};

// ScriptStruct KxFramework.KxBoxInfo
// Size: 0x18 (Inherited: 0x00)
struct FKxBoxInfo {
	int32_t r_type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FKxBoxData> r_data; // 0x08(0x10)
};

// ScriptStruct KxFramework.KxBoxData
// Size: 0x60 (Inherited: 0x00)
struct FKxBoxData {
	struct FString rankv; // 0x00(0x10)
	struct TMap<struct FString, int32_t> ItemList; // 0x10(0x50)
};

// ScriptStruct KxFramework.ItemMarketCurrentBoothRsp
// Size: 0x14 (Inherited: 0x00)
struct FItemMarketCurrentBoothRsp {
	int32_t cmdID; // 0x00(0x04)
	int32_t Param; // 0x04(0x04)
	int32_t UID; // 0x08(0x04)
	int32_t curbox; // 0x0c(0x04)
	int32_t error_code; // 0x10(0x04)
};

// ScriptStruct KxFramework.PlayerIDOnlineStruct
// Size: 0x20 (Inherited: 0x00)
struct FPlayerIDOnlineStruct {
	struct TArray<struct FString> DisconnectIDs; // 0x00(0x10)
	struct TArray<struct FString> ExitIDs; // 0x10(0x10)
};

// ScriptStruct KxFramework.GuildInviteList
// Size: 0x10 (Inherited: 0x00)
struct FGuildInviteList {
	struct TArray<struct FGuildInviteRecordInfo> invites; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildInviteRecordInfo
// Size: 0x80 (Inherited: 0x00)
struct FGuildInviteRecordInfo {
	int32_t invitePlayerID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString invitePlayerName; // 0x08(0x10)
	struct FGuildSimpleInfo inviteGuildSInfo; // 0x18(0x68)
};

// ScriptStruct KxFramework.GuildUserGuildFullData
// Size: 0x148 (Inherited: 0x00)
struct FGuildUserGuildFullData {
	struct FGuildInfo GuildInfo; // 0x00(0x120)
	struct FGuildMemberData self_guild_data; // 0x120(0x24)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct KxFramework.GuildInfo
// Size: 0x120 (Inherited: 0x00)
struct FGuildInfo {
	int64_t guildId; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	int32_t Level; // 0x18(0x04)
	int32_t president_id; // 0x1c(0x04)
	struct FString president_name; // 0x20(0x10)
	int32_t build_time; // 0x30(0x04)
	int32_t Exp; // 0x34(0x04)
	int32_t contribute; // 0x38(0x04)
	int32_t activeness; // 0x3c(0x04)
	int32_t status; // 0x40(0x04)
	int32_t master_ids; // 0x44(0x04)
	struct FGuildMemberList user_list; // 0x48(0x10)
	struct FString accouncenment; // 0x58(0x10)
	struct FGuildRecordList record_list; // 0x68(0x10)
	struct FApply_List Apply_List; // 0x78(0x10)
	int32_t member_count; // 0x88(0x04)
	int32_t freeze_time; // 0x8c(0x04)
	int32_t apply_count; // 0x90(0x04)
	int32_t destory_time; // 0x94(0x04)
	struct FGuildDutyList duty_list; // 0x98(0x10)
	int32_t AnnouncenmentlastModifyTime; // 0xa8(0x04)
	int32_t member_num_level; // 0xac(0x04)
	int32_t member_max_num; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FItemS guild_bag; // 0xb8(0x10)
	int32_t season_activeness; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FGuidJoinCon join_con; // 0xd0(0x20)
	int32_t nameLastModifyTime; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<int32_t> spoilsmgr_ids; // 0xf8(0x10)
	struct FGuildShopItemInfoList slist; // 0x108(0x10)
	int32_t recommend_endtime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct KxFramework.GuildShopItemInfoList
// Size: 0x10 (Inherited: 0x00)
struct FGuildShopItemInfoList {
	struct TArray<struct FGuildShopItemInfo> ItemS; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildShopItemInfo
// Size: 0x14 (Inherited: 0x00)
struct FGuildShopItemInfo {
	int32_t s_id; // 0x00(0x04)
	struct FGuildShopItemPrice item_price; // 0x04(0x08)
	int32_t buy_count; // 0x0c(0x04)
	int32_t item_id; // 0x10(0x04)
};

// ScriptStruct KxFramework.GuildShopItemPrice
// Size: 0x08 (Inherited: 0x00)
struct FGuildShopItemPrice {
	int32_t nPriceType; // 0x00(0x04)
	int32_t nPriceCount; // 0x04(0x04)
};

// ScriptStruct KxFramework.GuidJoinCon
// Size: 0x20 (Inherited: 0x00)
struct FGuidJoinCon {
	bool bCanJoin; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t minRank; // 0x04(0x04)
	int32_t MinLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Notice; // 0x10(0x10)
};

// ScriptStruct KxFramework.GuildDutyList
// Size: 0x10 (Inherited: 0x00)
struct FGuildDutyList {
	struct TArray<struct FGuildDutyInfo> duty_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildDutyInfo
// Size: 0x30 (Inherited: 0x00)
struct FGuildDutyInfo {
	int32_t duty_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString duty_name; // 0x08(0x10)
	int64_t duty_right; // 0x18(0x08)
	int32_t duty_level; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime duty_time; // 0x28(0x08)
};

// ScriptStruct KxFramework.Apply_List
// Size: 0x10 (Inherited: 0x00)
struct FApply_List {
	struct TArray<struct FGuildApplyInfo> Apply_List; // 0x00(0x10)
};

// ScriptStruct KxFramework.GuildApplyInfo
// Size: 0xd8 (Inherited: 0x00)
struct FGuildApplyInfo {
	struct FUserGameBaseSimpleData playerSimpleInfo; // 0x00(0xd0)
	int32_t apply_time; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct KxFramework.GuildMemberList
// Size: 0x10 (Inherited: 0x00)
struct FGuildMemberList {
	struct TArray<struct FGuildUserData> member_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.UserGuildApplyList
// Size: 0x10 (Inherited: 0x00)
struct FUserGuildApplyList {
	struct TArray<struct FUserApplyInfo> applyList; // 0x00(0x10)
};

// ScriptStruct KxFramework.UserApplyInfo
// Size: 0x10 (Inherited: 0x00)
struct FUserApplyInfo {
	int64_t Guild_ID; // 0x00(0x08)
	int32_t apply_time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct KxFramework.GuildMemberRight
// Size: 0x0c (Inherited: 0x00)
struct FGuildMemberRight {
	int32_t normal_right; // 0x00(0x04)
	int32_t master_right; // 0x04(0x04)
	int32_t president_right; // 0x08(0x04)
};

// ScriptStruct KxFramework.SelefHomeData
// Size: 0x50 (Inherited: 0x00)
struct FSelefHomeData {
	struct FString acceptTasks; // 0x00(0x10)
	struct FHomMissionStateList_New allTasks; // 0x10(0x10)
	struct FWarehouse_NewList dress_item_list; // 0x20(0x10)
	int32_t homeLevel; // 0x30(0x04)
	int32_t homeMineCount; // 0x34(0x04)
	int32_t homeMineLevel; // 0x38(0x04)
	int32_t homeOpenBoxLevel; // 0x3c(0x04)
	struct FString store_item_list; // 0x40(0x10)
};

// ScriptStruct KxFramework.Warehouse_NewList
// Size: 0x10 (Inherited: 0x00)
struct FWarehouse_NewList {
	struct TArray<struct FWarehouse_New> item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.Warehouse_New
// Size: 0x18 (Inherited: 0x00)
struct FWarehouse_New {
	int64_t Grid_ID; // 0x00(0x08)
	int64_t Item_UID; // 0x08(0x08)
	int32_t item_id; // 0x10(0x04)
	int32_t Item_Num; // 0x14(0x04)
};

// ScriptStruct KxFramework.HomMissionStateList_New
// Size: 0x10 (Inherited: 0x00)
struct FHomMissionStateList_New {
	struct TArray<struct FHomMissionState_New> ItemS; // 0x00(0x10)
};

// ScriptStruct KxFramework.HomMissionState_New
// Size: 0x10 (Inherited: 0x00)
struct FHomMissionState_New {
	int32_t taskCfId; // 0x00(0x04)
	int32_t startTime; // 0x04(0x04)
	int32_t curNum; // 0x08(0x04)
	int32_t State; // 0x0c(0x04)
};

// ScriptStruct KxFramework.JianbaoRewardInfo
// Size: 0x10 (Inherited: 0x00)
struct FJianbaoRewardInfo {
	struct TArray<struct FMiningRewardItemData> Rewards; // 0x00(0x10)
};

// ScriptStruct KxFramework.MiningRewardItemData
// Size: 0x08 (Inherited: 0x00)
struct FMiningRewardItemData {
	int32_t RewardID; // 0x00(0x04)
	int32_t RewardNum; // 0x04(0x04)
};

// ScriptStruct KxFramework.MiningRewardInfo
// Size: 0x10 (Inherited: 0x00)
struct FMiningRewardInfo {
	struct TArray<struct FMiningRewardItemData> item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.KxPlantInfo
// Size: 0x28 (Inherited: 0x00)
struct FKxPlantInfo {
	int32_t Lv; // 0x00(0x04)
	int32_t Time; // 0x04(0x04)
	struct FString icon; // 0x08(0x10)
	struct FString modle; // 0x18(0x10)
};

// ScriptStruct KxFramework.KxItemTable
// Size: 0xf0 (Inherited: 0x08)
struct FKxItemTable : FTableRowBase {
	int32_t ItemId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText ItemName; // 0x10(0x18)
	struct FText ItemDes; // 0x28(0x18)
	enum class EInventoryType Type; // 0x40(0x01)
	bool LRSExclusive; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TSoftObjectPtr<struct UTexture2D> ItemIco; // 0x48(0x28)
	SoftClassProperty ItemClass; // 0x70(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> ModelClass; // 0x98(0x28)
	struct FText GainDes; // 0xc0(0x18)
	struct FText UeserDes; // 0xd8(0x18)
};

// ScriptStruct KxFramework.TreasureBoxMissionData
// Size: 0x18 (Inherited: 0x00)
struct FTreasureBoxMissionData {
	bool b_init; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FPBNewHandMissionData> mission_list; // 0x08(0x10)
};

// ScriptStruct KxFramework.ServerVersionInfo
// Size: 0x10 (Inherited: 0x00)
struct FServerVersionInfo {
	struct FVersionInfo Root; // 0x00(0x10)
};

// ScriptStruct KxFramework.VersionInfo
// Size: 0x10 (Inherited: 0x00)
struct FVersionInfo {
	struct TArray<struct FOneInfo> Server; // 0x00(0x10)
};

// ScriptStruct KxFramework.OneInfo
// Size: 0x30 (Inherited: 0x00)
struct FOneInfo {
	struct FString Version; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString URL; // 0x20(0x10)
};

// ScriptStruct KxFramework.sevenrewrad
// Size: 0x10 (Inherited: 0x00)
struct Fsevenrewrad {
	struct TArray<int32_t> recive_award_node; // 0x00(0x10)
};

// ScriptStruct KxFramework.SRewrad
// Size: 0x04 (Inherited: 0x00)
struct FSRewrad {
	int32_t Node; // 0x00(0x04)
};

// ScriptStruct KxFramework.Hicn
// Size: 0x08 (Inherited: 0x00)
struct FHicn {
	int32_t config_id; // 0x00(0x04)
	int32_t item_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.ItemHeadicns
// Size: 0x10 (Inherited: 0x00)
struct FItemHeadicns {
	struct TArray<struct FItemHeadicn> item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.ItemHeadicn
// Size: 0x08 (Inherited: 0x00)
struct FItemHeadicn {
	int32_t item_id; // 0x00(0x04)
	int32_t item_count; // 0x04(0x04)
};

// ScriptStruct KxFramework.BuffAttribute
// Size: 0x10 (Inherited: 0x00)
struct FBuffAttribute {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t buff_value; // 0x08(0x08)
};

// ScriptStruct KxFramework.UserServerData
// Size: 0x20 (Inherited: 0x00)
struct FUserServerData {
	int32_t record_id; // 0x00(0x04)
	int32_t lobby_gate_id; // 0x04(0x04)
	struct FString home_logic_id; // 0x08(0x10)
	int32_t match_gate_id; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct KxFramework.TagSaveRoleSkin
// Size: 0x18 (Inherited: 0x00)
struct FTagSaveRoleSkin {
	int32_t nRoleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> skinIds; // 0x08(0x10)
};

// ScriptStruct KxFramework.SeasonPassTaskConfig
// Size: 0x20 (Inherited: 0x00)
struct FSeasonPassTaskConfig {
	struct TArray<struct FString> Config; // 0x00(0x10)
	struct TArray<int32_t> Parameter; // 0x10(0x10)
};

// ScriptStruct KxFramework.SeasonPassLvReward
// Size: 0x58 (Inherited: 0x00)
struct FSeasonPassLvReward {
	int32_t r_type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, int32_t> ItemList; // 0x08(0x50)
};

// ScriptStruct KxFramework.MailStruct
// Size: 0x10 (Inherited: 0x00)
struct FMailStruct {
	struct TArray<struct FMailInfo> mail_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.MailInfo
// Size: 0x68 (Inherited: 0x00)
struct FMailInfo {
	int64_t begin_time; // 0x00(0x08)
	struct FString Content; // 0x08(0x10)
	struct FMailInfoData Data; // 0x18(0x10)
	int64_t invalid_time; // 0x28(0x08)
	int32_t mail_id; // 0x30(0x04)
	int32_t mail_type; // 0x34(0x04)
	int64_t send_time; // 0x38(0x08)
	struct FMailSenderInfo sender; // 0x40(0x18)
	struct FString Title; // 0x58(0x10)
};

// ScriptStruct KxFramework.MailSenderInfo
// Size: 0x18 (Inherited: 0x00)
struct FMailSenderInfo {
	struct FString nick_name; // 0x00(0x10)
	int32_t UID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct KxFramework.MailInfoData
// Size: 0x10 (Inherited: 0x00)
struct FMailInfoData {
	struct TArray<struct FMailItemInfo> mail_item_list; // 0x00(0x10)
};

// ScriptStruct KxFramework.MailItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FMailItemInfo {
	int32_t item_count; // 0x00(0x04)
	int32_t item_id; // 0x04(0x04)
};

// ScriptStruct KxFramework.UserHumanData
// Size: 0x60 (Inherited: 0x00)
struct FUserHumanData {
	int32_t config_id; // 0x00(0x04)
	struct FHumantAuxiliarySkillData skill_data; // 0x04(0x18)
	struct FItemData Item_2; // 0x1c(0x08)
	struct FItemData Item_3; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FFUserSkinList skin_data; // 0x30(0x10)
	struct FString NickName; // 0x40(0x10)
	int32_t experience_card_start_time; // 0x50(0x04)
	int32_t experience_card_end_time; // 0x54(0x04)
	int32_t experience_delete; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct KxFramework.HumantAuxiliarySkillData
// Size: 0x18 (Inherited: 0x00)
struct FHumantAuxiliarySkillData {
	struct FRoleSkillData auxiliary_skill_id1; // 0x00(0x08)
	struct FRoleSkillData auxiliary_skill_id2; // 0x08(0x08)
	int32_t unlock_skill_id1; // 0x10(0x04)
	int32_t unlock_skill_id2; // 0x14(0x04)
};

// ScriptStruct KxFramework.RoleSkillData
// Size: 0x08 (Inherited: 0x00)
struct FRoleSkillData {
	int32_t skill_id; // 0x00(0x04)
	int32_t skill_level; // 0x04(0x04)
};

// ScriptStruct KxFramework.UserGhostData
// Size: 0x50 (Inherited: 0x00)
struct FUserGhostData {
	int32_t config_id; // 0x00(0x04)
	struct FItemData Item_2; // 0x04(0x08)
	struct FItemData Item_3; // 0x0c(0x08)
	struct FItemData Item_4; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FFUserSkinList skin_data; // 0x20(0x10)
	struct FString NickName; // 0x30(0x10)
	int32_t experience_card_start_time; // 0x40(0x04)
	int32_t experience_card_end_time; // 0x44(0x04)
	int32_t experience_delete; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct KxFramework.ItemConfigData
// Size: 0x18 (Inherited: 0x00)
struct FItemConfigData {
	int32_t ID; // 0x00(0x04)
	int32_t sell_info_key; // 0x04(0x04)
	int32_t sell_info_value; // 0x08(0x04)
	int32_t Effect_Type; // 0x0c(0x04)
	int32_t use_award_config_key; // 0x10(0x04)
	int32_t use_award_config_value; // 0x14(0x04)
};

// ScriptStruct KxFramework.UserSocialData
// Size: 0x14 (Inherited: 0x00)
struct FUserSocialData {
	int32_t config_id; // 0x00(0x04)
	int32_t experience_card_start_time; // 0x04(0x04)
	int32_t experience_card_end_time; // 0x08(0x04)
	int32_t EffectType; // 0x0c(0x04)
	int32_t Count; // 0x10(0x04)
};

// ScriptStruct KxFramework.SkinConfigData
// Size: 0x18 (Inherited: 0x00)
struct FSkinConfigData {
	int32_t config_id; // 0x00(0x04)
	int32_t skin_count; // 0x04(0x04)
	int32_t experience_card_start_time; // 0x08(0x04)
	int32_t experience_card_end_time; // 0x0c(0x04)
	int32_t Effect_Type; // 0x10(0x04)
	int32_t base_skin_id; // 0x14(0x04)
};

// ScriptStruct KxFramework.NOS_XingTi_AllSaveData
// Size: 0x50 (Inherited: 0x00)
struct FNOS_XingTi_AllSaveData {
	struct TMap<int32_t, struct FNOS_XingTi_SaveData> Data; // 0x00(0x50)
};

// ScriptStruct KxFramework.NOS_XingTi_SaveData
// Size: 0x50 (Inherited: 0x00)
struct FNOS_XingTi_SaveData {
	struct FNOS_XingTi_SaveDataJson Data; // 0x00(0x50)
};

// ScriptStruct KxFramework.NOS_XingTi_SaveDataJson
// Size: 0x50 (Inherited: 0x00)
struct FNOS_XingTi_SaveDataJson {
	struct TMap<int32_t, float> Data; // 0x00(0x50)
};

// ScriptStruct KxFramework.IntimacyAward
// Size: 0x58 (Inherited: 0x00)
struct FIntimacyAward {
	int32_t Level; // 0x00(0x04)
	int32_t role_id; // 0x04(0x04)
	struct FAwardConfig Award_Config; // 0x08(0x50)
};

// ScriptStruct KxFramework.AwardConfig
// Size: 0x50 (Inherited: 0x00)
struct FAwardConfig {
	struct TMap<struct FString, int32_t> Award_Config_TMap; // 0x00(0x50)
};

// ScriptStruct KxFramework.GameDataSeason
// Size: 0x28 (Inherited: 0x00)
struct FGameDataSeason {
	int32_t buy_index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t buy_time; // 0x08(0x08)
	struct TArray<struct FMission> mission_list; // 0x10(0x10)
	int32_t season_score; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct KxFramework.Mission
// Size: 0x18 (Inherited: 0x00)
struct FMission {
	bool is_complete; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t mission_id; // 0x04(0x04)
	struct TArray<struct FMissionParams> mission_params; // 0x08(0x10)
};

// ScriptStruct KxFramework.MissionParams
// Size: 0x0c (Inherited: 0x00)
struct FMissionParams {
	int32_t cur_count; // 0x00(0x04)
	int32_t target_count; // 0x04(0x04)
	int32_t target_type; // 0x08(0x04)
};

// ScriptStruct KxFramework.PBRankS
// Size: 0x108 (Inherited: 0x00)
struct FPBRankS {
	struct TArray<struct FGameLevelRank> ghostlevel_ranklist; // 0x00(0x10)
	struct TArray<struct FGameLevelRank> humanlevel_ranklist; // 0x10(0x10)
	struct TArray<struct FGameMarketRank> gamemarket_ranklist; // 0x20(0x10)
	struct TArray<struct FGameGuildRank> gameguild_ranklist; // 0x30(0x10)
	struct FGameLevelRank my_ghostlevel_rankdata; // 0x40(0x48)
	struct FGameLevelRank my_humanlevel_rankdata; // 0x88(0x48)
	struct FGameMarketRank my_gamemarket_rankdata; // 0xd0(0x38)
};

// ScriptStruct KxFramework.SafeTransform
// Size: 0x168 (Inherited: 0x00)
struct FSafeTransform {
	struct FSafeVector3D Scale; // 0x00(0x78)
	struct FSafeVector3D position; // 0x78(0x78)
	struct FSafeRotator Rotation; // 0xf0(0x78)
};

// ScriptStruct KxFramework.SafeRotator
// Size: 0x78 (Inherited: 0x00)
struct FSafeRotator {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString ShiftX; // 0x40(0x10)
	struct FString ShiftY; // 0x50(0x10)
	struct FString ShiftZ; // 0x60(0x10)
	char Flag; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct KxFramework.SafeVector3D
// Size: 0x78 (Inherited: 0x00)
struct FSafeVector3D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString ShiftX; // 0x40(0x10)
	struct FString ShiftY; // 0x50(0x10)
	struct FString ShiftZ; // 0x60(0x10)
	char Flag; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct KxFramework.SafeColor
// Size: 0x98 (Inherited: 0x00)
struct FSafeColor {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueR; // 0x10(0x10)
	struct FString TrueG; // 0x20(0x10)
	struct FString TrueB; // 0x30(0x10)
	struct FString TrueA; // 0x40(0x10)
	struct FString ShiftR; // 0x50(0x10)
	struct FString ShiftG; // 0x60(0x10)
	struct FString ShiftB; // 0x70(0x10)
	struct FString ShiftA; // 0x80(0x10)
	char Flag; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct KxFramework.SafeVector4D
// Size: 0x98 (Inherited: 0x00)
struct FSafeVector4D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString TrueZ; // 0x30(0x10)
	struct FString TrueW; // 0x40(0x10)
	struct FString ShiftX; // 0x50(0x10)
	struct FString ShiftY; // 0x60(0x10)
	struct FString ShiftZ; // 0x70(0x10)
	struct FString ShiftW; // 0x80(0x10)
	char Flag; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct KxFramework.SafeVector2D
// Size: 0x58 (Inherited: 0x00)
struct FSafeVector2D {
	struct FString Internal; // 0x00(0x10)
	struct FString TrueX; // 0x10(0x10)
	struct FString TrueY; // 0x20(0x10)
	struct FString ShiftX; // 0x30(0x10)
	struct FString ShiftY; // 0x40(0x10)
	char Flag; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct KxFramework.SafeText
// Size: 0x38 (Inherited: 0x00)
struct FSafeText {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeString
// Size: 0x38 (Inherited: 0x00)
struct FSafeString {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeName
// Size: 0x38 (Inherited: 0x00)
struct FSafeName {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeFloat
// Size: 0x38 (Inherited: 0x00)
struct FSafeFloat {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeInt
// Size: 0x38 (Inherited: 0x00)
struct FSafeInt {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeByte
// Size: 0x38 (Inherited: 0x00)
struct FSafeByte {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct KxFramework.SafeBool
// Size: 0x38 (Inherited: 0x00)
struct FSafeBool {
	struct FString Internal; // 0x00(0x10)
	struct FString Base; // 0x10(0x10)
	struct FString Shift; // 0x20(0x10)
	char Flag; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

