// BlueprintGeneratedClass BP_GrowthFund.BP_GrowthFund_C
// Size: 0x17e (Inherited: 0x151)
struct UBP_GrowthFund_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ULGUIPrefab* MainGrowthFund; // 0x160(0x08)
	bool IsPurchase; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	int32_t PlayerLevel; // 0x16c(0x04)
	struct UBP_GrowthFundSec_C* BPGrowthFundSec; // 0x170(0x08)
	bool OpenSec; // 0x178(0x01)
	bool Recive10; // 0x179(0x01)
	bool Recive20; // 0x17a(0x01)
	bool Recive30; // 0x17b(0x01)
	bool Recive40; // 0x17c(0x01)
	bool Recive50; // 0x17d(0x01)

	void CheckReciveFund(); // Function BP_GrowthFund.BP_GrowthFund_C.CheckReciveFund // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleUnlock(); // Function BP_GrowthFund.BP_GrowthFund_C.HandleUnlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NotPurchase(); // Function BP_GrowthFund.BP_GrowthFund_C.NotPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HavePurchase(); // Function BP_GrowthFund.BP_GrowthFund_C.HavePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PurchaseGrowthFund(); // Function BP_GrowthFund.BP_GrowthFund_C.PurchaseGrowthFund // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Recive50Reward(); // Function BP_GrowthFund.BP_GrowthFund_C.Recive50Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Recive40Reward(); // Function BP_GrowthFund.BP_GrowthFund_C.Recive40Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Recive30Reward(); // Function BP_GrowthFund.BP_GrowthFund_C.Recive30Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Recive20Reward(); // Function BP_GrowthFund.BP_GrowthFund_C.Recive20Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Recive10Reward(); // Function BP_GrowthFund.BP_GrowthFund_C.Recive10Reward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGrowthSec(); // Function BP_GrowthFund.BP_GrowthFund_C.OpenGrowthSec // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GrowthFund.BP_GrowthFund_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_GrowthFund.BP_GrowthFund_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GrowthFund.BP_GrowthFund_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GrowthFund(int32_t EntryPoint); // Function BP_GrowthFund.BP_GrowthFund_C.ExecuteUbergraph_BP_GrowthFund // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

