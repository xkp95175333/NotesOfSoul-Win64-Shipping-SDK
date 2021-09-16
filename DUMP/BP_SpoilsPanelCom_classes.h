// BlueprintGeneratedClass BP_SpoilsPanelCom.BP_SpoilsPanelCom_C
// Size: 0x364 (Inherited: 0x170)
struct UBP_SpoilsPanelCom_C : UBP_GuildBasePanelCom_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct TMap<int32_t, struct UBP_DKPPersonInfoCom_C*> DKPInfoMap; // 0x178(0x50)
	int32_t CurSelectPlayerID; // 0x1c8(0x04)
	bool ISModifyDKP; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	struct TArray<struct UUIItem*> ButtonArray; // 0x1d0(0x10)
	struct TMap<int32_t, struct UBP_SelectedLootItemPanelCom_C*> SelectedLoot; // 0x1e0(0x50)
	struct UBP_PagePanelCom_C* PageCom; // 0x230(0x08)
	struct TMap<int32_t, struct UBP_LootStoreItemPanelCom_C*> ItemMap; // 0x238(0x50)
	struct TArray<struct UBP_SelectedLootItemPanelCom_C*> UnSelectedLoot; // 0x288(0x10)
	struct TMap<int32_t, int32_t> SelectedItemMap; // 0x298(0x50)
	struct TArray<struct UBP_LootStoreItemPanelCom_C*> ItemArray; // 0x2e8(0x10)
	int32_t Lingbi; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TMap<int32_t, int32_t> ChangeDKPPersonID; // 0x300(0x50)
	struct TArray<struct UUIItem*> ButtonTextArray; // 0x350(0x10)
	int32_t GUbi; // 0x360(0x04)

	void BP_SpoilsPanelCom_AutoGenFunc(struct ULGUIPointerEventData* pointerEventData); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.BP_SpoilsPanelCom_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSelf(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.UpdateSelf // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBag(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.UpdateBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuildSimpleInfoHelp(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.GuildSimpleInfoHelp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LootStorehouseHelp(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.LootStorehouseHelp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MyinfoHelp(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.MyinfoHelp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCost(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.UpdateCost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDKPChange(int32_t InId, int32_t InChange); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.OnDKPChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSelectItem(struct UBP_SelectedLootItemPanelCom_C* SelectItem); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.GetSelectItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetLootStoreHouseItem(struct UBP_LootStoreItemPanelCom_C* LootStoreHouseItem); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.GetLootStoreHouseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnOk(struct FString Note); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.OnOk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCurPlayerID(int32_t InPlayerId); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.SetCurPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectNewItem(int32_t InId, int32_t InCount); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.SelectNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitLootStoreHouseItem(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.InitLootStoreHouseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSendToPlayer(bool sucess); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.OnSendToPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSelectItem(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.InitSelectItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.Previous // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.Next // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearAllSelectItem(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ClearAllSelectItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearSelectItem(int32_t In ID); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ClearSelectItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendToPlayer(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.SendToPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsInModifyDKP(bool InBool); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.IsInModifyDKP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCurSelectPlayer(int32_t PlayerId); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.UpdateCurSelectPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateManger(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.UpdateManger // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadLootStoreHouseItem(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.LoadLootStoreHouseItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyDKP(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ModifyDKP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpoilsMgr(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.SpoilsMgr // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadMember(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.LoadMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LssueRecord(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.LssueRecord // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LootShop(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.LootShop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowMyDKP(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ShowMyDKP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancel(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.Cancel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QueryDKP(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.QueryDKP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DonatedSpoils(); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.DonatedSpoils // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct UBP_BasePanel_C* UiCom); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SpoilsPanelCom(int32_t EntryPoint); // Function BP_SpoilsPanelCom.BP_SpoilsPanelCom_C.ExecuteUbergraph_BP_SpoilsPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

