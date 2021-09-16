// BlueprintGeneratedClass BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C
// Size: 0x1404 (Inherited: 0x13e1)
struct UBP_SelectedLootItemPanelCom_C : UBP_GuildItemBaseCom_C {
	char pad_13E1[0x7]; // 0x13e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e8(0x08)
	struct UUIItem* ClearButton; // 0x13f0(0x08)
	struct UBP_SpoilsPanelCom_C* BP_ParentCom; // 0x13f8(0x08)
	int32_t MyID; // 0x1400(0x04)

	void Claer(); // Function BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C.Claer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EixtBagItem(); // Function BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C.EixtBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterBagItem(); // Function BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C.EnterBagItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowPanel(int32_t MyItemId, int32_t Count); // Function BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C.ShowPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SelectedLootItemPanelCom(int32_t EntryPoint); // Function BP_SelectedLootItemPanelCom.BP_SelectedLootItemPanelCom_C.ExecuteUbergraph_BP_SelectedLootItemPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

