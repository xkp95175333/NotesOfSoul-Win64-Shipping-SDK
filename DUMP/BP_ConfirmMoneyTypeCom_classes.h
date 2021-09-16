// BlueprintGeneratedClass BP_ConfirmMoneyTypeCom.BP_ConfirmMoneyTypeCom_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_ConfirmMoneyTypeCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* MoneyNum; // 0x160(0x08)
	struct UUISprite* MoneyType; // 0x168(0x08)
	int32_t CoinType; // 0x170(0x04)
	int32_t CoinNumber; // 0x174(0x04)
	struct UDataTable* CoinData; // 0x178(0x08)

	void InitData(); // Function BP_ConfirmMoneyTypeCom.BP_ConfirmMoneyTypeCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirmType(); // Function BP_ConfirmMoneyTypeCom.BP_ConfirmMoneyTypeCom_C.InitConfirmType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ConfirmMoneyTypeCom.BP_ConfirmMoneyTypeCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ConfirmMoneyTypeCom(int32_t EntryPoint); // Function BP_ConfirmMoneyTypeCom.BP_ConfirmMoneyTypeCom_C.ExecuteUbergraph_BP_ConfirmMoneyTypeCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

