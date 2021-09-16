// BlueprintGeneratedClass BP_GuildListPanelCom.BP_GuildListPanelCom_C
// Size: 0x1bc (Inherited: 0x151)
struct UBP_GuildListPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* AttachUI; // 0x160(0x08)
	struct UBP_GuildRootPanelCom_C* RootPanel; // 0x168(0x08)
	struct UUIItem* Root; // 0x170(0x08)
	struct TArray<struct UBP_GuildInfoCom_C*> GuildArray; // 0x178(0x10)
	struct UBP_GuildInfoCom_C* SearchGuild; // 0x188(0x08)
	int32_t Min Level; // 0x190(0x04)
	int32_t Max Level; // 0x194(0x04)
	int32_t Min Count; // 0x198(0x04)
	int32_t Max Count; // 0x19c(0x04)
	struct UBP_PagePanelCom_C* PageCom; // 0x1a0(0x08)
	enum class EGuildListSort Sort Type; // 0x1a8(0x01)
	bool ASC; // 0x1a9(0x01)
	char pad_1AA[0x2]; // 0x1aa(0x02)
	int32_t CurPage; // 0x1ac(0x04)
	struct UUITextInputComponent* TextInput; // 0x1b0(0x08)
	bool Bjoin Con; // 0x1b8(0x01)
	bool brecomment; // 0x1b9(0x01)
	bool AllTeamIsOn; // 0x1ba(0x01)
	bool RecommendTeamIsOn; // 0x1bb(0x01)

	void BuyRecommend(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.BuyRecommend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanJoin(bool InBool); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.CanJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RecommendTeam(bool InBool); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.RecommendTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AllTeam(bool InBool); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.AllTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectGuid(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.SelectGuid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Sort(enum class EGuildListSort SortType); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Sort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Previous // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Next // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MorePrevious(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.MorePrevious // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoreNext(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.MoreNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGuildList(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.GetGuildList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGuild(struct UBP_GuildInfoCom_C* Guild); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.GetGuild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitGuild(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.InitGuild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSubmit(struct FString NewParam); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.OnSubmit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSearchGuild(struct FGuildSimpleInfo NewParam); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.OnSearchGuild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindGuild(bool Active); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.FindGuild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Close(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Create(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Create // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadGuildList(struct FGuildSimpleInfoArray guildlist, int32_t MaxNumber); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.LoadGuildList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AllTeamEnter(struct ULGUIPointerEventData* pointerEventData); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.AllTeamEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(struct ULGUIPointerEventData* pointerEventData); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent(struct ULGUIPointerEventData* pointerEventData); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(struct ULGUIPointerEventData* pointerEventData); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildListPanelCom(int32_t EntryPoint); // Function BP_GuildListPanelCom.BP_GuildListPanelCom_C.ExecuteUbergraph_BP_GuildListPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

