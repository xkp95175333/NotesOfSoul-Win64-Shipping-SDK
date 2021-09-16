// BlueprintGeneratedClass BP_MoneyReCom.BP_MoneyReCom_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_MoneyReCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* MoneyNumText; // 0x160(0x08)
	struct UUIText* MoneyText; // 0x168(0x08)
	int32_t MoneyID; // 0x170(0x04)
	int32_t MoneyGNum; // 0x174(0x04)
	int32_t MoneyRNum; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UBP_ReChargeCom_C* BP_ParentCom; // 0x180(0x08)

	void InitData(); // Function BP_MoneyReCom.BP_MoneyReCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMoneyRecharge(); // Function BP_MoneyReCom.BP_MoneyReCom_C.InitMoneyRecharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_502D7E044923FC4E0D15A8939803457C(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_MoneyReCom.BP_MoneyReCom_C.OnCompleted_502D7E044923FC4E0D15A8939803457C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_8C08836B4B25C2FC5E207CA979DB3A75(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_MoneyReCom.BP_MoneyReCom_C.OnCompleted_8C08836B4B25C2FC5E207CA979DB3A75 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MoneyReCom.BP_MoneyReCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickRecharge(); // Function BP_MoneyReCom.BP_MoneyReCom_C.OnClickRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MoneyReCom(int32_t EntryPoint); // Function BP_MoneyReCom.BP_MoneyReCom_C.ExecuteUbergraph_BP_MoneyReCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

