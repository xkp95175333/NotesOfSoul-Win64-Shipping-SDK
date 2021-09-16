// WidgetBlueprintGeneratedClass WBP_ReportPanel.WBP_ReportPanel_C
// Size: 0x3f1 (Inherited: 0x260)
struct UWBP_ReportPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterName; // 0x268(0x08)
	struct UImage* Image_Head; // 0x270(0x08)
	struct UImage* Image_HeadBox; // 0x278(0x08)
	struct UMultiLineEditableTextBox* MultiLineEditableTextBox_59; // 0x280(0x08)
	struct UTextBlock* PlayerId; // 0x288(0x08)
	struct UTextBlock* PlayerName; // 0x290(0x08)
	struct UButton* Quit; // 0x298(0x08)
	struct UButton* ReportButton; // 0x2a0(0x08)
	struct UUniformGridPanel* UniformGridPanel_RepoetContent; // 0x2a8(0x08)
	struct TSoftObjectPtr<struct UTexture2D> headicon; // 0x2b0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> HeadIconBox; // 0x2d8(0x28)
	struct FText Player; // 0x300(0x18)
	struct FText Character; // 0x318(0x18)
	struct TArray<struct FText> ReportContent; // 0x330(0x10)
	struct TArray<struct UWBP_ReportContent_C*> Checked; // 0x340(0x10)
	struct TArray<struct FText> CheckedReportContent; // 0x350(0x10)
	struct FTimerHandle TimerHandle; // 0x360(0x08)
	int32_t TargetId; // 0x368(0x04)
	int32_t SelfID; // 0x36c(0x04)
	struct FString UploadText; // 0x370(0x10)
	struct FString ReleaseURL; // 0x380(0x10)
	struct FString TestURL; // 0x390(0x10)
	struct TMap<struct FString, struct FString> ReportParams; // 0x3a0(0x50)
	bool bUploadLog; // 0x3f0(0x01)

	void SetBaseInfo(); // Function WBP_ReportPanel.WBP_ReportPanel_C.SetBaseInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetContent(int32_t SelfUID, int32_t TargetUID, struct FString des, struct TMap<struct FString, struct FString> params); // Function WBP_ReportPanel.WBP_ReportPanel_C.GetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ReportPanel.WBP_ReportPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__MultiLineEditableTextBox_58_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_ReportPanel.WBP_ReportPanel_C.BndEvt__MultiLineEditableTextBox_58_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ReportButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReportPanel.WBP_ReportPanel_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void CheckedState(); // Function WBP_ReportPanel.WBP_ReportPanel_C.CheckedState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(bool bSucessed, struct FString Content); // Function WBP_ReportPanel.WBP_ReportPanel_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ReportPanel.WBP_ReportPanel_C.BndEvt__Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void CollectData(); // Function WBP_ReportPanel.WBP_ReportPanel_C.CollectData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(bool bSucessed, struct FString Content); // Function WBP_ReportPanel.WBP_ReportPanel_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ReportPanel(int32_t EntryPoint); // Function WBP_ReportPanel.WBP_ReportPanel_C.ExecuteUbergraph_WBP_ReportPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

