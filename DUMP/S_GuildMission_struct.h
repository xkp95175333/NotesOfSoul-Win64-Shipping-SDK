// UserDefinedStruct S_GuildMission.S_GuildMission
// Size: 0x38 (Inherited: 0x00)
struct FS_GuildMission {
	int32_t ID_2_A2D4F20849B309A95BC171892A11E04D; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Require_5_1E49A92E4D0BAC3FA8F077926ABFEA46; // 0x08(0x18)
	int32_t NeedCompleteNum_15_E0AD14E243DCDB1C0AF1FF89F45C632C; // 0x20(0x04)
	int32_t ContributionValue_11_0AB9BE7A4B3506A12BB27381BC2C1095; // 0x24(0x04)
	struct TArray<struct FRewardInfo> RewardItems_12_B8F7E9024D23159261A6318294CFEE7C; // 0x28(0x10)
};

