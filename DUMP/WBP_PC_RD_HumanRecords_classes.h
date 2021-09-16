// WidgetBlueprintGeneratedClass WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_PC_RD_HumanRecords_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Title; // 0x268(0x08)
	struct UTextBlock* Text_IsVictory; // 0x270(0x08)
	struct UVerticalBox* VerBox_HumanRecord; // 0x278(0x08)
	struct UVerticalBox* VerBox_HumanRecordList; // 0x280(0x08)
	struct ANOS_CharacterModel* Character Model; // 0x288(0x08)
	struct TArray<struct FHumanSettle> HumanSettle; // 0x290(0x10)

	void SetHumanNormalModeDetailed(struct TArray<struct ANOS_PlayerHuman*> Array); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.SetHumanNormalModeDetailed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanLangRenShaDetailed(struct TArray<struct ANOS_PlayerHuman*> Array); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.SetHumanLangRenShaDetailed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetUI(struct ANOS_GSArenaBase* GsArena); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.SetUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void StartSetHumanInfo(struct ANOS_CharacterModel* CharacterModel, struct TArray<struct FHumanSettle> HumanSettle); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.StartSetHumanInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RD_HumanRecords(int32_t EntryPoint); // Function WBP_PC_RD_HumanRecords.WBP_PC_RD_HumanRecords_C.ExecuteUbergraph_WBP_PC_RD_HumanRecords // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

