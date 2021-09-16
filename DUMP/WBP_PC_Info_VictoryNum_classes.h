// WidgetBlueprintGeneratedClass WBP_PC_Info_VictoryNum.WBP_PC_Info_VictoryNum_C
// Size: 0x2ac (Inherited: 0x26c)
struct UWBP_PC_Info_VictoryNum_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UTextBlock* Text_Entertain; // 0x278(0x08)
	struct UTextBlock* Text_Matching; // 0x280(0x08)
	struct UTextBlock* Text_Rank; // 0x288(0x08)
	struct FBattleWinInfo Array Element; // 0x290(0x10)
	int32_t Type0WinCount; // 0x2a0(0x04)
	int32_t Type1WinCount; // 0x2a4(0x04)
	int32_t Type2WinCount; // 0x2a8(0x04)

	void SetMatchDataText(int32_t MatchType, int32_t VictoryNum); // Function WBP_PC_Info_VictoryNum.WBP_PC_Info_VictoryNum_C.SetMatchDataText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_Info_VictoryNum.WBP_PC_Info_VictoryNum_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Info_VictoryNum(int32_t EntryPoint); // Function WBP_PC_Info_VictoryNum.WBP_PC_Info_VictoryNum_C.ExecuteUbergraph_WBP_PC_Info_VictoryNum // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

