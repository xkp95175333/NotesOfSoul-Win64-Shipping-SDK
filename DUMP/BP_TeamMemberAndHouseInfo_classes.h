// BlueprintGeneratedClass BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C
// Size: 0x278 (Inherited: 0x151)
struct UBP_TeamMemberAndHouseInfo_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_TeamRole_C*> CustomHouseRoles; // 0x160(0x10)
	struct TArray<struct UBP_TeamRole_C*> TeamHouseRoles; // 0x170(0x10)
	bool IsCtrl; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UUIText* HouseNumText; // 0x188(0x08)
	struct UUIText* ModeText; // 0x190(0x08)
	struct ULGUIPrefab* MapPanelPrefab; // 0x198(0x08)
	struct UBP_SelectMapPanel_C* MapPanelCom; // 0x1a0(0x08)
	struct FUserGameBaseSimpleData ChangePosRoleInfo; // 0x1a8(0xd0)

	void AllTeamMemberIsReady(enum class EGameTeamType Type, bool AllPlayerInTheTeam); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.AllTeamMemberIsReady // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetMapID(int32_t MapID); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.GetMapID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetMapName(int32_t MapID, struct FText MapName); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.GetMapName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CloseCampPanel(bool IsHuman); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CloseCampPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisplayCampAllPlayer(bool IsHuman); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.DisplayCampAllPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Blur(bool Active); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.Blur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetNullPos(struct TArray<int32_t> AllHumanNullPos, struct TArray<int32_t> AllGhostNullPos); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.GetNullPos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CustomAllPlayersReady(bool Ready); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CustomAllPlayersReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetMapInfo(struct FText MapName); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.SetMapInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectMap(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.SelectMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HouseInfoPanel(bool Mode, bool HouseNum, bool Map, bool SpectatorNum, bool SpectatorVerticalLayout, bool RoomIsTeam); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.HouseInfoPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TeamCheck(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.TeamCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenFriendPanel(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.OpenFriendPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisbandTeam(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.DisbandTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenTeamPanel(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.OpenTeamPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenCustomPanel(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.OpenCustomPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomHouseCreateTeamRole(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CustomHouseCreateTeamRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTeamHouse Info(struct FKxTeamInfo Info); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.UpdateTeamHouse Info // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateTeamBack(int32_t code, int32_t TeamID); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CreateTeamBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateCustomBack(int32_t code, struct FString RoomNum); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CreateCustomBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideBP(); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.HideBP // (BlueprintEvent) // @ game+0x1ec38f0
	void CustomRoomUpdateBack(struct FCustomRoomInfo CustomTeamInfo); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.CustomRoomUpdateBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinTeam(int32_t code, int32_t UID, int32_t TeamID); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.JoinTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinCustomRoomBack(int32_t code, int32_t pos, int32_t master_uid, struct FString RoomNum); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.JoinCustomRoomBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LeaveCustomRoomBack(int32_t code); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.LeaveCustomRoomBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TeamMemberAndHouseInfo(int32_t EntryPoint); // Function BP_TeamMemberAndHouseInfo.BP_TeamMemberAndHouseInfo_C.ExecuteUbergraph_BP_TeamMemberAndHouseInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

