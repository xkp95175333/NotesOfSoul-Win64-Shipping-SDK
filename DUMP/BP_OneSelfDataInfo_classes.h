// BlueprintGeneratedClass BP_OneSelfDataInfo.BP_OneSelfDataInfo_C
// Size: 0x498 (Inherited: 0x151)
struct UBP_OneSelfDataInfo_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t Exp; // 0x160(0x04)
	int32_t Level; // 0x164(0x04)
	int32_t HeadFrame; // 0x168(0x04)
	int32_t headicon; // 0x16c(0x04)
	struct FString NickNmae; // 0x170(0x10)
	struct FUserRankData RankLevel; // 0x180(0x60)
	int32_t UID; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct TMap<int32_t, struct ULGUIBasePanel*> UIMoney; // 0x1e8(0x50)
	struct TArray<struct UBP_Friend_C*> Friend; // 0x238(0x10)
	bool IsUIBG; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	int64_t Plateform Id; // 0x250(0x08)
	int64_t GkdID; // 0x258(0x08)
	bool CloseButton; // 0x260(0x01)
	bool IsFangZhu; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
	struct ULGUIBasePanel* AddFirend; // 0x268(0x08)
	struct TArray<struct UBP_TeamRole_C*> TeamRoles; // 0x270(0x10)
	struct UBP_TeamMemberAndHouseInfo_C* TeamMemberAndHouseInfo; // 0x280(0x08)
	struct AUIContainerActor* ThisPanel; // 0x288(0x08)
	struct TArray<struct AUIBaseActor*> UIActor; // 0x290(0x10)
	struct FString Guild Name; // 0x2a0(0x10)
	struct FUserGameBaseData Data; // 0x2b0(0x1e0)
	struct UBP_ReChargeCom_C* ReChargeCom; // 0x490(0x08)

	void SetUIDoubleRootShow(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetUIDoubleRootShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetUIDoubleRootExit(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetUIDoubleRootExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateDoublePanel(struct TSoftObjectPtr<struct UTexture2D> InputTexture, struct FText InputText); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.CreateDoublePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateDoubleInfo(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.CreateDoubleInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreatewPersonalCareer(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.CreatewPersonalCareer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCoin(int32_t Key, struct UTexture2D* newImage); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetCoin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyPrefab(int32_t UID); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.DestroyPrefab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateFriendPrefab(int32_t FriendUID, int32_t HeadID, int32_t HeadBoxID, struct FString inString, bool CloseExitButton); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.CreateFriendPrefab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get Grade (int32_t RowName, struct FText Result); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.Get Grade  // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetRankLevel(bool IsGhost, struct FText Grade, struct FText Star); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.GetRankLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetHead(int32_t InputPin); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetHead // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHeadBox(int32_t InputPin); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetHeadBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeMoney(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.ChangeMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeOneSelfInfo(struct FUserGameBaseData Data); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.ChangeOneSelfInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAccountDataUpdated(struct FKxAccountData Data); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.OnAccountDataUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void head(int32_t headicon, int32_t HeadFrame); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.head // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LanguageInfo(struct FString ChangedLanguage); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.LanguageInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenRecharge(); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.OpenRecharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGreenMode(bool IsOpenGreenMode); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.SetGreenMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneSelfDataInfo(int32_t EntryPoint); // Function BP_OneSelfDataInfo.BP_OneSelfDataInfo_C.ExecuteUbergraph_BP_OneSelfDataInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

