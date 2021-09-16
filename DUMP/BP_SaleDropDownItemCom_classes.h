// BlueprintGeneratedClass BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_SaleDropDownItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FItemMarketServiceCharge ServiceCharge; // 0x160(0x08)
	struct FMulticastInlineDelegate OnClick; // 0x168(0x10)
	struct UUIText* Content; // 0x178(0x08)

	void InitSaleDropDownItem(); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.InitSaleDropDownItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(struct FItemMarketServiceCharge ServiceCharge); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBtnClick(); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.OnBtnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SaleDropDownItemCom(int32_t EntryPoint); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.ExecuteUbergraph_BP_SaleDropDownItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnClick__DelegateSignature(struct FItemMarketServiceCharge Data); // Function BP_SaleDropDownItemCom.BP_SaleDropDownItemCom_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

