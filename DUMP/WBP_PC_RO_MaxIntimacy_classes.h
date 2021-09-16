// WidgetBlueprintGeneratedClass WBP_PC_RO_MaxIntimacy.WBP_PC_RO_MaxIntimacy_C
// Size: 0x2d0 (Inherited: 0x26c)
struct UWBP_PC_RO_MaxIntimacy_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Image_GhostRole; // 0x278(0x08)
	struct UImage* Image_HumanRole; // 0x280(0x08)
	struct UTextBlock* Text_GhostName; // 0x288(0x08)
	struct UTextBlock* Text_HumanName; // 0x290(0x08)
	struct TArray<struct FRoleIntimacyData> GhostRoles; // 0x298(0x10)
	struct TArray<struct FRoleIntimacyData> HumanRoles; // 0x2a8(0x10)
	int32_t MaxHumanRoleID; // 0x2b8(0x04)
	int32_t MaxGhostRoleID; // 0x2bc(0x04)
	int32_t MaxHumanIntimacyLevel; // 0x2c0(0x04)
	int32_t MaxGhostIntimacyLevel; // 0x2c4(0x04)
	int32_t MaxHumanINT; // 0x2c8(0x04)
	int32_t MaxGhostINT; // 0x2cc(0x04)

	void ShowMax(); // Function WBP_PC_RO_MaxIntimacy.WBP_PC_RO_MaxIntimacy_C.ShowMax // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RO_MaxIntimacy.WBP_PC_RO_MaxIntimacy_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RO_MaxIntimacy(int32_t EntryPoint); // Function WBP_PC_RO_MaxIntimacy.WBP_PC_RO_MaxIntimacy_C.ExecuteUbergraph_WBP_PC_RO_MaxIntimacy // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

