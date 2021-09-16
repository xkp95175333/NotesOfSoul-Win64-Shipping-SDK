// BlueprintGeneratedClass BoxContentManager.BoxContentManager_C
// Size: 0xf8 (Inherited: 0xc0)
struct UBoxContentManager_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUIBaseActor* BoxItem_Prefab; // 0xc8(0x08)
	struct AUIBaseActor* BoxItem_Root; // 0xd0(0x08)
	struct TArray<struct AUIBaseActor*> BoxItem_PrefabList; // 0xd8(0x10)
	struct TArray<struct FItemData> TreasureBoxDataList; // 0xe8(0x10)

	void Sort Treasure Box Data(struct TArray<struct FItemData> DataList, struct TArray<struct FItemData> TreasureBoxDataList); // Function BoxContentManager.BoxContentManager_C.Sort Treasure Box Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddDefaultTreasureBox(); // Function BoxContentManager.BoxContentManager_C.AddDefaultTreasureBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddTreasureBoxByData(struct FItemData Data); // Function BoxContentManager.BoxContentManager_C.AddTreasureBoxByData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReplaceTreasureBoxByData(struct FItemData Datas); // Function BoxContentManager.BoxContentManager_C.ReplaceTreasureBoxByData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UnacticeAllButtons(); // Function BoxContentManager.BoxContentManager_C.UnacticeAllButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPrefabList(struct TArray<struct FItemData> Datas); // Function BoxContentManager.BoxContentManager_C.SetPrefabList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BoxContentManager.BoxContentManager_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnTreasureBoxDataUpdataEvent_Event_1(struct FItemDataInfo DataInfo); // Function BoxContentManager.BoxContentManager_C.OnTreasureBoxDataUpdataEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BoxContentManager(int32_t EntryPoint); // Function BoxContentManager.BoxContentManager_C.ExecuteUbergraph_BoxContentManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

