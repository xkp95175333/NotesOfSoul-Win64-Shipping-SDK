// BlueprintGeneratedClass BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C
// Size: 0x2c0 (Inherited: 0x140)
struct UBP_SingleCharacterElementCom_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct FCharacterInfo HumanInfo; // 0x148(0xa8)
	struct FCharacterInfo GhostInfo; // 0x1f0(0xa8)
	struct FMulticastInlineDelegate OnSelectCharacter; // 0x298(0x10)
	struct UBP_ItemMarketLeftPanelCom_C* Parent; // 0x2a8(0x08)
	struct UUIText* CharacterNameText; // 0x2b0(0x08)
	struct UUISprite* CharacterICon; // 0x2b8(0x08)

	void InitSingleCharacterElement(); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.InitSingleCharacterElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update(); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickBtn(); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.OnClickBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SingleCharacterElementCom(int32_t EntryPoint); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.ExecuteUbergraph_BP_SingleCharacterElementCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnSelectCharacter__DelegateSignature(struct FCharacterInfo Info); // Function BP_SingleCharacterElementCom.BP_SingleCharacterElementCom_C.OnSelectCharacter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

