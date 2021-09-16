// BlueprintGeneratedClass BP_HeadItemCom.BP_HeadItemCom_C
// Size: 0x268 (Inherited: 0x151)
struct UBP_HeadItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* head; // 0x160(0x08)
	struct UUITexture* Select; // 0x168(0x08)
	struct UUIText* Name; // 0x170(0x08)
	struct FCharacterInfo CharacterInfo; // 0x178(0xa8)
	bool bVisible; // 0x220(0x01)
	bool bSelect; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x228(0x08)
	struct UBP_BasePanel_C* BP_ParentCom; // 0x230(0x08)
	bool bUnlcok; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UUISprite* Lock1; // 0x240(0x08)
	int32_t Seconds; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UUIText* Days; // 0x250(0x08)
	struct UUISprite* NameBg; // 0x258(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x260(0x08)

	void UpdateTextLanguage(); // Function BP_HeadItemCom.BP_HeadItemCom_C.UpdateTextLanguage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetExpersionInfo(bool bUnlock, int32_t startTime, int32_t endTime); // Function BP_HeadItemCom.BP_HeadItemCom_C.SetExpersionInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildSeconds(int32_t EndSeconds, int32_t OffsetSeconds); // Function BP_HeadItemCom.BP_HeadItemCom_C.GetVaildSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExperienceTime(struct FText NewParam); // Function BP_HeadItemCom.BP_HeadItemCom_C.GetExperienceTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCharacterInfo(); // Function BP_HeadItemCom.BP_HeadItemCom_C.UpdateCharacterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCharacterInfo(); // Function BP_HeadItemCom.BP_HeadItemCom_C.InitCharacterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHeadItem(); // Function BP_HeadItemCom.BP_HeadItemCom_C.InitHeadItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_HeadItemCom.BP_HeadItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnSelect(); // Function BP_HeadItemCom.BP_HeadItemCom_C.OnSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancel(); // Function BP_HeadItemCom.BP_HeadItemCom_C.OnCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnter(); // Function BP_HeadItemCom.BP_HeadItemCom_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExit(); // Function BP_HeadItemCom.BP_HeadItemCom_C.OnExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(); // Function BP_HeadItemCom.BP_HeadItemCom_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventTextLanguage(struct FString ChangedLanguage); // Function BP_HeadItemCom.BP_HeadItemCom_C.EventTextLanguage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_HeadItemCom(int32_t EntryPoint); // Function BP_HeadItemCom.BP_HeadItemCom_C.ExecuteUbergraph_BP_HeadItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

