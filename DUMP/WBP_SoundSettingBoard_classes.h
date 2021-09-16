// WidgetBlueprintGeneratedClass WBP_SoundSettingBoard.WBP_SoundSettingBoard_C
// Size: 0x2ec (Inherited: 0x260)
struct UWBP_SoundSettingBoard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Slider_C* BGM; // 0x268(0x08)
	struct UWBP_OneSetting_C* BGMSound; // 0x270(0x08)
	struct UWBP_Slider_C* CharacterVoice; // 0x278(0x08)
	struct UWBP_SeletNum_C* ConvasationMode; // 0x280(0x08)
	struct UWBP_Slider_C* HuanJingYing; // 0x288(0x08)
	struct UWBP_OneSetting_C* Macphone; // 0x290(0x08)
	struct UWBP_Slider_C* MacphoneSound; // 0x298(0x08)
	struct UWBP_Slider_C* MainSound; // 0x2a0(0x08)
	struct UWBP_Slider_C* PlayerSound; // 0x2a8(0x08)
	struct UWBP_Slider_C* UIYingXiao; // 0x2b0(0x08)
	struct UWBP_Slider_C* XiaoGuoYing; // 0x2b8(0x08)
	struct FNOS_UserSettings_Sound New_SoundSetting; // 0x2c0(0x2c)

	void SetSpeakerSoundVolume(int32_t Volume); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.SetSpeakerSoundVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetConvasationMode(int32_t Index); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.SetConvasationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenBGSound(bool IsOpen); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.IsOpenBGSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenMacphone(bool IsOpen, int32_t vol); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.IsOpenMacphone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveToDefault(struct FNOS_UserSettings_Sound NOS_Setting_SoundBoard); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.RemoveToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplySoundSetting(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.ApplySoundSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurrentSoundInfo(struct FNOS_UserSettings_Sound Infor); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.GetCurrentSoundInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void TickUpdate(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.TickUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSoundBoard(struct FNOS_UserSettings_Sound SettingsInfo); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.UpdateSoundBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplySetting(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.ApplySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveSettingToDefaul(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.RemoveSettingToDefaul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateboardFromOwnData(); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.UpdateboardFromOwnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SoundSettingBoard(int32_t EntryPoint); // Function WBP_SoundSettingBoard.WBP_SoundSettingBoard_C.ExecuteUbergraph_WBP_SoundSettingBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

