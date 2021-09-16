// BlueprintGeneratedClass BP_IntegrationCom.BP_IntegrationCom_C
// Size: 0x498 (Inherited: 0x151)
struct UBP_IntegrationCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t CharacterID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct ANOS_CharacterModelBase* Character; // 0x168(0x08)
	struct UBP_HeadImageCom_C* HeroHeadCom; // 0x170(0x08)
	struct UUIItem* LeftRoot; // 0x178(0x08)
	struct UUIItem* RightRoot; // 0x180(0x08)
	struct UUIItem* Panels; // 0x188(0x08)
	struct UUITexture* RightBG; // 0x190(0x08)
	struct UUIItem* DownPanel; // 0x198(0x08)
	struct UBP_IntergrationLeftCom_C* IntegrationLeftCom; // 0x1a0(0x08)
	struct UBP_FittingRoomAndBagCom_C* FittingRoomAndBagCom; // 0x1a8(0x08)
	struct UUIButtonComponent* ShoppingCartButton; // 0x1b0(0x08)
	struct UBP_ShoppingCartCom_C* ShoppingCarCom; // 0x1b8(0x08)
	bool bShoppingCar; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UBP_ItemInfoCom_C* ItemInfoCom; // 0x1c8(0x08)
	struct UBP_ItemInfoAndTrickeryCom_C* ItemInfoAndTrickeryCom; // 0x1d0(0x08)
	struct FRotator Spawn Transform Rotation; // 0x1d8(0x0c)
	struct FVector Spawn Transform Location; // 0x1e4(0x0c)
	struct UBP_ConfirmBuyCom_C* ConfirmBuyCom; // 0x1f0(0x08)
	struct UBP_ConfirmBuyOneCom_C* ConfirmBuyOneCom; // 0x1f8(0x08)
	struct UBP_GiveGiftCom_C* GiveGiftCom; // 0x200(0x08)
	struct FText Zero; // 0x208(0x18)
	struct UUIButtonComponent* SignOutButton; // 0x220(0x08)
	struct AActor* StartPlayer; // 0x228(0x08)
	struct TMap<int32_t, struct FIntegrationGhostChangeDress> StartGhostChangeDressInfo; // 0x230(0x50)
	struct TMap<int32_t, struct FIntegrationHumanChangeDress> StartHumanChangeDressInfo; // 0x280(0x50)
	bool bSaveAndSignOut; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct FShopBuyItem> SaveAndSignOutData; // 0x2d8(0x10)
	struct TMap<int32_t, struct FTagSaveRoleSkin> Save Role Skin Datas; // 0x2e8(0x50)
	struct UBP_ReChargeCom_C* ReChargeCom; // 0x338(0x08)
	struct UUISprite* ShoppingCarImage; // 0x340(0x08)
	struct UUIText* ShoppingCarNum; // 0x348(0x08)
	struct FVector2D CanvasScale; // 0x350(0x08)
	struct UBP_OperationInfoCom_C* Operation Info Com; // 0x358(0x08)
	struct FTimerHandle TimeHandle; // 0x360(0x08)
	struct UBP_BuySolveCom_C* Buy Solve Com; // 0x368(0x08)
	struct UUISprite* ShoppingCarSprint; // 0x370(0x08)
	struct UUIText* CarText; // 0x378(0x08)
	struct FColor NormalButtomColor; // 0x380(0x04)
	struct FColor HighButtomColor; // 0x384(0x04)
	struct FColor NormalTextColor; // 0x388(0x04)
	struct FColor HighTextColor; // 0x38c(0x04)
	struct UUISprite* GiveGiftBoxImage; // 0x390(0x08)
	struct UUIText* GiveGiftBoxNum; // 0x398(0x08)
	struct UUISprite* GiveGiftBoxSprint; // 0x3a0(0x08)
	struct UUIText* GiveGiftBoxText; // 0x3a8(0x08)
	struct UBP_CommonDialogBoxCom_C* CommonDialogBoxCom; // 0x3b0(0x08)
	struct UBP_GiftConfirmCom_C* Gift Confirm Com; // 0x3b8(0x08)
	struct UUIButtonComponent* GiveGiftBoxButton; // 0x3c0(0x08)
	struct UUITexture* RightBG2; // 0x3c8(0x08)
	struct UBP_CommonConfirmCom_C* CommonConfirmCom; // 0x3d0(0x08)
	struct FMulticastInlineDelegate SubPageInitComplete; // 0x3d8(0x10)
	struct FText DialogTitle; // 0x3e8(0x18)
	struct FText DialogContent; // 0x400(0x18)
	struct FText DialogButtonText; // 0x418(0x18)
	struct UBP_IntegrationDonate_C* As BP Integration Donate; // 0x430(0x08)
	struct UBP_MoneyPanelCom_C* As BP Money Panel Com; // 0x438(0x08)
	int32_t RenameCardID; // 0x440(0x04)
	struct FShopBuyItem DonateInfo; // 0x444(0x10)
	enum class ECharacterType CurrentCharacterType; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FMulticastInlineDelegate OnCharacterTypeChange; // 0x458(0x10)
	struct UBP_ItemSaleCom_C* As BP Item Sale Com; // 0x468(0x08)
	bool bHideAllUI; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct UUIItem* ShoppingCartAndSignOut; // 0x478(0x08)
	struct FMulticastInlineDelegate LeftMouseInput; // 0x480(0x10)
	struct UUITexture* UITextureHX; // 0x490(0x08)

	void CloseItemMarket(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseItemMarket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenItemMarket(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenItemMarket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSaleItemPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitSaleItemPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsSubPageInitComplete(struct UBP_BasePanel_C* SubPage, bool bIsComplete); // Function BP_IntegrationCom.BP_IntegrationCom_C.IsSubPageInitComplete // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OpenGiftBoxButton(bool bIsOpen); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenGiftBoxButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaveCoveInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.SaveCoveInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseGiveGiftPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseGiveGiftPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGiveGiftBox(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateGiveGiftBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGiveGiftPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenGiveGiftPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGiveGiftPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitGiveGiftPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickShopPage(enum class EShopType EShopPage); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnClickShopPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallMouseRightInput(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CallMouseRightInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallMouseLeftInput(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CallMouseLeftInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckMouseRightInfo(bool NewParam); // Function BP_IntegrationCom.BP_IntegrationCom_C.CheckMouseRightInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCanvasScale(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateCanvasScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseTreasureBox(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseTreasureBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenTreasureBox(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenTreasureBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterDressInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.SetCharacterDressInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SyncCharacterDressInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.SyncCharacterDressInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check Is Have Dress Info(int32_t SkinId, bool IsHave, struct FUserSkinData SkinData); // Function BP_IntegrationCom.BP_IntegrationCom_C.Check Is Have Dress Info // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SyncGhostDress Info(); // Function BP_IntegrationCom.BP_IntegrationCom_C.SyncGhostDress Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SyncHumanDress Info(); // Function BP_IntegrationCom.BP_IntegrationCom_C.SyncHumanDress Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSaveAndSignOut(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CheckSaveAndSignOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.ClearShoppingCar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update Coin Data(); // Function BP_IntegrationCom.BP_IntegrationCom_C.Update Coin Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateConfirmBuy(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateConfirmBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirmBuy(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitConfirmBuy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideDwonPanelGrid(bool IsHead, bool IsConsumable); // Function BP_IntegrationCom.BP_IntegrationCom_C.HideDwonPanelGrid // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitShoppingCar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateShoppingCar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseShoppingCar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenShoppingCar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFittingRoomAndBag(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateFittingRoomAndBag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFittingRoomAndBag(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitFittingRoomAndBag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitIntegrationLeft(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitIntegrationLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHeroHeadPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateHeroHeadPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHeroHeadPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitHeroHeadPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseIntegration(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseIntegration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateIntegration(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateIntegration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitIntegration(); // Function BP_IntegrationCom.BP_IntegrationCom_C.InitIntegration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Spwan Pawn Mesh(); // Function BP_IntegrationCom.BP_IntegrationCom_C.Spwan Pawn Mesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_IntegrationCom.BP_IntegrationCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_IntegrationCom.BP_IntegrationCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCharacterByHead(int32_t CharacterIndex); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectCharacterByHead // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectSkinByShop(int32_t CharacerID, int32_t SkinId); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectSkinByShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCharacterByFitting(int32_t CharID, int32_t SkinId); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectCharacterByFitting // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectConsumableByBag(int32_t ConsumableID); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectConsumableByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectConsumableByShop(int32_t ItemId); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectConsumableByShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectHomeByBag(int32_t HomeID); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectHomeByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectGhostTalentByBag(int32_t TalentID); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectGhostTalentByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectHomeByShop(int32_t ItemId); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectHomeByShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickShoppingCar(); // Function BP_IntegrationCom.BP_IntegrationCom_C.ClickShoppingCar // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddShoppingCar(struct FNOS_Store StoreData); // Function BP_IntegrationCom.BP_IntegrationCom_C.AddShoppingCar // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenEnterInfo(struct FText UpText, struct FText MidText, struct FText TilpText, enum class EClothQualityType SuitQuailty, bool OrDown, enum class EAccessoriesType AccessType, int32_t BoundEffect, int32_t GiveIntimacy, float IntimacyAdd, float MoneyAdd, float LevelAdd, bool OrTime, int32_t Time); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenEnterInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPlayerInput(bool IsInput); // Function BP_IntegrationCom.BP_IntegrationCom_C.SetPlayerInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenSkinConfirm(struct TArray<struct FConfirmCoinData> CoinType, bool Bone); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenSkinConfirm // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickSignOut(); // Function BP_IntegrationCom.BP_IntegrationCom_C.ClickSignOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCharacterInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateCharacterInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCoinConfig(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateCoinConfig // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TakeOffSkin(int32_t SkinId); // Function BP_IntegrationCom.BP_IntegrationCom_C.TakeOffSkin // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSaveAndSignOut(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnClickSaveAndSignOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseExitInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseExitInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenCharacterConfirm(struct TArray<struct FConfirmCoinData> CoinType); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenCharacterConfirm // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenRecharge(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseRecharge(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBanPickSignOut(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnBanPickSignOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickWrongAndSignOut(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnClickWrongAndSignOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMatchSignOut(int32_t code); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnMatchSignOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectHumanTalentByBag(int32_t TalentID); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectHumanTalentByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenMouseRightInfo(int32_t UserID, struct FConfirmCoinData price, int32_t MaxCount, enum class ECommodityType CommodityType, int32_t EffectType); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenMouseRightInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseMouseRightInfo(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CloseMouseRightInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseLeftInputEvent(); // Function BP_IntegrationCom.BP_IntegrationCom_C.MouseLeftInputEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCharacterByBag(int32_t ExperienceID, int32_t CharacterID); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectCharacterByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectSkinByBag(int32_t ExperienceID, int32_t CharacterID, int32_t SkinId); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectSkinByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateShopDataByTime(); // Function BP_IntegrationCom.BP_IntegrationCom_C.UpdateShopDataByTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenBuySolve(int32_t UserID, struct FConfirmCoinData price, int32_t MaxCount, enum class ECommodityType Type); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenBuySolve // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddGiveGift(struct FNOS_Store NewItem, bool FromBag); // Function BP_IntegrationCom.BP_IntegrationCom_C.AddGiveGift // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectAndOpenGiveGift(struct FNOS_Store NewItem, bool bFromBag); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectAndOpenGiveGift // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenDialog(struct FText Title, struct FText Content, struct FText ButtonText); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenDialog // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickGiftButton(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnClickGiftButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGiftConfirmPanel(int32_t price, struct FString ItemNmae, int32_t Num, struct FString FriendName); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenGiftConfirmPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendGiftConfirm(struct FText Msg); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnSendGiftConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectSocialContarctByBag(int32_t CharacterIndex); // Function BP_IntegrationCom.BP_IntegrationCom_C.SelectSocialContarctByBag // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_IntegrationCom.BP_IntegrationCom_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckGiftBox(int32_t ID, int32_t Num); // Function BP_IntegrationCom.BP_IntegrationCom_C.CheckGiftBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BuyReq(int32_t code, struct TArray<struct FShopBuyItem> List); // Function BP_IntegrationCom.BP_IntegrationCom_C.BuyReq // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowCommonConfirm(struct FText Content); // Function BP_IntegrationCom.BP_IntegrationCom_C.ShowCommonConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuildToggleToBagDialog(struct FText Title, struct FText Content, struct FText ButtonText); // Function BP_IntegrationCom.BP_IntegrationCom_C.GuildToggleToBagDialog // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSubPageComplete(struct UBP_BasePanel_C* UiCom); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnSubPageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickDialogConfrimBTN(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnClickDialogConfrimBTN // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenDonatePanel(int32_t MaxCount, struct FText ItemName, int32_t ItemId); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenDonatePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendDonateInfo(int32_t Count, int32_t ID, struct FText Name); // Function BP_IntegrationCom.BP_IntegrationCom_C.SendDonateInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnComfirmDonate(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnComfirmDonate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDonateRsp(int32_t DonateNumber, int32_t ItemId); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnDonateRsp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCurrentCharacterType(enum class ECharacterType CurrentCharacterType); // Function BP_IntegrationCom.BP_IntegrationCom_C.SetCurrentCharacterType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenOnSalePanel(int32_t ItemId, bool FreeSaleMode, int32_t Count); // Function BP_IntegrationCom.BP_IntegrationCom_C.OpenOnSalePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideAllPanel(); // Function BP_IntegrationCom.BP_IntegrationCom_C.HideAllPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckPanelVisible(); // Function BP_IntegrationCom.BP_IntegrationCom_C.CheckPanelVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TakeOffAllSkin(); // Function BP_IntegrationCom.BP_IntegrationCom_C.TakeOffAllSkin // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGreenMode(bool IsOpenGreenMode); // Function BP_IntegrationCom.BP_IntegrationCom_C.SetGreenMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_IntegrationCom(int32_t EntryPoint); // Function BP_IntegrationCom.BP_IntegrationCom_C.ExecuteUbergraph_BP_IntegrationCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void LeftMouseInput__DelegateSignature(); // Function BP_IntegrationCom.BP_IntegrationCom_C.LeftMouseInput__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterTypeChange__DelegateSignature(); // Function BP_IntegrationCom.BP_IntegrationCom_C.OnCharacterTypeChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SubPageInitComplete__DelegateSignature(struct UBP_BasePanel_C* UiCom); // Function BP_IntegrationCom.BP_IntegrationCom_C.SubPageInitComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

