// BlueprintGeneratedClass BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C
// Size: 0x6e0 (Inherited: 0x151)
struct UBP_ItemMarketStoreItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FNOS_Accessories ItemInfo; // 0x160(0x500)
	struct UUISprite* QualityBG; // 0x660(0x08)
	struct UUISprite* ItemIcon; // 0x668(0x08)
	struct UUIText* ItemNameText; // 0x670(0x08)
	struct UUIText* RemainTimeText; // 0x678(0x08)
	struct UUIText* PriceText; // 0x680(0x08)
	struct UUIItem* InfoPanel; // 0x688(0x08)
	struct UUISprite* LockImage; // 0x690(0x08)
	struct FItemMarketProduct Data; // 0x698(0x30)
	struct UBP_ItemMarketLeftPanelCom_C* ItemMarketPanel; // 0x6c8(0x08)
	int32_t Index; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct UUIText* BuyBtnText; // 0x6d8(0x08)

	void ResetInfo(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.ResetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInfo(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItem(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.InitItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPointerDown(struct ULGUIPointerEventData* Event); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.OnPointerDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryResetInfo(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.TryResetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickItem(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.OnClickItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBuy(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.OnClickBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConfirmOffsale(); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.ConfirmOffsale // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemMarketStoreItemCom(int32_t EntryPoint); // Function BP_ItemMarketStoreItemCom.BP_ItemMarketStoreItemCom_C.ExecuteUbergraph_BP_ItemMarketStoreItemCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

