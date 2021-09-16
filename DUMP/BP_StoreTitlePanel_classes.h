// BlueprintGeneratedClass BP_StoreTitlePanel.BP_StoreTitlePanel_C
// Size: 0x170 (Inherited: 0x140)
struct UBP_StoreTitlePanel_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIItem* LoadingICon; // 0x148(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x150(0x08)
	struct UUIText* StateText; // 0x158(0x08)
	struct UUISprite* SortButton; // 0x160(0x08)
	struct UUIItem* SortButtonBG; // 0x168(0x08)

	void UpdateSortButton(enum class ESortRole Role); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.UpdateSortButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckLoadingState(); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.CheckLoadingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTitle(); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.UpdateTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitStoreTitlePanel(); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.InitStoreTitlePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickSortButton(); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.OnClickSortButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StoreTitlePanel(int32_t EntryPoint); // Function BP_StoreTitlePanel.BP_StoreTitlePanel_C.ExecuteUbergraph_BP_StoreTitlePanel // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

