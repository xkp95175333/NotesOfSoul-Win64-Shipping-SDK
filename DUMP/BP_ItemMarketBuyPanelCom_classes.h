// BlueprintGeneratedClass BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C
// Size: 0x194 (Inherited: 0x140)
struct UBP_ItemMarketBuyPanelCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIText* ItemNameText; // 0x148(0x08)
	struct UUIText* CoinNum; // 0x150(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x158(0x08)
	struct FMulticastInlineDelegate OnClickYesButton; // 0x160(0x10)
	int32_t ID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString Name; // 0x178(0x10)
	struct UBP_IntegrationCom_C* Integration; // 0x188(0x08)
	int32_t price; // 0x190(0x04)

	void UpdateContent(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.UpdateContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPoivot(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.SetPoivot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Show(int32_t ID, struct FString Name, int32_t price); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBuyPanel(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.InitBuyPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickYesButton(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.ClickYesButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickNoButton(); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.ClickNoButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemMarketBuyPanelCom(int32_t EntryPoint); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.ExecuteUbergraph_BP_ItemMarketBuyPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnClickYesButton__DelegateSignature(int32_t TradeID); // Function BP_ItemMarketBuyPanelCom.BP_ItemMarketBuyPanelCom_C.OnClickYesButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

