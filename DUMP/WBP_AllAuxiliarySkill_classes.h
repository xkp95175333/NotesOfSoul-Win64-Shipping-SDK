// WidgetBlueprintGeneratedClass WBP_AllAuxiliarySkill.WBP_AllAuxiliarySkill_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_AllAuxiliarySkill_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Name; // 0x268(0x08)
	struct UTextBlock* PresentationText; // 0x270(0x08)
	struct USizeBox* SizeBox_73; // 0x278(0x08)
	struct UImage* Texture2D; // 0x280(0x08)
	struct FText SkillsName; // 0x288(0x18)
	struct FText des; // 0x2a0(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Texture; // 0x2b8(0x28)
	struct UKxInventoryObject* Item Data; // 0x2e0(0x08)
	bool Is; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t ID; // 0x2ec(0x04)

	void SetCorrelationValue(struct FKxItemTable KxItemTable, int32_t A); // Function WBP_AllAuxiliarySkill.WBP_AllAuxiliarySkill_C.SetCorrelationValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_AllAuxiliarySkill.WBP_AllAuxiliarySkill_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ItemsInfo(struct UKxInventoryObject* ItemData); // Function WBP_AllAuxiliarySkill.WBP_AllAuxiliarySkill_C.ItemsInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_AllAuxiliarySkill(int32_t EntryPoint); // Function WBP_AllAuxiliarySkill.WBP_AllAuxiliarySkill_C.ExecuteUbergraph_WBP_AllAuxiliarySkill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

