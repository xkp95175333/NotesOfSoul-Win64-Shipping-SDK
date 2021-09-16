// BlueprintGeneratedClass BP_MainPanelCom.BP_MainPanelCom_C
// Size: 0x228 (Inherited: 0x1e0)
struct UBP_MainPanelCom_C : UBP_BaseShopPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)
	struct UUIItem* HotSaleItemBox; // 0x1e8(0x08)
	struct UUIItem* HighQualityItemBox; // 0x1f0(0x08)
	struct TArray<struct FNOS_Store> HotSaleData; // 0x1f8(0x10)
	struct TArray<struct FNOS_Store> HighQualityData; // 0x208(0x10)
	struct TArray<struct UBP_ItemPanelCom_C*> ItemPanelComList; // 0x218(0x10)

	void UpdateData(); // Function BP_MainPanelCom.BP_MainPanelCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_MainPanelCom.BP_MainPanelCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHighQuality(); // Function BP_MainPanelCom.BP_MainPanelCom_C.InitHighQuality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHotSale(); // Function BP_MainPanelCom.BP_MainPanelCom_C.InitHotSale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void initMainPanel(); // Function BP_MainPanelCom.BP_MainPanelCom_C.initMainPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MainPanelCom.BP_MainPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_MainPanelCom.BP_MainPanelCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EnterClip(); // Function BP_MainPanelCom.BP_MainPanelCom_C.EnterClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitClip(); // Function BP_MainPanelCom.BP_MainPanelCom_C.ExitClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePanelData(); // Function BP_MainPanelCom.BP_MainPanelCom_C.UpdatePanelData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MainPanelCom(int32_t EntryPoint); // Function BP_MainPanelCom.BP_MainPanelCom_C.ExecuteUbergraph_BP_MainPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

