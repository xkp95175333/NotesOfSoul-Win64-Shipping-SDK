// BlueprintGeneratedClass BP_ItemBox.BP_ItemBox_C
// Size: 0x218 (Inherited: 0x1e0)
struct UBP_ItemBox_C : UBP_BaseShopPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)
	struct UUIItem* Box; // 0x1e8(0x08)
	struct TArray<struct FNOS_Store> SuitData; // 0x1f0(0x10)
	struct TArray<struct UBP_ItemPanelCom_C*> Item Panel Com List; // 0x200(0x10)
	struct UUIItem* ItemQiDai; // 0x210(0x08)

	void Update Data(); // Function BP_ItemBox.BP_ItemBox_C.Update Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetData(struct TArray<struct FNOS_Store> Data); // Function BP_ItemBox.BP_ItemBox_C.SetData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ItemBox.BP_ItemBox_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemBox(); // Function BP_ItemBox.BP_ItemBox_C.InitItemBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemBox.BP_ItemBox_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EnterClip(); // Function BP_ItemBox.BP_ItemBox_C.EnterClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExitClip(); // Function BP_ItemBox.BP_ItemBox_C.ExitClip // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePanelData(); // Function BP_ItemBox.BP_ItemBox_C.UpdatePanelData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemBox(int32_t EntryPoint); // Function BP_ItemBox.BP_ItemBox_C.ExecuteUbergraph_BP_ItemBox // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

