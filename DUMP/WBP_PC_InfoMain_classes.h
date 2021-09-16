// WidgetBlueprintGeneratedClass WBP_PC_InfoMain.WBP_PC_InfoMain_C
// Size: 0x2b0 (Inherited: 0x26c)
struct UWBP_PC_InfoMain_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UImage* Image_100; // 0x278(0x08)
	struct UWBP_PC_Info_PlayerData_C* WBP_Info_PlayerData; // 0x280(0x08)
	struct UWBP_PC_Info_Achievement_C* WBP_PC_Info_Achievement; // 0x288(0x08)
	struct UWBP_PC_Info_Misc_C* WBP_PC_Info_Misc; // 0x290(0x08)
	struct UWBP_PC_Info_PlayerName_C* WBP_PC_Info_PlayerData; // 0x298(0x08)
	struct UWBP_PC_Info_PlayerRank_C* WBP_PC_Info_PlayerRank; // 0x2a0(0x08)
	struct UWBP_PC_Info_VictoryNum_C* WBP_PC_Info_VictoryNum; // 0x2a8(0x08)

	void Initial Friend Widget(); // Function WBP_PC_InfoMain.WBP_PC_InfoMain_C.Initial Friend Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Initial Self Widget(); // Function WBP_PC_InfoMain.WBP_PC_InfoMain_C.Initial Self Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed_2(int32_t ParentSpecPlayerUID); // Function WBP_PC_InfoMain.WBP_PC_InfoMain_C.On Parent Constructed_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_InfoMain(int32_t EntryPoint); // Function WBP_PC_InfoMain.WBP_PC_InfoMain_C.ExecuteUbergraph_WBP_PC_InfoMain // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

