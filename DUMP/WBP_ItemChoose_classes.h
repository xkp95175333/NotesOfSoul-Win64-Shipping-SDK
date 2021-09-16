// WidgetBlueprintGeneratedClass WBP_ItemChoose.WBP_ItemChoose_C
// Size: 0x29c (Inherited: 0x260)
struct UWBP_ItemChoose_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_ItemChoseIcon_C* WBP_ItemChoseIcon; // 0x268(0x08)
	struct UWBP_ItemChoseIcon_C* WBP_ItemChoseIcon_2; // 0x270(0x08)
	struct UWBP_ItemChoseIcon_C* WBP_ItemChoseIcon_3; // 0x278(0x08)
	struct TArray<struct UWBP_ItemChoseIcon_C*> GuishuIcoArray; // 0x280(0x10)
	struct UWBP_ItemChoseUI_C* ItemChoseUI; // 0x290(0x08)
	int32_t Index; // 0x298(0x04)

	void Construct(); // Function WBP_ItemChoose.WBP_ItemChoose_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemInfo(char Index, struct FKxItemTable ItemInfo); // Function WBP_ItemChoose.WBP_ItemChoose_C.SetItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ItemChoose(int32_t EntryPoint); // Function WBP_ItemChoose.WBP_ItemChoose_C.ExecuteUbergraph_WBP_ItemChoose // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

