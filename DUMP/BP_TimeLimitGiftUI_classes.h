// BlueprintGeneratedClass BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_TimeLimitGiftUI_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ULGUIPrefab* GiftSec; // 0x160(0x08)
	struct ULGUIPrefab* CanPurchase; // 0x168(0x08)
	bool IsPurchase; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct UBP_TimeLimitGiftUI_C* BP_TimeLimitGift; // 0x178(0x08)
	int32_t PlayerLevel; // 0x180(0x04)
	bool OpenSec; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	int32_t Day; // 0x188(0x04)
	int32_t Hour; // 0x18c(0x04)
	int32_t Minute; // 0x190(0x04)
	int32_t Second; // 0x194(0x04)
	bool IsCompleteM1; // 0x198(0x01)
	bool IsCompleteM2; // 0x199(0x01)
	bool IsCompleteM3; // 0x19a(0x01)
	bool IsCompleteM4; // 0x19b(0x01)
	bool IsCompleteM5; // 0x19c(0x01)
	bool IsRecive1; // 0x19d(0x01)
	bool IsRecive2; // 0x19e(0x01)
	bool IsRecive3; // 0x19f(0x01)
	bool IsRecive4; // 0x1a0(0x01)
	bool IsRecive5; // 0x1a1(0x01)
	char pad_1A2[0x2]; // 0x1a2(0x02)
	int32_t MissionCompleteCount; // 0x1a4(0x04)
	struct TArray<bool> Bool; // 0x1a8(0x10)
	bool CanRecive; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	int32_t CanReciveNum; // 0x1bc(0x04)

	void IsCanGetSomething(bool bCanGet); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckRecive(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.CheckRecive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetReciveType(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.SetReciveType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminOut5(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminOut5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminEnter5(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminEnter5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminOut4(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminOut4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminEnter4(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminEnter4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminOut3(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminOut3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminEnter3(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminEnter3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminOut2(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminOut2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminEnter2(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminEnter2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminOut1(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminOut1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UIAminEnter1(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UIAminEnter1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CountDownTime(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.CountDownTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshMissionData(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.RefreshMissionData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMission5(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ReciveMission5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMission4(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ReciveMission4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMission3(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ReciveMission3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMission2(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ReciveMission2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveMission1(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ReciveMission1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PurchaseTimeLimitGift(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.PurchaseTimeLimitGift // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NotPurchase(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.NotPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Have Purchace(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.Have Purchace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QuitUI(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.QuitUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGiftSec(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.OpenGiftSec // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t code); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(struct FNoviceTimeLimitData NoticeTimeLimitData); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TimeLimitGiftUI(int32_t EntryPoint); // Function BP_TimeLimitGiftUI.BP_TimeLimitGiftUI_C.ExecuteUbergraph_BP_TimeLimitGiftUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

