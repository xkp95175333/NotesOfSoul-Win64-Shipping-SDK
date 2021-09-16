// WidgetBlueprintGeneratedClass WBP_Items.WBP_Items_C
// Size: 0x2c4 (Inherited: 0x260)
struct UWBP_Items_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PickUpEQ; // 0x268(0x08)
	struct UBorder* Border_Color; // 0x270(0x08)
	struct UBorder* Border_VFX; // 0x278(0x08)
	struct UImage* Image_65; // 0x280(0x08)
	struct UImage* ItemImage; // 0x288(0x08)
	struct UProgressBar* ProgressBar_UseNumber; // 0x290(0x08)
	struct UTextBlock* TextBlock_101; // 0x298(0x08)
	struct UTextBlock* TItemNameText; // 0x2a0(0x08)
	struct FText Subscript; // 0x2a8(0x18)
	float Durablility; // 0x2c0(0x04)

	void Set Item VFX(); // Function WBP_Items.WBP_Items_C.Set Item VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearImage(); // Function WBP_Items.WBP_Items_C.ClearImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemData(struct UKxInventoryObject* Item); // Function WBP_Items.WBP_Items_C.SetItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Info(struct FKxItemData DataInfo); // Function WBP_Items.WBP_Items_C.Info // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Items(int32_t EntryPoint); // Function WBP_Items.WBP_Items_C.ExecuteUbergraph_WBP_Items // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

