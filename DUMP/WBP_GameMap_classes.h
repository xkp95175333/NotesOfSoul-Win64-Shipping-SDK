// WidgetBlueprintGeneratedClass WBP_GameMap.WBP_GameMap_C
// Size: 0x2e0 (Inherited: 0x260)
struct UWBP_GameMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Hospital_C* WBP_Hospital; // 0x268(0x08)
	struct UWBP_JinZiTa_C* WBP_JinZiTa; // 0x270(0x08)
	struct UWBP_LT_C* WBP_LT; // 0x278(0x08)
	struct UWBP_LTB_C* WBP_LTB; // 0x280(0x08)
	struct UWBP_LTW_C* WBP_LTW; // 0x288(0x08)
	struct UWBP_OfficeMap_C* WBP_Office; // 0x290(0x08)
	struct UWBP_SchoolA_C* WBP_SchoolA; // 0x298(0x08)
	struct UWBP_SchoolB_C* WBP_SchoolB; // 0x2a0(0x08)
	struct UWBP_XueXiaoMap_C* WBP_XueXiaoMap; // 0x2a8(0x08)
	struct UWBP_YuCun_C* WBP_YuCun; // 0x2b0(0x08)
	struct FString LevelName; // 0x2b8(0x10)
	struct FVector ActorLocation; // 0x2c8(0x0c)
	struct FVector Sign Location; // 0x2d4(0x0c)

	void InitMap(); // Function WBP_GameMap.WBP_GameMap_C.InitMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText SetMapName(); // Function WBP_GameMap.WBP_GameMap_C.SetMapName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_GameMap.WBP_GameMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void FloorUp(); // Function WBP_GameMap.WBP_GameMap_C.FloorUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FloorDown(); // Function WBP_GameMap.WBP_GameMap_C.FloorDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SignMap(struct FVector SignLocation); // Function WBP_GameMap.WBP_GameMap_C.SignMap // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_GameMap(int32_t EntryPoint); // Function WBP_GameMap.WBP_GameMap_C.ExecuteUbergraph_WBP_GameMap // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

