// WidgetBlueprintGeneratedClass WBP_LM_SchoolA.WBP_LM_SchoolA_C
// Size: 0x310 (Inherited: 0x260)
struct UWBP_LM_SchoolA_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* 1f_arror; // 0x268(0x08)
	struct UImage* 2f_arror; // 0x270(0x08)
	struct UOverlay* BigMapOverlay; // 0x278(0x08)
	struct UOverlay* floor1; // 0x280(0x08)
	struct UOverlay* floor2; // 0x288(0x08)
	struct UImage* Image_78; // 0x290(0x08)
	struct UImage* Image_1f; // 0x298(0x08)
	struct UImage* Image_2f; // 0x2a0(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_2; // 0x2a8(0x08)
	struct UWBP_HumanIcon_C* WBP_HumanIcon_3; // 0x2b0(0x08)
	int32_t MaxFloor; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UWBP_GameMap_C* GameMap; // 0x2c0(0x08)
	int32_t CurrentFloor; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UWBP_HumanIcon_C* PlayerIcon; // 0x2d0(0x08)
	struct UWBP_GameMap_C* WBP_GameMap; // 0x2d8(0x08)
	bool IsSign; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UWBP_SignMapIcon_C* SignIcon; // 0x2e8(0x08)
	struct FVector Sign Location; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FString Floor; // 0x300(0x10)

	void SetSign(struct FVector Sign Location); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.SetSign // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePlayerIcon(); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.UpdatePlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitFloor(); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.InitFloor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorDown(); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.MapFloorDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MapFloorUP(); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.MapFloorUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SignMap(struct FVector Sign Location); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.SignMap // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LM_SchoolA(int32_t EntryPoint); // Function WBP_LM_SchoolA.WBP_LM_SchoolA_C.ExecuteUbergraph_WBP_LM_SchoolA // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

