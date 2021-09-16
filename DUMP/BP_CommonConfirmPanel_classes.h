// BlueprintGeneratedClass BP_CommonConfirmPanel.BP_CommonConfirmPanel_C
// Size: 0x1b0 (Inherited: 0x151)
struct UBP_CommonConfirmPanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIBaseActor* BtnConfirm; // 0x160(0x08)
	struct AUIBaseActor* BtnCancel; // 0x168(0x08)
	struct AUITextActor* Content; // 0x170(0x08)
	struct AUITextActor* Title; // 0x178(0x08)
	struct FLGUIDelegateHandleWrapper ClickConfirm; // 0x180(0x08)
	struct FLGUIDelegateHandleWrapper ClickCancel; // 0x188(0x08)
	struct FMulticastInlineDelegate OnConfirmEvent; // 0x190(0x10)
	struct FMulticastInlineDelegate OnCancelEvent; // 0x1a0(0x10)

	void UnRegister(); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.UnRegister // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(struct FText Tile, struct FText Content); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConfirmEventTrigger(); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.ConfirmEventTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CancelEventTrigger(); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.CancelEventTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_CommonConfirmPanel(int32_t EntryPoint); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.ExecuteUbergraph_BP_CommonConfirmPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnCancelEvent__DelegateSignature(); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.OnCancelEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfirmEvent__DelegateSignature(); // Function BP_CommonConfirmPanel.BP_CommonConfirmPanel_C.OnConfirmEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

