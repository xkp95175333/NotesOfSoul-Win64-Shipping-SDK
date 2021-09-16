// BlueprintGeneratedClass BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C
// Size: 0x198 (Inherited: 0x151)
struct UBP_UnitPriceTypeCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_BuyItemCom_C* BP_ParentCom; // 0x160(0x08)
	int32_t MonetaryType; // 0x168(0x04)
	int32_t MonetaryParameters; // 0x16c(0x04)
	struct UUIText* MoneyNum; // 0x170(0x08)
	struct UUISprite* MoneyType; // 0x178(0x08)
	bool IsOn; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UUIToggleComponent* BG; // 0x188(0x08)
	struct UDataTable* CoinData; // 0x190(0x08)

	void IniData(); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.IniData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitUnitPriceType(); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.InitUnitPriceType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(bool IsOn); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_UnitPriceTypeCom(int32_t EntryPoint); // Function BP_UnitPriceTypeCom.BP_UnitPriceTypeCom_C.ExecuteUbergraph_BP_UnitPriceTypeCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

