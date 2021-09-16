// WidgetBlueprintGeneratedClass WBP_PracticeMissionNode.WBP_PracticeMissionNode_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_PracticeMissionNode_C : UUserWidget {
	struct UWidgetAnimation* CheckedAnim; // 0x260(0x08)
	struct UCheckBox* CheckBoxWidegt; // 0x268(0x08)
	struct UBorder* MissionBorder; // 0x270(0x08)
	struct UTextBlock* MissionContent; // 0x278(0x08)
	struct UTextBlock* MissionTimes; // 0x280(0x08)
	bool bChecked; // 0x288(0x01)

	void SetCheckState(bool bChecked); // Function WBP_PracticeMissionNode.WBP_PracticeMissionNode_C.SetCheckState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCurMissionContent(struct FString MissionContent, struct FString NeedTimes); // Function WBP_PracticeMissionNode.WBP_PracticeMissionNode_C.SetCurMissionContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

