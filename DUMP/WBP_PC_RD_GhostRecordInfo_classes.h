// WidgetBlueprintGeneratedClass WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C
// Size: 0x308 (Inherited: 0x260)
struct UWBP_PC_RD_GhostRecordInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_SettleButton_C* Button_Friend; // 0x268(0x08)
	struct UWBP_SettleButton_C* Button_Inform; // 0x270(0x08)
	struct UWBP_Talent_C* carry0; // 0x278(0x08)
	struct UWBP_Talent_C* carry1; // 0x280(0x08)
	struct UWBP_Talent_C* carry2; // 0x288(0x08)
	struct USizeBox* GhostSerialNumberSizeBox; // 0x290(0x08)
	struct UTextBlock* GhostSerialNumberText; // 0x298(0x08)
	struct UImage* Image_PlayerImg; // 0x2a0(0x08)
	struct UTextBlock* Text_HitHumanNum; // 0x2a8(0x08)
	struct UTextBlock* Text_KillHumanNum; // 0x2b0(0x08)
	struct UTextBlock* Text_PlayerName; // 0x2b8(0x08)
	struct UTextBlock* Text_ScoreNum; // 0x2c0(0x08)
	struct UWBP_SettleButton_C* WBP_ClanButton; // 0x2c8(0x08)
	struct UWBP_RichText_C* WBP_RichText; // 0x2d0(0x08)
	struct ANOS_PlayerBase* Ghost; // 0x2d8(0x08)
	struct TArray<struct UWBP_Talent_C*> Array; // 0x2e0(0x10)
	struct ANOS_PSArenaBase* CurPS; // 0x2f0(0x08)
	struct ANOS_CharacterModel* SelfCharacter; // 0x2f8(0x08)
	enum class E_UserType Type; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t RealID; // 0x304(0x04)

	void ShowGhost SerialNumberText(struct FText InText, enum class ESlateVisibility InVisibility); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.ShowGhost SerialNumberText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCarry(); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.SetCarry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetScore(); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.SetScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostHeadAndNameAndRePort(); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.SetGhostHeadAndNameAndRePort // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBaseInfo(); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.SetBaseInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReportingInfo(struct FText PlayerName, struct FText CharacterName, int32_t TargetUID, int32_t SelfUID); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.ReportingInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetCharacterName(struct FText Name); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.GetCharacterName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RD_GhostRecordInfo(int32_t EntryPoint); // Function WBP_PC_RD_GhostRecordInfo.WBP_PC_RD_GhostRecordInfo_C.ExecuteUbergraph_WBP_PC_RD_GhostRecordInfo // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

