// BlueprintGeneratedClass BP_NanGong.BP_NanGong_C
// Size: 0x2f68 (Inherited: 0x2f29)
struct ABP_NanGong_C : ABP_PlayerHumanBase_C {
	char pad_2F29[0x7]; // 0x2f29(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f30(0x08)
	struct UWidgetComponent* Widget1; // 0x2f38(0x08)
	bool bIsSwordRide; // 0x2f40(0x01)
	bool bIsDownF; // 0x2f41(0x01)
	char pad_2F42[0x6]; // 0x2f42(0x06)
	struct ABP_PlayerHumanBase_C* SwordPassenger; // 0x2f48(0x08)
	bool bHasSwordPassenger; // 0x2f50(0x01)
	char pad_2F51[0x7]; // 0x2f51(0x07)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x2f58(0x10)

	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_NanGong.BP_NanGong_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HidenHeadWidget(bool Hidden); // Function BP_NanGong.BP_NanGong_C.HidenHeadWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowSwordRide(bool Index, bool bIsMe); // Function BP_NanGong.BP_NanGong_C.ShowSwordRide // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteJumpAbility(); // Function BP_NanGong.BP_NanGong_C.ExecuteJumpAbility // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_NanGong(int32_t EntryPoint); // Function BP_NanGong.BP_NanGong_C.ExecuteUbergraph_BP_NanGong // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void NewEventDispatcher_0__DelegateSignature(); // Function BP_NanGong.BP_NanGong_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

