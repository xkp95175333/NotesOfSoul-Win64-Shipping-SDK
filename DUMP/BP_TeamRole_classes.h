// BlueprintGeneratedClass BP_TeamRole.BP_TeamRole_C
// Size: 0x2bd (Inherited: 0x151)
struct UBP_TeamRole_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIBackgroundBlurActor* Blur; // 0x160(0x08)
	struct UUISprite* MCMask; // 0x168(0x08)
	struct UUIButtonComponent* HeadButton; // 0x170(0x08)
	bool IsTeam; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct ULGUIPrefab* PlayerOperationBox; // 0x180(0x08)
	struct UBP_PlayerOperation_C* BP Player Operation; // 0x188(0x08)
	struct FUserGameBaseSimpleData RoleInfo; // 0x190(0xd0)
	struct AUIBaseActor* NULL; // 0x260(0x08)
	struct AUIBaseActor* Player; // 0x268(0x08)
	struct AUIBaseActor* RankText; // 0x270(0x08)
	struct AUIBaseActor* HeadBox; // 0x278(0x08)
	struct AUIBaseActor* HeadImage; // 0x280(0x08)
	struct AUIBaseActor* icon; // 0x288(0x08)
	struct AUIBaseActor* Homeowners; // 0x290(0x08)
	struct AUIBaseActor* Name; // 0x298(0x08)
	struct AUIBaseActor* 3Down; // 0x2a0(0x08)
	struct AUIBaseActor* UpRoot; // 0x2a8(0x08)
	struct AUIBaseActor* SelectModePanel; // 0x2b0(0x08)
	int32_t pos; // 0x2b8(0x04)
	bool IsNull; // 0x2bc(0x01)

	void DisplayCampAllPlayer(bool IsHuman); // Function BP_TeamRole.BP_TeamRole_C.DisplayCampAllPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickTargetPlayer(); // Function BP_TeamRole.BP_TeamRole_C.ClickTargetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickSelect(); // Function BP_TeamRole.BP_TeamRole_C.ClickSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickAdd(); // Function BP_TeamRole.BP_TeamRole_C.ClickAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickHead(); // Function BP_TeamRole.BP_TeamRole_C.ClickHead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsMe(struct FKxUserInfo KxUserInfo, bool IsMe); // Function BP_TeamRole.BP_TeamRole_C.IsMe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void IsRightClick(bool NewParam); // Function BP_TeamRole.BP_TeamRole_C.IsRightClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Add Operation Button(struct UBP_PlayerOperation_C* Panel); // Function BP_TeamRole.BP_TeamRole_C.Add Operation Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_TeamRole.BP_TeamRole_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetDisplayInfo(struct FText Rank, struct UTexture2D* HeadImageBox, struct UTexture2D* HeadImage, struct FText Name, bool IsHuman, bool IsHomeowners, struct FText State, struct UTexture2D* StateImage); // Function BP_TeamRole.BP_TeamRole_C.SetDisplayInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRoleInfo(struct FUserGameBaseSimpleData Role, bool IsHuman, int32_t HomeownersID, bool IsNull, int32_t RoleState); // Function BP_TeamRole.BP_TeamRole_C.SetRoleInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVoiceValue(float Value); // Function BP_TeamRole.BP_TeamRole_C.SetVoiceValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVoice(bool IsDisable); // Function BP_TeamRole.BP_TeamRole_C.SetVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Display Mode(bool IsTeam, bool IsSelect); // Function BP_TeamRole.BP_TeamRole_C.Set Display Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TeamRole.BP_TeamRole_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TeamRole.BP_TeamRole_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MoveToHuman(); // Function BP_TeamRole.BP_TeamRole_C.MoveToHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void KickOut(); // Function BP_TeamRole.BP_TeamRole_C.KickOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoveToGhost(); // Function BP_TeamRole.BP_TeamRole_C.MoveToGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSpeakingUpdated(struct TArray<struct FString> IDList); // Function BP_TeamRole.BP_TeamRole_C.OnSpeakingUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TeamRole(int32_t EntryPoint); // Function BP_TeamRole.BP_TeamRole_C.ExecuteUbergraph_BP_TeamRole // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

