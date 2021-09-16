// WidgetBlueprintGeneratedClass WBP_BUFFUI.WBP_BUFFUI_C
// Size: 0x2b4 (Inherited: 0x260)
struct UWBP_BUFFUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_SkillICONS; // 0x268(0x08)
	struct UImage* Image_ShadeCountDown; // 0x270(0x08)
	struct UTextBlock* TextBlock_Number; // 0x278(0x08)
	struct UWBP_CD_C* WBP_CD; // 0x280(0x08)
	struct TSoftObjectPtr<struct UTexture2D> SkillICONS; // 0x288(0x28)
	int32_t BuffID; // 0x2b0(0x04)

	void Construct(); // Function WBP_BUFFUI.WBP_BUFFUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_BUFFUI(int32_t EntryPoint); // Function WBP_BUFFUI.WBP_BUFFUI_C.ExecuteUbergraph_WBP_BUFFUI // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

