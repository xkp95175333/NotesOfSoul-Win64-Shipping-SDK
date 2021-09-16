// BlueprintGeneratedClass BP_BuySolveCom.BP_BuySolveCom_C
// Size: 0x228 (Inherited: 0x151)
struct UBP_BuySolveCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* Num; // 0x160(0x08)
	struct UUIText* MoneyNum; // 0x168(0x08)
	int32_t UserID; // 0x170(0x04)
	struct FConfirmCoinData price; // 0x174(0x14)
	int32_t Count; // 0x188(0x04)
	int32_t MaxCount; // 0x18c(0x04)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x190(0x08)
	enum class ECommodityType Type; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UDataTable* AllAccessoriesData; // 0x1a0(0x08)
	struct UDataTable* HumanSuitData; // 0x1a8(0x08)
	struct UDataTable* GhostSuitData; // 0x1b0(0x08)
	struct UDataTable* ExperienceData; // 0x1b8(0x08)
	struct UDataTable* SpecialData; // 0x1c0(0x08)
	struct TMap<int32_t, struct ULGUISpriteData*> CoinIconMap; // 0x1c8(0x50)
	struct UUISprite* MoneyPic; // 0x218(0x08)
	struct UUITextInputComponent* CountInput; // 0x220(0x08)

	void GetDialogText(int32_t Num, int32_t coin, bool bIsSuc, int32_t ItemId, struct FText Result); // Function BP_BuySolveCom.BP_BuySolveCom_C.GetDialogText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void FindItemName(int32_t ItemId, struct FText Item Name); // Function BP_BuySolveCom.BP_BuySolveCom_C.FindItemName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnSolveRequest(); // Function BP_BuySolveCom.BP_BuySolveCom_C.OnSolveRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_BuySolveCom.BP_BuySolveCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBuySolveCom(); // Function BP_BuySolveCom.BP_BuySolveCom_C.InitBuySolveCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BuySolveCom.BP_BuySolveCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OpenConfirm(); // Function BP_BuySolveCom.BP_BuySolveCom_C.OpenConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseConfirm(); // Function BP_BuySolveCom.BP_BuySolveCom_C.CloseConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddItemCount(); // Function BP_BuySolveCom.BP_BuySolveCom_C.AddItemCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SubItemCount(); // Function BP_BuySolveCom.BP_BuySolveCom_C.SubItemCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSolveConfirm(); // Function BP_BuySolveCom.BP_BuySolveCom_C.OnSolveConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDecomposeRsp(int32_t ID, int32_t Num); // Function BP_BuySolveCom.BP_BuySolveCom_C.OnDecomposeRsp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCountCommit(struct FString Content); // Function BP_BuySolveCom.BP_BuySolveCom_C.OnCountCommit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInputActivate(bool NewParam); // Function BP_BuySolveCom.BP_BuySolveCom_C.OnInputActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BuySolveCom(int32_t EntryPoint); // Function BP_BuySolveCom.BP_BuySolveCom_C.ExecuteUbergraph_BP_BuySolveCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

