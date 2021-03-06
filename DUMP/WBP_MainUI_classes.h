// WidgetBlueprintGeneratedClass WBP_MainUI.WBP_MainUI_C
// Size: 0x598 (Inherited: 0x260)
struct UWBP_MainUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UWidgetAnimation* PickUpElement_F3; // 0x270(0x08)
	struct UWidgetAnimation* PickUpElement_F2; // 0x278(0x08)
	struct UWidgetAnimation* PickUpElement_F1; // 0x280(0x08)
	struct UWidgetAnimation* HintAnimation; // 0x288(0x08)
	struct UWidgetAnimation* HPWinkeAnimation; // 0x290(0x08)
	struct UBorder* Border_CompassBase; // 0x298(0x08)
	struct UBorder* Border_Compassvfx; // 0x2a0(0x08)
	struct UBorder* Border_FlashLightBase; // 0x2a8(0x08)
	struct UBorder* Border_FlashLightVFX; // 0x2b0(0x08)
	struct UBorder* Border_HPWinkle; // 0x2b8(0x08)
	struct UBorder* Border_Root; // 0x2c0(0x08)
	struct UBorder* Border_SpeakUI; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_Root; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_Root2; // 0x2d8(0x08)
	struct UTextBlock* FlashLightText; // 0x2e0(0x08)
	struct UTextBlock* GkdID; // 0x2e8(0x08)
	struct UTextBlock* HintText; // 0x2f0(0x08)
	struct UHorizontalBox* HorizontalBox_76; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBox__AllElementItem; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBox_Buff; // 0x308(0x08)
	struct UHorizontalBox*  orizontalBox_  ; // 0x310(0x08)
	struct UImage* Image_74; // 0x318(0x08)
	struct UImage* Image_Compass; // 0x320(0x08)
	struct UImage* Image_FlashLight; // 0x328(0x08)
	struct UImage* Img_FrontSight; // 0x330(0x08)
	struct UHorizontalBox* LangRenShaPanel; // 0x338(0x08)
	struct UTextBlock* MagicItemText; // 0x340(0x08)
	struct UOverlay* Overlay_CompassBase; // 0x348(0x08)
	struct UOverlay* Overlay_FlashLightBase; // 0x350(0x08)
	struct UProgressBar* ProgressBar_FaBao; // 0x358(0x08)
	struct UProgressBar* ProgressBar_HP; // 0x360(0x08)
	struct UProgressBar* ProgressBar_PhysicalPower; // 0x368(0x08)
	struct UProgressBar* ProgressBar_Virtual; // 0x370(0x08)
	struct UProgressBar* ProgressBar_VirtualPhysicalPower; // 0x378(0x08)
	struct UOverlay* ScrollBox_Fraction; // 0x380(0x08)
	struct UTextBlock* TextBlock_SuXing; // 0x388(0x08)
	struct UTextBlock* Versions; // 0x390(0x08)
	struct UVerticalBox* Vertical_Soul; // 0x398(0x08)
	struct UVerticalBox* VerticalBox_Human; // 0x3a0(0x08)
	struct UWBP_ArrayEye_C* WBP_ArrayEye; // 0x3a8(0x08)
	struct UWBP_CountDown_C* WBP_CountDown; // 0x3b0(0x08)
	struct UWBP_ElementItem_C* WBP_ElementItem_2; // 0x3b8(0x08)
	struct UWBP_ElementItem_C* WBP_ElementItem_3; // 0x3c0(0x08)
	struct UWBP_ElementItem_C* WBP_ElementItem_82; // 0x3c8(0x08)
	struct UWBP_InputBox_C* WBP_InputBox; // 0x3d0(0x08)
	struct UWBP_LangRenShaHumans_C* WBP_LangRenShaHumans; // 0x3d8(0x08)
	struct UWBP_LittleMap_Main_C* WBP_LittleMap_Main; // 0x3e0(0x08)
	struct UWBP_Vote_C* WBP_NightSkill; // 0x3e8(0x08)
	struct UWBP_PrimaryStar_C* WBP_PrimaryStar; // 0x3f0(0x08)
	struct UWBP_TablentDes_C* WBP_TablentDes; // 0x3f8(0x08)
	struct UWBP_VoiceIcon_C* WBP_VoiceIcon; // 0x400(0x08)
	struct UWBP_VoiceSwitch_C* WBP_VoiceSwitch_48; // 0x408(0x08)
	struct UWBP_Vote_C* WBP_Vote; // 0x410(0x08)
	struct UWBP_Vote_C* WBP_WolfManSkill; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_GameType; // 0x420(0x08)
	struct UTextBlock* XiaoPiTiShi; // 0x428(0x08)
	struct ANOS_PlayerHuman* PlayerHuman; // 0x430(0x08)
	struct FMulticastInlineDelegate SetSoul; // 0x438(0x10)
	struct TArray<int32_t> NoContains; // 0x448(0x10)
	struct FMulticastInlineDelegate Set Is Show Visual Effect; // 0x458(0x10)
	struct TMap<enum class ENOSElementSlotType, struct UTexture2D*> ElementSlotNameMap; // 0x468(0x50)
	struct TArray<struct UWBP_HumanState_C*> AllHumanStateUI; // 0x4b8(0x10)
	int32_t CharacterID; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UBP_UIControlComponent_C* UIControl; // 0x4d0(0x08)
	struct TArray<struct FText> Tips; // 0x4d8(0x10)
	struct TArray<int32_t> SaveSoul; // 0x4e8(0x10)
	struct UKxInventoryComponent* InventoryComponent; // 0x4f8(0x08)
	bool IsCreateBuffWidget; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct FTimerHandle Hanlde; // 0x508(0x08)
	struct FMulticastInlineDelegate AddBuff; // 0x510(0x10)
	struct FMulticastInlineDelegate RemoveBuff; // 0x520(0x10)
	float MagicItemJsonDurablility; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct TArray<bool> ElementSlotIsValid; // 0x538(0x10)
	struct TArray<bool> EQSlotIsValid; // 0x548(0x10)
	struct UNOS_AsyncTaskAttributeChanged* GATask; // 0x558(0x08)
	struct UNOS_AsyncTaskCooldownChanged* CDTask; // 0x560(0x08)
	struct UNOS_AsyncTaskEffectStackChanged* GETask; // 0x568(0x08)
	float SubductionX; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UWBP_EndSpeech_C* Speech; // 0x578(0x08)
	bool bNotRefresh; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct ABP_PlayerHumanBase_C* As BP Player Human Base; // 0x588(0x08)
	struct UKxInventoryObject* ActivationItem; // 0x590(0x08)

	void GEAddBuff(int32_t BuffID, float Duration); // Function WBP_MainUI.WBP_MainUI_C.GEAddBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Buff IDWidget(); // Function WBP_MainUI.WBP_MainUI_C.Set Buff IDWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearBuff(); // Function WBP_MainUI.WBP_MainUI_C.ClearBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowBianShenUI(bool IsShow); // Function WBP_MainUI.WBP_MainUI_C.ShowBianShenUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Rearrangement(); // Function WBP_MainUI.WBP_MainUI_C.Rearrangement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateSpeakUI(); // Function WBP_MainUI.WBP_MainUI_C.UpdateSpeakUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetReconnectionAttributes(); // Function WBP_MainUI.WBP_MainUI_C.SetReconnectionAttributes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMaxPowerBySkill(); // Function WBP_MainUI.WBP_MainUI_C.SetMaxPowerBySkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPowerFloatFromAbility(float Value); // Function WBP_MainUI.WBP_MainUI_C.SetPowerFloatFromAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHealthFloatFromAbility(float Value); // Function WBP_MainUI.WBP_MainUI_C.SetHealthFloatFromAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowWolfManSkill(bool Is, float CDTime, float CurTime); // Function WBP_MainUI.WBP_MainUI_C.ShowWolfManSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reset CD(); // Function WBP_MainUI.WBP_MainUI_C.Reset CD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Add Slot(); // Function WBP_MainUI.WBP_MainUI_C.Add Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoPiTiShiText(enum class ESlateVisibility InVisibility, struct FText InText); // Function WBP_MainUI.WBP_MainUI_C.XiaoPiTiShiText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Remakes State(struct ANOS_PlayerHuman* InputPin); // Function WBP_MainUI.WBP_MainUI_C.Remakes State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSpectatorHPAndPower(struct ANOS_PlayerBase* Target); // Function WBP_MainUI.WBP_MainUI_C.SetSpectatorHPAndPower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Clear the Grid(int32_t TargetIndex); // Function WBP_MainUI.WBP_MainUI_C.Clear the Grid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindAllEvent(struct ANOS_PlayerHuman* NewPlayer); // Function WBP_MainUI.WBP_MainUI_C.BindAllEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanDieSpectators(); // Function WBP_MainUI.WBP_MainUI_C.HumanDieSpectators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ElementChange(struct TArray<struct UKxInventoryObject*> Array); // Function WBP_MainUI.WBP_MainUI_C.ElementChange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ItemsVFX(bool Condition); // Function WBP_MainUI.WBP_MainUI_C.ItemsVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeMagicItem(struct FEventRelevantData A); // Function WBP_MainUI.WBP_MainUI_C.ChangeMagicItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Game Slef News Info(int32_t Index, bool ScreeORSoul, bool RecoverORLose); // Function WBP_MainUI.WBP_MainUI_C.Game Slef News Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddEventMgrInform(); // Function WBP_MainUI.WBP_MainUI_C.AddEventMgrInform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ItemS(int32_t B); // Function WBP_MainUI.WBP_MainUI_C.ItemS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Equipment(Flash Light)(struct FEventRelevantData RelevantData); // Function WBP_MainUI.WBP_MainUI_C.Equipment(Flash Light) // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ElmentChangeBorderImage(int32_t Location); // Function WBP_MainUI.WBP_MainUI_C.ElmentChangeBorderImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Restore Nonactivated State(int32_t Switch); // Function WBP_MainUI.WBP_MainUI_C.Restore Nonactivated State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reset Front Sight(); // Function WBP_MainUI.WBP_MainUI_C.Reset Front Sight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Func_SetScreenCenterPointVisibility(bool Hide); // Function WBP_MainUI.WBP_MainUI_C.Func_SetScreenCenterPointVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBrushTintColor(bool IsContains, int32_t ChildAt); // Function WBP_MainUI.WBP_MainUI_C.SetBrushTintColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectTimeChange_2C2299174B0D119A71B589AA77F8202D(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_MainUI.WBP_MainUI_C.OnGameplayEffectTimeChange_2C2299174B0D119A71B589AA77F8202D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectStackChange_2C2299174B0D119A71B589AA77F8202D(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_MainUI.WBP_MainUI_C.OnGameplayEffectStackChange_2C2299174B0D119A71B589AA77F8202D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameplayEffectAddOrRemove_2C2299174B0D119A71B589AA77F8202D(int32_t BuffID, struct FActiveGameplayEffectHandle Handle, int32_t NewStackCount, int32_t OldStackCount, float Duration); // Function WBP_MainUI.WBP_MainUI_C.OnGameplayEffectAddOrRemove_2C2299174B0D119A71B589AA77F8202D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAttributeChanged_8DB9048C43B329BEF292CA9991A230C7(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // Function WBP_MainUI.WBP_MainUI_C.OnAttributeChanged_8DB9048C43B329BEF292CA9991A230C7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCooldownEnd_5261407C48F8C71C2487B684E8CA00EB(struct FGameplayTag CooldownTag, float TimeRemaining, float Duration); // Function WBP_MainUI.WBP_MainUI_C.OnCooldownEnd_5261407C48F8C71C2487B684E8CA00EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCooldownBegin_5261407C48F8C71C2487B684E8CA00EB(struct FGameplayTag CooldownTag, float TimeRemaining, float Duration); // Function WBP_MainUI.WBP_MainUI_C.OnCooldownBegin_5261407C48F8C71C2487B684E8CA00EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_MainUI.WBP_MainUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_MainUI.WBP_MainUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MainUI.WBP_MainUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitialHumanUI(); // Function WBP_MainUI.WBP_MainUI_C.InitialHumanUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destruct(); // Function WBP_MainUI.WBP_MainUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HpAndStaminaBindUpdate(); // Function WBP_MainUI.WBP_MainUI_C.HpAndStaminaBindUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SkillCD(); // Function WBP_MainUI.WBP_MainUI_C.SkillCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Anim(); // Function WBP_MainUI.WBP_MainUI_C.Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Hidden(); // Function WBP_MainUI.WBP_MainUI_C.Hidden // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateSpeakUI(); // Function WBP_MainUI.WBP_MainUI_C.CreateSpeakUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void State(enum class EHealthState OnHealthState); // Function WBP_MainUI.WBP_MainUI_C.State // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestryctTask(); // Function WBP_MainUI.WBP_MainUI_C.DestryctTask // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AllHumans(); // Function WBP_MainUI.WBP_MainUI_C.AllHumans // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemakesEffectStack(); // Function WBP_MainUI.WBP_MainUI_C.RemakesEffectStack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGreenMode(bool IsOpenGreenMode); // Function WBP_MainUI.WBP_MainUI_C.SetGreenMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterTypeChange_Event_1(enum class ECharacterCategory CharacterType); // Function WBP_MainUI.WBP_MainUI_C.OnCharacterTypeChange_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Uptate(struct TArray<struct ANOS_PlayerHuman*> AllHuman); // Function WBP_MainUI.WBP_MainUI_C.Uptate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSoulIndex(struct TArray<int32_t> AllSoulArray); // Function WBP_MainUI.WBP_MainUI_C.SetSoulIndex // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Activation(struct UKxInventoryObject* ActivationItem, bool IsActivation); // Function WBP_MainUI.WBP_MainUI_C.Activation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HighlightProp(struct UKxInventoryObject* HighlightTarget); // Function WBP_MainUI.WBP_MainUI_C.HighlightProp // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UseHandLight(bool IsOn); // Function WBP_MainUI.WBP_MainUI_C.UseHandLight // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MagicItem(struct FKxItemData DataInfo); // Function WBP_MainUI.WBP_MainUI_C.MagicItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReadEquipment(struct FName RowName, struct UKxInventoryObject* EquipmentItem); // Function WBP_MainUI.WBP_MainUI_C.ReadEquipment // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AllEquipmentItem(struct UKxInventoryObject* EquipmentItem); // Function WBP_MainUI.WBP_MainUI_C.AllEquipmentItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnElementItemUpdate(struct TArray<struct UKxInventoryObject*> ElementItem); // Function WBP_MainUI.WBP_MainUI_C.OnElementItemUpdate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindOnItemUpdate(struct TArray<struct UKxInventoryObject*> ItemS); // Function WBP_MainUI.WBP_MainUI_C.BindOnItemUpdate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnItemActiveOrDeactiveEvent_2(struct FEventRelevantData EventRelevantData); // Function WBP_MainUI.WBP_MainUI_C.OnItemActiveOrDeactiveEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisplayHumanMainSkill(); // Function WBP_MainUI.WBP_MainUI_C.DisplayHumanMainSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void For(); // Function WBP_MainUI.WBP_MainUI_C.For // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearSkillCD(bool VFX); // Function WBP_MainUI.WBP_MainUI_C.ClearSkillCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TipsStartNightSkill(struct FEventRelevantData RelevantData); // Function WBP_MainUI.WBP_MainUI_C.TipsStartNightSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddProgressUI(struct FEventRelevantData Data); // Function WBP_MainUI.WBP_MainUI_C.AddProgressUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetThisHumanType(struct FEventRelevantData EventRelevantData); // Function WBP_MainUI.WBP_MainUI_C.GetThisHumanType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShuXing(struct FString ChangedLanguage); // Function WBP_MainUI.WBP_MainUI_C.ShuXing // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoneyFromDove(struct FEventRelevantData Data); // Function WBP_MainUI.WBP_MainUI_C.MoneyFromDove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayItemFullAnim(struct FEventRelevantData EventRelevantData); // Function WBP_MainUI.WBP_MainUI_C.PlayItemFullAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayBeAttackedAnim(struct FEventRelevantData EventRelevantData); // Function WBP_MainUI.WBP_MainUI_C.PlayBeAttackedAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_MainUI(int32_t EntryPoint); // Function WBP_MainUI.WBP_MainUI_C.ExecuteUbergraph_WBP_MainUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void RemoveBuff__DelegateSignature(int32_t ID); // Function WBP_MainUI.WBP_MainUI_C.RemoveBuff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddBuff__DelegateSignature(struct FText Name, struct FText des, struct TSoftObjectPtr<struct UTexture2D> Texture, int32_t ID, float CD); // Function WBP_MainUI.WBP_MainUI_C.AddBuff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Is Show Visual Effect__DelegateSignature(bool ReturnBool, int32_t SoulNumber); // Function WBP_MainUI.WBP_MainUI_C.Set Is Show Visual Effect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSoul__DelegateSignature(bool Alter , int32_t AlterValue); // Function WBP_MainUI.WBP_MainUI_C.SetSoul__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

