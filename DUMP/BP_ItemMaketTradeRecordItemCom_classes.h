// BlueprintGeneratedClass BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C
// Size: 0x6f8 (Inherited: 0x151)
struct UBP_ItemMaketTradeRecordItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* ItemIcon; // 0x160(0x08)
	struct UUISprite* QualityBG; // 0x168(0x08)
	struct UUISprite* State; // 0x170(0x08)
	struct UUIText* StateText; // 0x178(0x08)
	struct UUIText* RemainTimeText; // 0x180(0x08)
	struct UUIText* PriceText; // 0x188(0x08)
	struct UUIText* ItemNameText; // 0x190(0x08)
	struct FNOS_Accessories ItemData; // 0x198(0x500)
	struct FColor SaleColor; // 0x698(0x04)
	struct FColor BuyColor; // 0x69c(0x04)
	struct UUIItem* InfoPanel; // 0x6a0(0x08)
	struct FItemMarketRecordData Data; // 0x6a8(0x48)
	struct UBP_ItemMarketLeftPanelCom_C* ItemMarketPanel; // 0x6f0(0x08)

	void ResetInfo(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.ResetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInfo(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItem(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.InitItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPointerDown(struct ULGUIPointerEventData* Event); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.OnPointerDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TryResetInfo(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.TryResetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemMaketTradeRecordItemCom(int32_t EntryPoint); // Function BP_ItemMaketTradeRecordItemCom.BP_ItemMaketTradeRecordItemCom_C.ExecuteUbergraph_BP_ItemMaketTradeRecordItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

