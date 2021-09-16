// WidgetBlueprintGeneratedClass WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C
// Size: 0x519 (Inherited: 0x260)
struct UWBP_PracticeBroadcastPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpacityShow_CountdownUI_Reverse; // 0x268(0x08)
	struct UWidgetAnimation* OpacityShow_SystemUI_Reverse; // 0x270(0x08)
	struct UWidgetAnimation* OpacityShow_PlayerInteractUI_Reverse; // 0x278(0x08)
	struct UWidgetAnimation* Reconnect; // 0x280(0x08)
	struct UWidgetAnimation* Disconnect; // 0x288(0x08)
	struct UWidgetAnimation* GameEnd_Other; // 0x290(0x08)
	struct UWidgetAnimation* GameEnd_Fail; // 0x298(0x08)
	struct UWidgetAnimation* GameEnd_Somke; // 0x2a0(0x08)
	struct UWidgetAnimation* OpacityShow_CountdownUI; // 0x2a8(0x08)
	struct UWidgetAnimation* OpacityShow_SystemUI; // 0x2b0(0x08)
	struct UWidgetAnimation* OpacityShow_PlayerInteractUI; // 0x2b8(0x08)
	struct UWidgetAnimation* GameEnd_Cloud; // 0x2c0(0x08)
	struct UWidgetAnimation* GameFailAnim; // 0x2c8(0x08)
	struct UWidgetAnimation* GameVictoryAnim; // 0x2d0(0x08)
	struct UCanvasPanel* AOrBInfoPanel; // 0x2d8(0x08)
	struct UTextBlock* AOrBInfoPanel_PlayerID; // 0x2e0(0x08)
	struct UImage* AOrBInfoPanel_PlayerImage; // 0x2e8(0x08)
	struct UTextBlock* AOrBInfoPanel_Text; // 0x2f0(0x08)
	struct UCanvasPanel* AToBInfoPanel; // 0x2f8(0x08)
	struct UTextBlock* AToBInfoPanel_Player1ID; // 0x300(0x08)
	struct UImage* AToBInfoPanel_Player1Image; // 0x308(0x08)
	struct UTextBlock* AToBInfoPanel_Player2ID; // 0x310(0x08)
	struct UImage* AToBInfoPanel_Player2Image; // 0x318(0x08)
	struct UTextBlock* AToBInfoPanel_Text; // 0x320(0x08)
	struct UImage* BaGuaImage; // 0x328(0x08)
	struct UProgressBar* BeKillLeft; // 0x330(0x08)
	struct UProgressBar* BeKillRight; // 0x338(0x08)
	struct UImage* BlackLight1; // 0x340(0x08)
	struct UImage* BlackLight2; // 0x348(0x08)
	struct UImage* CompleteESImage; // 0x350(0x08)
	struct UCanvasPanel* CompleteRepairPanel; // 0x358(0x08)
	struct UTextBlock* CompleteRepairPanel_ESTypeText; // 0x360(0x08)
	struct UBorder* Countdown; // 0x368(0x08)
	struct UTextBlock* Countdown_Time; // 0x370(0x08)
	struct UTextBlock* Countdown_Time_2; // 0x378(0x08)
	struct UImage* CountDownImage; // 0x380(0x08)
	struct UImage* DisconnectLeft; // 0x388(0x08)
	struct UImage* DisconnectRight; // 0x390(0x08)
	struct UImage* FailBG; // 0x398(0x08)
	struct UCanvasPanel* FailCenterPanel; // 0x3a0(0x08)
	struct UImage* FailSmoke; // 0x3a8(0x08)
	struct UProgressBar* KnockDownImage; // 0x3b0(0x08)
	struct UImage* MImage_Down; // 0x3b8(0x08)
	struct UImage* MImage_L; // 0x3c0(0x08)
	struct UImage* MImage_R; // 0x3c8(0x08)
	struct UImage* MImage_Up; // 0x3d0(0x08)
	struct UBorder* PlayerInteract; // 0x3d8(0x08)
	struct UCanvasPanel* PlayerStatePanel; // 0x3e0(0x08)
	struct UTextBlock* PlayerStatePanel_PlayerID; // 0x3e8(0x08)
	struct UImage* PlayerStatePanel_PlayerImage; // 0x3f0(0x08)
	struct UTextBlock* PlayerStatePanel_Text; // 0x3f8(0x08)
	struct UImage* PullManInside; // 0x400(0x08)
	struct UImage* PullManMain; // 0x408(0x08)
	struct UImage* ReconnectLeft; // 0x410(0x08)
	struct UImage* ReconnectRight; // 0x418(0x08)
	struct UImage* RepairESImage; // 0x420(0x08)
	struct UCanvasPanel* RepairESInfoPanel; // 0x428(0x08)
	struct UTextBlock* RepairESInfoPanel_ESType; // 0x430(0x08)
	struct UTextBlock* RepairESInfoPanel_PlayerID; // 0x438(0x08)
	struct UImage* RepairESInfoPanel_PlayerImage; // 0x440(0x08)
	struct UBorder* System; // 0x448(0x08)
	struct UTextBlock* TextBroadcast_Text; // 0x450(0x08)
	struct UCanvasPanel* TextBroadcastPanel; // 0x458(0x08)
	struct UCanvasPanel* UnlockFinalSkillsPanel; // 0x460(0x08)
	struct UImage* WinBG; // 0x468(0x08)
	struct UCanvasPanel* WinCenterPanel; // 0x470(0x08)
	struct UCanvasPanel* WinOrFail; // 0x478(0x08)
	struct UImage* WinOrFailDark; // 0x480(0x08)
	struct UImage* WinOrFailImage; // 0x488(0x08)
	struct UImage* WinSmoke; // 0x490(0x08)
	float DisplayMinTime; // 0x498(0x04)
	float DisplayTime; // 0x49c(0x04)
	float CurTimer; // 0x4a0(0x04)
	float GameEndUITiem; // 0x4a4(0x04)
	bool IsPlay; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UWidgetAnimation* CurPlayingUIAnim; // 0x4b0(0x08)
	bool PlayModeIsForward; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct TArray<struct FEventRelevantData> BroadcastInfoArray; // 0x4c0(0x10)
	struct FEventRelevantData CurPlayingEventInfo; // 0x4d0(0x40)
	struct UNOS_EventManagerComponent* EventMgrCom; // 0x510(0x08)
	bool bFinished; // 0x518(0x01)

	float Get_KnockDownImage_Percent_1(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.Get_KnockDownImage_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EndUIAnimEnd(struct FEventRelevantData EventRelevantData); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.EndUIAnimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisplayTick(float Time); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.DisplayTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayUIAnim(enum class EEventType EventType); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayUIAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddPlayUIAnimList(struct FEventRelevantData EventRelevantData); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.AddPlayUIAnimList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SystemShow_Image_ID_IsQuit(bool IsQuit, struct UTexture2D* Image, struct FText ID); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SystemShow_Image_ID_IsQuit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SystemShow_TextBroadcast(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SystemShow_TextBroadcast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SystemShow_ESType_Text(enum class ENOSElementSlotType ESType); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SystemShow_ESType_Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayerInteract_Image_ID_ESType(struct UTexture2D* Texture, struct FText ID, enum class ENOSElementSlotType ESType); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayerInteract_Image_ID_ESType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayerInteract_Image_ID_Behaviour(bool IsGhost, struct UTexture2D* Image, struct FText ID, struct FText Behaviour); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayerInteract_Image_ID_Behaviour // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayerInteract_Image_ID_Behaviour_Image2_ID2(bool IsGhost, struct UTexture2D* Image, struct FText ID, struct UTexture2D* Image2, struct FText ID2, struct FText Behaviour); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayerInteract_Image_ID_Behaviour_Image2_ID2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlaySystemShowAnim(bool CompleteRepairIssVisible, bool PlayerStateIsVisible, bool BaGuaRefreshVisible); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlaySystemShowAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayCountDownTiemAnim(int32_t Minute); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayCountDownTiemAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayPlayerInteractAnim(bool IsGhost, bool AToBPanelIsVisible, bool AOrBPanelIsVisible, bool RepairESPanelIsVisible, bool UnlockSkillPanelIsVisible); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayPlayerInteractAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGameEndAnim(bool IsVictory); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PlayGameEndAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetElementSoltText(enum class ENOSElementSlotType ESType, struct UTextBlock* TextTarget); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SetElementSoltText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetBroadcastInfo_OnePlayerInfo(struct UTexture2D* Image, struct FText ID); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.GetBroadcastInfo_OnePlayerInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetEventMgr(struct UNOS_EventManagerComponent* EventMgr); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.GetEventMgr // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetBroadcastInfo_TwoPlayerInfo(struct UTexture2D* Image1, struct FText ID1, struct UTexture2D* Image2, struct FText ID2); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.GetBroadcastInfo_TwoPlayerInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetPanelIsVisible(bool CountdownPanel, bool PlayerInterractPanel, bool SystemPanel); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SetPanelIsVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QuitTheGame(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.QuitTheGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reconnection(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.Reconnection // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RepairElementSolt(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.RepairElementSolt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TextBroadcast(struct FText InText); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.TextBroadcast // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchTime(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.MatchTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Gamevictory(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.Gamevictory // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GameFail(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.GameFail // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LiftUp_Human(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.LiftUp_Human // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LiftUp_Ghost(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.LiftUp_Ghost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CompleteRepairElementSolt(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.CompleteRepairElementSolt // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UnlockFinalSkills(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.UnlockFinalSkills // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SeizeSoul(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.SeizeSoul // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void KnockDown(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.KnockDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpacityShowEnd(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.OpacityShowEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClundLoop(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.ClundLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GameEnd(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.GameEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InputInterface(struct FInputStruct InputKey); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.InputInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PracticeBroadcastPanel(int32_t EntryPoint); // Function WBP_PracticeBroadcastPanel.WBP_PracticeBroadcastPanel_C.ExecuteUbergraph_WBP_PracticeBroadcastPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

