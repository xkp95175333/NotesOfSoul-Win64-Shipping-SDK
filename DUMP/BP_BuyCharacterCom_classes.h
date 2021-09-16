// BlueprintGeneratedClass BP_BuyCharacterCom.BP_BuyCharacterCom_C
// Size: 0x1e8 (Inherited: 0x151)
struct UBP_BuyCharacterCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* BuyCharacterButton; // 0x160(0x08)
	int32_t CharacterID; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x170(0x08)
	int32_t Seconds; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TMap<int32_t, int32_t> CoinMap; // 0x180(0x50)
	struct TArray<struct FConfirmCoinData> ConfirmCoinData; // 0x1d0(0x10)
	struct UUIText* BuyCharacterText; // 0x1e0(0x08)

	void UpdateTextLanguage(); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.UpdateTextLanguage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetVaildSeconds(int32_t EndSeconds, int32_t OffsetSeconds); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.GetVaildSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExperienceTime(struct FText NewParam); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.GetExperienceTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetItemType(int32_t Type); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.GetItemType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBuyCharacter(); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.InitBuyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickUnlock(); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.ClickUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectCharater(bool bUnlock); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.SelectCharater // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSelectCharacter(int32_t ID); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.CheckSelectCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckExpersionCharacter(bool bUnlock, int32_t startTime, int32_t endTime); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.CheckExpersionCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BuyCharacterCom(int32_t EntryPoint); // Function BP_BuyCharacterCom.BP_BuyCharacterCom_C.ExecuteUbergraph_BP_BuyCharacterCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

