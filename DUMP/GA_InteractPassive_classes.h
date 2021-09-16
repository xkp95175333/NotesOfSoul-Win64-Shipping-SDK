// BlueprintGeneratedClass GA_InteractPassive.GA_InteractPassive_C
// Size: 0x4f8 (Inherited: 0x490)
struct UGA_InteractPassive_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UKxInteractBoxComponent* CurTargetCom; // 0x498(0x08)
	struct UAbilityTask_WaitInputPress* PressTask; // 0x4a0(0x08)
	struct UAbilityTask_WaitInputRelease* ReleaseTask; // 0x4a8(0x08)
	struct ANOS_PlayerBase* Owner; // 0x4b0(0x08)
	struct UUserWidget* UI; // 0x4b8(0x08)
	struct UUserWidget* InteractWidgetClass; // 0x4c0(0x08)
	struct ULGUIPrefab* InteractPrefab; // 0x4c8(0x08)
	struct ULGUIPrefab* PanpaiPrefab; // 0x4d0(0x08)
	struct ULGUIPrefab* FangyuePrefab; // 0x4d8(0x08)
	struct AActor* OwnerCharacter; // 0x4e0(0x08)
	struct ULGUIPrefab* ChuanYuePrefab; // 0x4e8(0x08)
	struct ANOS_PlayerHuman* InteractHuman; // 0x4f0(0x08)

	struct FGameplayAbilityTargetDataHandle MakeResult(struct UKxInteractBoxComponent* NewParam); // Function GA_InteractPassive.GA_InteractPassive_C.MakeResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnTargetHealthStateChange(enum class EHealthState State); // Function GA_InteractPassive.GA_InteractPassive_C.OnTargetHealthStateChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool Is Wolf(struct APawn* Target); // Function GA_InteractPassive.GA_InteractPassive_C.Is Wolf // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void RemoveYellowOutline(); // Function GA_InteractPassive.GA_InteractPassive_C.RemoveYellowOutline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool DistanceCheck(struct UKxInteractBoxComponent* InteractBox, struct FVector Location); // Function GA_InteractPassive.GA_InteractPassive_C.DistanceCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AddYellowOutline(struct AActor* TracedActor); // Function GA_InteractPassive.GA_InteractPassive_C.AddYellowOutline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Team(bool Team); // Function GA_InteractPassive.GA_InteractPassive_C.Team // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ShowHeadWidget(struct ANOS_PlayerBase* Target, bool Show); // Function GA_InteractPassive.GA_InteractPassive_C.ShowHeadWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WhetherCreateInteractPrefab(bool WhetherCreate); // Function GA_InteractPassive.GA_InteractPassive_C.WhetherCreateInteractPrefab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool Check Distance(struct UKxInteractBoxComponent* InteractBox); // Function GA_InteractPassive.GA_InteractPassive_C.Check Distance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void AddInteractPrefab(); // Function GA_InteractPassive.GA_InteractPassive_C.AddInteractPrefab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndOnceInteract(); // Function GA_InteractPassive.GA_InteractPassive_C.EndOnceInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetInteractText(); // Function GA_InteractPassive.GA_InteractPassive_C.GetInteractText // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetInteractTag(enum class EInteractType Type, struct FGameplayTag Tag); // Function GA_InteractPassive.GA_InteractPassive_C.GetInteractTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetTarget(struct FGameplayAbilityTargetDataHandle Handle, struct AActor* Actor); // Function GA_InteractPassive.GA_InteractPassive_C.GetTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnPress_B52872564BBB3C4AE503BF956ED8CAFB(float TimeWaited); // Function GA_InteractPassive.GA_InteractPassive_C.OnPress_B52872564BBB3C4AE503BF956ED8CAFB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_BB37200E41527979213E618F7E0F8563(float TimeHeld); // Function GA_InteractPassive.GA_InteractPassive_C.OnRelease_BB37200E41527979213E618F7E0F8563 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_B61CACED48E1B14E9A55B4BD87A38DE0(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceNoImpact_B61CACED48E1B14E9A55B4BD87A38DE0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_B61CACED48E1B14E9A55B4BD87A38DE0(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceImpact_B61CACED48E1B14E9A55B4BD87A38DE0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_BF5AF758455388B9F32E47AD66B73912(); // Function GA_InteractPassive.GA_InteractPassive_C.OnFinish_BF5AF758455388B9F32E47AD66B73912 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_4EFDD8F64862D2C8B1D893AEFAB07076(); // Function GA_InteractPassive.GA_InteractPassive_C.Removed_4EFDD8F64862D2C8B1D893AEFAB07076 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_CEC59C994A60E8DE5320CEAE841862DA(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceNoImpact_CEC59C994A60E8DE5320CEAE841862DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_CEC59C994A60E8DE5320CEAE841862DA(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceImpact_CEC59C994A60E8DE5320CEAE841862DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_05042B5E42604C4734E071AF3E5ABAA0(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceNoImpact_05042B5E42604C4734E071AF3E5ABAA0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_05042B5E42604C4734E071AF3E5ABAA0(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceImpact_05042B5E42604C4734E071AF3E5ABAA0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_AAE4298143F5FFB19541809522F454D2(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceNoImpact_AAE4298143F5FFB19541809522F454D2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_AAE4298143F5FFB19541809522F454D2(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceImpact_AAE4298143F5FFB19541809522F454D2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoImpact_8541CB974081FE238D9192807FF5E282(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceNoImpact_8541CB974081FE238D9192807FF5E282 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceImpact_8541CB974081FE238D9192807FF5E282(struct FGameplayAbilityTargetDataHandle Data); // Function GA_InteractPassive.GA_InteractPassive_C.OnTraceImpact_8541CB974081FE238D9192807FF5E282 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_InteractPassive.GA_InteractPassive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHealthState_Event_1(enum class EHealthState OnHealthState); // Function GA_InteractPassive.GA_InteractPassive_C.OnHealthState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterDominated_Event_1(); // Function GA_InteractPassive.GA_InteractPassive_C.OnCharacterDominated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_InteractPassive(int32_t EntryPoint); // Function GA_InteractPassive.GA_InteractPassive_C.ExecuteUbergraph_GA_InteractPassive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

