// BlueprintGeneratedClass BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C
// Size: 0xfc (Inherited: 0xc0)
struct UBP_TreasureBoxAccumulateTimesPanel_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUIBaseActor* Item; // 0xc8(0x08)
	struct TArray<struct FPBNewHandMissionData> MissionData Info; // 0xd0(0x10)
	struct AUIBaseActor* ParentContent; // 0xe0(0x08)
	struct TArray<struct AUIBaseActor*> ItemList; // 0xe8(0x10)
	int32_t Has Gained; // 0xf8(0x04)

	void StartBP(); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItems(); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.InitItems // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct TArray<struct FPBNewHandMissionData> DataInfo); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateItem(struct FPBNewHandMissionData PBNewHandMissionData); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.CreateItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReplaceItem(struct AUIBaseActor* InActor, struct FPBNewHandMissionData PBNewHandMissionData); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.ReplaceItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TreasureBoxAccumulateTimesPanel(int32_t EntryPoint); // Function BP_TreasureBoxAccumulateTimesPanel.BP_TreasureBoxAccumulateTimesPanel_C.ExecuteUbergraph_BP_TreasureBoxAccumulateTimesPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

