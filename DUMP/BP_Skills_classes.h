// BlueprintGeneratedClass BP_Skills.BP_Skills_C
// Size: 0x169 (Inherited: 0x151)
struct UBP_Skills_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_Data_C* Data; // 0x160(0x08)
	bool IsGhost; // 0x168(0x01)

	void load(struct USceneComponent* AttachTo, struct FText InName, struct FText InDes, struct TSoftObjectPtr<struct UTexture2D> Texture2D, struct TSoftObjectPtr<struct UMediaTexture> Video); // Function BP_Skills.BP_Skills_C.load // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CastSecondLevel(struct UObject* Object, struct UBP_Data_C* Data, struct FText Text, struct FText Title, struct UMediaTexture* Media); // Function BP_Skills.BP_Skills_C.CastSecondLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct UActorComponent* SelectSkill(struct ULGUIBasePanel*   , struct UActorComponent* ComClass, struct FString TRUE, struct FString FALSE); // Function BP_Skills.BP_Skills_C.SelectSkill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectSecen(struct FString TRUE, struct FString FALSE, struct USceneComponent* RootComponent); // Function BP_Skills.BP_Skills_C.SelectSecen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_Skills.BP_Skills_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SkillInfo(bool IsGhost, struct FName RowName, struct UDataTable* Skill); // Function BP_Skills.BP_Skills_C.SkillInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_Skills.BP_Skills_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Skills.BP_Skills_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnableBP(); // Function BP_Skills.BP_Skills_C.OnEnableBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Skills(int32_t EntryPoint); // Function BP_Skills.BP_Skills_C.ExecuteUbergraph_BP_Skills // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

