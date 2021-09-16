// BlueprintGeneratedClass BP_UpdateDatePanel.BP_UpdateDatePanel_C
// Size: 0x1e1 (Inherited: 0x151)
struct UBP_UpdateDatePanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FMulticastInlineDelegate UpdateTimeView; // 0x160(0x10)
	struct FDateTime NowTime; // 0x170(0x08)
	bool ISSigned; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UBP_SignDayBoxSetting_C* SignDayBox; // 0x180(0x08)
	int32_t TryToSignDay; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct AUIContainerActor* Reward; // 0x190(0x08)
	struct UBP_RewardManager_C* RewardManager; // 0x198(0x08)
	struct TArray<struct FS_SignDayReward> SignRewardInfor; // 0x1a0(0x10)
	struct UDataTable* DT_SignDayrewrad; // 0x1b0(0x08)
	int32_t CurrentIndex; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UDataTable* AllRewardTable; // 0x1c0(0x08)
	int32_t TryGetRewardID; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<int32_t> AllGetRewardIndex; // 0x1d0(0x10)
	bool ISCanGet; // 0x1e0(0x01)

	void IsCanGetSomething(bool bCanGet); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTypePoint(); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.UpdateTypePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreatRewardUI(struct TArray<struct FItemData> InputPin); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.CreatRewardUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRewardInfo(int32_t Index); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.UpdateRewardInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetImage(int32_t Day); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t code); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetSignRewrad(int32_t ID); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.TryGetSignRewrad // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGetSignRewardReturn(int32_t code, struct FItemDataInfo ItemList); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.OnGetSignRewardReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Change(enum class EScrollDirection ChangeDirection); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.Change // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(struct FSignedDateInfo NewSignData); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_UpdateDatePanel(int32_t EntryPoint); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.ExecuteUbergraph_BP_UpdateDatePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void UpdateTimeView__DelegateSignature(struct FDateTime NowTime); // Function BP_UpdateDatePanel.BP_UpdateDatePanel_C.UpdateTimeView__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

