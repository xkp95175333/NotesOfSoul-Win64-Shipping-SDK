// BlueprintGeneratedClass BP_GuildItemBaseCom.BP_GuildItemBaseCom_C
// Size: 0x13e1 (Inherited: 0x151)
struct UBP_GuildItemBaseCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* BagItem; // 0x160(0x08)
	struct UUITexture* BoxBG; // 0x168(0x08)
	struct UUISprite* Select; // 0x170(0x08)
	int32_t Count; // 0x178(0x04)
	int32_t Seconds; // 0x17c(0x04)
	int32_t Time; // 0x180(0x04)
	enum class ECommodityType CommodityType; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FNOS_HumanSuit HumanSuitData; // 0x188(0x350)
	struct UUIText* BagItemNum; // 0x4d8(0x08)
	struct FNOS_Accessories AccessoriesData; // 0x4e0(0x500)
	struct UUISprite* Mask; // 0x9e0(0x08)
	struct FNOS_GhostSuit GhostSuitData; // 0x9e8(0x350)
	struct FGhostTalentDatatable GhostTalentData; // 0xd38(0xc8)
	struct FST_HomeItem HomeItemData; // 0xe00(0x78)
	struct FKxItemTable ConsumableItemData; // 0xe78(0xf0)
	struct FNOS_ItemTable SpecialItemData; // 0xf68(0x108)
	struct FHumanTalentDatatable HumanTalentData; // 0x1070(0xc8)
	struct FCharacterInfo CharacterInfoData; // 0x1138(0xa8)
	bool bSelect; // 0x11e0(0x01)
	char pad_11E1[0x3]; // 0x11e1(0x03)
	int32_t ExperienceType; // 0x11e4(0x04)
	struct FItemConfigData ExperienceData; // 0x11e8(0x18)
	struct UUITexture* VFX; // 0x1200(0x08)
	struct UMaterialInstanceDynamic* BGMaterialInstance; // 0x1208(0x08)
	struct UMaterialInstanceDynamic* ItemMaterialInstance; // 0x1210(0x08)
	struct FNOS_SocialContact SocialContactData; // 0x1218(0xb8)
	struct UDataTable* ExperienceCard; // 0x12d0(0x08)
	struct UBP_ItemInfoCom_C* ItemInfoCom; // 0x12d8(0x08)
	int32_t MyItemId; // 0x12e0(0x04)
	bool bIsChange; // 0x12e4(0x01)
	char pad_12E5[0x3]; // 0x12e5(0x03)
	struct FHeadPortrait HeadPor; // 0x12e8(0x50)
	struct FCharacterInfo Character; // 0x1338(0xa8)
	bool bShowInfo; // 0x13e0(0x01)

	void InitItem(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckMouseRightInfo(bool NewParam); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.CheckMouseRightInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExperienceICon(struct TSoftObjectPtr<struct UTexture2D> Thumbnail Texture); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.GetExperienceICon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTalentQualityBG(enum class EHumanTalentType Type, struct UTexture2D* Sprint); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.GetTalentQualityBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOperationInfo(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.SetOperationInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseLeftClick(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.MouseLeftClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildItemID(int32_t ID); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.GetVaildItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearItemInfo(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.ClearItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemInfo(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.SetItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCharacterInfoData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateCharacterInfoData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSpecialItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateSpecialItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanTalentData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateHumanTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateConsumableItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateConsumableItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHomeItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateHomeItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostTalentData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateGhostTalentData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGhostSuitData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccessoriesData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHumanSuitData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSuitQualityBG(enum class EClothQualityType Quality, struct UTexture2D* Sprint); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.GetSuitQualityBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBagItem(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitBagItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_A2117203495D5528BAC5D38CE66DC706(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_A2117203495D5528BAC5D38CE66DC706 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_C5DA3A65437E42A6C820E3A510A556CE(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_C5DA3A65437E42A6C820E3A510A556CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_403C848D460198DCF47AC4B2B1628504(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_403C848D460198DCF47AC4B2B1628504 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_28D4602A4DA35759C2EDC09ED189F920(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_28D4602A4DA35759C2EDC09ED189F920 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_044DCFB144A420F49164D9A5E7C10F31(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_044DCFB144A420F49164D9A5E7C10F31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_225A0C6744551912FD9D9E8B9A589F9E(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_225A0C6744551912FD9D9E8B9A589F9E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_CDF373F7477026B1D811568EB14FDB98(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_CDF373F7477026B1D811568EB14FDB98 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_1C11871640AD9534607FFEB453B12608(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_1C11871640AD9534607FFEB453B12608 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_1A41F0A44A3416564C1487B9283A2168(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_1A41F0A44A3416564C1487B9283A2168 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_11F2FAED48CBE99B46CE29970CF78F90(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_11F2FAED48CBE99B46CE29970CF78F90 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_EBFA99414C3C40E21D1740B6BCFABB31(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_EBFA99414C3C40E21D1740B6BCFABB31 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_1EE647F7469D30243A6E5E8311ED5304(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_1EE647F7469D30243A6E5E8311ED5304 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_0F70EEB74F55BFEDCC72C2AC8697FC55(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_0F70EEB74F55BFEDCC72C2AC8697FC55 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_42E5B7324A2C32D63B7F0695749C0013(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_42E5B7324A2C32D63B7F0695749C0013 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_A5434D1C438A2C5C3DB9AB8AECE10CF6(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_A5434D1C438A2C5C3DB9AB8AECE10CF6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_6DC3254745C134BD84E1DDBF7A1AF3EC(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_6DC3254745C134BD84E1DDBF7A1AF3EC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_EF3439324AC11B386B54B4BE66CBD9FB(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_EF3439324AC11B386B54B4BE66CBD9FB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_8A338FEB421E723B6E5FA7AC887E3A70(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_8A338FEB421E723B6E5FA7AC887E3A70 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_56BCBC8C4E1F0344081261BE1F593E4E(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_56BCBC8C4E1F0344081261BE1F593E4E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_4368C9C145067E2D6C774C8FC35C0E49(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_4368C9C145067E2D6C774C8FC35C0E49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_E9DF17E24F12ABB7F9A3A5AF4D73549C(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_E9DF17E24F12ABB7F9A3A5AF4D73549C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_38BB573246AB7987A117578B5EFECFB4(struct UObject* Loaded); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OnLoaded_38BB573246AB7987A117578B5EFECFB4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostTalentData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitGhostTalentData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(bool bIsExperienceCard); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitAccessoriesData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(bool bIsExperienceCard); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitGhostSuitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHomeItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitHomeItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConsumableItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitConsumableItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(bool bIsExperienceCard); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitHumanSuitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanTalentData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitHumanTalentData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSpecialItemData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitSpecialItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCharacterInfoData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitCharacterInfoData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EixtBagItem(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.EixtBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterBagItem(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.EnterBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitSocialContactData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitSocialContactData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenEnterInfo(struct FText UpText, struct FText MidText, struct FText TilpText, enum class EClothQualityType SuitQuailty, bool OrDown, enum class EAccessoriesType AccessType, int32_t BoundEffect, int32_t GiveIntimacy, float IntimacyAdd, float MoneyAdd, float LevelAdd, bool OrTime, int32_t Time); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.OpenEnterInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseExitInfo(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.CloseExitInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHeadData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitHeadData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitChacterData(); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.InitChacterData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildItemBaseCom(int32_t EntryPoint); // Function BP_GuildItemBaseCom.BP_GuildItemBaseCom_C.ExecuteUbergraph_BP_GuildItemBaseCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

