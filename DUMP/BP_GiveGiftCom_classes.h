// BlueprintGeneratedClass BP_GiveGiftCom.BP_GiveGiftCom_C
// Size: 0x2a8 (Inherited: 0x151)
struct UBP_GiveGiftCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_IntegrationCom_C* Integration Com; // 0x160(0x08)
	struct UUIText* AllNumText; // 0x168(0x08)
	struct TArray<struct FNOS_Store> Store Data List; // 0x170(0x10)
	struct UUIItem* ProductListPanel; // 0x180(0x08)
	struct TArray<struct FNOS_Store> Add Store Data List; // 0x188(0x10)
	struct UUIText* IntimacyText; // 0x198(0x08)
	struct UUIText* PriceText; // 0x1a0(0x08)
	struct UUIItem* FriendListPanel; // 0x1a8(0x08)
	struct UUITextInputComponent* FindFriendTextInput; // 0x1b0(0x08)
	struct TArray<struct UBP_FriendItemCom_C*> FriendItemComs; // 0x1b8(0x10)
	struct UDataTable* AllAccessoriesData; // 0x1c8(0x08)
	struct UDataTable* HumanSuitData; // 0x1d0(0x08)
	struct UDataTable* GhostSuitData; // 0x1d8(0x08)
	struct UDataTable* ExperienceData; // 0x1e0(0x08)
	struct UDataTable* SpecialData; // 0x1e8(0x08)
	struct TArray<int32_t> DatasFormBag; // 0x1f0(0x10)
	struct TArray<struct FConfirmCoinData> ConfirmCoinData; // 0x200(0x10)
	struct TArray<struct FShopBuyItem> BuyItemList; // 0x210(0x10)
	struct FKxFriendData TargetFriend; // 0x220(0x48)
	struct UUIText* WarmingText; // 0x268(0x08)
	struct UUIText* GiveGiftButtonText; // 0x270(0x08)
	struct UUIText* OldCoinValue; // 0x278(0x08)
	int32_t price; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UUIText* SearchInputText; // 0x288(0x08)
	int32_t TextTemplateID; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct AActor*> ItemS; // 0x298(0x10)

	void UpdateFriendListPanel(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.UpdateFriendListPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool IsMarketLast3Day(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.IsMarketLast3Day // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CalSucCount(struct TArray<struct FSkinData> Array, int32_t count1); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.CalSucCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CleanData(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.CleanData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Warming(bool Active, struct FText newText); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.Warming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendGift(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.SendGift // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HaveEnoughCoin(bool bHaveEnoughCoin); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.HaveEnoughCoin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetEffectType(enum class ECommodityType Selection, int32_t ID, int32_t Effect Type); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.GetEffectType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdatePrice&Intimacy(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.UpdatePrice&Intimacy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanFriendListPanel(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.CleanFriendListPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFriendData(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.InitFriendData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGiveGift(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.InitGiveGift // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AddStoreDataList(struct FNOS_Store NewItem, bool bFromBag); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.AddStoreDataList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGiveGift(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OpenGiveGift // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSearchFriend(struct FString KeyWord); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnSearchFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClose(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SubStoreDataList(struct FNOS_Store Item); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.SubStoreDataList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSend(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnClickSend // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTargetFriendChange(struct FKxFriendData TargetFriend); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnTargetFriendChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendConfirm(struct FText Msg); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnSendConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnOneItemCancel(struct FNOS_Store StoreData); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnOneItemCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendGiftSuc(int32_t UID, int32_t count_id, struct FSkinDataInfo Info); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnSendGiftSuc // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnShopBuyStateUpdate(int32_t code, struct TArray<struct FShopBuyItem> List); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.OnShopBuyStateUpdate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.UpdateData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GiveGiftCom(int32_t EntryPoint); // Function BP_GiveGiftCom.BP_GiveGiftCom_C.ExecuteUbergraph_BP_GiveGiftCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

