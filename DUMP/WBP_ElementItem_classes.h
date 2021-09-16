// WidgetBlueprintGeneratedClass WBP_ElementItem.WBP_ElementItem_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_ElementItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Debris; // 0x268(0x08)
	struct UTextBlock* TextAttribute; // 0x270(0x08)
	struct UTextBlock* TextKey; // 0x278(0x08)
	struct UImage* VFX; // 0x280(0x08)
	struct FText Index; // 0x288(0x18)

	void Initialize(); // Function WBP_ElementItem.WBP_ElementItem_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVFX(bool OnOff); // Function WBP_ElementItem.WBP_ElementItem_C.SetVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetElementInfo(struct UTexture2D* DebrisTexture, struct FText AttributeText, struct UTexture2D* VFXTexture); // Function WBP_ElementItem.WBP_ElementItem_C.SetElementInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_ElementItem.WBP_ElementItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ElementItem(int32_t EntryPoint); // Function WBP_ElementItem.WBP_ElementItem_C.ExecuteUbergraph_WBP_ElementItem // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

