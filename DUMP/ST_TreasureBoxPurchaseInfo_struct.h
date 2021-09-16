// UserDefinedStruct ST_TreasureBoxPurchaseInfo.ST_TreasureBoxPurchaseInfo
// Size: 0xb0 (Inherited: 0x00)
struct FST_TreasureBoxPurchaseInfo {
	int32_t id_4_0FEE0B2E4B8B6AE157EF43AE06DF6089; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name_19_BE60DBB34555D9A62E09B69BF79A5AAE; // 0x08(0x18)
	struct TArray<int32_t> OneShot_29_2A67765B49AC99C4C753CD9C2F96173B; // 0x20(0x10)
	struct TArray<int32_t> TenShot_30_120BAEF1410D5AF986C9E4A5FDA7C323; // 0x30(0x10)
	struct FText CostType_12_6DD0F34C46AEECE80682E48A3A641CF0; // 0x40(0x18)
	struct UTexture2D* BoxImg_16_4EE671FC4EA11EA1936818AFD817B746; // 0x58(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> BoxMesh_24_481DECD74794206B5315A495AE540977; // 0x60(0x28)
	bool bCostBoxNum_26_5556CBE649AB303E2A993DB2F8E36C98; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FText IndateTime_35_B18978424508CE1C110C489BB420FA29; // 0x90(0x18)
	struct UTexture2D* BoxImgPrev_38_9DF4161C48BE9DE94CF07BBBCA75C795; // 0xa8(0x08)
};

