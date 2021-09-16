// WidgetBlueprintGeneratedClass WBP_DropItem.WBP_DropItem_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_DropItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ItemImage; // 0x268(0x08)
	struct UTextBlock* ItemNumber; // 0x270(0x08)
	struct URichTextBlock* RichTextBlock_44; // 0x278(0x08)
	struct UTexture2D* Image; // 0x280(0x08)
	int32_t Number; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FText Text; // 0x290(0x18)

	void Construct(); // Function WBP_DropItem.WBP_DropItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_DropItem(int32_t EntryPoint); // Function WBP_DropItem.WBP_DropItem_C.ExecuteUbergraph_WBP_DropItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

