// BlueprintGeneratedClass GA_Door.GA_Door_C
// Size: 0x4f8 (Inherited: 0x490)
struct UGA_Door_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_Door* Door; // 0x498(0x08)
	struct AKxCharacter* Character; // 0x4a0(0x08)
	int32_t InteractIndex; // 0x4a8(0x04)
	bool IsHuman; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct AActor* Elevator; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_XiaoPiCanSee; // 0x4b8(0x08)
	struct AActor* InteractActor; // 0x4c0(0x08)
	struct ACharacter* InteractCharacter; // 0x4c8(0x08)
	struct UKxInteractBoxComponent* InteractBoxComponent; // 0x4d0(0x08)
	struct FGameplayTagContainer InstigatorTags; // 0x4d8(0x20)

	void SendEvent_InteractActor(struct AActor* SendtActor, struct AActor* InteractPlayer); // Function GA_Door.GA_Door_C.SendEvent_InteractActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetOpenDoorAnim(bool IsOpen, bool IsHuamn, struct UAnimMontage* ManAnim, struct UAnimMontage* WomanAnim); // Function GA_Door.GA_Door_C.GetOpenDoorAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnCancelled_5AA689CD4E8DE20D686C469EAA51F40C(); // Function GA_Door.GA_Door_C.OnCancelled_5AA689CD4E8DE20D686C469EAA51F40C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_5AA689CD4E8DE20D686C469EAA51F40C(); // Function GA_Door.GA_Door_C.OnInterrupted_5AA689CD4E8DE20D686C469EAA51F40C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_5AA689CD4E8DE20D686C469EAA51F40C(); // Function GA_Door.GA_Door_C.OnBlendOut_5AA689CD4E8DE20D686C469EAA51F40C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_5AA689CD4E8DE20D686C469EAA51F40C(); // Function GA_Door.GA_Door_C.OnCompleted_5AA689CD4E8DE20D686C469EAA51F40C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_3FE26A2243694D615A192C9FE3E26CC1(); // Function GA_Door.GA_Door_C.OnCancelled_3FE26A2243694D615A192C9FE3E26CC1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_3FE26A2243694D615A192C9FE3E26CC1(); // Function GA_Door.GA_Door_C.OnInterrupted_3FE26A2243694D615A192C9FE3E26CC1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_3FE26A2243694D615A192C9FE3E26CC1(); // Function GA_Door.GA_Door_C.OnBlendOut_3FE26A2243694D615A192C9FE3E26CC1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_3FE26A2243694D615A192C9FE3E26CC1(); // Function GA_Door.GA_Door_C.OnCompleted_3FE26A2243694D615A192C9FE3E26CC1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_697C96DA46D7C820842FAD9EA9CB8341(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.EventReceived_697C96DA46D7C820842FAD9EA9CB8341 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_697C96DA46D7C820842FAD9EA9CB8341(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCancelled_697C96DA46D7C820842FAD9EA9CB8341 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_697C96DA46D7C820842FAD9EA9CB8341(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnInterrupted_697C96DA46D7C820842FAD9EA9CB8341 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_697C96DA46D7C820842FAD9EA9CB8341(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnBlendOut_697C96DA46D7C820842FAD9EA9CB8341 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_697C96DA46D7C820842FAD9EA9CB8341(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCompleted_697C96DA46D7C820842FAD9EA9CB8341 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_B6BF4DF1481DA68C39F1F79C10953265(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.EventReceived_B6BF4DF1481DA68C39F1F79C10953265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B6BF4DF1481DA68C39F1F79C10953265(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCancelled_B6BF4DF1481DA68C39F1F79C10953265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B6BF4DF1481DA68C39F1F79C10953265(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnInterrupted_B6BF4DF1481DA68C39F1F79C10953265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B6BF4DF1481DA68C39F1F79C10953265(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnBlendOut_B6BF4DF1481DA68C39F1F79C10953265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B6BF4DF1481DA68C39F1F79C10953265(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCompleted_B6BF4DF1481DA68C39F1F79C10953265 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_698BE39F4ABD599DDC6319BAC26D28F3(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.EventReceived_698BE39F4ABD599DDC6319BAC26D28F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_698BE39F4ABD599DDC6319BAC26D28F3(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCancelled_698BE39F4ABD599DDC6319BAC26D28F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_698BE39F4ABD599DDC6319BAC26D28F3(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnInterrupted_698BE39F4ABD599DDC6319BAC26D28F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_698BE39F4ABD599DDC6319BAC26D28F3(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnBlendOut_698BE39F4ABD599DDC6319BAC26D28F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_698BE39F4ABD599DDC6319BAC26D28F3(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.OnCompleted_698BE39F4ABD599DDC6319BAC26D28F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Door.GA_Door_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Door.GA_Door_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Door(int32_t EntryPoint); // Function GA_Door.GA_Door_C.ExecuteUbergraph_GA_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

