// BlueprintGeneratedClass BP_TotalTypeCom.BP_TotalTypeCom_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_TotalTypeCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* MoneyNum; // 0x160(0x08)
	struct UUISprite* MoneyType; // 0x168(0x08)
	int32_t Number; // 0x170(0x04)
	int32_t Type; // 0x174(0x04)
	struct UDataTable* CoinData; // 0x178(0x08)

	void UpdateData(); // Function BP_TotalTypeCom.BP_TotalTypeCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_TotalTypeCom.BP_TotalTypeCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitTotalType(); // Function BP_TotalTypeCom.BP_TotalTypeCom_C.InitTotalType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TotalTypeCom.BP_TotalTypeCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TotalTypeCom(int32_t EntryPoint); // Function BP_TotalTypeCom.BP_TotalTypeCom_C.ExecuteUbergraph_BP_TotalTypeCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

