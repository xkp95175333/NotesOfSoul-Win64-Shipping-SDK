// BlueprintGeneratedClass BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C
// Size: 0x37b (Inherited: 0x358)
struct ABP_DeadSpectatorPlayer_C : ANOS_DeadSpectatorPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWBP_DeadSpectatorUI_C* DeadUIPanel; // 0x360(0x08)
	struct UWBP_SettingMain_C* SettingMain; // 0x368(0x08)
	struct UWBP_MainUI_C* MainUI; // 0x370(0x08)
	bool AudioLight; // 0x378(0x01)
	bool bIsO; // 0x379(0x01)
	bool IsLRS; // 0x37a(0x01)

	void CreateUI(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.CreateUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Escape_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_Escape_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_N_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_N_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_P_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_P_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_O_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_O_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_O_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.InpActEvt_O_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTargetPlayerUI(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.UpdateTargetPlayerUI // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchSpectatorMode(enum class ESpectatorMode NewMode); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.SwitchSpectatorMode // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTargetPlayerUI_Mutil(struct ANOS_PlayerHuman* Player); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.UpdateTargetPlayerUI_Mutil // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCamera(struct ANOS_PlayerBase* Player); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.SetCamera // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardTPress(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.OnKeyBoardTPress // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardTRelease(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.OnKeyBoardTRelease // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardYPress(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.OnKeyBoardYPress // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void 123(); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.123 // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DeadSpectatorPlayer(int32_t EntryPoint); // Function BP_DeadSpectatorPlayer.BP_DeadSpectatorPlayer_C.ExecuteUbergraph_BP_DeadSpectatorPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

