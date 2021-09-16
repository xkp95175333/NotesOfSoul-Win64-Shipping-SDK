// BlueprintGeneratedClass BP_GI.BP_GI_C
// Size: 0x2c0 (Inherited: 0x1c8)
struct UBP_GI_C : UNOS_GI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1c8(0x08)
	struct UNOS_UIData* UI Data Module; // 0x1d0(0x08)
	enum class EMapHUDType Test_ShowHUDType; // 0x1d8(0x01)
	bool IsInputUIOnly; // 0x1d9(0x01)
	char pad_1DA[0x6]; // 0x1da(0x06)
	int64_t SteamID; // 0x1e0(0x08)
	struct FTimerHandle StopSessionHandle; // 0x1e8(0x08)
	struct TMap<int32_t, struct FText> ErrorTipInfos; // 0x1f0(0x50)
	struct UUserWidget* LoadingUI_1; // 0x240(0x08)
	struct UUserWidget* ReConnectUI; // 0x248(0x08)
	struct FString LobbyLoginIP; // 0x250(0x10)
	int32_t LobbyLoginPort; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct FString LobbyLoginKey; // 0x268(0x10)
	struct UWBP_NetErrorTip_C* NetErrorUI; // 0x278(0x08)
	int32_t InteriorWarn; // 0x280(0x04)
	int32_t ExternalWarn; // 0x284(0x04)
	int64_t UID; // 0x288(0x08)
	struct FString LoginKey; // 0x290(0x10)
	struct TArray<struct FString> SensitiveWords; // 0x2a0(0x10)
	bool AlreadyConnectServer; // 0x2b0(0x01)
	bool bConnectingDS; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	float GameMaxTime; // 0x2b4(0x04)
	struct FTimerHandle ReconnectTimer; // 0x2b8(0x08)

	void IFunc_Get Game Instance BP_GI(struct UBP_GI_C* Ref); // Function BP_GI.BP_GI_C.IFunc_Get Game Instance BP_GI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowErrorTip(struct UWidget* FocusUI, int32_t ErrorCode, struct FText ErrorText); // Function BP_GI.BP_GI_C.ShowErrorTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadSensitiveWords(); // Function BP_GI.BP_GI_C.LoadSensitiveWords // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnErrorTextRsp(int32_t CodeID, struct TArray<struct FString> params); // Function BP_GI.BP_GI_C.OnErrorTextRsp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set UI Data Module(struct UNOS_UIData* Ref); // Function BP_GI.BP_GI_C.Set UI Data Module // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get UI Data Module(struct UNOS_UIData* Ref); // Function BP_GI.BP_GI_C.Get UI Data Module // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Completed_936481064EA03D6212BAC598A413CA71(struct USaveGame* SaveGame, bool bSuccess); // Function BP_GI.BP_GI_C.Completed_936481064EA03D6212BAC598A413CA71 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Completed_37EFD3F64F415C620A2A349A000C475D(struct USaveGame* SaveGame, bool bSuccess); // Function BP_GI.BP_GI_C.Completed_37EFD3F64F415C620A2A349A000C475D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Completed_9D11F5B948069E86BE76B28F74F450BC(struct USaveGame* SaveGame, bool bSuccess); // Function BP_GI.BP_GI_C.Completed_9D11F5B948069E86BE76B28F74F450BC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Completed_60F8D99D45689CFBB4B1A09E44042A71(struct USaveGame* SaveGame, bool bSuccess); // Function BP_GI.BP_GI_C.Completed_60F8D99D45689CFBB4B1A09E44042A71 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IFunc_SetPickUpText(bool Is); // Function BP_GI.BP_GI_C.IFunc_SetPickUpText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveInit(); // Function BP_GI.BP_GI_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InputModeGameOnly(struct UWidget* Widget); // Function BP_GI.BP_GI_C.InputModeGameOnly // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputModeUIOnly(); // Function BP_GI.BP_GI_C.InputModeUIOnly // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputModeGameAndUI(struct UWidget* Widget); // Function BP_GI.BP_GI_C.InputModeGameAndUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function BP_GI.BP_GI_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterBattleGame(struct FString IP, int32_t Port, struct FString ConnectSession); // Function BP_GI.BP_GI_C.OnEnterBattleGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartSession(); // Function BP_GI.BP_GI_C.OnStartSession // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnExitGmeRoom(int32_t Result, struct FString ErrorInfo); // Function BP_GI.BP_GI_C.OnExitGmeRoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopSession(); // Function BP_GI.BP_GI_C.StopSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStopSession(); // Function BP_GI.BP_GI_C.OnStopSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPShowLoadingUI(); // Function BP_GI.BP_GI_C.BPShowLoadingUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPRemoveLoadingUI(); // Function BP_GI.BP_GI_C.BPRemoveLoadingUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMatchConfirm(int32_t MatchType, int32_t CampType); // Function BP_GI.BP_GI_C.OnMatchConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConnectLobbyServer(); // Function BP_GI.BP_GI_C.ConnectLobbyServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnErroTextRsp_Event_1(int32_t code, struct TArray<struct FString> params); // Function BP_GI.BP_GI_C.OnErroTextRsp_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConnectEvent_Event_1(enum class EKxServerType ServerType); // Function BP_GI.BP_GI_C.OnConnectEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisconnectEvent_Event_1(enum class EKxServerType ServerType); // Function BP_GI.BP_GI_C.OnDisconnectEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUserLoginRspEvent_Event_1(enum class EKxServerType ServerType, int32_t code, int64_t UID, struct FString IP, int32_t Port, struct FString Key); // Function BP_GI.BP_GI_C.OnUserLoginRspEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisconnectEvent_Event_2(enum class EKxServerType ServerType); // Function BP_GI.BP_GI_C.OnDisconnectEvent_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConnectServer(struct FString LoginKey); // Function BP_GI.BP_GI_C.ConnectServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMapLoadedBP(); // Function BP_GI.BP_GI_C.OnMapLoadedBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CheckGameIsStart(); // Function BP_GI.BP_GI_C.CheckGameIsStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reconnect(); // Function BP_GI.BP_GI_C.Reconnect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReconnectBattle(struct FString IP, int32_t Port, struct FString ConnectSession); // Function BP_GI.BP_GI_C.ReconnectBattle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveShutdown(); // Function BP_GI.BP_GI_C.ReceiveShutdown // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CE_UpdateSaveGamePlayer(); // Function BP_GI.BP_GI_C.CE_UpdateSaveGamePlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CE_UpdateSaveGameSettings(); // Function BP_GI.BP_GI_C.CE_UpdateSaveGameSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GI(int32_t EntryPoint); // Function BP_GI.BP_GI_C.ExecuteUbergraph_BP_GI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

