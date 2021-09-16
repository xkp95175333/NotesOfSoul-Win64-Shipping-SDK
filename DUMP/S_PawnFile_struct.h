// UserDefinedStruct S_PawnFile.S_PawnFile
// Size: 0xa0 (Inherited: 0x00)
struct FS_PawnFile {
	int32_t ID_20_DD5529A64B34DF68E6C808A18FD17058; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> Grade_39_A9AE7B204F286990DAE98C9A98B130F4; // 0x08(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Texture_24_ADAF139546044CC1F97D538C476AEB13; // 0x18(0x28)
	struct TArray<struct FText> PawnInfo_37_46BE79B3420FB6240F65EC8C3220655D; // 0x40(0x10)
	struct FText character_29_54C476EE4463AF735EE0A9BCB18AB2DF; // 0x50(0x18)
	struct FText PetPhrase_31_8FCD22984F7265C23689B5A8F770AD9C; // 0x68(0x18)
	struct TArray<struct FText> Interest_36_A15FC34545832F383B706E9F5C74866E; // 0x80(0x10)
	struct TArray<struct FText> Weakness_38_974A9D194A7F9084AFC6F4990D13A64C; // 0x90(0x10)
};

