// WidgetBlueprintGeneratedClass WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_PC_RD_GhostRecord_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Title; // 0x268(0x08)
	struct UTextBlock* Text_IsVictory; // 0x270(0x08)
	struct UVerticalBox* VerBox_GhostRecord; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_85; // 0x280(0x08)
	struct ANOS_CharacterModel* Character Model; // 0x288(0x08)
	struct TArray<struct FGhostSettle> GhostSettle; // 0x290(0x10)

	void Set Ghost Record Size(enum class EKxGameType GameType); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.Set Ghost Record Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsExist25(bool IsExist25); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.IsExist25 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetGhostNormalModeDetailed(struct ANOS_PlayerBase* Ghost); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.SetGhostNormalModeDetailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostLangRenShaDetailed(struct TArray<struct ANOS_PlayerHuman*> Array); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.SetGhostLangRenShaDetailed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EKxGameType SetUI(struct ANOS_GSArenaBase* GsArena); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.SetUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void StartSetGhostInfo(struct ANOS_CharacterModel* CharacterModel, struct TArray<struct FGhostSettle> GhostSettle); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.StartSetGhostInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RD_GhostRecord(int32_t EntryPoint); // Function WBP_PC_RD_GhostRecord.WBP_PC_RD_GhostRecord_C.ExecuteUbergraph_WBP_PC_RD_GhostRecord // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

