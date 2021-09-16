// BlueprintGeneratedClass BoxItem_Script.BoxItem_Script_C
// Size: 0x1b8 (Inherited: 0xc0)
struct UBoxItem_Script_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	int32_t Num; // 0xc8(0x04)
	int32_t ItemCode; // 0xcc(0x04)
	struct AUIBaseActor* BoxText; // 0xd0(0x08)
	struct AActor* BoxModle; // 0xd8(0x08)
	struct TArray<struct USkeletalMesh*> BoxModleList; // 0xe0(0x10)
	struct AActor* TreasureBoxPanelRootActor; // 0xf0(0x08)
	struct AUISpriteActor* Img; // 0xf8(0x08)
	struct AUIBaseActor* SelectedIMG; // 0x100(0x08)
	struct UBoxContentManager_C* BoxMgr; // 0x108(0x08)
	struct AUIBaseActor* ThumbnailPanel; // 0x110(0x08)
	struct AUIBaseActor* ThumbnailContent; // 0x118(0x08)
	struct TArray<int32_t> HumanItemID; // 0x120(0x10)
	struct TArray<int32_t> GhostItemID; // 0x130(0x10)
	struct TArray<int32_t> SkinItemID; // 0x140(0x10)
	struct TArray<int32_t> CharacterItemID; // 0x150(0x10)
	struct TArray<int32_t> CurrentTreasureBoxID; // 0x160(0x10)
	struct TArray<int32_t> ActivityTreasureBoxID; // 0x170(0x10)
	struct TArray<int32_t> IncTreasureBoxID; // 0x180(0x10)
	bool bShowTenShot; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct AUIBaseActor* TenShotsWidget; // 0x198(0x08)
	struct AUIBaseActor* OneShotsWidget; // 0x1a0(0x08)
	struct AUITextActor* Text; // 0x1a8(0x08)
	struct AUITextActor* ExtraText; // 0x1b0(0x08)

	void CheckCanEnableOpenBox(); // Function BoxItem_Script.BoxItem_Script_C.CheckCanEnableOpenBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterTreasureBoxContent(struct TArray<int32_t> CharacterTreasureBoxContent1); // Function BoxItem_Script.BoxItem_Script_C.GetCharacterTreasureBoxContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UnactiveButton(); // Function BoxItem_Script.BoxItem_Script_C.UnactiveButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(int32_t Num, int32_t ItemCode); // Function BoxItem_Script.BoxItem_Script_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnItemClick(); // Function BoxItem_Script.BoxItem_Script_C.OnItemClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BoxItem_Script.BoxItem_Script_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnIncTreasureBoxDataInfo_Event_1(struct TArray<int32_t> IDList, struct TArray<struct FIncTreasureBoxData> DataInfo); // Function BoxItem_Script.BoxItem_Script_C.OnIncTreasureBoxDataInfo_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BoxItem_Script(int32_t EntryPoint); // Function BoxItem_Script.BoxItem_Script_C.ExecuteUbergraph_BoxItem_Script // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

