// WidgetBlueprintGeneratedClass WBP_LittleMap_LTB.WBP_LittleMap_LTB_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_LittleMap_LTB_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URetainerBox* RetainerBox_159; // 0x268(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon; // 0x270(0x08)
	struct UWBP_LM_LTB_C* WBP_LM_LTB; // 0x278(0x08)
	float Dimensions; // 0x280(0x04)
	float Zoom; // 0x284(0x04)
	struct UTexture* Image; // 0x288(0x08)

	void Construct(); // Function WBP_LittleMap_LTB.WBP_LittleMap_LTB_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LittleMap_LTB.WBP_LittleMap_LTB_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LittleMap_LTB(int32_t EntryPoint); // Function WBP_LittleMap_LTB.WBP_LittleMap_LTB_C.ExecuteUbergraph_WBP_LittleMap_LTB // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

