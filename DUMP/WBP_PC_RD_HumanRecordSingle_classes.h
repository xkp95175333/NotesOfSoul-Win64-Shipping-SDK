// WidgetBlueprintGeneratedClass WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_PC_RD_HumanRecordSingle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_SettleButton_C* Button_Friend; // 0x268(0x08)
	struct UWBP_SettleButton_C* Button_Inform; // 0x270(0x08)
	struct UWBP_Talent_C* carry0; // 0x278(0x08)
	struct UWBP_Talent_C* carry1; // 0x280(0x08)
	struct USizeBox* HumanSerialNumberSizeBox; // 0x288(0x08)
	struct UTextBlock* HumanSerialNumberText; // 0x290(0x08)
	struct UImage* Image_PlayerImg; // 0x298(0x08)
	struct UWBP_Talent_C* Item0; // 0x2a0(0x08)
	struct UWBP_Talent_C* Item1; // 0x2a8(0x08)
	struct UTextBlock* Text_ElementSlotNum; // 0x2b0(0x08)
	struct UTextBlock* Text_PlayerName; // 0x2b8(0x08)
	struct UTextBlock* Text_ScoreNum; // 0x2c0(0x08)
	struct UWBP_SettleButton_C* WBP_ClanButton; // 0x2c8(0x08)
	struct UWBP_RichText_C* WBP_RichText; // 0x2d0(0x08)
	struct ANOS_PlayerHuman* Human; // 0x2d8(0x08)
	struct ANOS_PSArenaBase* CurPS; // 0x2e0(0x08)
	struct TArray<struct UWBP_Talent_C*> Item; // 0x2e8(0x10)
	struct ANOS_CharacterModel* SelfCharacter; // 0x2f8(0x08)
	struct TArray<struct UWBP_Talent_C*> Carry; // 0x300(0x10)
	enum class E_UserType Type; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t RealID; // 0x314(0x04)

	void Show Human SerialNumberText(struct FText InText, enum class ESlateVisibility InVisibility); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.Show Human SerialNumberText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetScore(); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.SetScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCarryAndItemInfo(); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.SetCarryAndItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanHeadAndNameAndRePort(); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.SetHumanHeadAndNameAndRePort // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBaseInfo(); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.SetBaseInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterName(struct FText Name); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.GetCharacterName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReportingInfo(struct FText PlayerName, struct FText CharacterName, int32_t TargetUID, int32_t SelfUID); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.ReportingInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_RD_HumanRecordSingle(int32_t EntryPoint); // Function WBP_PC_RD_HumanRecordSingle.WBP_PC_RD_HumanRecordSingle_C.ExecuteUbergraph_WBP_PC_RD_HumanRecordSingle // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

