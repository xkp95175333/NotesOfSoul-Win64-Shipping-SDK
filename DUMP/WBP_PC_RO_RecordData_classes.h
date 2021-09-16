// WidgetBlueprintGeneratedClass WBP_PC_RO_RecordData.WBP_PC_RO_RecordData_C
// Size: 0x2b8 (Inherited: 0x26c)
struct UWBP_PC_RO_RecordData_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UTextBlock* Text_MVP; // 0x278(0x08)
	struct UTextBlock* Text_TotalElementSlot; // 0x280(0x08)
	struct UTextBlock* Text_TotalGames; // 0x288(0x08)
	struct UTextBlock* Text_TotalKillHuman; // 0x290(0x08)
	struct UTextBlock* Text_WinningRate; // 0x298(0x08)
	int32_t WinCount; // 0x2a0(0x04)
	int32_t FailCount; // 0x2a4(0x04)
	int32_t AllCount; // 0x2a8(0x04)
	int32_t GMvp; // 0x2ac(0x04)
	int32_t HMvp; // 0x2b0(0x04)
	int32_t AllMvp; // 0x2b4(0x04)

	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RO_RecordData.WBP_PC_RO_RecordData_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RO_RecordData(int32_t EntryPoint); // Function WBP_PC_RO_RecordData.WBP_PC_RO_RecordData_C.ExecuteUbergraph_WBP_PC_RO_RecordData // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

