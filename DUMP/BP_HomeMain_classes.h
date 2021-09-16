// BlueprintGeneratedClass BP_HomeMain.BP_HomeMain_C
// Size: 0x1f0 (Inherited: 0x151)
struct UBP_HomeMain_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ULGUIPrefab* RolePanel_Prefab; // 0x160(0x08)
	bool Cur; // 0x168(0x01)
	bool bStartMatch; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct ABP_LobbyCharacter_C* HomePlayer; // 0x170(0x08)
	struct TArray<struct ABP_CharacterModel_C*> Model; // 0x178(0x10)
	struct UWBP_SettingMain_C* WBPSetting; // 0x188(0x08)
	struct AHDRIBackdrop_C* HDRIBackdrop; // 0x190(0x08)
	struct ADirectionalLight* DirectionalLight; // 0x198(0x08)
	struct UBP_IntegrationCom_C* Integration Com; // 0x1a0(0x08)
	struct UBP_Data_C* BPData; // 0x1a8(0x08)
	struct FMulticastInlineDelegate StartMatch; // 0x1b0(0x10)
	struct AUIBaseActor* NoviceConfirmPanel; // 0x1c0(0x08)
	struct ULGUIPrefab* RoleInfoPanel_Prefab; // 0x1c8(0x08)
	struct UBP_AllRoleInfoPanel_C* AllRoleInfoPanel; // 0x1d0(0x08)
	struct UBP_StartGamePanel_C* MatchPanel; // 0x1d8(0x08)
	struct TArray<struct ULGUIPlayTweenComponent*> OpenAnimArray; // 0x1e0(0x10)

	void ShowGuangGao(); // Function BP_HomeMain.BP_HomeMain_C.ShowGuangGao // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TeamCheck(); // Function BP_HomeMain.BP_HomeMain_C.TeamCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Live Stereaming(); // Function BP_HomeMain.BP_HomeMain_C.Live Stereaming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseSelectGameMode(); // Function BP_HomeMain.BP_HomeMain_C.CloseSelectGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowGuildPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowGuildPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Show Advertising Panpel(); // Function BP_HomeMain.BP_HomeMain_C.Show Advertising Panpel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void URL(); // Function BP_HomeMain.BP_HomeMain_C.URL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NewMailCheck(bool IsNoSee); // Function BP_HomeMain.BP_HomeMain_C.NewMailCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void First Open(); // Function BP_HomeMain.BP_HomeMain_C.First Open // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowCDKPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowCDKPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowRankingListPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowRankingListPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowNoviceConfirmPanel(bool bShow); // Function BP_HomeMain.BP_HomeMain_C.ShowNoviceConfirmPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowEditionPlanPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowEditionPlanPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Show Activity Panel(); // Function BP_HomeMain.BP_HomeMain_C.Show Activity Panel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Change Novice Button State(bool IsDeactivation); // Function BP_HomeMain.BP_HomeMain_C.Change Novice Button State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinNoviceScene(); // Function BP_HomeMain.BP_HomeMain_C.JoinNoviceScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindHomeLightActor(); // Function BP_HomeMain.BP_HomeMain_C.FindHomeLightActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowMissionBoard(); // Function BP_HomeMain.BP_HomeMain_C.ShowMissionBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_HomeMain.BP_HomeMain_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowFriendPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowFriendPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowShop(); // Function BP_HomeMain.BP_HomeMain_C.ShowShop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowLiveBroadcastSelectPanel(bool Active); // Function BP_HomeMain.BP_HomeMain_C.ShowLiveBroadcastSelectPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowRoleInfoPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowRoleInfoPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowSetPanel(); // Function BP_HomeMain.BP_HomeMain_C.ShowSetPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowMail(); // Function BP_HomeMain.BP_HomeMain_C.ShowMail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_HomeMain.BP_HomeMain_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_HomeMain.BP_HomeMain_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterMatch(); // Function BP_HomeMain.BP_HomeMain_C.OnEnterMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartBanPick(); // Function BP_HomeMain.BP_HomeMain_C.OnStartBanPick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnterFriendHome_Event_1(struct TArray<struct FKxUserInfo> UserInfos, int32_t code); // Function BP_HomeMain.BP_HomeMain_C.OnEnterFriendHome_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLeaveFriendHome_Event_1(int32_t code); // Function BP_HomeMain.BP_HomeMain_C.OnLeaveFriendHome_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MailUpdate(); // Function BP_HomeMain.BP_HomeMain_C.MailUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FirstOpenCheck(); // Function BP_HomeMain.BP_HomeMain_C.FirstOpenCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinTeam(int32_t code, int32_t UID, int32_t TeamID); // Function BP_HomeMain.BP_HomeMain_C.JoinTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinCustom(int32_t code, int32_t pos, int32_t master_uid, struct FString RoomNum); // Function BP_HomeMain.BP_HomeMain_C.JoinCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LeaveTeam(int32_t code); // Function BP_HomeMain.BP_HomeMain_C.LeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateTeam(int32_t code, int32_t TeamID); // Function BP_HomeMain.BP_HomeMain_C.CreateTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateCustom(int32_t code, struct FString RoomNum); // Function BP_HomeMain.BP_HomeMain_C.CreateCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayOpenAnim(); // Function BP_HomeMain.BP_HomeMain_C.PlayOpenAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_HomeMain.BP_HomeMain_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FriendUpdate(struct TArray<struct FKxFriendData> DataList); // Function BP_HomeMain.BP_HomeMain_C.FriendUpdate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActivityPanelIsNew(bool bIsShowRedPoint); // Function BP_HomeMain.BP_HomeMain_C.ActivityPanelIsNew // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GuildNew(bool InBool); // Function BP_HomeMain.BP_HomeMain_C.GuildNew // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_HomeMain(int32_t EntryPoint); // Function BP_HomeMain.BP_HomeMain_C.ExecuteUbergraph_BP_HomeMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void StartMatch__DelegateSignature(); // Function BP_HomeMain.BP_HomeMain_C.StartMatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

