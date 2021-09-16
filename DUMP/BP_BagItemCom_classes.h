// BlueprintGeneratedClass BP_BagItemCom.BP_BagItemCom_C
// Size: 0x12f0 (Inherited: 0x151)
struct UBP_BagItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* BagItem; // 0x160(0x08)
	struct UUITexture* BoxBG; // 0x168(0x08)
	struct UUISprite* Lock; // 0x170(0x08)
	struct UUISprite* Select; // 0x178(0x08)
	int32_t Count; // 0x180(0x04)
	int32_t Seconds; // 0x184(0x04)
	int32_t Time; // 0x188(0x04)
	enum class ECommodityType CommodityType; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FNOS_HumanSuit HumanSuitData; // 0x190(0x350)
	struct UUIText* BagItemNum; // 0x4e0(0x08)
	struct UBP_BasePanel_C* BP_ParentCom; // 0x4e8(0x08)
	struct FNOS_Accessories AccessoriesData; // 0x4f0(0x500)
	struct UUISprite* Mask; // 0x9f0(0x08)
	struct FNOS_GhostSuit GhostSuitData; // 0x9f8(0x350)
	struct FGhostTalentDatatable GhostTalentData; // 0xd48(0xc8)
	struct FST_HomeItem HomeItemData; // 0xe10(0x78)
	struct FKxItemTable ConsumableItemData; // 0xe88(0xf0)
	struct FNOS_ItemTable SpecialItemData; // 0xf78(0x108)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1080(0x08)
	struct FHumanTalentDatatable HumanTalentData; // 0x1088(0xc8)
	struct FCharacterInfo CharacterInfoData; // 0x1150(0xa8)
	bool bSelect; // 0x11f8(0x01)
	char pad_11F9[0x3]; // 0x11f9(0x03)
	int32_t ExperienceType; // 0x11fc(0x04)
	struct FItemConfigData ExperienceData; // 0x1200(0x18)
	struct UUITexture* VFX; // 0x1218(0x08)
	struct UMaterialInstanceDynamic* BGMaterialInstance; // 0x1220(0x08)
	struct UMaterialInstanceDynamic* ItemMaterialInstance; // 0x1228(0x08)
	struct FNOS_SocialContact SocialContactData; // 0x1230(0xb8)
	struct UDataTable* ExperienceCard; // 0x12e8(0x08)

	void SendOnSaleMessage(int32_t ItemId); // Function BP_BagItemCom.BP_BagItemCom_C.SendOnSaleMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExperienceICon(struct TSoftObjectPtr<struct UTexture2D> Thumbnail Texture); // Function BP_BagItemCom.BP_BagItemCom_C.GetExperienceICon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTalentQualityBG(enum class EHumanTalentType Type, struct UTexture2D* Sprint); // Function BP_BagItemCom.BP_BagItemCom_C.GetTalentQualityBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOperationInfo(); // Function BP_BagItemCom.BP_BagItemCom_C.SetOperationInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseLeftClick(); // Function BP_BagItemCom.BP_BagItemCom_C.MouseLeftClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildItemID(int32_t ID); // Function BP_BagItemCom.BP_BagItemCom_C.GetVaildItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearItemInfo(); // Function BP_BagItemCom.BP_BagItemCom_C.ClearItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemInfo(); // Function BP_BagItemCom.BP_BagItemCom_C.SetItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCharacterInfoData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateCharacterInfoData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSpecialItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateSpecialItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanTalentData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateHumanTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateConsumableItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateConsumableItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHomeItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateHomeItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostTalentData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateGhostTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostSuitData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccessoriesData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanSuitData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_BagItemCom.BP_BagItemCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSuitQualityBG(enum class EClothQualityType Quality, struct UTexture2D* Sprint); // Function BP_BagItemCom.BP_BagItemCom_C.GetSuitQualityBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBagItem(); // Function BP_BagItemCom.BP_BagItemCom_C.InitBagItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_8DDD523645D6ED16A2E8BE9E268319BD(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_8DDD523645D6ED16A2E8BE9E268319BD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_17BF36904A6E55658A6A5CB3BABC33D6(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_17BF36904A6E55658A6A5CB3BABC33D6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_36DB86104E405B75F66A79A2B50A7247(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_36DB86104E405B75F66A79A2B50A7247 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_028BCFF74F73F61F648198B28506F506(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_028BCFF74F73F61F648198B28506F506 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_FEB12F754C106C588EC08D8578DF726F(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_FEB12F754C106C588EC08D8578DF726F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_46A6280E4D1B42BC5FEF8CB33C0C95C0(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_46A6280E4D1B42BC5FEF8CB33C0C95C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_9BFA2CAC487CB052EF9ADB842CA32894(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_9BFA2CAC487CB052EF9ADB842CA32894 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_FB3C288840C65FCF200440BD6C30EFC6(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_FB3C288840C65FCF200440BD6C30EFC6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_693116444975C2FF6B5086B945FAFA1D(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_693116444975C2FF6B5086B945FAFA1D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_41D752AB4062DDB0EE9539B788628AF6(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_41D752AB4062DDB0EE9539B788628AF6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_65DBAD404665F748B135EAB2623BA3D7(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_65DBAD404665F748B135EAB2623BA3D7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_B0040ADA492D767027EF1490DD029D69(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_B0040ADA492D767027EF1490DD029D69 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_E021D02D46D9AEE56F7B8C957148EC5F(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_E021D02D46D9AEE56F7B8C957148EC5F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_649D68184DA480C349891FA3F3531435(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_649D68184DA480C349891FA3F3531435 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_55509EA140D36943F62C4E8AD1ED0485(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_55509EA140D36943F62C4E8AD1ED0485 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_BEEC1EA346E4E643B2EC8CAFB9B2A60B(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_BEEC1EA346E4E643B2EC8CAFB9B2A60B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_4BEF813A42C45DDCB369F08D0FFBE3C0(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_4BEF813A42C45DDCB369F08D0FFBE3C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_1B9FF7D345358A27EDAE439147C7B59D(struct UObject* Loaded); // Function BP_BagItemCom.BP_BagItemCom_C.OnLoaded_1B9FF7D345358A27EDAE439147C7B59D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BagItemCom.BP_BagItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(bool bIsExperienceCard); // Function BP_BagItemCom.BP_BagItemCom_C.InitHumanSuitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(bool bIsExperienceCard); // Function BP_BagItemCom.BP_BagItemCom_C.InitAccessoriesData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostTalentData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitGhostTalentData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(bool bIsExperienceCard); // Function BP_BagItemCom.BP_BagItemCom_C.InitGhostSuitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHomeItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitHomeItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConsumableItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitConsumableItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanTalentData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitHumanTalentData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSpecialItemData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitSpecialItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCharacterInfoData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitCharacterInfoData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EixtBagItem(); // Function BP_BagItemCom.BP_BagItemCom_C.EixtBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterBagItem(); // Function BP_BagItemCom.BP_BagItemCom_C.EnterBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSocialContactData(); // Function BP_BagItemCom.BP_BagItemCom_C.InitSocialContactData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickBagItme(struct ULGUIPointerEventData* eventData); // Function BP_BagItemCom.BP_BagItemCom_C.ClickBagItme // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BagItemCom(int32_t EntryPoint); // Function BP_BagItemCom.BP_BagItemCom_C.ExecuteUbergraph_BP_BagItemCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

