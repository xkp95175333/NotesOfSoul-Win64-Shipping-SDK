// BlueprintGeneratedClass TreasureBoxPanel_Script.TreasureBoxPanel_Script_C
// Size: 0x1f8 (Inherited: 0xc0)
struct UTreasureBoxPanel_Script_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUIBaseActor* RightSideBGContent; // 0xc8(0x08)
	struct AUIBaseActor* RightSidePanel; // 0xd0(0x08)
	struct AUIBaseActor* OpenBoxGetRewardPanel; // 0xd8(0x08)
	struct AUIBaseActor* OpenTreasureBoxPanel; // 0xe0(0x08)
	struct AUITextActor* OpenBoxContentTips; // 0xe8(0x08)
	struct AUIBaseActor* BoxIMG; // 0xf0(0x08)
	struct AUIBaseActor* TreasureBoxMissionPanel; // 0xf8(0x08)
	struct AUIBaseActor* ScreenSpaceUIRoot; // 0x100(0x08)
	struct ACameraActor* SpaceBoxModleCamera; // 0x108(0x08)
	struct AActor* SpaceBoxModle; // 0x110(0x08)
	bool GetRewarded; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float CurTime; // 0x11c(0x04)
	struct FTimerHandle TimerHandle; // 0x120(0x08)
	struct TArray<struct FItemData> RewardData; // 0x128(0x10)
	float delayTime; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FTimerHandle OpenBoxTipsTimerHandler; // 0x140(0x08)
	int32_t OpenBoxContentTipsFlashTimes; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct AUIBaseActor* ConfirmPurchasePanel; // 0x150(0x08)
	struct TMap<int32_t, int32_t> Coin Count Map; // 0x158(0x50)
	int32_t CurItemIndex; // 0x1a8(0x04)
	int32_t CurBoxNum; // 0x1ac(0x04)
	int32_t SelectedOpenNum; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct AUITextActor* PurchaseTips; // 0x1b8(0x08)
	struct AUIBaseActor* BackgroundMask; // 0x1c0(0x08)
	int32_t SelectedBoxCostMoney; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct AUITextActor* CannotOpenBoxContentTips; // 0x1d0(0x08)
	bool bSkipAnim; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct ATreasureBoxSequenceMgr_C* SequenceMgr; // 0x1e0(0x08)
	int32_t CurCoinType; // 0x1e8(0x04)
	int32_t UsedTimes; // 0x1ec(0x04)
	struct AUITextActor* InDateTime; // 0x1f0(0x08)

	void Get Cur Treasure Box Value(struct TArray<int32_t> ValueArray, int32_t boxid, int32_t OutPutVaule); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.Get Cur Treasure Box Value // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCoinTypeByID(int32_t ItemId, struct FText Type); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.GetCoinTypeByID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cost with Treasure Box(bool bCostTreasureBox, struct FText CostMoneyType, struct FText TreasureBoxName); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.Cost with Treasure Box // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSkipAnim(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.SetSkipAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Cur Item Box IMG(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.Set Cur Item Box IMG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowConfirmPurchasePanel(int32_t OpenNum); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.ShowConfirmPurchasePanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HasEnoughMoney(bool bEnoughMoney, struct FText Type); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.HasEnoughMoney // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void HasEnoughBox(bool bEnough); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.HasEnoughBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ShowOpenBoxTips(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.ShowOpenBoxTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Open Box Tips(struct FText TipsContent); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.Set Open Box Tips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowGetRewardWithValue(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.ShowGetRewardWithValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRewardResult(struct FItemDataInfo DataInfo); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.GetRewardResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowOpenBoxGetRewardPanel(bool bShow); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.ShowOpenBoxGetRewardPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayOpenBoxAnim(int32_t OpenNum); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.PlayOpenBoxAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCoinUpdate_Event(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.OnCoinUpdate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CantOpenBoxOnMatch(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CantOpenBoxOnMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(int32_t code); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_3(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CantOpenBoxOnEnterTeam(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CantOpenBoxOnEnterTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterFriendHome_Event_1(struct TArray<struct FKxUserInfo> UserInfos, int32_t code); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.OnEnterFriendHome_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLeaveFriendHome_Event_1(int32_t code); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.OnLeaveFriendHome_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitDataFromFirstBox(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.InitDataFromFirstBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetShowTreasureBoxPanelAndTips(bool bShowPanel, bool bShowTips); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.SetShowTreasureBoxPanelAndTips // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CantOpenBoxOnCustom(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.CantOpenBoxOnCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinCustomRoomBack_Event_1(int32_t code, int32_t pos, int32_t master_uid, struct FString RoomNum); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.JoinCustomRoomBack_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LeaveCustomRoomBack_Event_1(int32_t code); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.LeaveCustomRoomBack_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUIActiveInHierarchyBP(bool activeOrInactive); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.OnUIActiveInHierarchyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_TreasureBoxPanel_Script(int32_t EntryPoint); // Function TreasureBoxPanel_Script.TreasureBoxPanel_Script_C.ExecuteUbergraph_TreasureBoxPanel_Script // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

