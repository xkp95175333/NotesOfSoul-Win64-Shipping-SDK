// BlueprintGeneratedClass BP_ItemNameElementCom.BP_ItemNameElementCom_C
// Size: 0x190 (Inherited: 0x140)
struct UBP_ItemNameElementCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	int32_t ItemId; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FText ItemName; // 0x150(0x18)
	struct FMulticastInlineDelegate OnSelecte; // 0x168(0x10)
	struct UUIText* ItemNameText; // 0x178(0x08)
	struct FMulticastInlineDelegate OnHover; // 0x180(0x10)

	void InitItemNameElement(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.InitItemNameElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Show(int32_t ItemId, struct FText ItemName); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickThisButton(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.OnClickThisButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnter(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLevel(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.OnLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WaitLoadComponent(); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.WaitLoadComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemNameElementCom(int32_t EntryPoint); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.ExecuteUbergraph_BP_ItemNameElementCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnHover__DelegateSignature(bool bHover); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSelecte__DelegateSignature(int32_t ID, struct FText Name); // Function BP_ItemNameElementCom.BP_ItemNameElementCom_C.OnSelecte__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

