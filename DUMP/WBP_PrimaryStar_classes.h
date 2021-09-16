// WidgetBlueprintGeneratedClass WBP_PrimaryStar.WBP_PrimaryStar_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_PrimaryStar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CDOK; // 0x268(0x08)
	struct UBorder* Border_Elment1; // 0x270(0x08)
	struct UBorder* Border_VFX; // 0x278(0x08)
	struct UImage* DebrisF1; // 0x280(0x08)
	struct UImage* Image_CD; // 0x288(0x08)
	struct UImage* Image_Ready; // 0x290(0x08)
	struct UImage* Image_Skill; // 0x298(0x08)
	struct UOverlay* Overlay_StorageFrame; // 0x2a0(0x08)
	struct UTextBlock* StorageNum; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Q; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x2b8(0x08)
	bool Accomplish; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float CDTime; // 0x2c4(0x04)
	float CurTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UNOS_AbilitySystemComponent* CharacterAbilityComponent; // 0x2d0(0x08)

	void UpdateStorageSkillNum(int32_t StorageSkillNum); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.UpdateStorageSkillNum // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HumanCD(struct FEventRelevantData EventRelevantData); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.HumanCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GAEnd(bool IsEnd, bool VFX); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.GAEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetVFX(); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.SetVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartCD(float CDTime, float AllTime); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.StartCD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PrimaryStar(int32_t EntryPoint); // Function WBP_PrimaryStar.WBP_PrimaryStar_C.ExecuteUbergraph_WBP_PrimaryStar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

