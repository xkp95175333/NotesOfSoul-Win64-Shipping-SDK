// WidgetBlueprintGeneratedClass WBP_XueXiaoMap.WBP_XueXiaoMap_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_XueXiaoMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* 1f_arror; // 0x268(0x08)
	struct UImage* 2f_arror; // 0x270(0x08)
	struct UOverlay* BigMapOverlay; // 0x278(0x08)
	struct UOverlay* floor1; // 0x280(0x08)
	struct UOverlay* floor2; // 0x288(0x08)
	struct UImage* Image_1f; // 0x290(0x08)
	struct UImage* Image_2f; // 0x298(0x08)
	struct UImage* ImageBG; // 0x2a0(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon; // 0x2a8(0x08)
	int32_t MaxFloor; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UWBP_GameMap_C* GameMap; // 0x2b8(0x08)
	int32_t CurrentFloor; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UWBP_HumanIcon_C* PlayerIcon; // 0x2c8(0x08)
	struct UWBP_GameMap_C* WBP_GameMap; // 0x2d0(0x08)

	void UpdatePlayerIcon(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.UpdatePlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorUP(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.MapFloorUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorDown(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.MapFloorDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFloor(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.InitFloor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Sign(); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.Sign // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_XueXiaoMap(int32_t EntryPoint); // Function WBP_XueXiaoMap.WBP_XueXiaoMap_C.ExecuteUbergraph_WBP_XueXiaoMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

