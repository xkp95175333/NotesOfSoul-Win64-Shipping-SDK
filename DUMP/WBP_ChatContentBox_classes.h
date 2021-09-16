// WidgetBlueprintGeneratedClass WBP_ChatContentBox.WBP_ChatContentBox_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_ChatContentBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URichTextBlock* RichTextBlock_Message; // 0x268(0x08)
	struct FText Content; // 0x270(0x18)
	enum class E_ChatChannelType ChatColor; // 0x288(0x01)

	void SetChatRichText(struct FString RowName, struct FString Message); // Function WBP_ChatContentBox.WBP_ChatContentBox_C.SetChatRichText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_ChatContentBox.WBP_ChatContentBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ChatContentBox.WBP_ChatContentBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ChatContentBox(int32_t EntryPoint); // Function WBP_ChatContentBox.WBP_ChatContentBox_C.ExecuteUbergraph_WBP_ChatContentBox // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

