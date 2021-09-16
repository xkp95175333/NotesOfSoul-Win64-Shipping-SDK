// BlueprintGeneratedClass BP_DonatePanelBase.BP_DonatePanelBase_C
// Size: 0x17c (Inherited: 0x140)
struct UBP_DonatePanelBase_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIText* NumText; // 0x148(0x08)
	struct UUITextInputComponent* NumBox; // 0x150(0x08)
	int32_t MaxCount; // 0x158(0x04)
	int32_t Count; // 0x15c(0x04)
	struct FText ItemName; // 0x160(0x18)
	int32_t ItemId; // 0x178(0x04)

	void InitData(int32_t MaxCount, struct FText ItemName, int32_t ItemId, int32_t Count); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitDonatePanel(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.InitDonatePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.UpdateData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickAddOne(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.OnClickAddOne // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddItemCount(int32_t Value); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.AddItemCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClosePanel(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.ClosePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickAddTen(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.OnClickAddTen // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSubOne(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.OnClickSubOne // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSubTen(); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.OnClickSubTen // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCountCommit(struct FString Content); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.OnCountCommit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DonatePanelBase(int32_t EntryPoint); // Function BP_DonatePanelBase.BP_DonatePanelBase_C.ExecuteUbergraph_BP_DonatePanelBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

