// BlueprintGeneratedClass BP_RolePanel.BP_RolePanel_C
// Size: 0x1c8 (Inherited: 0x151)
struct UBP_RolePanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t CharacterID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FText CharacterName; // 0x168(0x18)
	struct UTexture2D* CharacterLco; // 0x180(0x08)
	struct ABP_CharacterModel_C* Correspondence; // 0x188(0x08)
	struct APawn* OriginalPawn; // 0x190(0x08)
	struct ABP_CharacterModel_C* Pawn; // 0x198(0x08)
	struct UUIItem* RolePanel; // 0x1a0(0x08)
	struct TArray<struct FRoleIntimacyData> Role Info List; // 0x1a8(0x10)
	struct UUISprite* TextBox; // 0x1b8(0x08)
	struct UUISprite* HeadBox; // 0x1c0(0x08)

	void Set Box Image(bool IsEnter); // Function BP_RolePanel.BP_RolePanel_C.Set Box Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIntimacyNumber(struct TArray<struct FRoleIntimacyData> Array); // Function BP_RolePanel.BP_RolePanel_C.SetIntimacyNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ScalePanel(bool IsEnlarge); // Function BP_RolePanel.BP_RolePanel_C.ScalePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Click(); // Function BP_RolePanel.BP_RolePanel_C.On Click // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_RolePanel.BP_RolePanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetDisplay(struct UTexture2D* RoleImage, struct FText RoleName); // Function BP_RolePanel.BP_RolePanel_C.SetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RolePanel.BP_RolePanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void intimacy(struct FUserGameBaseData OneSelfInfo); // Function BP_RolePanel.BP_RolePanel_C.intimacy // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Language(struct FString ChangedLanguage); // Function BP_RolePanel.BP_RolePanel_C.Language // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RolePanel(int32_t EntryPoint); // Function BP_RolePanel.BP_RolePanel_C.ExecuteUbergraph_BP_RolePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

