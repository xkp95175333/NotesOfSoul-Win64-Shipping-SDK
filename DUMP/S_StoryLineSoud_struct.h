// UserDefinedStruct S_StoryLineSoud.S_StoryLineSoud
// Size: 0x50 (Inherited: 0x00)
struct FS_StoryLineSoud {
	enum class E_StoryLineType StoryLineType_2_2490CD9C406329B005D09B8A40756E90; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID_5_CF6B670C40058F08ECCD0791B6D4725B; // 0x04(0x04)
	struct FText StoryLineName_8_011BF78C42B75A5B13D9B987278614E3; // 0x08(0x18)
	int32_t Garde_11_15F1682C4E312A71B5E2CCB62185C057; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<struct USoundBase> Sound_16_1D262C9A47320D6009A79AB26496557C; // 0x28(0x28)
};

