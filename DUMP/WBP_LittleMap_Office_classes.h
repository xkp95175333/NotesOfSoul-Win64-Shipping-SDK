// WidgetBlueprintGeneratedClass WBP_LittleMap_Office.WBP_LittleMap_Office_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_LittleMap_Office_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URetainerBox* RetainerBox_159; // 0x268(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon; // 0x270(0x08)
	struct UWBP_LM_OfficeMap_C* WBP_LM_OfficeMap; // 0x278(0x08)
	float Dimensions; // 0x280(0x04)
	float Zoom; // 0x284(0x04)
	struct UTexture* Image; // 0x288(0x08)

	void Construct(); // Function WBP_LittleMap_Office.WBP_LittleMap_Office_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LittleMap_Office.WBP_LittleMap_Office_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LittleMap_Office(int32_t EntryPoint); // Function WBP_LittleMap_Office.WBP_LittleMap_Office_C.ExecuteUbergraph_WBP_LittleMap_Office // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

