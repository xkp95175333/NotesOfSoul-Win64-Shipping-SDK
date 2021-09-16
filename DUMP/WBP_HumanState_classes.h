// WidgetBlueprintGeneratedClass WBP_HumanState.WBP_HumanState_C
// Size: 0xb60 (Inherited: 0x260)
struct UWBP_HumanState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* TwinkleAnimation; // 0x268(0x08)
	struct UBackgroundBlur* BackgroundBlur_Mic; // 0x270(0x08)
	struct UBackgroundBlur* BackgroundBlur_ShuXing; // 0x278(0x08)
	struct UBorder* BG_AllSoul; // 0x280(0x08)
	struct UBorder* Border_HeadImage; // 0x288(0x08)
	struct UBorder* BorderBase; // 0x290(0x08)
	struct UBorder* BorderVoteNumber; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel_AllSoul; // 0x2a0(0x08)
	struct UImage* Death; // 0x2a8(0x08)
	struct UWidgetSwitcher* GameType; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox_Buff; // 0x2b8(0x08)
	struct UHorizontalBox* HorizontalBox_XiaoJingPoisonNum; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_4; // 0x2e0(0x08)
	struct UImage* Image_5; // 0x2e8(0x08)
	struct UImage* Image_6; // 0x2f0(0x08)
	struct UImage* Image_7; // 0x2f8(0x08)
	struct UImage* Image_1072; // 0x300(0x08)
	struct UImage* Image_SuXing; // 0x308(0x08)
	struct UButton* LangRenShaButton; // 0x310(0x08)
	struct UImage* Mic; // 0x318(0x08)
	struct UTextBlock* Name; // 0x320(0x08)
	struct UTextBlock* NumberText; // 0x328(0x08)
	struct UImage* offline; // 0x330(0x08)
	struct UImage* Select; // 0x338(0x08)
	struct UTextBlock* SpeakText; // 0x340(0x08)
	struct UBorder* SpeakVFX; // 0x348(0x08)
	struct UTextBlock* TextBlock_Index; // 0x350(0x08)
	struct TArray<int32_t> SoulArray; // 0x358(0x10)
	struct ANOS_PlayerHuman* NOS_PlayerHuman; // 0x368(0x08)
	struct TMap<enum class ENOSElementSlotType, struct UTexture2D*> ElementSlotTextureMap; // 0x370(0x50)
	struct UMaterialInstanceDynamic* Material; // 0x3c0(0x08)
	struct FTimerHandle Circulation; // 0x3c8(0x08)
	bool Is Show Voice; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FButtonStyle Clieked Style; // 0x3d8(0x278)
	struct FButtonStyle Hovered Style; // 0x650(0x278)
	struct FButtonStyle Normal Style; // 0x8c8(0x278)
	struct FMulticastInlineDelegate AlterVotePawn ; // 0xb40(0x10)
	struct FTimerHandle TimerHandle; // 0xb50(0x08)
	bool Hovered; // 0xb58(0x01)
	bool IsOK; // 0xb59(0x01)
	char pad_B5A[0x2]; // 0xb5a(0x02)
	float Speak Time; // 0xb5c(0x04)

	void CheckNeedMicStateUpdate(bool IsAllow); // Function WBP_HumanState.WBP_HumanState_C.CheckNeedMicStateUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetCurState(); // Function WBP_HumanState.WBP_HumanState_C.GetCurState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetShuXingDoOnce(struct ANOS_PlayerHuman* Target); // Function WBP_HumanState.WBP_HumanState_C.GetShuXingDoOnce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanState(enum class EHealthState HealthState); // Function WBP_HumanState.WBP_HumanState_C.SetHumanState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_702055284D1A66C02974739302789B0F(struct UObject* Loaded); // Function WBP_HumanState.WBP_HumanState_C.OnLoaded_702055284D1A66C02974739302789B0F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_HumanState.WBP_HumanState_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_HumanState.WBP_HumanState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void GetAllHumanState(struct ANOS_PlayerHuman* Human); // Function WBP_HumanState.WBP_HumanState_C.GetAllHumanState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanState(struct TArray<int32_t> AllSoulArray); // Function WBP_HumanState.WBP_HumanState_C.HumanState // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Type(enum class EPlayerOnlineState EPlayerOnlineStateType); // Function WBP_HumanState.WBP_HumanState_C.Type // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RankMode(enum class EKxGameType GameType); // Function WBP_HumanState.WBP_HumanState_C.RankMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSpeakerUpdated(struct TArray<struct FString> IDList); // Function WBP_HumanState.WBP_HumanState_C.OnSpeakerUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHeadAndNameVoice(bool IsShowVoice); // Function WBP_HumanState.WBP_HumanState_C.SetHeadAndNameVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOnlineState(); // Function WBP_HumanState.WBP_HumanState_C.SetOnlineState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBorderImage(); // Function WBP_HumanState.WBP_HumanState_C.SetBorderImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetWolfManBorder(); // Function WBP_HumanState.WBP_HumanState_C.SetWolfManBorder // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HumanState.WBP_HumanState_C.BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_HumanState.WBP_HumanState_C.BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_HumanState.WBP_HumanState_C.BndEvt__LangRenShaButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void SetDieOueState(); // Function WBP_HumanState.WBP_HumanState_C.SetDieOueState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOut(struct ANOS_PlayerHuman* NOS_PlayerHuman); // Function WBP_HumanState.WBP_HumanState_C.SetOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreationSpeakButton(); // Function WBP_HumanState.WBP_HumanState_C.CreationSpeakButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSelect(bool InBool); // Function WBP_HumanState.WBP_HumanState_C.SetSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVoteState(struct ANOS_PlayerHuman* NOS_PlayerHuman); // Function WBP_HumanState.WBP_HumanState_C.SetVoteState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCountDown(float Time); // Function WBP_HumanState.WBP_HumanState_C.SetCountDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Countdown(); // Function WBP_HumanState.WBP_HumanState_C.Countdown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ElementItem(struct TArray<struct UKxInventoryObject*> ElementItem); // Function WBP_HumanState.WBP_HumanState_C.ElementItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetThisAllElement(); // Function WBP_HumanState.WBP_HumanState_C.GetThisAllElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddKxBuff(struct FString BuffName, float BuffTotalTime); // Function WBP_HumanState.WBP_HumanState_C.OnAddKxBuff // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindAllPlayerBuff(); // Function WBP_HumanState.WBP_HumanState_C.BindAllPlayerBuff // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function WBP_HumanState.WBP_HumanState_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void State(enum class EHealthState OnHealthState); // Function WBP_HumanState.WBP_HumanState_C.State // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetHealthState(struct ANOS_PlayerHuman* AllHuman); // Function WBP_HumanState.WBP_HumanState_C.GetHealthState // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowSuXing(struct FEventRelevantData Data); // Function WBP_HumanState.WBP_HumanState_C.ShowSuXing // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HumanState(int32_t EntryPoint); // Function WBP_HumanState.WBP_HumanState_C.ExecuteUbergraph_WBP_HumanState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void AlterVotePawn __DelegateSignature(struct ANOS_PlayerHuman* Player, struct UWBP_HumanState_C* HumanState); // Function WBP_HumanState.WBP_HumanState_C.AlterVotePawn __DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

