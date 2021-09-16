// UserDefinedStruct ST_HomeItem.ST_HomeItem
// Size: 0x78 (Inherited: 0x00)
struct FST_HomeItem {
	int32_t ID_2_2866024A45A381922712F7BA60E73B4B; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name_53_A8169F9B4281B3C2A183A8A7A324A6EA; // 0x08(0x18)
	struct FText description_49_2F9B8647465C2E932F7D3AA6F182F327; // 0x20(0x18)
	struct UTexture2D* StoreImage_13_896A4ABE469F3CB962FF6F834E794567; // 0x38(0x08)
	struct UTexture2D* BackpackImage_15_9F0B42D04CE4EAEDC9570499389FF89B; // 0x40(0x08)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> StaticMesh_40_851137B84C48EFF145DE10AB0178E052; // 0x48(0x10)
	int32_t SellPrice_48_805B887B44B621CAE450E1B6569738F1; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FText Gain_52_D757841648FBB103F51CC5B0AB62F2EC; // 0x60(0x18)
};

