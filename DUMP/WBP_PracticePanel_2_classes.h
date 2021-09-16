// WidgetBlueprintGeneratedClass WBP_PracticePanel_2.WBP_PracticePanel_1_C
// Size: 0x2d9 (Inherited: 0x260)
struct UWBP_PracticePanel_1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* RightSideMissionAnim; // 0x268(0x08)
	struct UWidgetAnimation* LongSquareAnim; // 0x270(0x08)
	struct UWidgetAnimation* SquareAnim; // 0x278(0x08)
	struct UWidgetAnimation* RightMouseAnim; // 0x280(0x08)
	struct UWidgetAnimation* LeftMouseAnim; // 0x288(0x08)
	struct UButton* Confirm; // 0x290(0x08)
	struct UImage* LeftMouse; // 0x298(0x08)
	struct UButton* LongSquare; // 0x2a0(0x08)
	struct UImage* Mouse; // 0x2a8(0x08)
	struct UImage* RightMouse; // 0x2b0(0x08)
	struct UImage* RightSideTipsContent; // 0x2b8(0x08)
	struct UButton* Square; // 0x2c0(0x08)
	struct UWBP_PracticeMissionNode_C* WBP_PracticeMissionNode_5; // 0x2c8(0x08)
	struct UWBP_PracticeMissionTipsContentPanel_C* WBP_PracticeMissionTipsContentPanel; // 0x2d0(0x08)
	bool bFinished; // 0x2d8(0x01)

	void LeftShiftPressed(); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.LeftShiftPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnClicked_Event_1(); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputInterface(struct FInputStruct InputKey); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.InputInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PracticePanel_2(int32_t EntryPoint); // Function WBP_PracticePanel_2.WBP_PracticePanel_1_C.ExecuteUbergraph_WBP_PracticePanel_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

