// WidgetBlueprintGeneratedClass WBP_Head.WBP_Head_C
// Size: 0x288 (Inherited: 0x268)
struct UWBP_Head_C : UNOS_UI_Nickname {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UTextBlock* ID_2; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Title_2; // 0x280(0x08)

	void SetTitle(struct UObject* Image); // Function WBP_Head.WBP_Head_C.SetTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetID(struct FText InText); // Function WBP_Head.WBP_Head_C.SetID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_Head.WBP_Head_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Head(int32_t EntryPoint); // Function WBP_Head.WBP_Head_C.ExecuteUbergraph_WBP_Head // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

