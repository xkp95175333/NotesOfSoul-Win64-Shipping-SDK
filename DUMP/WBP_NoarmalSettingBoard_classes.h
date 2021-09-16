// WidgetBlueprintGeneratedClass WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C
// Size: 0x370 (Inherited: 0x260)
struct UWBP_NoarmalSettingBoard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_OneSetting_C* AutoApply; // 0x268(0x08)
	struct UWBP_OneSetting_C* AutoRecordingGame; // 0x270(0x08)
	struct UWBP_SeletNum_C* BodyColor; // 0x278(0x08)
	struct USlider* CameraSpeedSlider; // 0x280(0x08)
	struct UComboBoxText* ComboBoxText_192; // 0x288(0x08)
	struct UWBP_OneSetting_C* FramaRate; // 0x290(0x08)
	struct UWBP_OneSetting_C* GamePrompt; // 0x298(0x08)
	struct UScrollBox* GhostList; // 0x2a0(0x08)
	struct UWBP_OneSetting_C* GreenMode; // 0x2a8(0x08)
	struct UWBP_OneSetting_C* HighEnergy; // 0x2b0(0x08)
	struct UScrollBox* HumanList; // 0x2b8(0x08)
	struct UImage* Image_283; // 0x2c0(0x08)
	struct UImage* Image_404; // 0x2c8(0x08)
	struct UProgressBar* ProgressBar_297; // 0x2d0(0x08)
	struct UTextBlock* SpeedNum; // 0x2d8(0x08)
	struct UWBP_OneSetting_C* SwapLeftRight; // 0x2e0(0x08)
	struct UWBP_OneSetting_C* SwapUpDown; // 0x2e8(0x08)
	float CamaerMaxSpeed; // 0x2f0(0x04)
	bool IsInGame; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UDataTable* DT_LanguageList; // 0x2f8(0x08)
	struct FString Program Str; // 0x300(0x10)
	bool Isdead; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FNOS_UserSettings_Normal New_NormalSetting; // 0x318(0x28)
	struct UMaterialParameterCollection* GhostEffectParmeter; // 0x340(0x08)
	struct UWBP_SettingMain_C* Main; // 0x348(0x08)
	struct TArray<struct ANOS_PlayerBase*> AllPlayerPawn; // 0x350(0x10)
	struct TArray<struct ANOS_PlayerHuman*> Out Actors; // 0x360(0x10)

	void SetIsAutoApply(bool bIsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsAutoApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAutoRecordingGame (bool bOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsAutoRecordingGame  // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void IsGhost(struct AController* self2, bool IsGhost); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.IsGhost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetCameraSpeed(float IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetCameraSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenGreenMode(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenGreenMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenSwapLetfRight(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenSwapLetfRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenSwapUpDown(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenSwapUpDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenGamePrompt(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenGamePrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenFramaRate(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenFramaRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsOpenHiEnergy(bool IsOpen); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.SetIsOpenHiEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddGhost(struct FString Name, int32_t UID, struct ANOS_PlayerBase* Character); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.AddGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddHuman(struct FString Name, int32_t UID, struct ANOS_PlayerBase* Character); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.AddHuman // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplyNormalSettings(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.ApplyNormalSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurrentNormalBoardInfo(struct FNOS_UserSettings_Normal New_NormalSetting); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.GetCurrentNormalBoardInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void TickUpdate(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.TickUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateNormalBoard(bool IsInGame, struct FNOS_UserSettings_Normal SettingInfo); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.UpdateNormalBoard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText Get_SpeedNum_Text_1(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.Get_SpeedNum_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveSettingToDefaul(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.RemoveSettingToDefaul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplySetting(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.ApplySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ComboBoxText_191_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FText SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.BndEvt__ComboBoxText_191_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void UpdateboardFromOwnData(); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.UpdateboardFromOwnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameStateUpdated_Event_1(enum class EKxGameStateType CurType); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.OnGameStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_NoarmalSettingBoard(int32_t EntryPoint); // Function WBP_NoarmalSettingBoard.WBP_NoarmalSettingBoard_C.ExecuteUbergraph_WBP_NoarmalSettingBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

