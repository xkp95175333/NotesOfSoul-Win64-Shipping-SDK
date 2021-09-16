// BlueprintGeneratedClass BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C
// Size: 0x184 (Inherited: 0x151)
struct UBP_TimeLimitGiftSec_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool CanPurchase; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct ULGUIPrefab* TimeLimitGiftUI; // 0x168(0x08)
	struct UBP_TimeLimitGiftUI_C* BPTimeLimitGift; // 0x170(0x08)
	struct UBP_ReChargeCom_C* ReChargeCom; // 0x178(0x08)
	int32_t money; // 0x180(0x04)

	void InitParent(struct UBP_TimeLimitGiftUI_C* BPTimeLimitGift); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CleanSuc(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.CleanSuc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Purchase(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.Purchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QuitUI(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.QuitUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_12960A104CA5387161B797BB74F6B944(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.OnCompleted_12960A104CA5387161B797BB74F6B944 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_AA0B255D440921C2F20894AB6460FCE2(int32_t code, int32_t order_state, struct FString order_id, int32_t config_id, int32_t steam_code); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.OnCompleted_AA0B255D440921C2F20894AB6460FCE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_BuyTimeLimit(int32_t code); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.CustomEvent_BuyTimeLimit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void RequestBuy(); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.RequestBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TimeLimitGiftSec(int32_t EntryPoint); // Function BP_TimeLimitGiftSec.BP_TimeLimitGiftSec_C.ExecuteUbergraph_BP_TimeLimitGiftSec // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

