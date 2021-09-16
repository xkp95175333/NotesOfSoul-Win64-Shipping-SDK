// BlueprintGeneratedClass BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C
// Size: 0x1410 (Inherited: 0x13e1)
struct UBP_LootStoreItemPanelCom_C : UBP_GuildItemBaseCom_C {
	char pad_13E1[0x7]; // 0x13e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e8(0x08)
	int32_t ID; // 0x13f0(0x04)
	char pad_13F4[0x4]; // 0x13f4(0x04)
	struct UBP_SpoilsPanelCom_C* BP_ParentCom; // 0x13f8(0x08)
	int32_t MaxCount; // 0x1400(0x04)
	char pad_1404[0x4]; // 0x1404(0x04)
	struct UUIItem* Root; // 0x1408(0x08)

	void CheckMouseRightInfo(bool NewParam); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.CheckMouseRightInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickBagItme(struct ULGUIPointerEventData* eventData); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.ClickBagItme // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Input(int32_t Count, int32_t ID, struct FText Name); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.Input // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowItem(); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.ShowItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LootStoreItemPanelCom(int32_t EntryPoint); // Function BP_LootStoreItemPanelCom.BP_LootStoreItemPanelCom_C.ExecuteUbergraph_BP_LootStoreItemPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

