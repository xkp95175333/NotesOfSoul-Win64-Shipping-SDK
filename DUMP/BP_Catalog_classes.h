// BlueprintGeneratedClass BP_Catalog.BP_Catalog_C
// Size: 0x16b (Inherited: 0x140)
struct UBP_Catalog_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct FText Ctatalog; // 0x148(0x18)
	struct UBP_RankingListData_C* RankingListData; // 0x160(0x08)
	bool SetOn; // 0x168(0x01)
	bool IsRaycast; // 0x169(0x01)
	enum class E_Subdirectory Subdirectory; // 0x16a(0x01)

	void SetBasicInformation(struct UBP_RankingListData_C* RankingListData, struct FText Ctatalog, enum class E_Subdirectory Subdirectory, bool SetOn, bool IsRaycast); // Function BP_Catalog.BP_Catalog_C.SetBasicInformation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_Catalog.BP_Catalog_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Catalog.BP_Catalog_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Refresh(bool Is); // Function BP_Catalog.BP_Catalog_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Catalog(int32_t EntryPoint); // Function BP_Catalog.BP_Catalog_C.ExecuteUbergraph_BP_Catalog // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

