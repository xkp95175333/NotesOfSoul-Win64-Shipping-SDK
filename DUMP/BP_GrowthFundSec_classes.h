// BlueprintGeneratedClass BP_GrowthFundSec.BP_GrowthFundSec_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_GrowthFundSec_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool CanPurchase; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UUIItem* PurchaseTips; // 0x168(0x08)
	struct UBP_GrowthFund_C* BPGrowthFund; // 0x170(0x08)
	int32_t money; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UBP_ReChargeCom_C* ReChargeCom; // 0x180(0x08)

	void InitParent(struct UBP_GrowthFund_C* BPGrowthFund); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanSuc(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.CleanSuc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Purchase(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.Purchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QuitUI(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.QuitUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_9CEA06454F667C3095B40285FF606BB4(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.OnCompleted_9CEA06454F667C3095B40285FF606BB4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C13E29E94BA77D428FF39C92E79E676E(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.OnCompleted_C13E29E94BA77D428FF39C92E79E676E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(int32_t code); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestBuy(); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.RequestBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GrowthFundSec(int32_t EntryPoint); // Function BP_GrowthFundSec.BP_GrowthFundSec_C.ExecuteUbergraph_BP_GrowthFundSec // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

