// BlueprintGeneratedClass BP_TopUpPanelCom.BP_TopUpPanelCom_C
// Size: 0x1e0 (Inherited: 0x151)
struct UBP_TopUpPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_TopUpItemPanelCom_C*> ToDayArray; // 0x160(0x10)
	struct TArray<struct UBP_TopUpItemPanelCom_C*> AccumulatedArray; // 0x170(0x10)
	struct TArray<int32_t> Take Today Reward Ids; // 0x180(0x10)
	struct TArray<int32_t> Take Reward Ids; // 0x190(0x10)
	struct UUISprite* AccumulatedTopUpPreSpr; // 0x1a0(0x08)
	struct UUIButtonComponent* AccumulatedTopUpPreButton; // 0x1a8(0x08)
	struct UUISprite* AccumulatedTopUpNextSpr; // 0x1b0(0x08)
	struct UUIButtonComponent* AccumulatedTopUpNextButton; // 0x1b8(0x08)
	struct UUISprite* TodayTopUpPreSpr; // 0x1c0(0x08)
	struct UUIButtonComponent* TodayTopUpPreButton; // 0x1c8(0x08)
	struct UUISprite* TodayTopUpNextSpr; // 0x1d0(0x08)
	struct UUIButtonComponent* TodayTopUpNextButton; // 0x1d8(0x08)

	void UpdateTodayTopUp(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.UpdateTodayTopUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TodayTopUpPre(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.TodayTopUpPre // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AccumulatedTopUpPre(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.AccumulatedTopUpPre // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TodayTopUpNext(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.TodayTopUpNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AKeyToGet(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.AKeyToGet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateAccumulatedTopUp(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.UpdateAccumulatedTopUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.InitButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AccumulatedTopUpNext(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.AccumulatedTopUpNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGet(struct FTakeMatketRewardStr TakedMatket); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.OnGet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateItem(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.UpdateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccumulated(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.InitAccumulated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitToday(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.InitToday // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Update(struct FTakedMatketRewardStr TakeMatket); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TopUpPanelCom(int32_t EntryPoint); // Function BP_TopUpPanelCom.BP_TopUpPanelCom_C.ExecuteUbergraph_BP_TopUpPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

