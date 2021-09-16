// BlueprintGeneratedClass BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C
// Size: 0x18c (Inherited: 0x140)
struct UBP_ItemMarketOperationPanelCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x148(0x08)
	struct UUIButtonComponent* ButtonUnsale; // 0x150(0x08)
	struct UUIText* TextUnsale; // 0x158(0x08)
	struct UBP_IntegrationCom_C* Integration; // 0x160(0x08)
	struct FVector2D Canvas Scale; // 0x168(0x08)
	bool Enter; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t CurrentHandTradeID; // 0x174(0x04)
	struct FString Name; // 0x178(0x10)
	int32_t CurrentPrice; // 0x188(0x04)

	void SetPoivot(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.SetPoivot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowPanel(int32_t CurrentHandTradeID, struct FString Name, int32_t price); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.ShowPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitOperationPanel(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.InitOperationPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClosePanel(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.ClosePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EnterMouse(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.EnterMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseLeave(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseClick(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.OnMouseClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConfirmOffsale(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.ConfirmOffsale // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLeftMouseDown(); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.OnLeftMouseDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemMarketOperationPanelCom(int32_t EntryPoint); // Function BP_ItemMarketOperationPanelCom.BP_ItemMarketOperationPanelCom_C.ExecuteUbergraph_BP_ItemMarketOperationPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

