// WidgetBlueprintGeneratedClass WBP_Visitor.WBP_Visitor_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_Visitor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_103; // 0x268(0x08)
	struct UImage* Image_231; // 0x270(0x08)

	void BP_OnEntryReleased(); // Function WBP_Visitor.WBP_Visitor_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Visitor.WBP_Visitor_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Visitor.WBP_Visitor_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Visitor(int32_t EntryPoint); // Function WBP_Visitor.WBP_Visitor_C.ExecuteUbergraph_WBP_Visitor // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

