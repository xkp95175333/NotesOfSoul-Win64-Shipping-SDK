// WidgetBlueprintGeneratedClass WBP_GhostMainUI.WBP_GhostMainUI_C
// Size: 0x44c (Inherited: 0x260)
struct UWBP_GhostMainUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UWidgetAnimation* GetSkill; // 0x270(0x08)
	struct UWidgetAnimation* ShowSkillFire; // 0x278(0x08)
	struct UWidgetAnimation* GetSoul; // 0x280(0x08)
	struct UWidgetAnimation* ShowSoulFire; // 0x288(0x08)
	struct UWidgetAnimation* HintAnimation; // 0x290(0x08)
	struct UOverlay* Fraction; // 0x298(0x08)
	struct UTextBlock* GkdID; // 0x2a0(0x08)
	struct UTextBlock* HintText; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox_Buff; // 0x2b0(0x08)
	struct UImage* Image_74; // 0x2b8(0x08)
	struct UImage* Image_143; // 0x2c0(0x08)
	struct UImage* Image_213; // 0x2c8(0x08)
	struct UImage* Image_307; // 0x2d0(0x08)
	struct UHorizontalBox* LangRenShaPanel; // 0x2d8(0x08)
	struct UOverlay* Overlay_SkillNumber; // 0x2e0(0x08)
	struct UOverlay* Overlay_SoulNumber; // 0x2e8(0x08)
	struct URichTextBlock* RichTextBlock_90; // 0x2f0(0x08)
	struct UBorder* SoulFire; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_outLine; // 0x300(0x08)
	struct UTextBlock* TextBlock_SkillNumber; // 0x308(0x08)
	struct UTextBlock* TextBlock_SoulNumber; // 0x310(0x08)
	struct UTextBlock* Versions; // 0x318(0x08)
	struct UVerticalBox* VerticalBox_HumanState; // 0x320(0x08)
	struct UWBP_ArrayEye_C* WBP_ArrayEye; // 0x328(0x08)
	struct UWBP_CountDown_C* WBP_CountDown_3; // 0x330(0x08)
	struct UWBP_GhostSkill_C* WBP_GhostSkill_Q; // 0x338(0x08)
	struct UWBP_GhostSkill_C* WBP_GhostSkill_Skill1; // 0x340(0x08)
	struct UWBP_GhostSkill_C* WBP_GhostSkill_Skill2; // 0x348(0x08)
	struct UWBP_GhostSkill_C* WBP_GhostSkill_Skill3; // 0x350(0x08)
	struct UWBP_GhostSkill_C* WBP_GhostSkill_SpecialFun; // 0x358(0x08)
	struct UWBP_InputBox_C* WBP_InputBox; // 0x360(0x08)
	struct UWBP_LangRenShaHumans_C* WBP_LangRenShaHumans; // 0x368(0x08)
	struct UWBP_LittleMap_Main_C* WBP_LittleMap_Main; // 0x370(0x08)
	struct UWBP_Vote_C* WBP_NightSkill; // 0x378(0x08)
	struct UWBP_TablentDes_C* WBP_TablentDes; // 0x380(0x08)
	struct UWBP_VoiceIcon_C* WBP_VoiceIcon; // 0x388(0x08)
	struct UWBP_VoiceSwitch_C* WBP_VoiceSwitch; // 0x390(0x08)
	struct UWBP_Vote_C* WBP_WolfManSkill; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_GameType; // 0x3a0(0x08)
	struct UWBP_HumanState_C* HumanState; // 0x3a8(0x08)
	int32_t ShowNumber; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct ANOS_PlayerGhost* GhostPlayer; // 0x3b8(0x08)
	int32_t CharacterID; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UWBP_GhostSkill_C* WBP_GhostSkill; // 0x3c8(0x08)
	struct UBP_UIControlComponent_C* UIControl; // 0x3d0(0x08)
	struct FTimerHandle CheckGetAllPlayerHuman; // 0x3d8(0x08)
	struct TArray<struct ANOS_PlayerHuman*> AllHuman; // 0x3e0(0x10)
	struct TArray<struct UWBP_GhostSkill_C*> Skills; // 0x3f0(0x10)
	bool IsCreateBuffWidget; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FTimerHandle HandleIsValid; // 0x408(0x08)
	struct FMulticastInlineDelegate AddBuff; // 0x410(0x10)
	struct FMulticastInlineDelegate RemoveBuff; // 0x420(0x10)
	struct UNOS_AsyncTaskAttributeChanged* GATask; // 0x430(0x08)
	struct UNOS_AsyncTaskEffectStackChanged* GETask; // 0x438(0x08)
	struct UNOS_AsyncTaskCooldownChanged* GCTask; // 0x440(0x08)
	int32_t GetVisibilityNumber; // 0x448(0x04)

	void RefreshCurState(struct ANOS_PlayerGhost* PlayerGhost); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.RefreshCurState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowWarningText(struct FText InText); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.ShowWarningText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowLangRenShaSkills(bool Condition); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.ShowLangRenShaSkills // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisableSkills(enum class EDisableSkillsType DisableType, bool IsEnabled); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.DisableSkills // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetUltimateSkillCost(float Cost); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.GetUltimateSkillCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetFloatFromAbility(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.GetFloatFromAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetStopSkillAnim(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.SetStopSkillAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StratCDByIndex(int32_t Index, struct FGameplayTag GaneplayTag); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.StratCDByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reset CD(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Reset CD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSkillsVFX(int32_t Index, bool IsShow); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.SetSkillsVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddSoulPoint(float A, float OldSoul, bool SkillOrSoul); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.AddSoulPoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpSkill(float A); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.UpSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanGhostSkillUltimate(bool Is Granted); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.CanGhostSkillUltimate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetCurHumanTypeText(struct FString HumanType, struct FString Type); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.GetCurHumanTypeText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GhostSkillUP(struct FEventRelevantData EventRelevantData); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.GhostSkillUP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTimeRemaining(struct UWBP_GhostSkill_C* Who, bool bCur, float FCDTime, float InFloat); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.SetTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGhostUIHint(struct FEventRelevantData EventRelevantData); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.PlayGhostUIHint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlaySkillUnlockAnim(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.PlaySkillUnlockAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostSkill(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.SetGhostSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCooldownEnd_C598606747DB16A76B59DFB1A700E661(struct FGameplayTag CooldownTag, float TimeRemaining, float Duration); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnCooldownEnd_C598606747DB16A76B59DFB1A700E661 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCooldownBegin_C598606747DB16A76B59DFB1A700E661(struct FGameplayTag CooldownTag, float TimeRemaining, float Duration); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnCooldownBegin_C598606747DB16A76B59DFB1A700E661 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectTimeChange_A5E7CAEE4DB25ABCBE19E995D4C5BC78(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnGameplayEffectTimeChange_A5E7CAEE4DB25ABCBE19E995D4C5BC78 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectStackChange_A5E7CAEE4DB25ABCBE19E995D4C5BC78(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnGameplayEffectStackChange_A5E7CAEE4DB25ABCBE19E995D4C5BC78 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectAddOrRemove_A5E7CAEE4DB25ABCBE19E995D4C5BC78(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnGameplayEffectAddOrRemove_A5E7CAEE4DB25ABCBE19E995D4C5BC78 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAttributeChanged_0D86AF2146BC20C12E63218BFBDB11CD(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnAttributeChanged_0D86AF2146BC20C12E63218BFBDB11CD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnOutLine(bool IsOutLine); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnOutLine // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CDTime(float CDTime); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.CDTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destruct(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitialGhostUI(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.InitialGhostUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Anim(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_IsShowLangRenShaPanel(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_IsShowLangRenShaPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_GuiWuCD(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_GuiWuCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGreenMode(bool IsOpenGreenMode); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.SetGreenMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_ChiHumanType(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_ChiHumanType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCurHumanTypeUpdate_Event_1(enum class EHumanType CurType); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.OnCurHumanTypeUpdate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_UptatePawn(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_UptatePawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Rearrangement(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Rearrangement // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Uptate(struct TArray<struct ANOS_PlayerHuman*> AllHuman); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.Uptate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_CooldownChange(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_CooldownChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_EffectStackChange(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_EffectStackChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_AttributesChange(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_AttributesChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void R_Skills(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.R_Skills // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsVaild(); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.IsVaild // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_GhostMainUI(int32_t EntryPoint); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.ExecuteUbergraph_WBP_GhostMainUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void RemoveBuff__DelegateSignature(int32_t ID); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.RemoveBuff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddBuff__DelegateSignature(struct FText Name, struct FText des, struct TSoftObjectPtr<struct UTexture2D> Texture, int32_t ID); // Function WBP_GhostMainUI.WBP_GhostMainUI_C.AddBuff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

