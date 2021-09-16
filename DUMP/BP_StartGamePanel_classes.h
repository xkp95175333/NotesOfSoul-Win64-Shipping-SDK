// BlueprintGeneratedClass BP_StartGamePanel.BP_StartGamePanel_C
// Size: 0x1c0 (Inherited: 0x151)
struct UBP_StartGamePanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t CampType; // 0x160(0x04)
	enum class EGameMatchType GameMatchType; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	int32_t MatchTime; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UUIText* StartGameText; // 0x170(0x08)
	struct TArray<struct FText> StartGameTextArray; // 0x178(0x10)
	struct UUIText* StartGameTimeText; // 0x188(0x08)
	int32_t StartGameTextIndex; // 0x190(0x04)
	bool bStartMatch; // 0x194(0x01)
	enum class EGameTeamType GameTeamType; // 0x195(0x01)
	bool bIsHomeowners; // 0x196(0x01)
	bool bIsCreateRoom; // 0x197(0x01)
	bool bIsMatching; // 0x198(0x01)
	bool bIsOpenLRS; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct TArray<struct UBP_HelpTag_C*> BP Help Tag; // 0x1a0(0x10)
	struct TArray<struct FText> TagName; // 0x1b0(0x10)

	void DisplayCancelButton(); // Function BP_StartGamePanel.BP_StartGamePanel_C.DisplayCancelButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LeaveRoom(); // Function BP_StartGamePanel.BP_StartGamePanel_C.LeaveRoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartGameCheck(enum class EGameTeamType GameTeamType, bool IsReady); // Function BP_StartGamePanel.BP_StartGamePanel_C.StartGameCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseScelectModePanel(); // Function BP_StartGamePanel.BP_StartGamePanel_C.CloseScelectModePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenHelpPanel(); // Function BP_StartGamePanel.BP_StartGamePanel_C.OpenHelpPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeCamp(bool IsHuman); // Function BP_StartGamePanel.BP_StartGamePanel_C.ChangeCamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Is Homeowners(int32_t HomeownersUID, bool IsHomeowners); // Function BP_StartGamePanel.BP_StartGamePanel_C.Is Homeowners // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Team Info(int32_t HomeownersUID, bool IsTeam); // Function BP_StartGamePanel.BP_StartGamePanel_C.Set Team Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TeamCheck(); // Function BP_StartGamePanel.BP_StartGamePanel_C.TeamCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitState(); // Function BP_StartGamePanel.BP_StartGamePanel_C.InitState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateHouse(); // Function BP_StartGamePanel.BP_StartGamePanel_C.CreateHouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Select House Type(enum class EGameTeamType HouseType); // Function BP_StartGamePanel.BP_StartGamePanel_C.Select House Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartMatch(); // Function BP_StartGamePanel.BP_StartGamePanel_C.StartMatch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinOtherHouse(); // Function BP_StartGamePanel.BP_StartGamePanel_C.JoinOtherHouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeStartGameButtonText(bool IsFangZhu); // Function BP_StartGamePanel.BP_StartGamePanel_C.ChangeStartGameButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickMode(); // Function BP_StartGamePanel.BP_StartGamePanel_C.ClickMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisbandTeam(); // Function BP_StartGamePanel.BP_StartGamePanel_C.DisbandTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickTeam(); // Function BP_StartGamePanel.BP_StartGamePanel_C.ClickTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Click Custom(); // Function BP_StartGamePanel.BP_StartGamePanel_C.Click Custom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMatchType(enum class EGameMatchType GameMatchType); // Function BP_StartGamePanel.BP_StartGamePanel_C.SetMatchType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTimeText(); // Function BP_StartGamePanel.BP_StartGamePanel_C.UpdateTimeText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateStartGameText(); // Function BP_StartGamePanel.BP_StartGamePanel_C.UpdateStartGameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_StartGamePanel.BP_StartGamePanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeMatchingText(); // Function BP_StartGamePanel.BP_StartGamePanel_C.ChangeMatchingText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CancelStartGame(); // Function BP_StartGamePanel.BP_StartGamePanel_C.CancelStartGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartGame(); // Function BP_StartGamePanel.BP_StartGamePanel_C.StartGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayMatchingTextAnim(); // Function BP_StartGamePanel.BP_StartGamePanel_C.PlayMatchingTextAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMatch(); // Function BP_StartGamePanel.BP_StartGamePanel_C.OnEnterMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopMatchingTextAnim(); // Function BP_StartGamePanel.BP_StartGamePanel_C.StopMatchingTextAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchEnd(); // Function BP_StartGamePanel.BP_StartGamePanel_C.MatchEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMatchConfirm(int32_t MatchType, int32_t CampType); // Function BP_StartGamePanel.BP_StartGamePanel_C.OnMatchConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchError(int32_t code); // Function BP_StartGamePanel.BP_StartGamePanel_C.MatchError // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectGhost(bool IsSelect); // Function BP_StartGamePanel.BP_StartGamePanel_C.SelectGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Select Human(bool IsSelect); // Function BP_StartGamePanel.BP_StartGamePanel_C.Select Human // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MatchResetEvent(); // Function BP_StartGamePanel.BP_StartGamePanel_C.MatchResetEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadBPLevel(); // Function BP_StartGamePanel.BP_StartGamePanel_C.LoadBPLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LeaveTeam(int32_t code); // Function BP_StartGamePanel.BP_StartGamePanel_C.LeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_StartGamePanel.BP_StartGamePanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void JoinTeam(int32_t code, int32_t UID, int32_t TeamID); // Function BP_StartGamePanel.BP_StartGamePanel_C.JoinTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinCustomRoomBack(int32_t code, int32_t pos, int32_t master_uid, struct FString RoomNum); // Function BP_StartGamePanel.BP_StartGamePanel_C.JoinCustomRoomBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateCustomBack(int32_t code, struct FString RoomNum); // Function BP_StartGamePanel.BP_StartGamePanel_C.CreateCustomBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_StartGamePanel.BP_StartGamePanel_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CreateTeamBack(int32_t code, int32_t TeamID); // Function BP_StartGamePanel.BP_StartGamePanel_C.CreateTeamBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_StartGamePanel.BP_StartGamePanel_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMatch_Other(); // Function BP_StartGamePanel.BP_StartGamePanel_C.OnEnterMatch_Other // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDisconnectEvent(enum class EKxServerType ServerType); // Function BP_StartGamePanel.BP_StartGamePanel_C.OnDisconnectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StartGamePanel(int32_t EntryPoint); // Function BP_StartGamePanel.BP_StartGamePanel_C.ExecuteUbergraph_BP_StartGamePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

