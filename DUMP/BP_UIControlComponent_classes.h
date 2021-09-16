// BlueprintGeneratedClass BP_UIControlComponent.BP_UIControlComponent_C
// Size: 0x191 (Inherited: 0xd0)
struct UBP_UIControlComponent_C : UNOS_UIControlComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct UWBP_BroadcastPanel_C* BroadcastUI; // 0xd8(0x08)
	struct UWBP_MainUI_C* HumanMainUI; // 0xe0(0x08)
	struct UWBP_GhostMainUI_C* GhostMainUI; // 0xe8(0x08)
	struct UWBP_InsideGameInfo_C* GhostInsideUI; // 0xf0(0x08)
	struct UWBP_HumanState_C* HumanStateUI; // 0xf8(0x08)
	struct UWBP_GameMap_C* GameMapUI; // 0x100(0x08)
	struct FTimerHandle TempEventHanle; // 0x108(0x08)
	struct UWBP_Loading_C* WaitPanel; // 0x110(0x08)
	bool IsRemoveWaitPanel; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct ANOS_PlayerBase* PlayerBase; // 0x120(0x08)
	struct FString Game Player Name; // 0x128(0x10)
	struct TMap<struct UUserWidget*, enum class EInputMode> WidgetData; // 0x138(0x50)
	struct UWBP_EndMainUI_C* EndMainUI; // 0x188(0x08)
	bool IsOpenMainUI; // 0x190(0x01)

	void ShowLittleMap(bool bShow); // Function BP_UIControlComponent.BP_UIControlComponent_C.ShowLittleMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowChatUI(); // Function BP_UIControlComponent.BP_UIControlComponent_C.ShowChatUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearChatFocus(); // Function BP_UIControlComponent.BP_UIControlComponent_C.ClearChatFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitGame(bool IsExit); // Function BP_UIControlComponent.BP_UIControlComponent_C.ExitGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CreateEndMainUI(); // Function BP_UIControlComponent.BP_UIControlComponent_C.CreateEndMainUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Chat Event(); // Function BP_UIControlComponent.BP_UIControlComponent_C.Chat Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakenMouse(); // Function BP_UIControlComponent.BP_UIControlComponent_C.AwakenMouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Clear All Widget Data(); // Function BP_UIControlComponent.BP_UIControlComponent_C.Clear All Widget Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WheelDown(); // Function BP_UIControlComponent.BP_UIControlComponent_C.WheelDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WheelUP(); // Function BP_UIControlComponent.BP_UIControlComponent_C.WheelUP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void F5Pressed(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.F5Pressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TabPressed(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.TabPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Floot(); // Function BP_UIControlComponent.BP_UIControlComponent_C.Init Floot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	int32_t ShowGhostSkillsVFX(int32_t Index, bool bIsShow, bool bReturnBool); // Function BP_UIControlComponent.BP_UIControlComponent_C.ShowGhostSkillsVFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Langren_SwitchUI(bool IsGhost); // Function BP_UIControlComponent.BP_UIControlComponent_C.Langren_SwitchUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Langren_CreateGhostUI(); // Function BP_UIControlComponent.BP_UIControlComponent_C.Langren_CreateGhostUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Widget Tier Data(struct UUserWidget* Widget, enum class EInputMode InputMode, bool CurNeedRemove); // Function BP_UIControlComponent.BP_UIControlComponent_C.Set Widget Tier Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Creat Prompt UI(int32_t KxTextFraction, struct FText Type); // Function BP_UIControlComponent.BP_UIControlComponent_C.Creat Prompt UI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInputByLast(); // Function BP_UIControlComponent.BP_UIControlComponent_C.SetInputByLast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRemoveUIByWidgetData(bool IsRrmove, struct UUserWidget* RemoveWidget); // Function BP_UIControlComponent.BP_UIControlComponent_C.SetRemoveUIByWidgetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetWidgetTier(struct UUserWidget* Widget, enum class EInputMode InputMode); // Function BP_UIControlComponent.BP_UIControlComponent_C.SetWidgetTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoPi_SwitchUI(bool bGhost); // Function BP_UIControlComponent.BP_UIControlComponent_C.XiaoPi_SwitchUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void XiaoPi_CreateHumanUI(); // Function BP_UIControlComponent.BP_UIControlComponent_C.XiaoPi_CreateHumanUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveWaitUI(); // Function BP_UIControlComponent.BP_UIControlComponent_C.RemoveWaitUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NewsInfo(struct UWBP_Fraction_C* Content, struct UPanelWidget* Target); // Function BP_UIControlComponent.BP_UIControlComponent_C.NewsInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRemainingTime(struct FText RemainingTime); // Function BP_UIControlComponent.BP_UIControlComponent_C.GetRemainingTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetHumanName(struct FString HumanName); // Function BP_UIControlComponent.BP_UIControlComponent_C.GetHumanName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateHUD(); // Function BP_UIControlComponent.BP_UIControlComponent_C.CreateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsHuman(bool Human, struct ANOS_PlayerHuman* AsNOS Player Human, struct ANOS_PlayerGhost* AsNOS Player Ghost); // Function BP_UIControlComponent.BP_UIControlComponent_C.IsHuman // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_UIControlComponent.BP_UIControlComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void RestartByXiaopi(); // Function BP_UIControlComponent.BP_UIControlComponent_C.RestartByXiaopi // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTabPressed(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnTabPressed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnF5Pressed(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnF5Pressed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnWheelDown(); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnWheelDown // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnWheelUp(); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnWheelUp // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnHumanLeftAlt(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnHumanLeftAlt // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameLoadComplete_Event_1(); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnGameLoadComplete_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisableSkill(enum class EDisableSkillsType DisableType, bool IsEnabled); // Function BP_UIControlComponent.BP_UIControlComponent_C.DisableSkill // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitGameandChat(bool IsPressed); // Function BP_UIControlComponent.BP_UIControlComponent_C.OnExitGameandChat // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void IsVisibilityChatUI(bool Is, struct FChatInfo Info); // Function BP_UIControlComponent.BP_UIControlComponent_C.IsVisibilityChatUI // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void DelaySetOpacity(); // Function BP_UIControlComponent.BP_UIControlComponent_C.DelaySetOpacity // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomChat(struct FText Info Message); // Function BP_UIControlComponent.BP_UIControlComponent_C.CustomChat // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CharacterChangeSuccess(); // Function BP_UIControlComponent.BP_UIControlComponent_C.CharacterChangeSuccess // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SeedMessage(struct FText Text, enum class ETextCommit CommitMethod); // Function BP_UIControlComponent.BP_UIControlComponent_C.SeedMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DelayTryGetPawn(); // Function BP_UIControlComponent.BP_UIControlComponent_C.DelayTryGetPawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddFightScore(enum class EAddFightScoreTerm AddFightScoreType, int32_t AddScore, bool bIsHuman); // Function BP_UIControlComponent.BP_UIControlComponent_C.AddFightScore // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_UIControlComponent(int32_t EntryPoint); // Function BP_UIControlComponent.BP_UIControlComponent_C.ExecuteUbergraph_BP_UIControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

