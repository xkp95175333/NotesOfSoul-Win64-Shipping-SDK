// BlueprintGeneratedClass BP_QualitySelectItemCom.BP_QualitySelectItemCom_C
// Size: 0x168 (Inherited: 0x140)
struct UBP_QualitySelectItemCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	enum class EClothQualityType QualityType; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate OnSelectQuality; // 0x150(0x10)
	struct UUIText* QualityItemButtonText; // 0x160(0x08)

	void InitData(); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitQualityElement(); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.InitQualityElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickQualityType(); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.OnClickQualityType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_QualitySelectItemCom(int32_t EntryPoint); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.ExecuteUbergraph_BP_QualitySelectItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnSelectQuality__DelegateSignature(enum class EClothQualityType inQuality); // Function BP_QualitySelectItemCom.BP_QualitySelectItemCom_C.OnSelectQuality__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

