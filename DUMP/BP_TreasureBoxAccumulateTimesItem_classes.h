// BlueprintGeneratedClass BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C
// Size: 0x1c0 (Inherited: 0xc0)
struct UBP_TreasureBoxAccumulateTimesItem_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	int32_t Type; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AUITextureActor* Anim; // 0xd0(0x08)
	struct AUITextureActor* HasConfirm; // 0xd8(0x08)
	struct AUITextureActor* Lock; // 0xe0(0x08)
	struct AUITextureActor* TextureContent; // 0xe8(0x08)
	struct AUITextureActor* Qua; // 0xf0(0x08)
	struct AUITextActor* des; // 0xf8(0x08)
	struct UUIButtonComponent* BtnCom; // 0x100(0x08)
	int32_t Mission ID; // 0x108(0x04)
	int32_t Mission Type; // 0x10c(0x04)
	struct TMap<enum class EClothQualityType, struct UTexture2D*> ItemQua; // 0x110(0x50)
	struct FString Name; // 0x160(0x10)
	int32_t Num; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AUIBaseActor* Viewport; // 0x178(0x08)
	struct UBP_ItemInfoCom_C* ShowItemPanel; // 0x180(0x08)
	struct AUIBaseActor* ItemPreview; // 0x188(0x08)
	enum class EClothQualityType Quality; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FText DesStr; // 0x198(0x18)
	struct UTexture2D* ContentImg; // 0x1b0(0x08)
	struct UMaterialInstanceDynamic* MatInstance; // 0x1b8(0x08)

	void OnLeave(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.OnLeave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnter(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.OnEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Qua(enum class EClothQualityType Type); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.Set Qua // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfirm(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.OnConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetRewardIDByLocalData(int32_t MissionID, int32_t ID, int32_t Num); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.GetRewardIDByLocalData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestGetReward(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.RequestGetReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_0359CE1B4F5D42E700276C9DFD590CE4(struct UObject* Loaded); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.OnLoaded_0359CE1B4F5D42E700276C9DFD590CE4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(int32_t HasGained, int32_t NeedNum, int32_t MissionID, int32_t MissionType); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UnActiveItem(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.UnActiveItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnActiveItem(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.OnActiveItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HasActiveItem(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.HasActiveItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TreasureBoxAccumulateTimesItem(int32_t EntryPoint); // Function BP_TreasureBoxAccumulateTimesItem.BP_TreasureBoxAccumulateTimesItem_C.ExecuteUbergraph_BP_TreasureBoxAccumulateTimesItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

