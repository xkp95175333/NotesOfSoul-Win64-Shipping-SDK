// BlueprintGeneratedClass BP_GiftConfirmCom.BP_GiftConfirmCom_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_GiftConfirmCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIText* TipsText; // 0x160(0x08)
	struct UUITextInputComponent* TextInput; // 0x168(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x170(0x08)
	struct UUIText* TextInputContent; // 0x178(0x08)

	void Set Tips(int32_t price, struct FString ItemNmae, int32_t Num, struct FString FriendName); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.Set Tips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGiftConfirm(); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.InitGiftConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConfirm(); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.OnClickConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickCancel(); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.OnClickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OpenGiftConfirmPanel(int32_t price, struct FString ItemNmae, int32_t Num, struct FString FriendName); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.OpenGiftConfirmPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GiftConfirmCom(int32_t EntryPoint); // Function BP_GiftConfirmCom.BP_GiftConfirmCom_C.ExecuteUbergraph_BP_GiftConfirmCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

