// BlueprintGeneratedClass BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C
// Size: 0x168 (Inherited: 0x140)
struct UBP_StoreInfoPanelCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	int32_t CurentCount; // 0x148(0x04)
	int32_t MaxCount; // 0x14c(0x04)
	struct UUIText* CurrentSaleNum; // 0x150(0x08)
	struct UUIText* MaxSaleNum; // 0x158(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x160(0x08)

	void SetData(int32_t CurentCount, int32_t MaxCount); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInfo(); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitStoreInfoPanel(); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.InitStoreInfoPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickAdd(); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.OnClickAdd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StoreInfoPanelCom(int32_t EntryPoint); // Function BP_StoreInfoPanelCom.BP_StoreInfoPanelCom_C.ExecuteUbergraph_BP_StoreInfoPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

