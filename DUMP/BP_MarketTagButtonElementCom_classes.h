// BlueprintGeneratedClass BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C
// Size: 0x2a8 (Inherited: 0x140)
struct UBP_MarketTagButtonElementCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UUIItem* ChildPanel; // 0x148(0x08)
	struct UUIText* TagName; // 0x150(0x08)
	struct UUISprite* TagArrow; // 0x158(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x160(0x08)
	int32_t CategoryID; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct TMap<int32_t, struct FString> ChildCategorys; // 0x170(0x50)
	struct FString Name; // 0x1c0(0x10)
	struct TArray<struct UBP_MarketTagButtonElementCom_C*> ChildBtns; // 0x1d0(0x10)
	bool bIsOpen; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	struct FColor NormalColor; // 0x1e4(0x04)
	struct FColor HoverColor; // 0x1e8(0x04)
	struct FColor HIghLightSpr; // 0x1ec(0x04)
	struct FLinearColor NormalText; // 0x1f0(0x10)
	struct FLinearColor HighTextColor; // 0x200(0x10)
	struct UUIButtonComponent* TagButtonBG; // 0x210(0x08)
	struct UDataTable* LocalTextTable; // 0x218(0x08)
	struct TMap<struct FString, struct FText> LocalTextMap; // 0x220(0x50)
	int32_t Level; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct TArray<struct FColor> NormalColors; // 0x278(0x10)
	struct TArray<struct FColor> HoverColors; // 0x288(0x10)
	struct TArray<struct FColor> HighLightColors; // 0x298(0x10)

	void UpdateColor(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Widget(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.Init Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindLocalText(struct FString Key, struct FText Array Element); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.FindLocalText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitLocalText(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.InitLocalText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetButtonState(bool IsHighLight); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.SetButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowDropPanel(bool bIsOpen); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.ShowDropPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitSubBtn(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.InitSubBtn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct UBP_ItemMarketLeftPanelCom_C* Parent, int32_t CategoryID, struct FString Name); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMarketTagButtonElement(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.InitMarketTagButtonElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCategoryNotify(int32_t CategoryID); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.SelectCategoryNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBtn(); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.OnClickBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MarketTagButtonElementCom(int32_t EntryPoint); // Function BP_MarketTagButtonElementCom.BP_MarketTagButtonElementCom_C.ExecuteUbergraph_BP_MarketTagButtonElementCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

