// BlueprintGeneratedClass BP_AwardContent.BP_AwardContent_C
// Size: 0x1ac (Inherited: 0x140)
struct UBP_AwardContent_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	int32_t Level; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TMap<struct FString, int32_t> Award Config TMap; // 0x150(0x50)
	int32_t CharacterID; // 0x1a0(0x04)
	bool isget; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	int32_t DataTableIndex; // 0x1a8(0x04)

	void GetSuit(bool Condition, int32_t ID, struct UTexture2D* AsTexture 2D); // Function BP_AwardContent.BP_AwardContent_C.GetSuit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetFunctionalProps(int32_t Key, struct UTexture2D* Tetxure2D); // Function BP_AwardContent.BP_AwardContent_C.GetFunctionalProps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct UTexture2D* GetHumanAccessories(int32_t DataTableIndex, int32_t ID); // Function BP_AwardContent.BP_AwardContent_C.GetHumanAccessories // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Change(); // Function BP_AwardContent.BP_AwardContent_C.Change // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RequestAward(); // Function BP_AwardContent.BP_AwardContent_C.RequestAward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct UTexture2D* Tetxure2D); // Function BP_AwardContent.BP_AwardContent_C.SetInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_AwardContent.BP_AwardContent_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnOneSelfInfo_Event_1(struct FUserGameBaseData OneSelfInfo); // Function BP_AwardContent.BP_AwardContent_C.OnOneSelfInfo_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_AwardContent(int32_t EntryPoint); // Function BP_AwardContent.BP_AwardContent_C.ExecuteUbergraph_BP_AwardContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

