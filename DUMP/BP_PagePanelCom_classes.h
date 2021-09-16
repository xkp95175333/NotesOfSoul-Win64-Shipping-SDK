// BlueprintGeneratedClass BP_PagePanelCom.BP_PagePanelCom_C
// Size: 0x200 (Inherited: 0x151)
struct UBP_PagePanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t MaxPage; // 0x160(0x04)
	int32_t CurPage; // 0x164(0x04)
	int32_t MaxNumber; // 0x168(0x04)
	int32_t PageNumber; // 0x16c(0x04)
	struct UUISprite* PreviousPageSpr; // 0x170(0x08)
	struct UUIButtonComponent* PreviousPage; // 0x178(0x08)
	struct UUISprite* NextPageSpr; // 0x180(0x08)
	struct UUIButtonComponent* NextPage; // 0x188(0x08)
	struct UUIText* Page; // 0x190(0x08)
	struct FMulticastInlineDelegate Next; // 0x198(0x10)
	struct FMulticastInlineDelegate Previous; // 0x1a8(0x10)
	struct UUISprite* PreviousMorePageSpr; // 0x1b8(0x08)
	struct UUISprite* NextMorePageSpr; // 0x1c0(0x08)
	struct UUIButtonComponent* PreviousMorePage; // 0x1c8(0x08)
	struct UUIButtonComponent* NextMorePage; // 0x1d0(0x08)
	bool bShowMore; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FMulticastInlineDelegate MoreNext; // 0x1e0(0x10)
	struct FMulticastInlineDelegate MorePrevious; // 0x1f0(0x10)

	void MorePreviousClick(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MorePreviousClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MorePreviousEnter(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MorePreviousEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MorePreviousExit(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MorePreviousExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoreNextClick(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MoreNextClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoreNextEnter(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MoreNextEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoreNextExit(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MoreNextExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreviousClick(); // Function BP_PagePanelCom.BP_PagePanelCom_C.PreviousClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreviousEnter(); // Function BP_PagePanelCom.BP_PagePanelCom_C.PreviousEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreviousExit(); // Function BP_PagePanelCom.BP_PagePanelCom_C.PreviousExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NextClick(); // Function BP_PagePanelCom.BP_PagePanelCom_C.NextClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NextEnter(); // Function BP_PagePanelCom.BP_PagePanelCom_C.NextEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NextExit(); // Function BP_PagePanelCom.BP_PagePanelCom_C.NextExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCom(); // Function BP_PagePanelCom.BP_PagePanelCom_C.InitCom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update Info(int32_t MaxNumber); // Function BP_PagePanelCom.BP_PagePanelCom_C.Update Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_PagePanelCom.BP_PagePanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PagePanelCom.BP_PagePanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void DisNext(bool newBool); // Function BP_PagePanelCom.BP_PagePanelCom_C.DisNext // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisPrevious(bool newBool); // Function BP_PagePanelCom.BP_PagePanelCom_C.DisPrevious // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PagePanelCom(int32_t EntryPoint); // Function BP_PagePanelCom.BP_PagePanelCom_C.ExecuteUbergraph_BP_PagePanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void MorePrevious__DelegateSignature(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MorePrevious__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MoreNext__DelegateSignature(); // Function BP_PagePanelCom.BP_PagePanelCom_C.MoreNext__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Previous__DelegateSignature(); // Function BP_PagePanelCom.BP_PagePanelCom_C.Previous__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Next__DelegateSignature(); // Function BP_PagePanelCom.BP_PagePanelCom_C.Next__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

