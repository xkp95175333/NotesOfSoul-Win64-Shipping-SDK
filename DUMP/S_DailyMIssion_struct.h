// UserDefinedStruct S_DailyMIssion.S_DailyMission
// Size: 0x50 (Inherited: 0x00)
struct FS_DailyMission {
	int32_t ID_2_FC0CEBDA48DBEA8485E71DA5D506FA94; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name_5_9C68DB904095ED15F2DBB18C1CB0CAFC; // 0x08(0x18)
	struct FText Require_14_C2824875465EA0066CF04BA3C424CB37; // 0x20(0x18)
	int32_t NeedCompleteNum_8_AD9E27D044B05A2AB2E2AD961B3EA526; // 0x38(0x04)
	float AddedScore_11_7A5CCBDB4BE77CAF1222F9AFBA97C129; // 0x3c(0x04)
	struct TArray<struct FRewardInfo> RewardItems_18_E06AEDB844E2BC250E01B388288FF4EC; // 0x40(0x10)
};

