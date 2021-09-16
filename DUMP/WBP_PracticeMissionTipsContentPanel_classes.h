// WidgetBlueprintGeneratedClass WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C
// Size: 0x2dd (Inherited: 0x260)
struct UWBP_PracticeMissionTipsContentPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* RightSideMissionAnim; // 0x268(0x08)
	struct UWidgetAnimation* LongSquareAnim; // 0x270(0x08)
	struct UWidgetAnimation* SquareAnim; // 0x278(0x08)
	struct UWidgetAnimation* RightMouseAnim; // 0x280(0x08)
	struct UWidgetAnimation* LeftMouseAnim; // 0x288(0x08)
	struct UTextBlock* BottomContentBlock; // 0x290(0x08)
	struct UCanvasPanel* BottomTipsPanle; // 0x298(0x08)
	struct UTextBlock* CenterContentBlock; // 0x2a0(0x08)
	struct UCanvasPanel* CenterTipsPanle; // 0x2a8(0x08)
	struct UImage* Image_134; // 0x2b0(0x08)
	struct UImage* Image_294; // 0x2b8(0x08)
	struct UImage* PanleBG; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UImage* Title; // 0x2d0(0x08)
	float Timer; // 0x2d8(0x04)
	bool bClosedPanel; // 0x2dc(0x01)

	void Set Hide Left Mouse Tips(); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.Set Hide Left Mouse Tips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCenterContentTipsVisability(bool bShow); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.SetCenterContentTipsVisability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBottomTipsVisability(bool bShow); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.SetBottomTipsVisability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBottomTips(struct FText Content); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.SetBottomTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCenterContentTips(struct FText Content); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.SetCenterContentTips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputInterface(struct FInputStruct InputKey); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.InputInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PracticeMissionTipsContentPanel(int32_t EntryPoint); // Function WBP_PracticeMissionTipsContentPanel.WBP_PracticeMissionTipsContentPanel_C.ExecuteUbergraph_WBP_PracticeMissionTipsContentPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

