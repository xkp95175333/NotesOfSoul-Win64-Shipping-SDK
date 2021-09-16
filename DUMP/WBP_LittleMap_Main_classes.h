// WidgetBlueprintGeneratedClass WBP_LittleMap_Main.WBP_LittleMap_Main_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_LittleMap_Main_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Border; // 0x268(0x08)
	struct UTextBlock* Floor; // 0x270(0x08)
	struct UWBP_LittleMap_Hos_C* WBP_LittleMap_Hos; // 0x278(0x08)
	struct UWBP_LittleMap_JinZiTa_C* WBP_LittleMap_JinZiTa; // 0x280(0x08)
	struct UWBP_LittleMap_LT_C* WBP_LittleMap_LT; // 0x288(0x08)
	struct UWBP_LittleMap_LTB_C* WBP_LittleMap_LTB; // 0x290(0x08)
	struct UWBP_LittleMap_Office_C* WBP_LittleMap_Office; // 0x298(0x08)
	struct UWBP_LittleMap_SCA_C* WBP_LittleMap_SCA; // 0x2a0(0x08)
	struct UWBP_LittleMap_SCB_C* WBP_LittleMap_SCB; // 0x2a8(0x08)

	void HideLittleMap(struct FEventRelevantData Event Data); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.HideLittleMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetFloor(); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.GetFloor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LittleMap_Main(int32_t EntryPoint); // Function WBP_LittleMap_Main.WBP_LittleMap_Main_C.ExecuteUbergraph_WBP_LittleMap_Main // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

