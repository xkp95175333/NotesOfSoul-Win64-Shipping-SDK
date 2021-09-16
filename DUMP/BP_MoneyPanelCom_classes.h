// BlueprintGeneratedClass BP_MoneyPanelCom.BP_MoneyPanelCom_C
// Size: 0x1e1 (Inherited: 0x140)
struct UBP_MoneyPanelCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIText* Money1Num; // 0x148(0x08)
	struct UUIText* Money2Num; // 0x150(0x08)
	struct UUIText* Money3Num; // 0x158(0x08)
	struct UUIText* Money5Num; // 0x160(0x08)
	struct UUIText* Money6Num; // 0x168(0x08)
	struct UUIItem* Money1; // 0x170(0x08)
	struct UUIItem* Money2; // 0x178(0x08)
	struct UUIItem* Money3; // 0x180(0x08)
	struct UUIItem* Money5; // 0x188(0x08)
	struct UUIItem* Money6; // 0x190(0x08)
	struct UUIItem* Money1Info; // 0x198(0x08)
	struct UUIItem* Money2Info; // 0x1a0(0x08)
	struct UUIItem* Money3Info; // 0x1a8(0x08)
	struct UUIItem* Money5Info; // 0x1b0(0x08)
	struct UUIItem* Money6Info; // 0x1b8(0x08)
	struct FText Zero; // 0x1c0(0x18)
	struct ULGUIBasePanel* IntegrationCom; // 0x1d8(0x08)
	bool IsOpenShopping; // 0x1e0(0x01)

	void Set User Coin Data(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.Set User Coin Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMoneyPanel(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.InitMoneyPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateMoneyInfo(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.UpdateMoneyInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnShopType(enum class EShopType EShop); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnShopType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMoney1(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnEnterMoney1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitMoney1(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnExitMoney1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMoney2(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnEnterMoney2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitMoney2(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnExitMoney2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMoney3(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnEnterMoney3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitMoney3(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnExitMoney3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMoney5(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnEnterMoney5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitMoney5(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnExitMoney5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMoney6(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnEnterMoney6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitMoney6(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OnExitMoney6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenRecharge(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.OpenRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseRecharge(); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.CloseRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MoneyPanelCom(int32_t EntryPoint); // Function BP_MoneyPanelCom.BP_MoneyPanelCom_C.ExecuteUbergraph_BP_MoneyPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

