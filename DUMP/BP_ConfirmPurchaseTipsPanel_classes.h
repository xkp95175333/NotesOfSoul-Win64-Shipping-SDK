// BlueprintGeneratedClass BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C
// Size: 0xe0 (Inherited: 0xc0)
struct UBP_ConfirmPurchaseTipsPanel_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUITextActor* WarningText; // 0xc8(0x08)
	struct UTreasureBoxPanel_Script_C* TreasureBoxPanelCom; // 0xd0(0x08)
	struct AUIBaseActor* TreasureBoxPanelActor; // 0xd8(0x08)

	void ConfirmPurchase(); // Function BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C.ConfirmPurchase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClosePanel(); // Function BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C.ClosePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetWarningContent(struct FText Content); // Function BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C.SetWarningContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ConfirmPurchaseTipsPanel(int32_t EntryPoint); // Function BP_ConfirmPurchaseTipsPanel.BP_ConfirmPurchaseTipsPanel_C.ExecuteUbergraph_BP_ConfirmPurchaseTipsPanel // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

