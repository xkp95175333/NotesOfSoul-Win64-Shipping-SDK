// WidgetBlueprintGeneratedClass WBP_ViewSettingBoard.WBP_ViewSettingBoard_C
// Size: 0x384 (Inherited: 0x260)
struct UWBP_ViewSettingBoard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_OneSetting_C* AO; // 0x268(0x08)
	struct UWBP_OneSetting_C* ChuiZhiTongBu; // 0x270(0x08)
	struct UWBP_SeletNum_C* Contrast; // 0x278(0x08)
	struct UWBP_SeletNum_C* DLSS; // 0x280(0x08)
	struct UWBP_OneSetting_C* DynamicResolution; // 0x288(0x08)
	struct UWBP_OneSetting_C* EdgeSharpening; // 0x290(0x08)
	struct UWBP_SeletNum_C* FullScreen; // 0x298(0x08)
	struct UWBP_OneSetting_C* GamaCHange; // 0x2a0(0x08)
	struct UWBP_OneSetting_C* HairSet; // 0x2a8(0x08)
	struct UWBP_SeletNum_C* HuamianQingXi; // 0x2b0(0x08)
	struct UWBP_SeletNum_C* KangJuChi; // 0x2b8(0x08)
	struct UOverlay* Overlay; // 0x2c0(0x08)
	struct UOverlay* Overlay_2; // 0x2c8(0x08)
	struct UOverlay* Overlay_198; // 0x2d0(0x08)
	struct UProgressBar* ProgressBar_297; // 0x2d8(0x08)
	struct UWBP_OneSetting_C* RayTrace_2; // 0x2e0(0x08)
	struct UWBP_SeletNum_C* ScreenResolution; // 0x2e8(0x08)
	struct UWBP_SeletNum_C* ShadowSetting; // 0x2f0(0x08)
	struct USlider* Slider_30; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_83; // 0x300(0x08)
	struct UTextBlock* TextBlock_106; // 0x308(0x08)
	struct UWBP_SeletNum_C* TextureSetting; // 0x310(0x08)
	struct UWBP_SeletNum_C* ViewModeZhiLiang; // 0x318(0x08)
	struct UWBP_SeletNum_C* VisualEffect; // 0x320(0x08)
	bool Isdead; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FNOS_UserSettings_View New_ViewSetting; // 0x32c(0x3c)
	bool IsInGame; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct TArray<struct FText> CombBoxTextArray; // 0x370(0x10)
	int32_t SpecialResulotionIndex; // 0x380(0x04)

	void AddResolutionToSelet(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.AddResolutionToSelet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool IsSupportRayTrace(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.IsSupportRayTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	float GetPercent_1(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FLinearColor GetFillColorAndOpacity_1(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.GetFillColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void MontionBlur(bool Bool); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.MontionBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddOption(struct UWBP_SeletNum_C* self2, int32_t LastIndex, int32_t Index); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FText GetText_1(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetExposure(float Value); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.SetExposure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenRayTrace(bool IsOpen); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.IsOpenRayTrace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenAOMode(bool IsOpen); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.IsOpenAOMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenEdgSharpen(bool IsOpen); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.IsOpenEdgSharpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenDLSS(int32_t DLSSIndex); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.OpenDLSS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsOpenHairMode(bool IsOpen); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.IsOpenHairMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurrentViewBoardInfo(struct FNOS_UserSettings_View Infor); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.GetCurrentViewBoardInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void EnableSetting(bool bInIsEnabled); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.EnableSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeGama(float IsOpen); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.ChangeGama // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetViewQuality(int32_t Value); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.SetViewQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Apply View Settings(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.Apply View Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBoard(struct FNOS_UserSettings_View Info); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.UpdateBoard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	int32_t GetResolutionIndex(struct FIntPoint ItemToFind); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.GetResolutionIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnSeletChange(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.OnSeletChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveSettingToDefaul(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.RemoveSettingToDefaul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplySetting(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.ApplySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateLanguageText(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.UpdateLanguageText // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateboardFromOwnData(); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.UpdateboardFromOwnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ViewSettingBoard(int32_t EntryPoint); // Function WBP_ViewSettingBoard.WBP_ViewSettingBoard_C.ExecuteUbergraph_WBP_ViewSettingBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

