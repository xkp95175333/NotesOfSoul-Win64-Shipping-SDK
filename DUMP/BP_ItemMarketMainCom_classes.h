// BlueprintGeneratedClass BP_ItemMarketMainCom.BP_ItemMarketMainCom_C
// Size: 0x168 (Inherited: 0x140)
struct UBP_ItemMarketMainCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIItem* ItemMarketMain; // 0x148(0x08)
	struct UBP_IntegrationCom_C* Intergration; // 0x150(0x08)
	struct UUIItem* LeftRoot; // 0x158(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* LeftPanelCom; // 0x160(0x08)

	void initMainPanel(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.initMainPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void HidePanel(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.HidePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaleItem(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.SaleItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanCurrentDress(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.CleanCurrentDress // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnOpen(); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemMarketMainCom(int32_t EntryPoint); // Function BP_ItemMarketMainCom.BP_ItemMarketMainCom_C.ExecuteUbergraph_BP_ItemMarketMainCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

