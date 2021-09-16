// UserDefinedStruct S_GameMapInfo.S_GameMapInfo
// Size: 0x49 (Inherited: 0x00)
struct FS_GameMapInfo {
	int32_t MapID_2_C744FA0C4B40408C28183A848CE68AA8; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText MapName_6_31BB1E124B87B88066466A9D79C84D2E; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> MapPic_11_5918F1F44FA1FD2329429F9C0971B360; // 0x20(0x28)
	bool IsUse_13_288B7B604DF23AE31184EFAB7794A427; // 0x48(0x01)
};

