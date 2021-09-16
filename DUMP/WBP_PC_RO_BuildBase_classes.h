// WidgetBlueprintGeneratedClass WBP_PC_RO_BuildBase.WBP_PC_RO_BuildBase_C
// Size: 0x28c (Inherited: 0x26c)
struct UWBP_PC_RO_BuildBase_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UProgressBar* ProgressBar_BuildBase; // 0x278(0x08)
	struct UTextBlock* Text_Topic_Num; // 0x280(0x08)
	int32_t Zhu Ji Points; // 0x288(0x04)

	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_RO_BuildBase.WBP_PC_RO_BuildBase_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RO_BuildBase(int32_t EntryPoint); // Function WBP_PC_RO_BuildBase.WBP_PC_RO_BuildBase_C.ExecuteUbergraph_WBP_PC_RO_BuildBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

