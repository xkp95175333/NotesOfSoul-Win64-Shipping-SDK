// BlueprintGeneratedClass BP_BaseShopPanel.BP_BaseShopPanel_C
// Size: 0x1e0 (Inherited: 0x151)
struct UBP_BaseShopPanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_BulletinBoardAndTagsPanelCom_C* ParentCom; // 0x160(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x168(0x08)
	int32_t CategoryID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct ULGUIBasePanel*, struct FString> KeyWordMap; // 0x178(0x50)
	bool FuzzySearch; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct TArray<struct ULGUIBasePanel*> SearchReturnWidgets; // 0x1d0(0x10)

	struct TArray<struct ULGUIBasePanel*> SearchWidgetByKeyWord(struct FString Key); // Function BP_BaseShopPanel.BP_BaseShopPanel_C.SearchWidgetByKeyWord // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RegistKeyWord(struct ULGUIBasePanel* Widget, struct FString ItemName, struct FString CharacterName); // Function BP_BaseShopPanel.BP_BaseShopPanel_C.RegistKeyWord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePanelData(); // Function BP_BaseShopPanel.BP_BaseShopPanel_C.UpdatePanelData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSearchKeyWordsChanged(struct FString Keywords); // Function BP_BaseShopPanel.BP_BaseShopPanel_C.OnSearchKeyWordsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BaseShopPanel(int32_t EntryPoint); // Function BP_BaseShopPanel.BP_BaseShopPanel_C.ExecuteUbergraph_BP_BaseShopPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

