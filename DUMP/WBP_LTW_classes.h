// WidgetBlueprintGeneratedClass WBP_LTW.WBP_LTW_C
// Size: 0x2e5 (Inherited: 0x260)
struct UWBP_LTW_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* 1f; // 0x268(0x08)
	struct UImage* 1f_arror; // 0x270(0x08)
	struct UImage* 2f; // 0x278(0x08)
	struct UImage* 2f_arror; // 0x280(0x08)
	struct UOverlay* floor1; // 0x288(0x08)
	struct UOverlay* floor2; // 0x290(0x08)
	struct UImage* Image_78; // 0x298(0x08)
	struct UImage* Image_1f; // 0x2a0(0x08)
	struct UImage* Image_2f; // 0x2a8(0x08)
	struct UImage* MapBG; // 0x2b0(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_2; // 0x2b8(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_3; // 0x2c0(0x08)
	int32_t CurrentFloor; // 0x2c8(0x04)
	int32_t MaxFloor; // 0x2cc(0x04)
	struct UWBP_SignMapIcon_C* SignIcon; // 0x2d0(0x08)
	struct FVector Sign Location; // 0x2d8(0x0c)
	bool IsSign; // 0x2e4(0x01)

	void Get Sign(struct FVector SignLocation); // Function WBP_LTW.WBP_LTW_C.Get Sign // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePlayerIcon(); // Function WBP_LTW.WBP_LTW_C.UpdatePlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_LTW.WBP_LTW_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorUP(); // Function WBP_LTW.WBP_LTW_C.MapFloorUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorDown(); // Function WBP_LTW.WBP_LTW_C.MapFloorDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LTW.WBP_LTW_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitFloor(); // Function WBP_LTW.WBP_LTW_C.InitFloor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SignMap(struct FVector SignLocation); // Function WBP_LTW.WBP_LTW_C.SignMap // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LTW(int32_t EntryPoint); // Function WBP_LTW.WBP_LTW_C.ExecuteUbergraph_WBP_LTW // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

