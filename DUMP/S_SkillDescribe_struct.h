// UserDefinedStruct S_SkillDescribe.S_SkillDescribe
// Size: 0xa0 (Inherited: 0x00)
struct FS_SkillDescribe {
	int32_t ID_22_5A08A19B47239AC67DB3588580BE76C2; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText SkillName_2_F3544ED147EB56EDD0B5F6AC51DCC457; // 0x08(0x18)
	struct FText SkillDescribe_4_12E73BC0454A0952726EB6ABDDEF9CBE; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Texture_20_FE42494545DCDAB87C79178940F8AAF8; // 0x38(0x28)
	struct TSoftObjectPtr<struct UMediaTexture> Video_27_F9C8E0CF4984FD074DE26F8A89F5785A; // 0x60(0x28)
	struct FText PawnDes_25_28A0F2464E55668A640B0F9D8AD9128A; // 0x88(0x18)
};

