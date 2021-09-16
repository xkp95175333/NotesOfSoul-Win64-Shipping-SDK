// BlueprintGeneratedClass BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_ConfirmMoneyTypeOneCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* MoneyNum; // 0x160(0x08)
	struct UUISprite* MoneyType; // 0x168(0x08)
	int32_t CoinType; // 0x170(0x04)
	int32_t CoinNumber; // 0x174(0x04)
	bool IsOn; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UBP_ConfirmBuyOneCom_C* BP_ParentCom; // 0x180(0x08)
	struct UDataTable* CoinData; // 0x188(0x08)
	struct UUIToggleComponent* ConfirmTypeOnePanel; // 0x190(0x08)
	int32_t ItemId; // 0x198(0x04)
	int32_t ItemType; // 0x19c(0x04)
	struct FLinearColor HighColor; // 0x1a0(0x10)
	struct FLinearColor NormalColor; // 0x1b0(0x10)

	void InitData(); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitConfirmType(); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.InitConfirmType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(bool Condition); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetState(bool IsOn); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.SetState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ConfirmMoneyTypeOneCom(int32_t EntryPoint); // Function BP_ConfirmMoneyTypeOneCom.BP_ConfirmMoneyTypeOneCom_C.ExecuteUbergraph_BP_ConfirmMoneyTypeOneCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

