// WidgetBlueprintGeneratedClass WBP_NoticeUI.WBP_NoticeUI_C
// Size: 0x2c0 (Inherited: 0x280)
struct UWBP_NoticeUI_C : UUI_BroadCastMgr {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* Countdown; // 0x288(0x08)
	struct UBorder* System; // 0x290(0x08)
	struct UTextBlock* TextBroadcast_Text; // 0x298(0x08)
	struct UCanvasPanel* TextBroadcastPanel; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2a8(0x08)
	float Broadcast Time; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FTimerHandle CountDownTimer; // 0x2b8(0x08)

	void SetCountDown(bool NeedSet?, float Time); // Function WBP_NoticeUI.WBP_NoticeUI_C.SetCountDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowBroadcastUI_BP(struct FUIBroadcastInfo BroadcastInfo); // Function WBP_NoticeUI.WBP_NoticeUI_C.ShowBroadcastUI_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ShowDeb(); // Function WBP_NoticeUI.WBP_NoticeUI_C.ShowDeb // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HiddenBroadcastUI_BP(); // Function WBP_NoticeUI.WBP_NoticeUI_C.HiddenBroadcastUI_BP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_NoticeUI(int32_t EntryPoint); // Function WBP_NoticeUI.WBP_NoticeUI_C.ExecuteUbergraph_WBP_NoticeUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

