// WidgetBlueprintGeneratedClass WBP_InputBox.WBP_InputBox_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_InputBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CloseAnimation; // 0x268(0x08)
	struct UImage* CarriageReturnImage; // 0x270(0x08)
	struct UEditableTextBox* EditableTextBox_Content; // 0x278(0x08)
	struct UHorizontalBox* HorizontalBox_Content; // 0x280(0x08)
	struct UScrollBox* ScrollBox_AddChatContent; // 0x288(0x08)
	struct TArray<struct FText> Message; // 0x290(0x10)
	struct TArray<struct FString> SensitiveWords; // 0x2a0(0x10)
	bool No; // 0x2b0(0x01)

	void Local Add Message(struct FString PlayerConfigName, struct FString Message, struct FString RemainingTime, struct FString GamePlayerName); // Function WBP_InputBox.WBP_InputBox_C.Local Add Message // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FString Get Player Name(struct FString ConfigName); // Function WBP_InputBox.WBP_InputBox_C.Get Player Name // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_InputBox.WBP_InputBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void AddSystemMessages(struct FText Messages); // Function WBP_InputBox.WBP_InputBox_C.AddSystemMessages // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddSealMessagesFromSystem(struct FEventRelevantData EventRelevantData); // Function WBP_InputBox.WBP_InputBox_C.AddSealMessagesFromSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_InputBox(int32_t EntryPoint); // Function WBP_InputBox.WBP_InputBox_C.ExecuteUbergraph_WBP_InputBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

