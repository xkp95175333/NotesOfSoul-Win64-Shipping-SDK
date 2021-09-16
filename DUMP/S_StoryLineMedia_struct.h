// UserDefinedStruct S_StoryLineMedia.S_StoryLineMedia
// Size: 0x50 (Inherited: 0x00)
struct FS_StoryLineMedia {
	enum class E_StoryLineType StoryLineType_2_F8B413714E1967D0CBEE99B0D8895D95; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID_12_01A053F941BD612BB39183905DF35044; // 0x04(0x04)
	struct FText StoryLineName_9_A8F5897C4E0212058F76829748E93927; // 0x08(0x18)
	int32_t Garde_6_E6C670E0424480A8C4E1E785FADFCFA6; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<struct UMediaTexture> MemberVar_16_20_3CE671CC4EC8CEFFECE05E883618632A; // 0x28(0x28)
};

