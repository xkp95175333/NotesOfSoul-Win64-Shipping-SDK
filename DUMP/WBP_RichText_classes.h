// WidgetBlueprintGeneratedClass WBP_RichText.WBP_RichText_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_RichText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URichTextBlock* RichTextBlock_8; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)

	void SetGuildName(struct FText InText); // Function WBP_RichText.WBP_RichText_C.SetGuildName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetJustification(enum class ETextJustify Justification); // Function WBP_RichText.WBP_RichText_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_RichText.WBP_RichText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_RichText.WBP_RichText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_RichText(int32_t EntryPoint); // Function WBP_RichText.WBP_RichText_C.ExecuteUbergraph_WBP_RichText // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

