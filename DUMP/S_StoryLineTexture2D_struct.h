// UserDefinedStruct S_StoryLineTexture2D.S_StoryLineTexture2D
// Size: 0x38 (Inherited: 0x00)
struct FS_StoryLineTexture2D {
	enum class E_StoryLineType StoryLineType_2_723FDE244E55729426866490119568C9; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID_5_4C465981409CBA91DAEA47BBB1B7C377; // 0x04(0x04)
	struct FText StoryLineName_8_3A5EAB50481AAA596E0AC7B4EECCC82F; // 0x08(0x18)
	int32_t Garde_11_E108F9344BE9C9D9776BA39E6749E3D2; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Texture_18_28AE848F4F9B5EC8637590A3FB71A8DE; // 0x28(0x10)
};

