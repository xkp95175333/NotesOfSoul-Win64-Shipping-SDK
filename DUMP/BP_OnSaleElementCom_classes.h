// BlueprintGeneratedClass BP_OnSaleElementCom.BP_OnSaleElementCom_C
// Size: 0x1b0 (Inherited: 0x151)
struct UBP_OnSaleElementCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* ItemIcon; // 0x160(0x08)
	struct UUISprite* ItemIconBG; // 0x168(0x08)
	struct UUIText* OnSalePrice; // 0x170(0x08)
	struct UUIText* RemainTimeText; // 0x178(0x08)
	struct FItemMarketProduct ItemData; // 0x180(0x30)

	void SetData(struct FItemMarketProduct ItemData); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateICon(); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.UpdateICon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitOnSaleElement(); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.InitOnSaleElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPointerDown(struct ULGUIPointerEventData* Event); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.OnPointerDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OnSaleElementCom(int32_t EntryPoint); // Function BP_OnSaleElementCom.BP_OnSaleElementCom_C.ExecuteUbergraph_BP_OnSaleElementCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

