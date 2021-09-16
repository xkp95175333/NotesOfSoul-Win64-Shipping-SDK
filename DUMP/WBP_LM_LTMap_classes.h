// WidgetBlueprintGeneratedClass WBP_LM_LTMap.WBP_LM_LTMap_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_LM_LTMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* 1f; // 0x268(0x08)
	struct UImage* 1f_arror; // 0x270(0x08)
	struct UImage* 2f; // 0x278(0x08)
	struct UImage* 2f_arror; // 0x280(0x08)
	struct UOverlay* BigMapOverlay; // 0x288(0x08)
	struct UOverlay* floor1; // 0x290(0x08)
	struct UOverlay* floor2; // 0x298(0x08)
	struct UImage* Image_78; // 0x2a0(0x08)
	struct UImage* Image_1f; // 0x2a8(0x08)
	struct UImage* Image_2f; // 0x2b0(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_2; // 0x2b8(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_3; // 0x2c0(0x08)
	int32_t CurrentFloor; // 0x2c8(0x04)
	int32_t MaxFloor; // 0x2cc(0x04)
	struct UWBP_SignMapIcon_C* SignIcon; // 0x2d0(0x08)
	struct FVector Sign Location; // 0x2d8(0x0c)
	bool IsSign; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FString Floor; // 0x2e8(0x10)

	void Get Sign(struct FVector SignLocation); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.Get Sign // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePlayerIcon(); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.UpdatePlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorDown(); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.MapFloorDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorUP(); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.MapFloorUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitFloor(); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.InitFloor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SignMap(struct FVector SignLocation); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.SignMap // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LM_LTMap(int32_t EntryPoint); // Function WBP_LM_LTMap.WBP_LM_LTMap_C.ExecuteUbergraph_WBP_LM_LTMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

