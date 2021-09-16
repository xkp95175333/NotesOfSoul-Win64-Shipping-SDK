// Class NotesOfSoul.AbilityTask_PlayMontageAddNotify
// Size: 0x130 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAddNotify : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0xd0(0x10)
	char pad_E0[0x30]; // 0xe0(0x30)
	struct UAnimMontage* MontageToPlay; // 0x110(0x08)
	float Rate; // 0x118(0x04)
	struct FName StartSection; // 0x11c(0x08)
	float AnimRootMotionTranslationScale; // 0x124(0x04)
	float StartTimeSeconds; // 0x128(0x04)
	bool bStopWhenAbilityEnds; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.OnNotifyEndReceived // (Final|Native|Public|HasOutParms) // @ game+0x19e9c40
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.OnNotifyBeginReceived // (Final|Native|Public|HasOutParms) // @ game+0x19e9b50
	void OnMontageInterrupted(); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.OnMontageInterrupted // (Final|Native|Public) // @ game+0x19e9b30
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.OnMontageEnded // (Final|Native|Public) // @ game+0x19e9a60
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.OnMontageBlendingOut // (Final|Native|Public) // @ game+0x19e9990
	struct UAbilityTask_PlayMontageAddNotify* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function NotesOfSoul.AbilityTask_PlayMontageAddNotify.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19e8190
};

// Class NotesOfSoul.ComboBoxText
// Size: 0xe08 (Inherited: 0x108)
struct UComboBoxText : UWidget {
	struct TArray<struct FText> DefaultOptions; // 0x108(0x10)
	struct FText SelectedOption; // 0x118(0x18)
	struct FComboBoxStyle WidgetStyle; // 0x130(0x3f0)
	struct FTableRowStyle ItemStyle; // 0x520(0x7c8)
	struct FMargin ContentPadding; // 0xce8(0x10)
	float MaxListHeight; // 0xcf8(0x04)
	bool HasDownArrow; // 0xcfc(0x01)
	bool EnableGamepadNavigationMode; // 0xcfd(0x01)
	char pad_CFE[0x2]; // 0xcfe(0x02)
	struct FSlateFontInfo Font; // 0xd00(0x58)
	struct FSlateColor ForegroundColor; // 0xd58(0x28)
	bool bIsFocusable; // 0xd80(0x01)
	char pad_D81[0x3]; // 0xd81(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xd84(0x10)
	char pad_D94[0x4]; // 0xd94(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xd98(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xda8(0x10)
	char pad_DB8[0x50]; // 0xdb8(0x50)

	void SetSelectedOption(struct FText Option); // Function NotesOfSoul.ComboBoxText.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x19ea4a0
	void SetSelectedIndex(int32_t Index); // Function NotesOfSoul.ComboBoxText.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x19ea410
	bool RemoveOption(struct FText Option); // Function NotesOfSoul.ComboBoxText.RemoveOption // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19ea250
	void RefreshOptions(); // Function NotesOfSoul.ComboBoxText.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x19e9d30
	void OnSelectionChangedEvent__DelegateSignature(struct FText SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction NotesOfSoul.ComboBoxText.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1ec38f0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction NotesOfSoul.ComboBoxText.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1ec38f0
	bool IsOpen(); // Function NotesOfSoul.ComboBoxText.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9890
	struct FText GetSelectedOption(); // Function NotesOfSoul.ComboBoxText.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e93d0
	int32_t GetSelectedIndex(); // Function NotesOfSoul.ComboBoxText.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e93a0
	int32_t GetOptionCount(); // Function NotesOfSoul.ComboBoxText.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9340
	struct FText GetOptionAtIndex(int32_t Index); // Function NotesOfSoul.ComboBoxText.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9250
	int32_t FindOptionIndex(struct FText Option); // Function NotesOfSoul.ComboBoxText.FindOptionIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e85b0
	void ClearSelection(); // Function NotesOfSoul.ComboBoxText.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7db0
	void ClearOptions(); // Function NotesOfSoul.ComboBoxText.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7d90
	void AddOption(struct FText Option); // Function NotesOfSoul.ComboBoxText.AddOption // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e78b0
};

// Class NotesOfSoul.DressBaseAnimInstace
// Size: 0x2d0 (Inherited: 0x2c0)
struct UDressBaseAnimInstace : UAnimInstance {
	struct TArray<struct FBoneReference> BoneRefs; // 0x2b8(0x10)
};

// Class NotesOfSoul.NOS_GameplayAbility
// Size: 0x490 (Inherited: 0x3b0)
struct UNOS_GameplayAbility : UGameplayAbility {
	bool bActivateAbilityOnGranted; // 0x3b0(0x01)
	enum class ENOSAbilityInputID AbilityInputID; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct TArray<enum class ENOSAbilityInputID> AbilityInputArray; // 0x3b8(0x10)
	bool bActivateOnInput; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t SkillID; // 0x3cc(0x04)
	float CooldownDuration; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FGameplayTagContainer CooldownTags; // 0x3d8(0x20)
	bool bIgnoreCancelAllAbilitiesAdvanced; // 0x3f8(0x01)
	bool bRemoteActivateAbilityOnGranted; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float AbilityCost; // 0x3fc(0x04)
	struct FGameplayTagContainer TempCooldownTags; // 0x400(0x20)
	struct FActiveGameplayEffectHandle CDHandle; // 0x420(0x08)
	struct FGameplayTagContainer AbilityCanceledWithTags; // 0x428(0x20)
	struct TArray<struct UAbilityTask*> CancelGATasks; // 0x448(0x10)
	struct FGameplayTagContainer AbilityCanceledWithTagsRemoved; // 0x458(0x20)
	struct TArray<struct UAbilityTask*> TagRemovedCancelGATasks; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)

	struct FGameplayAbilityTargetDataHandle SpawnTargetDataHandleBySingleTargetHit(struct FGameplayAbilityTargetData_SingleTargetHit TargetData); // Function NotesOfSoul.NOS_GameplayAbility.SpawnTargetDataHandleBySingleTargetHit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a1b160
	struct FGameplayAbilityTargetDataHandle SpawnTargetDataHandleByLocationInfo(struct FGameplayAbilityTargetData_LocationInfo TargetData); // Function NotesOfSoul.NOS_GameplayAbility.SpawnTargetDataHandleByLocationInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a1af50
	struct FGameplayAbilityTargetDataHandle SpawnTargetDataHandleByActorArray(struct FGameplayAbilityTargetData_ActorArray TargetData); // Function NotesOfSoul.NOS_GameplayAbility.SpawnTargetDataHandleByActorArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a1ad90
	void SetCoolDownDuration(float NewCoolDownDuration); // Function NotesOfSoul.NOS_GameplayAbility.SetCoolDownDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1ab50
	void RemoveGamePlayTagRuntime(struct FGameplayTagContainer AbilityTag); // Function NotesOfSoul.NOS_GameplayAbility.RemoveGamePlayTagRuntime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1aa70
	void OnUpgrade(); // Function NotesOfSoul.NOS_GameplayAbility.OnUpgrade // (Native|Event|Public|BlueprintEvent) // @ game+0x1a1aa30
	bool NOSCheckCost(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo); // Function NotesOfSoul.NOS_GameplayAbility.NOSCheckCost // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1a1a220
	void NOSApplyCost(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilityActivationInfo ActivationInfo); // Function NotesOfSoul.NOS_GameplayAbility.NOSApplyCost // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1a1a0a0
	void K2_OnGiveAbility(); // Function NotesOfSoul.NOS_GameplayAbility.K2_OnGiveAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	struct FName GetSkillInfoKeyNameWithLevel(struct FString SkillInfoKeyName); // Function NotesOfSoul.NOS_GameplayAbility.GetSkillInfoKeyNameWithLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19ee0
	int32_t GetPredictionKeyValue(); // Function NotesOfSoul.NOS_GameplayAbility.GetPredictionKeyValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a19e90
	struct APlayerController* GetPlayerControllerFromActorInfo(); // Function NotesOfSoul.NOS_GameplayAbility.GetPlayerControllerFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a19e60
	struct UMovementComponent* GetMovementComponentFromActorInfo(); // Function NotesOfSoul.NOS_GameplayAbility.GetMovementComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a19d00
	struct TArray<struct FGameplayTag> GetCurrentOwnedGamePlayTags(); // Function NotesOfSoul.NOS_GameplayAbility.GetCurrentOwnedGamePlayTags // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19c00
	float GetCost(); // Function NotesOfSoul.NOS_GameplayAbility.GetCost // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1a19bc0
	struct UAnimInstance* GetAnimInstanceFromActorInfo(); // Function NotesOfSoul.NOS_GameplayAbility.GetAnimInstanceFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a19b90
	int32_t GetAbilityLevelFromHandle(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_GameplayAbility.GetAbilityLevelFromHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19b00
	struct UNOS_AbilityItem* GetAbilityItem(); // Function NotesOfSoul.NOS_GameplayAbility.GetAbilityItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a19ad0
	void ClearThisAbility(); // Function NotesOfSoul.NOS_GameplayAbility.ClearThisAbility // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1a19ab0
	bool CheckCostForUI(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo); // Function NotesOfSoul.NOS_GameplayAbility.CheckCostForUI // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1a19960
	void ApplyCharacterSoundCueWithTag(struct FGameplayTagContainer CueTag, bool RemoveOnAbilityEnd); // Function NotesOfSoul.NOS_GameplayAbility.ApplyCharacterSoundCueWithTag // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19000
	void AddGamePlayTagRuntime(struct FGameplayTagContainer AbilityTag); // Function NotesOfSoul.NOS_GameplayAbility.AddGamePlayTagRuntime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a18c30
};

// Class NotesOfSoul.GA_XiaoGangMainTalentBase
// Size: 0x498 (Inherited: 0x490)
struct UGA_XiaoGangMainTalentBase : UNOS_GameplayAbility {
	struct ANOS_XiaoGangBulletBase* BulletClass; // 0x490(0x08)

	void SpawnBullet(struct FTransform SpawnTransform, struct FGameplayEffectSpecHandle StunHandle, bool EnhancedEdition); // Function NotesOfSoul.GA_XiaoGangMainTalentBase.SpawnBullet // (Final|Native|Private|HasDefaults|BlueprintCallable) // @ game+0x19ea580
};

// Class NotesOfSoul.NotConfigSetting
// Size: 0x38 (Inherited: 0x38)
struct UNotConfigSetting : UDeveloperSettings {
};

// Class NotesOfSoul.LangRenShaSetting
// Size: 0x58 (Inherited: 0x38)
struct ULangRenShaSetting : UNotConfigSetting {
	float NightSkillCD; // 0x38(0x04)
	float NightEffectDuration; // 0x3c(0x04)
	float VoteCD; // 0x40(0x04)
	float VoteDuration; // 0x44(0x04)
	float LRSTransformEffectDuration; // 0x48(0x04)
	float LRSTransformCD; // 0x4c(0x04)
	float EnvironmentParam; // 0x50(0x04)
	bool EnableMeetingStealth; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)

	struct ULangRenShaSetting* GetInstanceImp(); // Function NotesOfSoul.LangRenShaSetting.GetInstanceImp // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x19e91f0
};

// Class NotesOfSoul.NotLoginSetting
// Size: 0x48 (Inherited: 0x38)
struct UNotLoginSetting : UNotConfigSetting {
	struct FString LoginIP; // 0x38(0x10)

	struct UNotLoginSetting* GetInstanceImp(); // Function NotesOfSoul.NotLoginSetting.GetInstanceImp // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x19e9220
};

// Class NotesOfSoul.NOS_GhostAnimInstanceBase
// Size: 0x440 (Inherited: 0x2c0)
struct UNOS_GhostAnimInstanceBase : UAnimInstance {
	struct FRotator AimDiretion; // 0x2b8(0x0c)
	struct FRotator SmoothAim; // 0x2c4(0x0c)
	float TurnCheckMinAngle; // 0x2d0(0x04)
	float AimYawRateLimit; // 0x2d4(0x04)
	float ElapsedDelayTime; // 0x2d8(0x04)
	float DelaTimeX; // 0x2dc(0x04)
	struct FTurnAssets TurnAsset; // 0x2e0(0x100)
	struct FTurnAsset TargetAsset; // 0x3e0(0x20)
	float TurnScale; // 0x400(0x04)
	bool bIsInAir; // 0x404(0x01)
	float Roll; // 0x408(0x04)
	float Pitch; // 0x40c(0x04)
	float Yaw; // 0x410(0x04)
	float Speed; // 0x414(0x04)
	float Direction; // 0x418(0x04)
	bool bIsMove; // 0x41c(0x01)
	struct ACharacter* OwnerCharacter; // 0x420(0x08)
	struct ANOS_PlayerGhost* PureGhostCharacter; // 0x428(0x08)
	char pad_432[0xe]; // 0x432(0x0e)
};

// Class NotesOfSoul.NOS_25BoyAnimInstance
// Size: 0x440 (Inherited: 0x440)
struct UNOS_25BoyAnimInstance : UNOS_GhostAnimInstanceBase {
};

// Class NotesOfSoul.NOS_AbilityItem
// Size: 0x120 (Inherited: 0xf0)
struct UNOS_AbilityItem : UKxConsumableObject {
	enum class ENOSAbilityInputID UPressENum; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0xf4(0x04)
	struct UNOS_GameplayAbility* ItemAbility; // 0xf8(0x08)
	struct FGameplayTagContainer DescriptionTag; // 0x100(0x20)
};

// Class NotesOfSoul.NOS_AbilitySysBlueprintFunction
// Size: 0x28 (Inherited: 0x28)
struct UNOS_AbilitySysBlueprintFunction : UBlueprintFunctionLibrary {

	int32_t GetNumTargetDataHandle(struct FGameplayAbilityTargetDataHandle Handle); // Function NotesOfSoul.NOS_AbilitySysBlueprintFunction.GetNumTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb8d60
	void GetHitResultByTargetDataHandle(struct FGameplayAbilityTargetDataHandle Handle, int32_t Index, struct FHitResult HitResults); // Function NotesOfSoul.NOS_AbilitySysBlueprintFunction.GetHitResultByTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19e9060
	struct UGameplayEffect* GetGEInstByGESpec(struct FGameplayEffectSpec Spec); // Function NotesOfSoul.NOS_AbilitySysBlueprintFunction.GetGEInstByGESpec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19e8f90
	void GetDataFromTargetDataHandle(struct FGameplayAbilityTargetDataHandle Handle, int32_t Index, struct TArray<struct AActor*> Actors); // Function NotesOfSoul.NOS_AbilitySysBlueprintFunction.GetDataFromTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19e8c60
};

// Class NotesOfSoul.NOS_AbilitySystemComponent
// Size: 0x1448 (Inherited: 0x1308)
struct UNOS_AbilitySystemComponent : UAbilitySystemComponent {
	struct TMap<struct FGameplayAbilitySpecHandle, struct UNOS_AbilityItem*> HandleItemMap; // 0x1308(0x50)
	struct TArray<struct UNOS_GameplayAbility*> DefaultGrantAbilitys; // 0x1358(0x10)
	struct TArray<struct UNOS_GameplayAbility*> SpecialGrantAbilitys; // 0x1368(0x10)
	struct TArray<struct UNOS_GameplayEffect*> DefaultApplyEffect; // 0x1378(0x10)
	struct TArray<struct UNOS_AttributeSetBase*> OwnerAttrribute; // 0x1388(0x10)
	struct FMulticastInlineDelegate OnGameplayEffect; // 0x1398(0x10)
	struct FMulticastInlineDelegate OnGiveAbilityComplete; // 0x13a8(0x10)
	char pad_13B8[0x90]; // 0x13b8(0x90)

	void UpgradeAbility(struct FGameplayAbilitySpecHandle AbilityHandle); // Function NotesOfSoul.NOS_AbilitySystemComponent.UpgradeAbility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19ea990
	bool TryToActivateAbilityByClass(struct UNOS_GameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function NotesOfSoul.NOS_AbilitySystemComponent.TryToActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x19ea8c0
	void TryCancelActiveAbility(struct UGameplayAbility* InAbilityToActivate); // Function NotesOfSoul.NOS_AbilitySystemComponent.TryCancelActiveAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x19ea830
	bool StopCurrentMontage(struct UGameplayAbility* Ability, float Blend); // Function NotesOfSoul.NOS_AbilitySystemComponent.StopCurrentMontage // (Final|Native|Public|BlueprintCallable) // @ game+0x19ea760
	bool SetGameplayEffectDurationHandle(struct FActiveGameplayEffectHandle Handle, float NewDuration); // Function NotesOfSoul.NOS_AbilitySystemComponent.SetGameplayEffectDurationHandle // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x19ea330
	void RemoveMinimalReplicationGameplayTagsBP(struct FGameplayTagContainer GameplayTags); // Function NotesOfSoul.NOS_AbilitySystemComponent.RemoveMinimalReplicationGameplayTagsBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19ea170
	void RemoveMinimalReplicationGameplayTagBP(struct FGameplayTag GameplayTag); // Function NotesOfSoul.NOS_AbilitySystemComponent.RemoveMinimalReplicationGameplayTagBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19ea0c0
	void RemoveLooseGameplayTagsBP(struct FGameplayTagContainer TagContainer); // Function NotesOfSoul.NOS_AbilitySystemComponent.RemoveLooseGameplayTagsBP // (Final|Native|Public|BlueprintCallable) // @ game+0x19e9fb0
	bool RemoveGrantedAbilityWithClass(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.RemoveGrantedAbilityWithClass // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e9f10
	void RemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function NotesOfSoul.NOS_AbilitySystemComponent.RemoveGameplayCueLocal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e9d50
	void LogTag(struct FGameplayTag TagChange, int32_t NewCount); // Function NotesOfSoul.NOS_AbilitySystemComponent.LogTag // (Final|Native|Private) // @ game+0x19e98c0
	bool IsInputKeyDown(enum class ENOSAbilityInputID InputID); // Function NotesOfSoul.NOS_AbilitySystemComponent.IsInputKeyDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9800
	bool IsGetAbilitySpecActive(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_AbilitySystemComponent.IsGetAbilitySpecActive // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e9750
	bool HasAbilitySpecExitWithClass(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.HasAbilitySpecExitWithClass // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e96b0
	void GrantAbilityToPartner(struct UNOS_GameplayAbility* AbilityClass, struct FGameplayAbilitySpecHandle AbilitySpecHandle, int32_t AbilityLevel); // Function NotesOfSoul.NOS_AbilitySystemComponent.GrantAbilityToPartner // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e9590
	void GrantAbility(struct UNOS_GameplayAbility* AbilityClass, struct FGameplayAbilitySpecHandle AbilitySpecHandle, int32_t AbilityLevel); // Function NotesOfSoul.NOS_AbilitySystemComponent.GrantAbility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e9470
	int32_t GetPredictionKeyValue(); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetPredictionKeyValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e9370
	bool GetEffectTimeRemainingAndDuration(struct FGameplayTag OwningTag, float TimeRemaining, float Duration); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetEffectTimeRemainingAndDuration // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8e70
	float GetEffectTimeRemaining(struct FGameplayTag OwningTag); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetEffectTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19e8dd0
	struct TArray<struct FNOS_BUFFInfo> GetAllActiveGameEffectsBuffIDBP(); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAllActiveGameEffectsBuffIDBP // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8bc0
	void GetAllActiveGameEffectsBP(struct TArray<struct FGameplayEffectSpec> OutSpecCopies); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAllActiveGameEffectsBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e8b10
	struct TArray<struct UGameplayAbility*> GetActiveAbilityInstanceByTags(struct FGameplayTagContainer TagContainer); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetActiveAbilityInstanceByTags // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8a10
	struct TArray<struct FGameplayAbilitySpec> GetActivatableAbilitiesBP(); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetActivatableAbilitiesBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8920
	bool GetAbilityIsActiveFromClass(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAbilityIsActiveFromClass // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e8880
	struct UNOS_GameplayAbility* GetAbilityInstanceByHandle(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAbilityInstanceByHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19e87f0
	struct TArray<struct UGameplayAbility*> GetAbilityInstanceByClass(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAbilityInstanceByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8730
	struct UGameplayAbility* GetAbilityFromClass(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.GetAbilityFromClass // (Final|Native|Public|BlueprintCallable) // @ game+0x19e8690
	void ExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function NotesOfSoul.NOS_AbilitySystemComponent.ExecuteGameplayCueLocal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e83f0
	void ClientRemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function NotesOfSoul.NOS_AbilitySystemComponent.ClientRemoveGameplayCueLocal // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable|NetValidate) // @ game+0x19e7fb0
	void ClientExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function NotesOfSoul.NOS_AbilitySystemComponent.ClientExecuteGameplayCueLocal // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable|NetValidate) // @ game+0x19e7dd0
	void ClearAbilityBP(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_AbilitySystemComponent.ClearAbilityBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e7cf0
	void CancelAllAbilitiesBP(struct UGameplayAbility* Ignore); // Function NotesOfSoul.NOS_AbilitySystemComponent.CancelAllAbilitiesBP // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7c60
	void CancelAllAbilitiesAdvanced(); // Function NotesOfSoul.NOS_AbilitySystemComponent.CancelAllAbilitiesAdvanced // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7c40
	void CancelAbilityHandleBP(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_AbilitySystemComponent.CancelAbilityHandleBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e7ba0
	void CancelAbilityBP(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_AbilitySystemComponent.CancelAbilityBP // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7b10
	void CancelAbilitiesBP(struct FGameplayTagContainer WithTags, struct FGameplayTagContainer WithoutTags, struct UGameplayAbility* Ignore); // Function NotesOfSoul.NOS_AbilitySystemComponent.CancelAbilitiesBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e7980
	void AddMinimalReplicationGameplayTagsBP(struct FGameplayTagContainer GameplayTags); // Function NotesOfSoul.NOS_AbilitySystemComponent.AddMinimalReplicationGameplayTagsBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e77d0
	void AddMinimalReplicationGameplayTagBP(struct FGameplayTag GameplayTag); // Function NotesOfSoul.NOS_AbilitySystemComponent.AddMinimalReplicationGameplayTagBP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e7710
	void AddLooseGameplayTagsBP(struct FGameplayTagContainer TagContainer); // Function NotesOfSoul.NOS_AbilitySystemComponent.AddLooseGameplayTagsBP // (Final|Native|Public|BlueprintCallable) // @ game+0x19e7590
	void AddGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function NotesOfSoul.NOS_AbilitySystemComponent.AddGameplayCueLocal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19e73d0
};

// Class NotesOfSoul.NOS_AbilityTask
// Size: 0x80 (Inherited: 0x80)
struct UNOS_AbilityTask : UAbilityTask {
};

// Class NotesOfSoul.NOS_AIController
// Size: 0x328 (Inherited: 0x328)
struct ANOS_AIController : AKxAIController {
};

// Class NotesOfSoul.NOS_AIPCXiaoXiaoJiang
// Size: 0x328 (Inherited: 0x328)
struct ANOS_AIPCXiaoXiaoJiang : ANOS_AIController {
};

// Class NotesOfSoul.NOS_RangeBox
// Size: 0x250 (Inherited: 0x220)
struct ANOS_RangeBox : AActor {
	bool AgainCalculationRangeSize; // 0x220(0x01)
	bool IsContainChild; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct TArray<struct FVector> MaxXYZ; // 0x228(0x10)
	struct TArray<struct FVector> MinXYZ; // 0x238(0x10)
	struct UBoxComponent* BoxCom; // 0x248(0x08)

	void OnBoxEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_RangeBox.OnBoxEndOverlap // (Native|Public) // @ game+0x1a456f0
	void OnBoxBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_RangeBox.OnBoxBeginOverlap // (Native|Public|HasOutParms) // @ game+0x1a454f0
	bool IsVectorInAllActivityRange(struct FVector V3); // Function NotesOfSoul.NOS_RangeBox.IsVectorInAllActivityRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a450d0
};

// Class NotesOfSoul.NOS_AirPathfindingRange
// Size: 0x250 (Inherited: 0x250)
struct ANOS_AirPathfindingRange : ANOS_RangeBox {
};

// Class NotesOfSoul.NOS_AnimNotify
// Size: 0x38 (Inherited: 0x38)
struct UNOS_AnimNotify : UAnimNotify {
};

// Class NotesOfSoul.NOS_AnimNotify_PlayWalkSound
// Size: 0x78 (Inherited: 0x58)
struct UNOS_AnimNotify_PlayWalkSound : UAnimNotify_PlaySound {
	struct FGameplayTagContainer BlockSoundAbilityTags; // 0x58(0x20)
};

// Class NotesOfSoul.NOS_ArenaHUDBase
// Size: 0x310 (Inherited: 0x310)
struct ANOS_ArenaHUDBase : AKxHUDBase {
};

// Class NotesOfSoul.NOS_AsyncTaskAttributeChanged
// Size: 0x90 (Inherited: 0x30)
struct UNOS_AsyncTaskAttributeChanged : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnAttributeChanged; // 0x30(0x10)
	struct UAbilitySystemComponent* ASC; // 0x40(0x08)
	char pad_48[0x48]; // 0x48(0x48)

	struct UNOS_AsyncTaskAttributeChanged* ListenForAttributesChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct TArray<struct FGameplayAttribute> Attributes); // Function NotesOfSoul.NOS_AsyncTaskAttributeChanged.ListenForAttributesChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19f0dc0
	struct UNOS_AsyncTaskAttributeChanged* ListenForAttributeChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute); // Function NotesOfSoul.NOS_AsyncTaskAttributeChanged.ListenForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19f0c90
	void EndTask(); // Function NotesOfSoul.NOS_AsyncTaskAttributeChanged.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x19f0460
};

// Class NotesOfSoul.NOS_AsyncTaskCooldownChanged
// Size: 0x80 (Inherited: 0x30)
struct UNOS_AsyncTaskCooldownChanged : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnCooldownBegin; // 0x30(0x10)
	struct FMulticastInlineDelegate OnCooldownEnd; // 0x40(0x10)
	struct UNOS_AbilitySystemComponent* ASC; // 0x50(0x08)
	char pad_58[0x28]; // 0x58(0x28)

	struct UNOS_AsyncTaskCooldownChanged* ListenForCooldownChange(struct UNOS_AbilitySystemComponent* NOS_AbilitySystemComponent, struct FGameplayTagContainer CooldownTags, bool UseServerCooldown); // Function NotesOfSoul.NOS_AsyncTaskCooldownChanged.ListenForCooldownChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19f0f00
	void EndTask(); // Function NotesOfSoul.NOS_AsyncTaskCooldownChanged.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x19f0480
};

// Class NotesOfSoul.NOS_AsyncTaskEffectStackChanged
// Size: 0x68 (Inherited: 0x30)
struct UNOS_AsyncTaskEffectStackChanged : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnGameplayEffectAddOrRemove; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGameplayEffectStackChange; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGameplayEffectTimeChange; // 0x50(0x10)
	struct UAbilitySystemComponent* ASC; // 0x60(0x08)

	struct UNOS_AsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(struct UAbilitySystemComponent* AbilitySystemComponent); // Function NotesOfSoul.NOS_AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x19f1060
	void EndTask(); // Function NotesOfSoul.NOS_AsyncTaskEffectStackChanged.EndTask // (Final|Native|Private|BlueprintCallable) // @ game+0x19f04a0
};

// Class NotesOfSoul.NOS_AttributeSetBase
// Size: 0xe0 (Inherited: 0x30)
struct UNOS_AttributeSetBase : UAttributeSet {
	struct FGameplayAttributeData CurPower; // 0x30(0x10)
	struct FGameplayAttributeData MaxPower; // 0x40(0x10)
	struct FGameplayAttributeData CurHealth; // 0x50(0x10)
	struct FGameplayAttributeData MaxHealth; // 0x60(0x10)
	struct FGameplayAttributeData JogSpeed; // 0x70(0x10)
	struct FGameplayAttributeData JumpHeight; // 0x80(0x10)
	struct FGameplayAttributeData FogJumpHeight; // 0x90(0x10)
	struct FGameplayAttributeData SprintSpeed; // 0xa0(0x10)
	struct FGameplayAttributeData Damage; // 0xb0(0x10)
	struct FGameplayAttributeData Defend; // 0xc0(0x10)
	struct FGameplayAttributeData DamageReduction; // 0xd0(0x10)

	void OnRep_SprintSpeed(struct FGameplayAttributeData OldSprintSpeed); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_SprintSpeed // (Final|Native|Protected|HasOutParms) // @ game+0x19f1860
	void OnRep_MaxPower(struct FGameplayAttributeData OldMaxPower); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_MaxPower // (Final|Native|Protected|HasOutParms) // @ game+0x19f17c0
	void OnRep_MaxHealth(struct FGameplayAttributeData OldMaxHealth); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_MaxHealth // (Final|Native|Protected|HasOutParms) // @ game+0x19f1720
	void OnRep_JumpHeight(struct FGameplayAttributeData OldJumpHeight); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_JumpHeight // (Final|Native|Protected|HasOutParms) // @ game+0x19f1680
	void OnRep_JogSpeed(struct FGameplayAttributeData OldJogSpeed); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_JogSpeed // (Final|Native|Protected|HasOutParms) // @ game+0x19f15e0
	void OnRep_FogJumpHeight(struct FGameplayAttributeData OldFogJumpHeight); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_FogJumpHeight // (Final|Native|Protected|HasOutParms) // @ game+0x19f1540
	void OnRep_CurPower(struct FGameplayAttributeData OldCurPower); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_CurPower // (Final|Native|Protected|HasOutParms) // @ game+0x19f14a0
	void OnRep_CurHealth(struct FGameplayAttributeData OldCurHealth); // Function NotesOfSoul.NOS_AttributeSetBase.OnRep_CurHealth // (Final|Native|Protected|HasOutParms) // @ game+0x19f1400
};

// Class NotesOfSoul.NOS_AudioComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UNOS_AudioComponent : UActorComponent {
	struct TArray<struct UAudioComponent*> ActivatedAudioPlayer; // 0xb0(0x10)

	bool StopSound(struct TSoftObjectPtr<struct USoundBase> Sound); // Function NotesOfSoul.NOS_AudioComponent.StopSound // (Final|Native|Protected|BlueprintCallable) // @ game+0x19f2cb0
	bool PlaySound(struct TSoftObjectPtr<struct USoundBase> Sound, enum class EAudioPlayType AudioPlayType); // Function NotesOfSoul.NOS_AudioComponent.PlaySound // (Final|Native|Protected|BlueprintCallable) // @ game+0x19f1aa0
};

// Class NotesOfSoul.NOS_AudioMgr
// Size: 0x90 (Inherited: 0x30)
struct UNOS_AudioMgr : UGameInstanceSubsystem {
	struct UDataTable* HumanActionSoundDT; // 0x30(0x08)
	struct UDataTable* GhostActionSoundDT; // 0x38(0x08)
	char pad_40[0x50]; // 0x40(0x50)

	struct TSoftObjectPtr<struct USoundBase> GetPlayerActionSound(bool IsHuman, struct FString SkinId, enum class E_PlayerActionType PlayerActionType, enum class EPhysicalSurface PhysicalSurface); // Function NotesOfSoul.NOS_AudioMgr.GetPlayerActionSound // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f0980
};

// Class NotesOfSoul.NOS_BuffDunJiaFu
// Size: 0x70 (Inherited: 0x70)
struct UNOS_BuffDunJiaFu : UKxBuffObject {
};

// Class NotesOfSoul.NOS_BuffGuiXiFu
// Size: 0x70 (Inherited: 0x70)
struct UNOS_BuffGuiXiFu : UKxBuffObject {
};

// Class NotesOfSoul.NOS_BuffRadiusOutline
// Size: 0x98 (Inherited: 0x70)
struct UNOS_BuffRadiusOutline : UKxBuffObject {
	struct AKxCharacter* OwnerChar; // 0x70(0x08)
	struct UKxBuffComponent* BuffCom; // 0x78(0x08)
	float radis; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct ANOS_PlayerGhost* Ghost; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class NotesOfSoul.Nos_BuffShouXinYu
// Size: 0x78 (Inherited: 0x70)
struct UNos_BuffShouXinYu : UKxBuffObject {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class NotesOfSoul.NOS_BuffZhenHunFu
// Size: 0x70 (Inherited: 0x70)
struct UNOS_BuffZhenHunFu : UKxBuffObject {
};

// Class NotesOfSoul.NOS_Button
// Size: 0x548 (Inherited: 0x428)
struct UNOS_Button : UButton {
	struct UTexture2D* AdvancedHitTexture; // 0x428(0x08)
	int32_t AdvancedHitAlpha; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FSlateBrush NormalStyle; // 0x438(0x88)
	struct FSlateBrush InsteadStyle; // 0x4c0(0x88)

	void SetAdvancedHitTexture(struct UTexture2D* InTexture); // Function NotesOfSoul.NOS_Button.SetAdvancedHitTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2290
	void SetAdvancedHitAlpha(int32_t InAlpha); // Function NotesOfSoul.NOS_Button.SetAdvancedHitAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x19f21f0
	void OverrideNormalStyle(struct FSlateBrush Style); // Function NotesOfSoul.NOS_Button.OverrideNormalStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1900
	void NosUnHovered(); // Function NotesOfSoul.NOS_Button.NosUnHovered // (Final|Native|Public|BlueprintCallable) // @ game+0x19f13d0
	void NosReleased(); // Function NotesOfSoul.NOS_Button.NosReleased // (Final|Native|Public|BlueprintCallable) // @ game+0x19f13a0
	void NosPressed(); // Function NotesOfSoul.NOS_Button.NosPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1370
	void NosHovered(); // Function NotesOfSoul.NOS_Button.NosHovered // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1340
	void NosClick(); // Function NotesOfSoul.NOS_Button.NosClick // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1310
};

// Class NotesOfSoul.NOS_PropBox
// Size: 0x288 (Inherited: 0x220)
struct ANOS_PropBox : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct ANOS_InteractSpawnMgr* InteractSpawnMgr; // 0x230(0x08)
	struct FVector ItemUIPos; // 0x238(0x0c)
	bool ItemFollow; // 0x244(0x01)
	bool bInteractAfterCloseCollision; // 0x245(0x01)
	bool bIsPlayAnim; // 0x246(0x01)
	bool bIsOpen; // 0x247(0x01)
	char pad_248[0x8]; // 0x248(0x08)
	struct AKxPickupBase* Item; // 0x250(0x08)
	struct USoundBase* S_OpenSound; // 0x258(0x08)
	struct USoundBase* S_CloseSound; // 0x260(0x08)
	struct USceneComponent* RootCom; // 0x268(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x270(0x08)
	struct USceneComponent* SpawnPointCom; // 0x278(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x280(0x08)

	void TickAnim(float DeltaTime); // Function NotesOfSoul.NOS_PropBox.TickAnim // (Native|Public) // @ game+0x1a40ef0
	void SpawnItem(); // Function NotesOfSoul.NOS_PropBox.SpawnItem // (Final|Native|Public) // @ game+0x1a40eb0
	void SetPlaces(enum class ENOSPropRefreshPlaces _Places); // Function NotesOfSoul.NOS_PropBox.SetPlaces // (Final|Native|Public) // @ game+0x1a40bf0
	void SetInteractSpawnMgr(struct ANOS_InteractSpawnMgr* Mgr); // Function NotesOfSoul.NOS_PropBox.SetInteractSpawnMgr // (Final|Native|Public) // @ game+0x1a409e0
	void PlaySound(); // Function NotesOfSoul.NOS_PropBox.PlaySound // (Final|Native|Public) // @ game+0x1a403e0
	void MultiUse(); // Function NotesOfSoul.NOS_PropBox.MultiUse // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01e00
};

// Class NotesOfSoul.NOS_Cabinet
// Size: 0x2b8 (Inherited: 0x288)
struct ANOS_Cabinet : ANOS_PropBox {
	struct FRotator OpenRotation; // 0x288(0x0c)
	struct FRotator CloseRotation; // 0x294(0x0c)
	char pad_2A0[0x4]; // 0x2a0(0x04)
	float RotationAngle; // 0x2a4(0x04)
	float RotationTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UStaticMeshComponent* SM_CabinetDoorCom; // 0x2b0(0x08)
};

// Class NotesOfSoul.NOS_Character
// Size: 0x530 (Inherited: 0x520)
struct ANOS_Character : AKxCharacter {
	struct FString PlayerConfigName; // 0x520(0x10)
};

// Class NotesOfSoul.NOS_CharacterModelBase
// Size: 0xea0 (Inherited: 0x4c0)
struct ANOS_CharacterModelBase : ACharacter {
	int32_t CoverCharacterID; // 0x4b8(0x04)
	struct TArray<int32_t> CoverSkinListID; // 0x4c0(0x10)
	struct USkeletalMeshComponent* ClothComp; // 0x4d0(0x08)
	struct USkeletalMeshComponent* LowerClothComp; // 0x4d8(0x08)
	struct USkeletalMeshComponent* HeadComp; // 0x4e0(0x08)
	struct USkeletalMeshComponent* FaceComp; // 0x4e8(0x08)
	struct USkeletalMeshComponent* BackComp; // 0x4f0(0x08)
	struct USkeletalMeshComponent* HairComp; // 0x4f8(0x08)
	struct USkeletalMeshComponent* HairAccessoriesComp; // 0x500(0x08)
	struct USkeletalMeshComponent* ShoesComp; // 0x508(0x08)
	struct USkeletalMeshComponent* ConjoinedBodyComp; // 0x510(0x08)
	struct UGroomComponent* GroomComp; // 0x518(0x08)
	struct USkeletalMeshComponent* ExclusiveCom; // 0x520(0x08)
	struct USkeletalMeshComponent* WeaponsComp_1; // 0x528(0x08)
	struct USkeletalMeshComponent* WeaponsComp_2; // 0x530(0x08)
	int32_t CharacterID; // 0x538(0x04)
	struct UDataTable* pHumansDT; // 0x540(0x08)
	struct UDataTable* pHumansSuitDT; // 0x548(0x08)
	struct UDataTable* pHumansDefaultSuitDT; // 0x550(0x08)
	struct UDataTable* pGhostDT; // 0x558(0x08)
	struct UDataTable* pGhostSuitDT; // 0x560(0x08)
	struct UDataTable* pGhostDefaultSuitDT; // 0x568(0x08)
	struct UDataTable* pCharacterUnderwearDT; // 0x570(0x08)
	struct FTimerHandle ClothSimulationTimeHandle; // 0x578(0x08)
	struct FTimerHandle GroomSimulationTimeHandle; // 0x580(0x08)
	struct FIntegrationGhostChangeDress GhostDressInfo; // 0x588(0x3b0)
	struct FIntegrationHumanChangeDress HumanDressInfo; // 0x938(0x3b0)
	struct TMap<int32_t, struct FIntegrationGhostChangeDress> GhostChangeDressInfoList; // 0xce8(0x50)
	struct TMap<int32_t, struct FIntegrationHumanChangeDress> HumanChangeDressInfoList; // 0xd38(0x50)
	struct FMulticastInlineDelegate OnCharacterDressUpdate; // 0xd88(0x10)
	struct FNOS_QuickSocialContactConfig CharacterSocialInfo; // 0xd98(0x58)
	float ClothSimulationDelayTime; // 0xdf0(0x04)
	float GroomSimulationDelayTime; // 0xdf4(0x04)
	char pad_DF8[0xa8]; // 0xdf8(0xa8)

	void TakeOffCharecterSuitByID(int32_t _SuitID); // Function NotesOfSoul.NOS_CharacterModelBase.TakeOffCharecterSuitByID // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2da0
	void SetHumanSuit(struct FIntegrationHumanChangeDress Suit); // Function NotesOfSoul.NOS_CharacterModelBase.SetHumanSuit // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2ad0
	void SetHumanChangeDressInfo(); // Function NotesOfSoul.NOS_CharacterModelBase.SetHumanChangeDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2ab0
	void SetGhostSuit(struct FIntegrationGhostChangeDress Suit); // Function NotesOfSoul.NOS_CharacterModelBase.SetGhostSuit // (Final|Native|Public|BlueprintCallable) // @ game+0x19f28d0
	void SetGhostChangeDressInfo(); // Function NotesOfSoul.NOS_CharacterModelBase.SetGhostChangeDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f28b0
	void SetDeafultCharecterSuitByID(int32_t _CharacterID); // Function NotesOfSoul.NOS_CharacterModelBase.SetDeafultCharecterSuitByID // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2820
	void SetCharecterSuitByID(int32_t _CharacterID, int32_t _SuitID); // Function NotesOfSoul.NOS_CharacterModelBase.SetCharecterSuitByID // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2600
	void SetCharecterModelByID(int32_t ID); // Function NotesOfSoul.NOS_CharacterModelBase.SetCharecterModelByID // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2570
	void SetCharecterID(int32_t ID); // Function NotesOfSoul.NOS_CharacterModelBase.SetCharecterID // (Final|Native|Public|BlueprintCallable) // @ game+0x19f24e0
	void SetAndCheckShowGroom(bool IsOpenHairEffec); // Function NotesOfSoul.NOS_CharacterModelBase.SetAndCheckShowGroom // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2450
	void SetAndCheckShowGreen(bool IsOpenGreenEffec); // Function NotesOfSoul.NOS_CharacterModelBase.SetAndCheckShowGreen // (Final|Native|Public|BlueprintCallable) // @ game+0x19f23c0
	void SetAndCheckGreenColor(int32_t GreenColor); // Function NotesOfSoul.NOS_CharacterModelBase.SetAndCheckGreenColor // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2330
	void SaveCoverCharacterInfo(int32_t _ID, struct TArray<int32_t> _Skin); // Function NotesOfSoul.NOS_CharacterModelBase.SaveCoverCharacterInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f20d0
	void ResetHumanChangeDressInfo(); // Function NotesOfSoul.NOS_CharacterModelBase.ResetHumanChangeDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f20b0
	void ResetGhostChangeDressInfo(); // Function NotesOfSoul.NOS_CharacterModelBase.ResetGhostChangeDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f2090
	struct TArray<struct FTagSaveRoleSkin> QueryHumanChangeDressInfoList(struct TMap<int32_t, struct FIntegrationHumanChangeDress> OldDressInfoList, struct TMap<int32_t, struct FIntegrationHumanChangeDress> NewDressInfoList); // Function NotesOfSoul.NOS_CharacterModelBase.QueryHumanChangeDressInfoList // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1e30
	struct TArray<struct FTagSaveRoleSkin> QueryGhostChangeDressInfoList(struct TMap<int32_t, struct FIntegrationGhostChangeDress> OldDressInfoList, struct TMap<int32_t, struct FIntegrationGhostChangeDress> NewDressInfoList); // Function NotesOfSoul.NOS_CharacterModelBase.QueryGhostChangeDressInfoList // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1bd0
	void LoadHairDress(bool bGroom, struct FNOS_HairAccessory InAssetRef, struct USkeletalMeshComponent* _HairComp, struct UGroomComponent* _GroomComp); // Function NotesOfSoul.NOS_CharacterModelBase.LoadHairDress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19f1130
	void LoadCoverCharacterInfo(); // Function NotesOfSoul.NOS_CharacterModelBase.LoadCoverCharacterInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f1110
	void LoadCharecterModel(); // Function NotesOfSoul.NOS_CharacterModelBase.LoadCharecterModel // (Final|Native|Public|BlueprintCallable) // @ game+0x19f10f0
	void InitPlay(); // Function NotesOfSoul.NOS_CharacterModelBase.InitPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HomeCharacterDressByArray(struct TArray<int32_t> skinIds, int32_t HumanCharacterID); // Function NotesOfSoul.NOS_CharacterModelBase.HomeCharacterDressByArray // (Final|Native|Public|BlueprintCallable) // @ game+0x19f0b70
	struct FNOS_HumanSuit GetHumanSuitDressInfo(int32_t SuitID); // Function NotesOfSoul.NOS_CharacterModelBase.GetHumanSuitDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f08b0
	struct USkeletalMeshComponent* GetHairComp(); // Function NotesOfSoul.NOS_CharacterModelBase.GetHairComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f0890
	struct FNOS_GhostSuit GetGhostSuitDressInfo(int32_t SuitID); // Function NotesOfSoul.NOS_CharacterModelBase.GetGhostSuitDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f07c0
	struct TArray<int32_t> GetCurrentCharacterSuitList(); // Function NotesOfSoul.NOS_CharacterModelBase.GetCurrentCharacterSuitList // (Final|Native|Public|BlueprintCallable) // @ game+0x19f0770
	struct USkeletalMeshComponent* GetClothComp(); // Function NotesOfSoul.NOS_CharacterModelBase.GetClothComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f0750
	struct FNOS_Accessories GetAccessoriesDressInfo(int32_t SuitID, enum class EAccessoriesType SuitType); // Function NotesOfSoul.NOS_CharacterModelBase.GetAccessoriesDressInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x19f04c0
	void BanPickCharacterDressByArray(struct TArray<int32_t> skinIds, int32_t HumanCharacterID, bool bGroom); // Function NotesOfSoul.NOS_CharacterModelBase.BanPickCharacterDressByArray // (Final|Native|Public|BlueprintCallable) // @ game+0x19f02d0
};

// Class NotesOfSoul.NOS_CharacterModel
// Size: 0xf50 (Inherited: 0xea0)
struct ANOS_CharacterModel : ANOS_CharacterModelBase {
	struct USpringArmComponent* SpringArmCom; // 0xe98(0x08)
	struct UCineCameraComponent* CineCameraCom; // 0xea0(0x08)
	struct FCloseAccountsInfo CloseAccountsInfo; // 0xea8(0xa0)

	void SetLRSCharacterModelInfo(struct ANOS_PlayerBase* Player); // Function NotesOfSoul.NOS_CharacterModel.SetLRSCharacterModelInfo // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetCloseAccountsInfo(struct FCloseAccountsInfo Info); // Function NotesOfSoul.NOS_CharacterModel.SetCloseAccountsInfo // (Final|Native|Public) // @ game+0x19f26d0
	void SetCharacterModelInfo(); // Function NotesOfSoul.NOS_CharacterModel.SetCharacterModelInfo // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HiddenModel(); // Function NotesOfSoul.NOS_CharacterModel.HiddenModel // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	struct USpringArmComponent* GetSpringArmCom(); // Function NotesOfSoul.NOS_CharacterModel.GetSpringArmCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f0b50
	struct FCloseAccountsInfo GetCloseAccountsInfo(); // Function NotesOfSoul.NOS_CharacterModel.GetCloseAccountsInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f05f0
	struct UCineCameraComponent* GetCineCameraCom(); // Function NotesOfSoul.NOS_CharacterModel.GetCineCameraCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f05d0
};

// Class NotesOfSoul.NOS_SoulDamage
// Size: 0x40 (Inherited: 0x40)
struct UNOS_SoulDamage : UDamageType {
};

// Class NotesOfSoul.NOS_NormalDamage
// Size: 0x40 (Inherited: 0x40)
struct UNOS_NormalDamage : UDamageType {
};

// Class NotesOfSoul.NOS_CheckStill
// Size: 0xb8 (Inherited: 0x80)
struct UNOS_CheckStill : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnKeepStill; // 0x80(0x10)
	struct FMulticastInlineDelegate OnAction; // 0x90(0x10)
	struct AActor* SourceActor; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UNOS_CheckStill* CreateCheckStill(struct UGameplayAbility* OwningAbility, float _KeepStillTime, bool _bCheckAction); // Function NotesOfSoul.NOS_CheckStill.CreateCheckStill // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19fe8e0
};

// Class NotesOfSoul.NOS_ClientMatchService
// Size: 0x210 (Inherited: 0x208)
struct UNOS_ClientMatchService : UKxClientMatchService {
	struct UObject* BanpickPrefab; // 0x208(0x08)
};

// Class NotesOfSoul.NOS_Config
// Size: 0x68 (Inherited: 0x38)
struct UNOS_Config : UNotConfigSetting {
	int32_t FakeCharacterCategory; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<struct UDataTable> CharacterDataTable; // 0x40(0x28)
};

// Class NotesOfSoul.NOS_CustomItem
// Size: 0x150 (Inherited: 0x120)
struct UNOS_CustomItem : UNOS_AbilityItem {
	struct TArray<float> CustomFloatArray; // 0x120(0x10)
	struct TArray<struct AActor*> CustomActorArray; // 0x130(0x10)
	struct TArray<struct FString> CustomStringArray; // 0x140(0x10)
};

// Class NotesOfSoul.NOS_DamageCalculation
// Size: 0x40 (Inherited: 0x40)
struct UNOS_DamageCalculation : UGameplayEffectExecutionCalculation {
};

// Class NotesOfSoul.NOS_DamageComponent
// Size: 0xd0 (Inherited: 0xd0)
struct UNOS_DamageComponent : UKxDamageComponent {
};

// Class NotesOfSoul.NOS_DeadSpectatorPlayer
// Size: 0x358 (Inherited: 0x2a8)
struct ANOS_DeadSpectatorPlayer : ASpectatorPawn {
	bool bUseFreeMic; // 0x2a8(0x01)
	char pad_2A9[0x2]; // 0x2a9(0x02)
	bool bChangeSpectatorInput; // 0x2ab(0x01)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TMap<enum class ESpectatorCamp, struct FSpectatorInfo> SpectatorPlayerArray; // 0x2b0(0x50)
	struct TArray<struct ANOS_PlayerBase*> SpectatorList; // 0x300(0x10)
	char pad_310[0x4]; // 0x310(0x04)
	enum class ESpectatorCamp SpectatorCamp; // 0x314(0x01)
	char pad_315[0x7]; // 0x315(0x07)
	enum class ESpectatorMode SpectatorMode; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct ANOS_PlayerBase* BeforeDeathPlayer; // 0x320(0x08)
	struct ANOS_PlayerBase* CurSpectatorPlayer; // 0x328(0x08)
	struct ANOS_PCArenaBase* CurSpectatorPlayerPC; // 0x330(0x08)
	struct ANOS_PCArenaBase* PC; // 0x338(0x08)
	struct USceneComponent* RootCom; // 0x340(0x08)
	struct UCameraComponent* CameraCom; // 0x348(0x08)
	struct USpringArmComponent* SpringArmCom; // 0x350(0x08)

	void SpectatorPlayer(struct ANOS_PlayerBase* Player); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.SpectatorPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a02b50
	void SetSpectatorMode(enum class ESpectatorMode NewMode); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.SetSpectatorMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1a02ad0
	void SetPawnEventCallBackFunc(struct FEventRelevantData Data); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.SetPawnEventCallBackFunc // (Final|Native|Public|BlueprintCallable) // @ game+0x1a029c0
	void SetControllerState(bool IsMove, bool IsRotation); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.SetControllerState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a027d0
	void SetCamera(struct ANOS_PlayerBase* Player); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.SetCamera // (Native|Event|Public|BlueprintEvent) // @ game+0x1a02740
	void ServerRandomAttachToPlayer(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.ServerRandomAttachToPlayer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a02690
	void RemovePlayer(struct ANOS_PlayerBase* Player); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.RemovePlayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a02600
	void OnKeyBoardYPress(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.OnKeyBoardYPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a02390
	void OnKeyBoardTRelease(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.OnKeyBoardTRelease // (Native|Event|Public|BlueprintEvent) // @ game+0x1a02370
	void OnKeyBoardTPress(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.OnKeyBoardTPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a02350
	void MoveToControllerNewPawn(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.MoveToControllerNewPawn // (Final|Native|Public) // @ game+0x1a01ce0
	void MoveIndexToNextPlayer(bool isLast); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.MoveIndexToNextPlayer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a01c50
	bool IsDeadOB(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.IsDeadOB // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a01af0
	struct ANOS_PlayerBase* GetSpectatorPlayer(); // Function NotesOfSoul.NOS_DeadSpectatorPlayer.GetSpectatorPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a019f0
};

// Class NotesOfSoul.NOS_DestructionActor
// Size: 0x288 (Inherited: 0x220)
struct ANOS_DestructionActor : AActor {
	int32_t Health; // 0x220(0x04)
	int32_t HitImpluseScale; // 0x224(0x04)
	int32_t ReceivedHitImpluse; // 0x228(0x04)
	bool bEnableSphereForceInTheArea; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct FVector StartLocation; // 0x230(0x0c)
	float DropDownHeight; // 0x23c(0x04)
	enum class ENOS_DamageType DestructByDamageType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t HitOffset; // 0x244(0x04)
	struct UBoxComponent* Collision; // 0x248(0x08)
	struct UAudioComponent* AudioCom; // 0x250(0x08)
	struct UNiagaraComponent* NiagaraCom; // 0x258(0x08)
	struct UDestructibleComponent* DestructibleActor; // 0x260(0x08)
	bool bDestructed; // 0x268(0x01)
	char pad_269[0xf]; // 0x269(0x0f)
	struct FMulticastInlineDelegate FinishDesEvent; // 0x278(0x10)

	void OnRep_OnDestructed(); // Function NotesOfSoul.NOS_DestructionActor.OnRep_OnDestructed // (Final|Native|Public) // @ game+0x1a023b0
	void OnComHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function NotesOfSoul.NOS_DestructionActor.OnComHit // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x1a02180
	void Init(); // Function NotesOfSoul.NOS_DestructionActor.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01a40
	int32_t GetHealth(); // Function NotesOfSoul.NOS_DestructionActor.GetHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a019c0
	void DoDestruction(int32_t Dmg, struct FVector Dir, int32_t Force, struct AActor* killer); // Function NotesOfSoul.NOS_DestructionActor.DoDestruction // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable) // @ game+0x1a01460
	void DActorTakeDamage(struct AActor* Actor, float Dmg, enum class ENOS_DamageType DmgType); // Function NotesOfSoul.NOS_DestructionActor.DActorTakeDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01340
	void CheckDropDown(); // Function NotesOfSoul.NOS_DestructionActor.CheckDropDown // (Final|Native|Public) // @ game+0x1a01250
};

// Class NotesOfSoul.NOS_Door
// Size: 0x358 (Inherited: 0x220)
struct ANOS_Door : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct AActor* ZhenLingFuUser; // 0x228(0x08)
	bool EightFeetAdultForceKeepDoorOpenInDuration; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct USceneComponent* RootScene; // 0x238(0x08)
	struct UStaticMeshComponent* Doorcase; // 0x240(0x08)
	struct UStaticMeshComponent* DoorRight; // 0x248(0x08)
	struct UKxInteractBoxComponent* InteractBoxRight; // 0x250(0x08)
	struct UStaticMeshComponent* DoorLeft; // 0x258(0x08)
	struct UKxInteractBoxComponent* InteractBoxLeft; // 0x260(0x08)
	struct UBoxComponent* ZhenLingTriggerBox; // 0x268(0x08)
	struct UStaticMeshComponent* BlockGhost; // 0x270(0x08)
	struct UAudioComponent* BlockGhostAudioCom; // 0x278(0x08)
	struct USoundBase* S_DoorOpen; // 0x280(0x08)
	struct USoundBase* S_DoorClose; // 0x288(0x08)
	struct USoundBase* S_BlockGhostActivate; // 0x290(0x08)
	struct USoundBase* S_BlockGhostRemain; // 0x298(0x08)
	struct USoundBase* S_BlockGhostGetHit; // 0x2a0(0x08)
	struct UNiagaraSystem* VFX_BlockGhostActivate; // 0x2a8(0x08)
	struct UNiagaraSystem* VFX_BlockGhostGetHit; // 0x2b0(0x08)
	float Right_LerpA; // 0x2b8(0x04)
	float Right_LerpB; // 0x2bc(0x04)
	float Left_LerpA; // 0x2c0(0x04)
	float Left_LerpB; // 0x2c4(0x04)
	float OpenDirection; // 0x2c8(0x04)
	bool bDoorSwitchOpen; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FTimerHandle BlockGhostTimer; // 0x2d0(0x08)
	struct FTimerHandle GhostInteractUnlockTimer; // 0x2d8(0x08)
	struct FTimerHandle HumanInteractUnlockTimer; // 0x2e0(0x08)
	bool bCanInteractByHuman; // 0x2e8(0x01)
	bool bCanInteractByGhost; // 0x2e9(0x01)
	bool bIsBlockGhostActivate; // 0x2ea(0x01)
	bool bIsSwitching; // 0x2eb(0x01)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct ACharacter* InteractCharacter; // 0x2f0(0x08)
	struct UStaticMeshComponent* EightFeetAdultSkill2TeleportSignComp; // 0x2f8(0x08)
	struct TSoftObjectPtr<struct UStaticMesh> Config_EightFeetAdultSkill2TeleportSignMesh; // 0x300(0x28)
	struct TSoftObjectPtr<struct UMaterialInterface> Config_EightFeetAdultSkill2TeleportSignMeshMaterial; // 0x328(0x28)
	char pad_350[0x8]; // 0x350(0x08)

	void TrySetEightFeetAdultForceKeepDoorOpenInDuration(bool TryOpen); // Function NotesOfSoul.NOS_Door.TrySetEightFeetAdultForceKeepDoorOpenInDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x1a02be0
	void SetEightFeetAdultSkill2TeleportSignMaterialState(int32_t State); // Function NotesOfSoul.NOS_Door.SetEightFeetAdultSkill2TeleportSignMaterialState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a028a0
	void PlayDoorSwitchSound(); // Function NotesOfSoul.NOS_Door.PlayDoorSwitchSound // (Final|Native|Public) // @ game+0x1a025e0
	void OpenOrCloseEightFeetAdultSkill2Teleport(bool IsOpen); // Function NotesOfSoul.NOS_Door.OpenOrCloseEightFeetAdultSkill2Teleport // (Final|Native|Public|BlueprintCallable) // @ game+0x1a02460
	void OnBlockGhostGetHit(); // Function NotesOfSoul.NOS_Door.OnBlockGhostGetHit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a01de0
	void OnBlockGhostActive(bool bActive); // Function NotesOfSoul.NOS_Door.OnBlockGhostActive // (Native|Event|Public|BlueprintEvent) // @ game+0x1a020f0
	void MultiReduceBlockGhostTimer(); // Function NotesOfSoul.NOS_Door.MultiReduceBlockGhostTimer // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01e00
	void MultiActivateBlockGhost(float RemainTime, struct AActor* SpellUser); // Function NotesOfSoul.NOS_Door.MultiActivateBlockGhost // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a01d00
	void LockOnHumanInteract(float DeltaTime); // Function NotesOfSoul.NOS_Door.LockOnHumanInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01bd0
	void LockOnGhostInteract(float DeltaTime); // Function NotesOfSoul.NOS_Door.LockOnGhostInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01b50
	struct UStaticMeshComponent* GetEightFeetAdultSkill2TeleportSignComp(); // Function NotesOfSoul.NOS_Door.GetEightFeetAdultSkill2TeleportSignComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a019a0
	void ExecuteDoorSwitch(bool bSwitch, struct ACharacter* InteractChar); // Function NotesOfSoul.NOS_Door.ExecuteDoorSwitch // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a017c0
	void EightFeetAdultForceOpenDoor(struct ACharacter* InteractChar); // Function NotesOfSoul.NOS_Door.EightFeetAdultForceOpenDoor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a01730
	void DoorSwitch(bool bSwitch, struct ACharacter* InteractChar); // Function NotesOfSoul.NOS_Door.DoorSwitch // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	bool DoorCanOpenByEightFeetAdultSkill2(); // Function NotesOfSoul.NOS_Door.DoorCanOpenByEightFeetAdultSkill2 // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a01670
	void CreateAndConfigEightFeetAdultSkill2TeleportSignComp(); // Function NotesOfSoul.NOS_Door.CreateAndConfigEightFeetAdultSkill2TeleportSignComp // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01320
	bool CanApplyBlockGhost(); // Function NotesOfSoul.NOS_Door.CanApplyBlockGhost // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a01200
};

// Class NotesOfSoul.NOS_DoorBase
// Size: 0x2d0 (Inherited: 0x220)
struct ANOS_DoorBase : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct ANOS_DoorBase* LinkDoor; // 0x228(0x08)
	bool bIsOpen; // 0x230(0x01)
	bool bIsSwitching; // 0x231(0x01)
	bool IsUpdateInteractUI; // 0x232(0x01)
	bool bIsGhostInteract; // 0x233(0x01)
	bool bIsHumanInteract; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct USoundBase* OpenSound; // 0x238(0x08)
	struct USoundBase* CloseSound; // 0x240(0x08)
	float CloseValue; // 0x248(0x04)
	float OpenValue; // 0x24c(0x04)
	float TransformTime; // 0x250(0x04)
	float endValue; // 0x254(0x04)
	float OpenDoorDir; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	float Timer; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct USceneComponent* RootScene; // 0x268(0x08)
	struct UStaticMeshComponent* RightDoorMode; // 0x270(0x08)
	struct UBillboardComponent* InteractUIPos; // 0x278(0x08)
	struct UKxInteractBoxComponent* InteractBoxRight; // 0x280(0x08)
	struct FTimerHandle DisableZLFHandle; // 0x288(0x08)
	bool bIsDisableZLF; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)
	struct USoundBase* UseZLFSound; // 0x2a0(0x08)
	struct USoundBase* AtkZLFSound; // 0x2a8(0x08)
	struct UNiagaraSystem* HumanUseZLFNiagara; // 0x2b0(0x08)
	struct UNiagaraSystem* GhostAtkZLFNiagara; // 0x2b8(0x08)
	struct UBoxComponent* ZLFCollision; // 0x2c0(0x08)
	struct UStaticMeshComponent* ZLFMode; // 0x2c8(0x08)

	void ServerUseZLF(float ZLFTime); // Function NotesOfSoul.NOS_DoorBase.ServerUseZLF // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a026b0
	void ServerAtkZLF(); // Function NotesOfSoul.NOS_DoorBase.ServerAtkZLF // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xbdc270
	void OutlineDoor(bool Outline, int32_t OutlineColor); // Function NotesOfSoul.NOS_DoorBase.OutlineDoor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a024f0
	void Open(struct ACharacter* WhoUse); // Function NotesOfSoul.NOS_DoorBase.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x1a023d0
	void MultiUseZLF(float ZLFTime); // Function NotesOfSoul.NOS_DoorBase.MultiUseZLF // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a02060
	void MultiUseDoor(float DirValue); // Function NotesOfSoul.NOS_DoorBase.MultiUseDoor // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01fd0
	void MultiSetZLFInteractState(bool IsDisable); // Function NotesOfSoul.NOS_DoorBase.MultiSetZLFInteractState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a01f40
	void MultiSetDoorInteractState_Human(bool IsDisable); // Function NotesOfSoul.NOS_DoorBase.MultiSetDoorInteractState_Human // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a01eb0
	void MultiSetDoorInteractState_Ghost(bool IsDisable); // Function NotesOfSoul.NOS_DoorBase.MultiSetDoorInteractState_Ghost // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a01e20
	void MultiClearZLF(); // Function NotesOfSoul.NOS_DoorBase.MultiClearZLF // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01e00
	void MultiAtkZLF(); // Function NotesOfSoul.NOS_DoorBase.MultiAtkZLF // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01de0
	bool IsZLF(); // Function NotesOfSoul.NOS_DoorBase.IsZLF // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a01b20
	void InteractDoor(struct ACharacter* WhoUse); // Function NotesOfSoul.NOS_DoorBase.InteractDoor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01a60
	void DoorTick(float FValue); // Function NotesOfSoul.NOS_DoorBase.DoorTick // (Native|Event|Public|BlueprintEvent) // @ game+0x1a016a0
	void DoorAnimEnd(); // Function NotesOfSoul.NOS_DoorBase.DoorAnimEnd // (Final|Native|Public) // @ game+0x1a01650
	void DoorAnim(float DeltaTime); // Function NotesOfSoul.NOS_DoorBase.DoorAnim // (Final|Native|Public) // @ game+0x1a015d0
	void Close(struct ACharacter* WhoUse); // Function NotesOfSoul.NOS_DoorBase.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01270
	void ChangeUpdateInteractUI(); // Function NotesOfSoul.NOS_DoorBase.ChangeUpdateInteractUI // (Final|Native|Public) // @ game+0x1a01230
	void CalculationOpenDirection(struct ACharacter* Character); // Function NotesOfSoul.NOS_DoorBase.CalculationOpenDirection // (Native|Event|Public|BlueprintEvent) // @ game+0x1a01170
};

// Class NotesOfSoul.NOS_Dove
// Size: 0x328 (Inherited: 0x280)
struct ANOS_Dove : APawn {
	char pad_280[0x10]; // 0x280(0x10)
	struct ANOS_InteractSpawnMgr* Mgr; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct ANOS_PlayerHuman* Human; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct TArray<struct AActor*> AllPlayer; // 0x2b0(0x10)
	float CheckPlayerRange; // 0x2c0(0x04)
	float CheckInterval; // 0x2c4(0x04)
	float TakeOffAddMoveSpeed; // 0x2c8(0x04)
	float AddMoveSpeedTime; // 0x2cc(0x04)
	float GrabTime; // 0x2d0(0x04)
	float TakeOffAddZ; // 0x2d4(0x04)
	struct ANOS_DoveActivityRange* DoveActivityRange; // 0x2d8(0x08)
	struct ANOS_DoveSpawnPoint* DoveSpawnPoint; // 0x2e0(0x08)
	struct USphereComponent* RootCom; // 0x2e8(0x08)
	struct UStaticMeshComponent* DoveMeshCom; // 0x2f0(0x08)
	struct UFloatingPawnMovement* MoveCom; // 0x2f8(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x300(0x08)
	struct UNOS_RestrictMovementAI* MovementAI; // 0x308(0x08)
	struct FMulticastInlineDelegate OnGetDoveEvent; // 0x310(0x10)
	char pad_320[0x8]; // 0x320(0x08)

	void SetInteractSpawnMgr(struct ANOS_InteractSpawnMgr* _Mgr); // Function NotesOfSoul.NOS_Dove.SetInteractSpawnMgr // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a02930
	void Pause(); // Function NotesOfSoul.NOS_Dove.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x1a025c0
	void GrabDoveAndAddItem(); // Function NotesOfSoul.NOS_Dove.GrabDoveAndAddItem // (Final|Native|Public) // @ game+0x1a01a20
	void GetAllPlayer(struct FEventRelevantData eventData); // Function NotesOfSoul.NOS_Dove.GetAllPlayer // (Final|Native|Public) // @ game+0x1a01890
	void Continue(); // Function NotesOfSoul.NOS_Dove.Continue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a01300
};

// Class NotesOfSoul.NOS_DoveActivityRange
// Size: 0x2a8 (Inherited: 0x250)
struct ANOS_DoveActivityRange : ANOS_RangeBox {
	char pad_250[0x8]; // 0x250(0x08)
	float DovesGoBackMinTime; // 0x258(0x04)
	float DovesGoBackMaxTime; // 0x25c(0x04)
	int32_t GetPointMaxRetestCount; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct AActor*> AllHuman; // 0x268(0x10)
	struct TArray<struct AActor*> AllSpawnPoint; // 0x278(0x10)
	struct TArray<struct ANOS_Dove*> AllDove; // 0x288(0x10)
	struct UMaterialInstance* MI_LinkMaterial; // 0x298(0x08)
	struct UStaticMeshComponent* CenterPointCom; // 0x2a0(0x08)
};

// Class NotesOfSoul.NOS_SpawnPointBase
// Size: 0x238 (Inherited: 0x220)
struct ANOS_SpawnPointBase : AActor {
	struct UMaterialInstance* MI_LinkMaterial; // 0x220(0x08)
	struct UMaterialInstance* MI_NotLinkMaterial; // 0x228(0x08)
	bool bIsLink; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int32_t SpawnPointIndex; // 0x234(0x04)

	void SetSpawnClass(struct UObject* Class); // Function NotesOfSoul.NOS_SpawnPointBase.SetSpawnClass // (Native|Public) // @ game+0x1a4a350
};

// Class NotesOfSoul.NOS_DoveSpawnPoint
// Size: 0x268 (Inherited: 0x238)
struct ANOS_DoveSpawnPoint : ANOS_SpawnPointBase {
	char pad_238[0x8]; // 0x238(0x08)
	struct ANOS_Dove* InBoxDove; // 0x240(0x08)
	bool bFlyUnrestricted; // 0x248(0x01)
	bool bAttachToActivityRange; // 0x249(0x01)
	enum class ENOSPropRefreshPlaces Places; // 0x24a(0x01)
	char pad_24B[0x5]; // 0x24b(0x05)
	struct ANOS_DoveActivityRange* ActivityRange; // 0x250(0x08)
	struct USceneComponent* SceneComRoot; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Model; // 0x260(0x08)
};

// Class NotesOfSoul.NOS_Drawer
// Size: 0x2b0 (Inherited: 0x288)
struct ANOS_Drawer : ANOS_PropBox {
	struct FVector OpenLocation; // 0x288(0x0c)
	struct FVector CloseLocation; // 0x294(0x0c)
	char pad_2A0[0x4]; // 0x2a0(0x04)
	float MoveDistance; // 0x2a4(0x04)
	float MoveTime; // 0x2a8(0x04)
	enum class EMoveAxis OpenDirection; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
};

// Class NotesOfSoul.NOS_DSMgr
// Size: 0x68e8 (Inherited: 0x68e8)
struct UNOS_DSMgr : UKxDSMgrGSE {
};

// Class NotesOfSoul.NOS_EECTakeRealDamage
// Size: 0x40 (Inherited: 0x40)
struct UNOS_EECTakeRealDamage : UGameplayEffectExecutionCalculation {
};

// Class NotesOfSoul.NOS_EFA_Passive_DoorImprint
// Size: 0x220 (Inherited: 0x220)
struct ANOS_EFA_Passive_DoorImprint : AActor {
};

// Class NotesOfSoul.NOS_EFA_Skill1_DropWarningBox
// Size: 0x248 (Inherited: 0x220)
struct ANOS_EFA_Skill1_DropWarningBox : AActor {
	struct UStaticMeshComponent* HatSMComp; // 0x220(0x08)
	struct UStaticMeshComponent* BoxCheckComp; // 0x228(0x08)
	struct UDecalComponent* DropWarningDecalComp; // 0x230(0x08)
	struct UStaticMeshComponent* AccelerateDetectionComp; // 0x238(0x08)
	struct USceneComponent* SceneComp; // 0x240(0x08)

	void CreateAndConfigAccelerateDetectionComp(struct TSoftObjectPtr<struct UStaticMesh> Cylinder, struct FVector ConfigScale); // Function NotesOfSoul.NOS_EFA_Skill1_DropWarningBox.CreateAndConfigAccelerateDetectionComp // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a068c0
	void Bind_AccelerateDetectionComp_EndOverlap(struct UPrimitiveComponent* OnComponentEndOverlap, struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_EFA_Skill1_DropWarningBox.Bind_AccelerateDetectionComp_EndOverlap // (Final|Native|Private) // @ game+0x1a066b0
	void Bind_AccelerateDetectionComp_BeginOverlap(struct UPrimitiveComponent* OnComponentBeginOverlap, struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_EFA_Skill1_DropWarningBox.Bind_AccelerateDetectionComp_BeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x1a06460
};

// Class NotesOfSoul.NOS_EFA_Skill1_MMCAccelerate
// Size: 0x40 (Inherited: 0x40)
struct UNOS_EFA_Skill1_MMCAccelerate : UGameplayModMagnitudeCalculation {
};

// Class NotesOfSoul.NOS_EFA_Skill2_TeleportBall
// Size: 0x260 (Inherited: 0x220)
struct ANOS_EFA_Skill2_TeleportBall : AActor {
	struct UStaticMeshComponent* TeleportBallComp; // 0x220(0x08)
	struct TSoftObjectPtr<struct UStaticMesh> TeleportBallMesh; // 0x228(0x28)
	struct ANOS_DoorBase* AttachmentDoor; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void SetTeleportBallState(int32_t State); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.SetTeleportBallState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07830
	void SetTeleportBallCanBeTrace(bool CanBe); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.SetTeleportBallCanBeTrace // (Final|Native|Public|BlueprintCallable) // @ game+0x1a077a0
	void OpenTeleportBall(); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.OpenTeleportBall // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07010
	void NoticeTeleportBallStateChange(int32_t State); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.NoticeTeleportBallStateChange // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	int32_t GetTeleportBallCurState(); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.GetTeleportBallCurState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a06b10
	struct ANOS_DoorBase* GetAttachmentDoor(); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.GetAttachmentDoor // (Final|Native|Public) // @ game+0x1a06a00
	void CloseTeleportBall(); // Function NotesOfSoul.NOS_EFA_Skill2_TeleportBall.CloseTeleportBall // (Final|Native|Public|BlueprintCallable) // @ game+0x1a068a0
};

// Class NotesOfSoul.NOS_TargetActor_ProjectilePath
// Size: 0x470 (Inherited: 0x340)
struct ANOS_TargetActor_ProjectilePath : AGameplayAbilityTargetActor {
	struct FPredictProjectilePathParams ProjectilePathParams; // 0x338(0x60)
	bool UseCameraAsStart; // 0x398(0x01)
	float CustomEyeHeight; // 0x39c(0x04)
	float AdditionalRaiseDegree; // 0x3a0(0x04)
	float LaunchVelocitytLength; // 0x3a4(0x04)
	bool bUseTraceChannel; // 0x3a8(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)
	struct FPredictProjectilePathResult PredictProjectilePathResult; // 0x3b0(0xb8)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class NotesOfSoul.NOS_EFA_TA_Skill1
// Size: 0x480 (Inherited: 0x470)
struct ANOS_EFA_TA_Skill1 : ANOS_TargetActor_ProjectilePath {
	float MaxTolerableSlope; // 0x468(0x04)
	char pad_474[0xc]; // 0x474(0x0c)

	void Initialize(); // Function NotesOfSoul.NOS_EFA_TA_Skill1.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_EFA_TA_Skill2
// Size: 0x360 (Inherited: 0x350)
struct ANOS_EFA_TA_Skill2 : AGameplayAbilityTargetActor_Trace {
	struct APlayerController* CurPlayerPC; // 0x350(0x08)
	struct ANOS_EightFeetAdult* EFA; // 0x358(0x08)
};

// Class NotesOfSoul.NOS_PlayerBase
// Size: 0xcd0 (Inherited: 0x530)
struct ANOS_PlayerBase : ANOS_Character {
	char pad_530[0x10]; // 0x530(0x10)
	bool EnableCommand; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FMulticastInlineDelegate OnChaseStateSwitch; // 0x548(0x10)
	bool bUseFreeMic; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float RepYaw; // 0x55c(0x04)
	float RepPitch; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<int32_t> SkinArray; // 0x568(0x10)
	struct UNOS_AbilitySystemComponent* AbilityCom; // 0x578(0x08)
	struct UNOS_TalentCom* TalentCom; // 0x580(0x08)
	struct UKxInteractBoxComponent* InteractTargetBox; // 0x588(0x08)
	char pad_590[0x18]; // 0x590(0x18)
	struct FMulticastInlineDelegate OnTargetUpdate; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnInitDressCompleted; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OnCharacterDominated; // 0x5c8(0x10)
	bool bInitDressCompleted; // 0x5d8(0x01)
	bool DanceOver; // 0x5d9(0x01)
	bool bShowVoiceIcon; // 0x5da(0x01)
	char pad_5DB[0x1]; // 0x5db(0x01)
	struct FActiveGameplayEffectHandle HandleChasingGE; // 0x5dc(0x08)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct UGameplayEffect* ClassChasingGE; // 0x5e8(0x08)
	int32_t CurShoesID; // 0x5f0(0x04)
	char pad_5F4[0x18c]; // 0x5f4(0x18c)
	struct UUserWidget* NotifyUIWidget; // 0x780(0x08)
	struct UUserWidget* NotifyUI; // 0x788(0x08)
	char pad_790[0x30]; // 0x790(0x30)
	struct FMulticastInlineDelegate DoingShiHunSuccess; // 0x7c0(0x10)
	struct UAudioComponent* StarSoundComp; // 0x7d0(0x08)
	struct USoundCue* ChasingSoundCue; // 0x7d8(0x08)
	struct UAudioComponent* ChasingAudioCom; // 0x7e0(0x08)
	char pad_7E8[0x1e0]; // 0x7e8(0x1e0)
	struct TArray<struct FMaterialManageData> MaterialEffects; // 0x9c8(0x10)
	bool bCanSpectator; // 0x9d8(0x01)
	bool bIsXiaoPiControlled; // 0x9d9(0x01)
	bool bIsWolfControlled; // 0x9da(0x01)
	bool bDisableTypingChat; // 0x9db(0x01)
	char pad_9DC[0x4]; // 0x9dc(0x04)
	struct FMulticastInlineDelegate OnHealthState; // 0x9e0(0x10)
	enum class ECameraType CameraType; // 0x9f0(0x01)
	enum class ECameraOverlapType CameraOverLapType; // 0x9f1(0x01)
	char pad_9F2[0xe]; // 0x9f2(0x0e)
	bool bInitGA; // 0xa00(0x01)
	bool bAddAbility; // 0xa01(0x01)
	char pad_A02[0x6]; // 0xa02(0x06)
	struct UAnimMontage* VictoryDanceMontage; // 0xa08(0x08)
	struct UAnimMontage* BeHitMontage; // 0xa10(0x08)
	struct UAnimMontage* BeHitMontage_Woman; // 0xa18(0x08)
	struct UNOS_GameplayAbility* JumpAbility; // 0xa20(0x08)
	struct UNOS_GameplayAbility* DoorAbility; // 0xa28(0x08)
	struct UNOS_GameplayAbility* ChaseAbility; // 0xa30(0x08)
	struct UNOS_GameplayAbility* MarkingSystemAbility; // 0xa38(0x08)
	struct UCameraComponent* CameraCom; // 0xa40(0x08)
	struct UNOS_AudioComponent* NosAudioComponent; // 0xa48(0x08)
	struct UNOS_WordsComponent* NosWordsComponent; // 0xa50(0x08)
	enum class EHealthState HealthState; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct USkeletalMeshComponent* ClothCom; // 0xa60(0x08)
	struct USkeletalMeshComponent* HairCom; // 0xa68(0x08)
	struct UGroomComponent* HairEffectCom; // 0xa70(0x08)
	struct UWidgetComponent* HeadWidget; // 0xa78(0x08)
	struct UUserWidget* HeadUI; // 0xa80(0x08)
	struct USkeletalMeshComponent* ConjoinedBodyComp; // 0xa88(0x08)
	struct FGameplayAbilitySpecHandle ChaseHandle; // 0xa90(0x04)
	struct FGameplayAbilitySpecHandle MarksystemHandle; // 0xa94(0x04)
	char pad_A98[0x8]; // 0xa98(0x08)
	struct ANOS_PlayerBase* MasterPlayer; // 0xaa0(0x08)
	char pad_AA8[0x10]; // 0xaa8(0x10)
	bool bStopMove; // 0xab8(0x01)
	bool UnMoveOneMin; // 0xab9(0x01)
	bool UnMoveTwoMin; // 0xaba(0x01)
	char pad_ABB[0x1]; // 0xabb(0x01)
	float MoveDeltaTime; // 0xabc(0x04)
	struct UPostProcessComponent* FlashPostCom; // 0xac0(0x08)
	struct UMaterialInstanceDynamic* FlashMI; // 0xac8(0x08)
	struct UMaterialInterface* FlashParent; // 0xad0(0x08)
	struct UTimelineComponent* FlashTimeline; // 0xad8(0x08)
	struct UCurveFloat* FloatCurve; // 0xae0(0x08)
	char pad_AE8[0x20]; // 0xae8(0x20)
	struct TMap<struct UUserWidget*, enum class ESlateVisibility> SavedHidWdiget; // 0xb08(0x50)
	bool IsHidWdiget; // 0xb58(0x01)
	bool bShowGroomHair; // 0xb59(0x01)
	char pad_B5A[0x1]; // 0xb5a(0x01)
	bool bIsSkillDecalEffect; // 0xb5b(0x01)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct TArray<struct FEffectOutlineData> AllEffectOutlineDatas; // 0xb60(0x10)
	struct UNOS_GameplayAbility* NorAttackAbility; // 0xb70(0x08)
	struct UNOS_GameplayAbility* InteractAbility; // 0xb78(0x08)
	struct FGameplayAbilitySpecHandle NorAttackAbilityHandle; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct USpringArmComponent* EndUserSpringArmCom; // 0xb88(0x08)
	struct UCineCameraComponent* EndUserCamera; // 0xb90(0x08)
	bool bChasingAudioActivated; // 0xb98(0x01)
	char pad_B99[0x7]; // 0xb99(0x07)
	struct USpringArmComponent* ObservedSpringArmCom; // 0xba0(0x08)
	struct UCameraComponent* ObservedCamera; // 0xba8(0x08)
	float ObservedCameraZoomAlpha; // 0xbb0(0x04)
	float ObservedCameraZoomRate; // 0xbb4(0x04)
	float ObservedCameraArmLength_Min; // 0xbb8(0x04)
	float ObservedCameraArmLength_Max; // 0xbbc(0x04)
	float ObservedCameraZoomInterpSpeed; // 0xbc0(0x04)
	float ObservedTargetArmLength_Target; // 0xbc4(0x04)
	struct FVector ObservedSocketOffset_Target; // 0xbc8(0x0c)
	bool bMeshVisible; // 0xbd4(0x01)
	bool bCollisionEnabled; // 0xbd5(0x01)
	char pad_BD6[0x1]; // 0xbd6(0x01)
	bool IsHuman; // 0xbd7(0x01)
	bool IsVoice; // 0xbd8(0x01)
	bool IsCanShow; // 0xbd9(0x01)
	char pad_BDA[0xe]; // 0xbda(0x0e)
	bool BaseCompeletedFirstDressSet; // 0xbe8(0x01)
	char pad_BE9[0x3]; // 0xbe9(0x03)
	struct FRotator NewCameraRotaion; // 0xbec(0x0c)
	bool IsActiveOtherCamera; // 0xbf8(0x01)
	bool bIsShowNicknameWidget; // 0xbf9(0x01)
	char pad_BFA[0x6]; // 0xbfa(0x06)
	struct FMulticastInlineDelegate IsShowVoice; // 0xc00(0x10)
	char pad_C10[0x8]; // 0xc10(0x08)
	struct TArray<struct AController*> RelevantControllers; // 0xc18(0x10)
	struct TArray<struct AController*> NotRelevantControllers; // 0xc28(0x10)
	struct TArray<struct FPerspectiveData> AllPerspectiveDatas; // 0xc38(0x10)
	char pad_C48[0x18]; // 0xc48(0x18)
	struct TArray<struct FInvisibleData> AllInvisibleDatas; // 0xc60(0x10)
	char pad_C70[0x18]; // 0xc70(0x18)
	float GravityScale; // 0xc88(0x04)
	bool bIgnoreGACost; // 0xc8c(0x01)
	bool bOutOfDelayTime; // 0xc8d(0x01)
	bool bDoubleClick; // 0xc8e(0x01)
	char pad_C8F[0x11]; // 0xc8f(0x11)
	struct UUserWidget* SocialAnimPanelUI; // 0xca0(0x08)
	char pad_CA8[0x28]; // 0xca8(0x28)

	void UpdateInteractTarget(int32_t OwnerID); // Function NotesOfSoul.NOS_PlayerBase.UpdateInteractTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1a36050
	void UpdateClientPerspective(); // Function NotesOfSoul.NOS_PlayerBase.UpdateClientPerspective // (Final|Native|Public|BlueprintCallable) // @ game+0x1a36030
	void Turn(float Value); // Function NotesOfSoul.NOS_PlayerBase.Turn // (Native|Event|Public|BlueprintEvent) // @ game+0x1a35fa0
	void TriggerOnChaseStateSwitchDelegate(bool OnChasing); // Function NotesOfSoul.NOS_PlayerBase.TriggerOnChaseStateSwitchDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35e40
	void TimelineFinishedCallback(); // Function NotesOfSoul.NOS_PlayerBase.TimelineFinishedCallback // (Native|Protected) // @ game+0x1a35e20
	void TimelineCallback(float Val); // Function NotesOfSoul.NOS_PlayerBase.TimelineCallback // (Native|Protected) // @ game+0x1a35d90
	void SwitchSettingBoardVisible(); // Function NotesOfSoul.NOS_PlayerBase.SwitchSettingBoardVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35d50
	void SwitchMaterial(enum class EMaterialManageType MmType); // Function NotesOfSoul.NOS_PlayerBase.SwitchMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35cb0
	void SwitchHidScreenWidget(); // Function NotesOfSoul.NOS_PlayerBase.SwitchHidScreenWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a35c90
	void StartGame(); // Function NotesOfSoul.NOS_PlayerBase.StartGame // (Final|Exec|Native|Public) // @ game+0xbc9a40
	void SpeakingUpdated(struct TArray<struct FString> IDList); // Function NotesOfSoul.NOS_PlayerBase.SpeakingUpdated // (Final|Native|Public|HasOutParms) // @ game+0x1a35a70
	void SetSkinArray(struct TArray<int32_t> SkinArr); // Function NotesOfSoul.NOS_PlayerBase.SetSkinArray // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a35800
	void SetSkillOutline(bool bShow); // Function NotesOfSoul.NOS_PlayerBase.SetSkillOutline // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a35770
	void SetSkillIconAvailableState(enum class EDisableSkillsType DisType, bool bEnabled); // Function NotesOfSoul.NOS_PlayerBase.SetSkillIconAvailableState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a356a0
	void SetShowVoiceIcon(struct UUserWidget* VoiceIcon, bool bShow); // Function NotesOfSoul.NOS_PlayerBase.SetShowVoiceIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x1a355d0
	void SetMeshVisible(bool Value); // Function NotesOfSoul.NOS_PlayerBase.SetMeshVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x1a354b0
	void SetMeshVisibility(bool bVisible); // Function NotesOfSoul.NOS_PlayerBase.SetMeshVisibility // (Native|Event|Public|BlueprintEvent) // @ game+0x1a35420
	void SetisUseAlsCamera(); // Function NotesOfSoul.NOS_PlayerBase.SetisUseAlsCamera // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetInteractiveOutline(bool bOutline); // Function NotesOfSoul.NOS_PlayerBase.SetInteractiveOutline // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35390
	void SetHeadWidgetLocation(); // Function NotesOfSoul.NOS_PlayerBase.SetHeadWidgetLocation // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35370
	void SetGravityScale(float Scale); // Function NotesOfSoul.NOS_PlayerBase.SetGravityScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1a352f0
	void SetDisableVoiceChat(bool bOpen); // Function NotesOfSoul.NOS_PlayerBase.SetDisableVoiceChat // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a35260
	void SetCollisionEnabled(bool Value); // Function NotesOfSoul.NOS_PlayerBase.SetCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1a351d0
	void SetCapsuleCollisionChannel_Multicast(enum class ECollisionChannel Channel, enum class ECollisionResponse NewResponse); // Function NotesOfSoul.NOS_PlayerBase.SetCapsuleCollisionChannel_Multicast // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a35100
	void ServerStartGame(); // Function NotesOfSoul.NOS_PlayerBase.ServerStartGame // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a350b0
	void ServerResetCD(); // Function NotesOfSoul.NOS_PlayerBase.ServerResetCD // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a34fd0
	void ServerRemoveTalent(int32_t TalentID); // Function NotesOfSoul.NOS_PlayerBase.ServerRemoveTalent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a34f10
	void ServerRemovePerspective(struct FPerspectiveData PerspectiveData); // Function NotesOfSoul.NOS_PlayerBase.ServerRemovePerspective // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a34e70
	void ServerEndGame(bool bHumanWin); // Function NotesOfSoul.NOS_PlayerBase.ServerEndGame // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a34db0
	void ServerAddTalent(int32_t TalentID); // Function NotesOfSoul.NOS_PlayerBase.ServerAddTalent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a34cf0
	void ServerAddPerspective(struct FPerspectiveData PerspectiveData); // Function NotesOfSoul.NOS_PlayerBase.ServerAddPerspective // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a34c50
	void ReSetCD(); // Function NotesOfSoul.NOS_PlayerBase.ReSetCD // (Final|Exec|Native|Public) // @ game+0xbc9a40
	void RemoveTalent(int32_t TalentID); // Function NotesOfSoul.NOS_PlayerBase.RemoveTalent // (Final|Exec|Native|Public) // @ game+0x1a32070
	void RemoveRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_PlayerBase.RemoveRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a347c0
	void RemovePerspective(struct FPerspectiveData PerspectiveData); // Function NotesOfSoul.NOS_PlayerBase.RemovePerspective // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a34720
	void RemoveNotRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_PlayerBase.RemoveNotRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a34630
	void RemoveMaterialEffect(struct FMaterialManageData materialmanagedatas); // Function NotesOfSoul.NOS_PlayerBase.RemoveMaterialEffect // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a345a0
	void RemoveInvisible(struct FInvisibleData InvisibleData, bool ForceServerOnRep); // Function NotesOfSoul.NOS_PlayerBase.RemoveInvisible // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a34490
	void RemoveEffectOutline(struct FGameplayTag Tag); // Function NotesOfSoul.NOS_PlayerBase.RemoveEffectOutline // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34400
	void RemoveAllPerspective(); // Function NotesOfSoul.NOS_PlayerBase.RemoveAllPerspective // (Final|Native|Public|BlueprintCallable) // @ game+0x1a343e0
	void RemoveAllInvisible(); // Function NotesOfSoul.NOS_PlayerBase.RemoveAllInvisible // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a343c0
	void RefuseChooseSurrender(); // Function NotesOfSoul.NOS_PlayerBase.RefuseChooseSurrender // (Final|Native|Public|BlueprintCallable) // @ game+0x1a343a0
	void ReceiveAutonomousRole(); // Function NotesOfSoul.NOS_PlayerBase.ReceiveAutonomousRole // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void QuickChooseSurrender(bool IsAccept); // Function NotesOfSoul.NOS_PlayerBase.QuickChooseSurrender // (Final|Native|Public|BlueprintCallable) // @ game+0x1a34310
	void PlaySound_Mulitcast(struct USoundBase* Sound, struct FVector Location); // Function NotesOfSoul.NOS_PlayerBase.PlaySound_Mulitcast // (Net|Native|Event|NetMulticast|Public|HasDefaults|BlueprintCallable) // @ game+0x1a34230
	void PlayerBeControlled_Reconnet(); // Function NotesOfSoul.NOS_PlayerBase.PlayerBeControlled_Reconnet // (Native|Event|Public|BlueprintEvent) // @ game+0x1a2adf0
	void PlayEffect_Multicast(struct UNiagaraSystem* Effect, struct FVector Location, struct FRotator Rotation); // Function NotesOfSoul.NOS_PlayerBase.PlayEffect_Multicast // (Net|Native|Event|NetMulticast|Public|HasDefaults|BlueprintCallable) // @ game+0x1a340f0
	void OpenSocialAnimPanel(); // Function NotesOfSoul.NOS_PlayerBase.OpenSocialAnimPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1a340d0
	void OpenMarkingSystem(); // Function NotesOfSoul.NOS_PlayerBase.OpenMarkingSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x1a340b0
	void OnRep_SkinArray(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_SkinArray // (Native|Public) // @ game+0x1a34090
	void OnRep_MeshVisible(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_MeshVisible // (Final|Native|Protected) // @ game+0x1a34070
	void OnRep_MaterialEffects(struct TArray<struct FMaterialManageData> materialmanagedatas); // Function NotesOfSoul.NOS_PlayerBase.OnRep_MaterialEffects // (Native|Public) // @ game+0x1a33f80
	void OnRep_GravityScale(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_GravityScale // (Final|Native|Protected) // @ game+0x1a33f60
	void OnRep_EnableCollision(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_EnableCollision // (Final|Native|Protected) // @ game+0x1a33f40
	void OnRep_CurState(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_CurState // (Final|Native|Public) // @ game+0x1a33f20
	void OnRep_AllPerspectiveDatas(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_AllPerspectiveDatas // (Final|Native|Protected) // @ game+0x1a33f00
	void OnRep_AllInvisibleDatas(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_AllInvisibleDatas // (Final|Native|Protected) // @ game+0x1a33ee0
	void OnRep_AllEffectOutlineDatas(); // Function NotesOfSoul.NOS_PlayerBase.OnRep_AllEffectOutlineDatas // (Final|Native|Protected) // @ game+0x1a33ec0
	void OnKeyBoardYPress(); // Function NotesOfSoul.NOS_PlayerBase.OnKeyBoardYPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33ea0
	void OnKeyBoardTRelease(); // Function NotesOfSoul.NOS_PlayerBase.OnKeyBoardTRelease // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33e80
	void OnKeyBoardTPress(); // Function NotesOfSoul.NOS_PlayerBase.OnKeyBoardTPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33e60
	void OnClientReportNotify(int32_t TargetId, struct TArray<struct FString> Key, struct TArray<struct FString> Value, struct FString ImagePath); // Function NotesOfSoul.NOS_PlayerBase.OnClientReportNotify // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a33c80
	void OnClientPunishNotify(int32_t Player, enum class EPlayerPunishType Type); // Function NotesOfSoul.NOS_PlayerBase.OnClientPunishNotify // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a33bb0
	void OnClientInitGA(); // Function NotesOfSoul.NOS_PlayerBase.OnClientInitGA // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33b90
	void ObservedCameraZoom(float Value); // Function NotesOfSoul.NOS_PlayerBase.ObservedCameraZoom // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33a30
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function NotesOfSoul.NOS_PlayerBase.NoticeInitCharacterDressCompeleted // (Native|Event|Public|BlueprintEvent) // @ game+0x1a339a0
	void NormalAttack(); // Function NotesOfSoul.NOS_PlayerBase.NormalAttack // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a33980
	void MultiResetTransform(struct FTransform NewTransform); // Function NotesOfSoul.NOS_PlayerBase.MultiResetTransform // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x1a33890
	void MoveRight(float Value); // Function NotesOfSoul.NOS_PlayerBase.MoveRight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33770
	void MoveLeft(float Value); // Function NotesOfSoul.NOS_PlayerBase.MoveLeft // (Native|Event|Public|BlueprintEvent) // @ game+0x1a336e0
	void MoveForward(float Value); // Function NotesOfSoul.NOS_PlayerBase.MoveForward // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33650
	void MoveBack(float Value); // Function NotesOfSoul.NOS_PlayerBase.MoveBack // (Native|Event|Public|BlueprintEvent) // @ game+0x1a335c0
	void LookUp(float Value); // Function NotesOfSoul.NOS_PlayerBase.LookUp // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33530
	void JoinSpectatorer(enum class ESpectatorCamp SpectatorCamp); // Function NotesOfSoul.NOS_PlayerBase.JoinSpectatorer // (Native|Event|Public|BlueprintEvent) // @ game+0x1a334b0
	bool IspiCansee(); // Function NotesOfSoul.NOS_PlayerBase.IspiCansee // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33480
	bool IsInteractiveOutline(); // Function NotesOfSoul.NOS_PlayerBase.IsInteractiveOutline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a33460
	bool IsEnemy(struct ANOS_PlayerBase* OtherPlayer); // Function NotesOfSoul.NOS_PlayerBase.IsEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a333c0
	void InitFlashMI(); // Function NotesOfSoul.NOS_PlayerBase.InitFlashMI // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a333a0
	void InitAbilitiesOnControllerSettled(); // Function NotesOfSoul.NOS_PlayerBase.InitAbilitiesOnControllerSettled // (Final|Native|Public|BlueprintCallable) // @ game+0x1a33380
	void Human_OnMouseRightPress(); // Function NotesOfSoul.NOS_PlayerBase.Human_OnMouseRightPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33360
	void Human_OnMouseLeftPress(); // Function NotesOfSoul.NOS_PlayerBase.Human_OnMouseLeftPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33340
	void Ghost_OnMouseRightPress(); // Function NotesOfSoul.NOS_PlayerBase.Ghost_OnMouseRightPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33320
	void Ghost_OnMouseLeftPress(); // Function NotesOfSoul.NOS_PlayerBase.Ghost_OnMouseLeftPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a33300
	char GetRemoteViewPitch(); // Function NotesOfSoul.NOS_PlayerBase.GetRemoteViewPitch // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a33180
	struct UNOS_WordsComponent* GetNosWordsComponent(); // Function NotesOfSoul.NOS_PlayerBase.GetNosWordsComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a33160
	struct UNOS_AudioComponent* GetNosAudioComponent(); // Function NotesOfSoul.NOS_PlayerBase.GetNosAudioComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a33140
	struct UNiagaraSystem* GetNorAttackOrSkillNSByIndex(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNorAttackOrSkillNSByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a330a0
	struct USoundBase* GetNeedUseSoundByIndex(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNeedUseSoundByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a33000
	struct UParticleSystem* GetNeedUsePS(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNeedUsePS // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32f60
	struct UMaterialInterface* GetNeedUseMaterialsByIndex(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNeedUseMaterialsByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32ec0
	struct UStaticMesh* GetNeedUseExtraStaticMesh(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNeedUseExtraStaticMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32e20
	struct USkeletalMesh* GetNeedUseExtraMesh(struct FName Key); // Function NotesOfSoul.NOS_PlayerBase.GetNeedUseExtraMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32d80
	bool GetIsXiaoPiControlled(); // Function NotesOfSoul.NOS_PlayerBase.GetIsXiaoPiControlled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a32d60
	bool GetIsWolfControlled(); // Function NotesOfSoul.NOS_PlayerBase.GetIsWolfControlled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a32d40
	struct UNOS_GameplayAbility* GetInteractAbility(struct UKxInteractBoxComponent* InteractCom); // Function NotesOfSoul.NOS_PlayerBase.GetInteractAbility // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a32ca0
	enum class EHealthState GetHealthState(); // Function NotesOfSoul.NOS_PlayerBase.GetHealthState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32c70
	struct UGroomComponent* GetHairEffectCom(); // Function NotesOfSoul.NOS_PlayerBase.GetHairEffectCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32c50
	struct USkeletalMeshComponent* GetHairCom(); // Function NotesOfSoul.NOS_PlayerBase.GetHairCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32c30
	struct USkeletalMeshComponent* GetConjoinedBodyComp(); // Function NotesOfSoul.NOS_PlayerBase.GetConjoinedBodyComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32c10
	struct USkeletalMeshComponent* GetClothCom(); // Function NotesOfSoul.NOS_PlayerBase.GetClothCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32bf0
	struct UCameraComponent* GetCameraComponent(); // Function NotesOfSoul.NOS_PlayerBase.GetCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a32bd0
	void ForceCloseSocialAnimPanel(); // Function NotesOfSoul.NOS_PlayerBase.ForceCloseSocialAnimPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32bb0
	void FlashEffect(); // Function NotesOfSoul.NOS_PlayerBase.FlashEffect // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a32b90
	void ExecuteOnBeHurtDelegate(struct AActor* HurtInstigator, struct AActor* HurtVictim, bool bVictimCrawl, struct FGameplayTag HurtSourceTag); // Function NotesOfSoul.NOS_PlayerBase.ExecuteOnBeHurtDelegate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a32a30
	void ExecuteJumpAbility(); // Function NotesOfSoul.NOS_PlayerBase.ExecuteJumpAbility // (Native|Event|Public|BlueprintEvent) // @ game+0x1a32a10
	bool ExecuteGameplayAbility(struct UNOS_GameplayAbility* GameplayAbilityClass); // Function NotesOfSoul.NOS_PlayerBase.ExecuteGameplayAbility // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32970
	void ExecuteDoingShiHunSuccessDelegate(struct AActor* HurtInstigator, struct AActor* HurtVictim); // Function NotesOfSoul.NOS_PlayerBase.ExecuteDoingShiHunSuccessDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x1a328a0
	void EndGame(bool bHumanWin); // Function NotesOfSoul.NOS_PlayerBase.EndGame // (Final|Exec|Native|Public) // @ game+0x1a020f0
	void DelTargetFile(struct FString Path); // Function NotesOfSoul.NOS_PlayerBase.DelTargetFile // (Final|Native|Public) // @ game+0x1a327b0
	void CurrentLookObjectInInteractCollision(struct AActor* LookObject); // Function NotesOfSoul.NOS_PlayerBase.CurrentLookObjectInInteractCollision // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a32690
	void CrashTestFunction(); // Function NotesOfSoul.NOS_PlayerBase.CrashTestFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32650
	void CloseSocialAnimPanel(); // Function NotesOfSoul.NOS_PlayerBase.CloseSocialAnimPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32630
	void ClientSetNewCameraView(struct AActor* NewViewTarget); // Function NotesOfSoul.NOS_PlayerBase.ClientSetNewCameraView // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a325a0
	void ClearAllPlayerOutline(); // Function NotesOfSoul.NOS_PlayerBase.ClearAllPlayerOutline // (Final|Native|Public|BlueprintCallable) // @ game+0x1a324d0
	void CheckOnRep_AllInvisibleDatas(); // Function NotesOfSoul.NOS_PlayerBase.CheckOnRep_AllInvisibleDatas // (Final|Native|Public|BlueprintCallable) // @ game+0x1a324b0
	void CheckIsShowGroomCom(bool IsOpen); // Function NotesOfSoul.NOS_PlayerBase.CheckIsShowGroomCom // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a32420
	void CheckClientInitGA(); // Function NotesOfSoul.NOS_PlayerBase.CheckClientInitGA // (Final|Native|Protected) // @ game+0x1a32400
	bool CanHeadWidgetShow(); // Function NotesOfSoul.NOS_PlayerBase.CanHeadWidgetShow // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a322b0
	bool CanBeControlled(bool bInitiativeControl, struct ANOS_PlayerBase* InsitigatorPlayer, struct AActor* CauserActor, struct FGameplayTagContainer TagContainer); // Function NotesOfSoul.NOS_PlayerBase.CanBeControlled // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a32100
	void AddTalent(int32_t TalentID); // Function NotesOfSoul.NOS_PlayerBase.AddTalent // (Final|Exec|Native|Public) // @ game+0x1a32070
	void AddRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_PlayerBase.AddRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a31f80
	void AddPerspective(struct FPerspectiveData PerspectiveData); // Function NotesOfSoul.NOS_PlayerBase.AddPerspective // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a31ee0
	void AddNotRelevant(struct TArray<struct AController*> NotRelevantArray); // Function NotesOfSoul.NOS_PlayerBase.AddNotRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a31df0
	void AddMaterialEffect(struct FMaterialManageData materialmanagedatas); // Function NotesOfSoul.NOS_PlayerBase.AddMaterialEffect // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a31d70
	void AddInvisible(struct FInvisibleData InvisibleData, bool ForceServerOnRep); // Function NotesOfSoul.NOS_PlayerBase.AddInvisible // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a31c60
	void AddEffectOutline(struct FGameplayTag Tag, float Color); // Function NotesOfSoul.NOS_PlayerBase.AddEffectOutline // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31a30
	void AcceptChooseSurrender(); // Function NotesOfSoul.NOS_PlayerBase.AcceptChooseSurrender // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31a10
};

// Class NotesOfSoul.NOS_PlayerGhost
// Size: 0x1b00 (Inherited: 0xcd0)
struct ANOS_PlayerGhost : ANOS_PlayerBase {
	struct FGameplayAbilitySpecHandle Skill1Handle; // 0xcd0(0x04)
	struct FGameplayAbilitySpecHandle Skill2Handle; // 0xcd4(0x04)
	struct FGameplayAbilitySpecHandle Skill3Handle; // 0xcd8(0x04)
	struct FGameplayAbilitySpecHandle TerritoryHandle; // 0xcdc(0x04)
	struct UNiagaraComponent* FX_GhostFog; // 0xce0(0x08)
	struct UNiagaraComponent* FX_GhostBoom; // 0xce8(0x08)
	struct UAnimMontage* ShiHunMontage; // 0xcf0(0x08)
	struct UAnimMontage* OpenDoorMontage; // 0xcf8(0x08)
	struct UAnimMontage* CloseDoorMontage; // 0xd00(0x08)
	char pad_D08[0x708]; // 0xd08(0x708)
	struct FNOS_Accessories WeaponAccessories; // 0x1410(0x500)
	struct TArray<bool> SkillUpgradeTriggers; // 0x1910(0x10)
	int32_t CurrentSkillUpgradeTriggerIndex; // 0x1920(0x04)
	char pad_1924[0x4]; // 0x1924(0x04)
	struct TArray<float> SkillUpgradeTimes; // 0x1928(0x10)
	int32_t UltimateSkillUpgradeNum; // 0x1938(0x04)
	bool bGhostFogAcitved; // 0x193c(0x01)
	bool GhostFogState; // 0x193d(0x01)
	bool bSkill1IsCD; // 0x193e(0x01)
	bool bSkill2IsCD; // 0x193f(0x01)
	bool bSkill3IsCD; // 0x1940(0x01)
	bool bSkillRIsCD; // 0x1941(0x01)
	char pad_1942[0x6]; // 0x1942(0x06)
	struct APawn* LRS_Summononer; // 0x1948(0x08)
	SoftClassProperty ArenaModelAnimBlueprint; // 0x1950(0x28)
	bool bTurnLetfed; // 0x1978(0x01)
	bool bTurnRighted; // 0x1979(0x01)
	bool bTurnForwarded; // 0x197a(0x01)
	bool bTurnBackwarded; // 0x197b(0x01)
	bool bMoving; // 0x197c(0x01)
	char pad_197D[0x3]; // 0x197d(0x03)
	struct FMulticastInlineDelegate TurnLeftEvent; // 0x1980(0x10)
	struct FMulticastInlineDelegate TurnForwardEvent; // 0x1990(0x10)
	struct FMulticastInlineDelegate TurnIdleEvent; // 0x19a0(0x10)
	struct FMulticastInlineDelegate TurnRightEvent; // 0x19b0(0x10)
	struct FMulticastInlineDelegate GhostFog; // 0x19c0(0x10)
	float FirstAttackAdditionalDamage; // 0x19d0(0x04)
	bool bUnlockUltimateSkill; // 0x19d4(0x01)
	char pad_19D5[0x3]; // 0x19d5(0x03)
	struct UNOS_GameplayAbility* Skill1Ability; // 0x19d8(0x08)
	struct UNOS_GameplayAbility* Skill2Ability; // 0x19e0(0x08)
	struct UNOS_GameplayAbility* Skill3Ability; // 0x19e8(0x08)
	struct UNOS_GameplayAbility* TerritoryAbility; // 0x19f0(0x08)
	struct UNOS_GameplayAbility* KillHumanAbility; // 0x19f8(0x08)
	struct UNOS_GhostAttributeSet* GhostAttributeSet; // 0x1a00(0x08)
	char pad_1A08[0x10]; // 0x1a08(0x10)
	struct USoundBase* UpgradeSoundLevel1; // 0x1a18(0x08)
	struct USoundBase* UpgradeSoundLevel2; // 0x1a20(0x08)
	struct USoundBase* UpgradeSoundLevel3; // 0x1a28(0x08)
	float CurGhostFogCDTime; // 0x1a30(0x04)
	float MaxGhostFogCDTime; // 0x1a34(0x04)
	bool bGhostFogCDing; // 0x1a38(0x01)
	char pad_1A39[0x3]; // 0x1a39(0x03)
	struct FVector GhostCameraDefaultPos; // 0x1a3c(0x0c)
	float GhostFogDefaultHeight; // 0x1a48(0x04)
	float ChaseTime; // 0x1a4c(0x04)
	bool ChaseTimeEnough; // 0x1a50(0x01)
	char pad_1A51[0x3]; // 0x1a51(0x03)
	float UseSkillTimeinterval; // 0x1a54(0x04)
	float AttackTimeinterval; // 0x1a58(0x04)
	char pad_1A5C[0x8c]; // 0x1a5c(0x8c)
	struct UAnimMontage* ManShiHunMontage; // 0x1ae8(0x08)
	struct UAnimMontage* WomanShiHunMontage; // 0x1af0(0x08)
	char pad_1AF8[0x8]; // 0x1af8(0x08)

	void UseSkill(int32_t SkillIndex); // Function NotesOfSoul.NOS_PlayerGhost.UseSkill // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3bb20
	void UseGhostSkill(struct FGameplayTagContainer tagContaginer); // Function NotesOfSoul.NOS_PlayerGhost.UseGhostSkill // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3b930
	void UseGhostAttack(struct FGameplayTagContainer tagContaginer); // Function NotesOfSoul.NOS_PlayerGhost.UseGhostAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3b850
	void UpdateGhostSkill(float SkillIndex); // Function NotesOfSoul.NOS_PlayerGhost.UpdateGhostSkill // (Final|Native|Public) // @ game+0x1a3b7d0
	void UnlockUltimateSkill(); // Function NotesOfSoul.NOS_PlayerGhost.UnlockUltimateSkill // (Final|Exec|Native|Public) // @ game+0xbc9a40
	void TryUpdateGhostSkill04(struct FKey InputKey); // Function NotesOfSoul.NOS_PlayerGhost.TryUpdateGhostSkill04 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3b6e0
	void TryUpdateGhostSkill03(struct FKey InputKey); // Function NotesOfSoul.NOS_PlayerGhost.TryUpdateGhostSkill03 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3b5f0
	void TryUpdateGhostSkill02(struct FKey InputKey); // Function NotesOfSoul.NOS_PlayerGhost.TryUpdateGhostSkill02 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3b500
	void TryUpdateGhostSkill01(struct FKey InputKey); // Function NotesOfSoul.NOS_PlayerGhost.TryUpdateGhostSkill01 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3b410
	void SetSkillUpgradeUltimate(bool IsUnleash); // Function NotesOfSoul.NOS_PlayerGhost.SetSkillUpgradeUltimate // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a3af80
	void SetSkillUpgradeTimers(enum class EKxGameStateType CurType); // Function NotesOfSoul.NOS_PlayerGhost.SetSkillUpgradeTimers // (Final|Native|Public) // @ game+0x1a3af00
	void ServerUnlockUltimateSkill(); // Function NotesOfSoul.NOS_PlayerGhost.ServerUnlockUltimateSkill // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3ab90
	void ServerAddSoulPoint(int32_t Num); // Function NotesOfSoul.NOS_PlayerGhost.ServerAddSoulPoint // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3aad0
	void ServerAddSkillPoint(int32_t Num); // Function NotesOfSoul.NOS_PlayerGhost.ServerAddSkillPoint // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3a950
	void ResetCrouchTime(); // Function NotesOfSoul.NOS_PlayerGhost.ResetCrouchTime // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
	void OnRep_SkillUpgradeTriggers(); // Function NotesOfSoul.NOS_PlayerGhost.OnRep_SkillUpgradeTriggers // (Final|Native|Public) // @ game+0x1a3a670
	void OnRep_OnGhostFogReset(); // Function NotesOfSoul.NOS_PlayerGhost.OnRep_OnGhostFogReset // (Final|Native|Public) // @ game+0x1a3a650
	void OnJump(); // Function NotesOfSoul.NOS_PlayerGhost.OnJump // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a560
	void NotifyStopCurrentAnimMontage(); // Function NotesOfSoul.NOS_PlayerGhost.NotifyStopCurrentAnimMontage // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a3a270
	void MultiSwitchGhostStealthCollisionData(bool IsStealth); // Function NotesOfSoul.NOS_PlayerGhost.MultiSwitchGhostStealthCollisionData // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a3a140
	struct FNOS_GhostSuit GetGhostCurrentSuit(); // Function NotesOfSoul.NOS_PlayerGhost.GetGhostCurrentSuit // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39f00
	void ExecuteTerritory(); // Function NotesOfSoul.NOS_PlayerGhost.ExecuteTerritory // (Native|Event|Public|BlueprintEvent) // @ game+0x1a39e10
	void ClientSendSkillUpgradeUnlockToUI(); // Function NotesOfSoul.NOS_PlayerGhost.ClientSendSkillUpgradeUnlockToUI // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a39c30
	void ChangeGhostFogState(bool bActive); // Function NotesOfSoul.NOS_PlayerGhost.ChangeGhostFogState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a399b0
	void BeginSetGhostFogChanel(); // Function NotesOfSoul.NOS_PlayerGhost.BeginSetGhostFogChanel // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a398f0
	void BeginCrouchCDTimer(); // Function NotesOfSoul.NOS_PlayerGhost.BeginCrouchCDTimer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a398d0
	void AddSoulPoint(int32_t Num); // Function NotesOfSoul.NOS_PlayerGhost.AddSoulPoint // (Final|Exec|Native|Public) // @ game+0x1a32070
	void AddSkillPoint(int32_t Num); // Function NotesOfSoul.NOS_PlayerGhost.AddSkillPoint // (Final|Exec|Native|Public) // @ game+0x1a32070
};

// Class NotesOfSoul.NOS_EightFeetAdult
// Size: 0x1b30 (Inherited: 0x1b00)
struct ANOS_EightFeetAdult : ANOS_PlayerGhost {
	char pad_1B00[0x8]; // 0x1b00(0x08)
	bool AimSkill2TeleportBall; // 0x1b08(0x01)
	char pad_1B09[0x3]; // 0x1b09(0x03)
	float Config_Skill2_MaxTeleportLength; // 0x1b0c(0x04)
	struct UNOS_GameplayAbility* Skill1_MoveHatTargetAddSpeedGA; // 0x1b10(0x08)
	char pad_1B18[0x18]; // 0x1b18(0x18)

	bool TestGetWarningBoxAcc(); // Function NotesOfSoul.NOS_EightFeetAdult.TestGetWarningBoxAcc // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07910
	int32_t TestGetNum(); // Function NotesOfSoul.NOS_EightFeetAdult.TestGetNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1a078e0
	int32_t GetTeleportBallTeleportState(struct ANOS_DoorBase* Door, float MaxTeleportLength); // Function NotesOfSoul.NOS_EightFeetAdult.GetTeleportBallTeleportState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a06b30
	int32_t GetSkillLevelByHandle(struct FGameplayAbilitySpecHandle Handle); // Function NotesOfSoul.NOS_EightFeetAdult.GetSkillLevelByHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x1a06a60
};

// Class NotesOfSoul.NOS_EightFeetAdultAnimInstance
// Size: 0x440 (Inherited: 0x440)
struct UNOS_EightFeetAdultAnimInstance : UNOS_GhostAnimInstanceBase {
};

// Class NotesOfSoul.NOS_Element
// Size: 0x100 (Inherited: 0xf0)
struct UNOS_Element : UKxConsumableObject {
	struct ANOS_ElementSlot* ElementSlot; // 0xf0(0x08)
	enum class ENOSElementSlotType ElementType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class NotesOfSoul.NOS_ElementBox
// Size: 0x2e0 (Inherited: 0x280)
struct ANOS_ElementBox : AKxPickupBase {
	bool bIsOpenning; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t CurBatch; // 0x284(0x04)
	struct ANOS_InteractSpawnMgr* InteractSpawnMgr; // 0x288(0x08)
	struct TArray<struct UMaterialInstance*> ElementMaterialArray; // 0x290(0x10)
	struct USceneComponent* ElementSpawnPointCom; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_ElementModelCom; // 0x2a8(0x08)
	struct UKxInteractBoxComponent* ElementInteractBoxCom; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OpenBoxEvent; // 0x2c0(0x10)
	enum class ENOSElementSlotType ElementType; // 0x2d0(0x01)
	bool IsOpen; // 0x2d1(0x01)
	char pad_2D2[0xe]; // 0x2d2(0x0e)

	void TriggerGuaSu(struct ACharacter* Character); // Function NotesOfSoul.NOS_ElementBox.TriggerGuaSu // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a07c10
	void OpenBox(enum class ENOSElementSlotType Type); // Function NotesOfSoul.NOS_ElementBox.OpenBox // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a06f90
	void BeSeenByHuman(struct ANOS_PlayerHuman* ConcreteHuman, float Second); // Function NotesOfSoul.NOS_ElementBox.BeSeenByHuman // (Final|Native|Public|BlueprintCallable) // @ game+0x1a06390
};

// Class NotesOfSoul.NOS_ElementSlot
// Size: 0x2c0 (Inherited: 0x220)
struct ANOS_ElementSlot : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	bool bIsInteracting; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct ANOS_PlayerHuman* InteractingHuman; // 0x230(0x08)
	struct FMulticastInlineDelegate OnElementSlotInteractUpdate; // 0x238(0x10)
	struct FMulticastInlineDelegate OnEnableElementSealUpdate; // 0x248(0x10)
	struct FMulticastInlineDelegate OnElementSlotInteractSuc; // 0x258(0x10)
	struct USceneComponent* SceneCom; // 0x268(0x08)
	struct USphereComponent* SphereCom; // 0x270(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x278(0x08)
	struct FMulticastInlineDelegate OnSlotTypeAndInteractSucNum; // 0x280(0x10)
	struct TArray<struct AController*> RelevantControllers; // 0x290(0x10)
	struct TArray<struct AController*> NotRelevantControllers; // 0x2a0(0x10)
	bool bForceShow; // 0x2b0(0x01)
	enum class ENOSElementSlotType SlotType; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	int32_t InteractSucNum; // 0x2b4(0x04)
	bool bEnableElementSeal; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t NeedInteract; // 0x2bc(0x04)

	void SubElementSlotCompleteNum(); // Function NotesOfSoul.NOS_ElementSlot.SubElementSlotCompleteNum // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a078c0
	void SetSlotType(enum class ENOSElementSlotType Type); // Function NotesOfSoul.NOS_ElementSlot.SetSlotType // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07720
	void SetShowElementSlot(bool bShow); // Function NotesOfSoul.NOS_ElementSlot.SetShowElementSlot // (Native|Event|Public|BlueprintEvent) // @ game+0x1a01f40
	void SetNeedInteract(int32_t NewSucNum); // Function NotesOfSoul.NOS_ElementSlot.SetNeedInteract // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07680
	void SetInteractSucNum(int32_t NewSucNum); // Function NotesOfSoul.NOS_ElementSlot.SetInteractSucNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1a075e0
	void SetInteractElementSlot(bool bInteracting); // Function NotesOfSoul.NOS_ElementSlot.SetInteractElementSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07550
	void SetForceShow(bool bShow); // Function NotesOfSoul.NOS_ElementSlot.SetForceShow // (Final|Native|Public|BlueprintCallable) // @ game+0x1a074c0
	void SetEnableElementSeal(bool bVal); // Function NotesOfSoul.NOS_ElementSlot.SetEnableElementSeal // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07430
	void RemoveRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_ElementSlot.RemoveRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a07340
	void RemoveNotRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_ElementSlot.RemoveNotRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a07250
	void PerspectiveElementSlot(bool bShow); // Function NotesOfSoul.NOS_ElementSlot.PerspectiveElementSlot // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x11d1f30
	void OnSphereEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_ElementSlot.OnSphereEndOverlap // (Final|Native|Protected) // @ game+0x1a06e30
	void OnSphereBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_ElementSlot.OnSphereBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x1a06c20
	void OnRep_SlotTypeAndInteractSucNum(); // Function NotesOfSoul.NOS_ElementSlot.OnRep_SlotTypeAndInteractSucNum // (Final|Native|Private) // @ game+0x1a06c00
	enum class ENOSElementSlotType GetSlotType(); // Function NotesOfSoul.NOS_ElementSlot.GetSlotType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a06af0
	int32_t GetNeedInteract(); // Function NotesOfSoul.NOS_ElementSlot.GetNeedInteract // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1a06a40
	int32_t GetInteractSucNum(); // Function NotesOfSoul.NOS_ElementSlot.GetInteractSucNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a06a20
	bool CanUse(); // Function NotesOfSoul.NOS_ElementSlot.CanUse // (Native|Event|Public|BlueprintEvent) // @ game+0x1a06850
	void AddRelevant(struct TArray<struct AController*> RelevantArray); // Function NotesOfSoul.NOS_ElementSlot.AddRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a062a0
	void AddNotRelevant(struct TArray<struct AController*> NotRelevantArray); // Function NotesOfSoul.NOS_ElementSlot.AddNotRelevant // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a061b0
};

// Class NotesOfSoul.NOS_ElementSlotSpawnPoint
// Size: 0x258 (Inherited: 0x238)
struct ANOS_ElementSlotSpawnPoint : ANOS_SpawnPointBase {
	enum class ENOSElementSlotType SlotType; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UStaticMeshComponent* SM_ModelCom; // 0x240(0x08)
	struct UBillboardComponent* SignCom_One; // 0x248(0x08)
	struct UBillboardComponent* SignCom_Ten; // 0x250(0x08)
};

// Class NotesOfSoul.NOS_ElementSpawnPoint
// Size: 0x258 (Inherited: 0x238)
struct ANOS_ElementSpawnPoint : ANOS_SpawnPointBase {
	struct ANOS_ElementBox* SpawnElementBox; // 0x238(0x08)
	struct USceneComponent* RootCom; // 0x240(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x248(0x08)
	bool bIsExistElementBox; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
};

// Class NotesOfSoul.NOS_ElevatorDoor
// Size: 0x280 (Inherited: 0x280)
struct ANOS_ElevatorDoor : AKxElevatorDoor {
};

// Class NotesOfSoul.NOS_EventManagerComponent
// Size: 0x150 (Inherited: 0xb0)
struct UNOS_EventManagerComponent : UActorComponent {
	char pad_B0[0xa0]; // 0xb0(0xa0)

	void TriggerEvent_Name(struct FName EventName, struct FEventRelevantData EventRelevantData); // Function NotesOfSoul.NOS_EventManagerComponent.TriggerEvent_Name // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a07ab0
	void TriggerEvent(enum class EEventType EventType, struct FEventRelevantData EventRelevantData); // Function NotesOfSoul.NOS_EventManagerComponent.TriggerEvent // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a07940
	void RemoveEventListener_Name(struct FName EventName, struct UObject* Who, struct FName FuncName); // Function NotesOfSoul.NOS_EventManagerComponent.RemoveEventListener_Name // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07140
	void RemoveEventListener(enum class EEventType EventType, struct UObject* Who, struct FName FuncName); // Function NotesOfSoul.NOS_EventManagerComponent.RemoveEventListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1a07030
	void CleanEvent(); // Function NotesOfSoul.NOS_EventManagerComponent.CleanEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a06880
	void AddEventListener_Name(struct FName EventName, struct UObject* Who, struct FName FuncName); // Function NotesOfSoul.NOS_EventManagerComponent.AddEventListener_Name // (Final|Native|Public|BlueprintCallable) // @ game+0x1a060a0
	void AddEventListener(enum class EEventType EventType, struct UObject* Who, struct FName FuncName); // Function NotesOfSoul.NOS_EventManagerComponent.AddEventListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1a05f90
};

// Class NotesOfSoul.NOS_Flashlight
// Size: 0x330 (Inherited: 0x220)
struct ANOS_Flashlight : AActor {
	struct FName AttachSocket; // 0x220(0x08)
	float ConeHeight; // 0x228(0x04)
	float ConeDiameter; // 0x22c(0x04)
	struct FRotator NormalRotator; // 0x230(0x0c)
	struct FRotator DamagedRotator; // 0x23c(0x0c)
	struct FMulticastInlineDelegate LightOn; // 0x248(0x10)
	struct FMulticastInlineDelegate LightOff; // 0x258(0x10)
	struct USceneComponent* RootSceneComp; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x270(0x08)
	struct USpotLightComponent* SpotLightComp; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Security_Camera_Viewcone; // 0x280(0x08)
	struct TSoftObjectPtr<struct UTexture2D> FlashlightIcon; // 0x288(0x28)
	struct TSoftObjectPtr<struct USoundBase> FlashlightSound; // 0x2b0(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x2d8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> LightSilhouette; // 0x300(0x28)
	bool IsActivated; // 0x328(0x01)
	bool IsLightOn; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)

	void TurnLightOn(); // Function NotesOfSoul.NOS_Flashlight.TurnLightOn // (Final|Native|Public|BlueprintCallable) // @ game+0x1a16120
	void TurnLightOff(); // Function NotesOfSoul.NOS_Flashlight.TurnLightOff // (Final|Native|Public|BlueprintCallable) // @ game+0x1a16100
	void MultiInitFlashlight(); // Function NotesOfSoul.NOS_Flashlight.MultiInitFlashlight // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a01e00
	bool GetFlashlightSwitchingState(); // Function NotesOfSoul.NOS_Flashlight.GetFlashlightSwitchingState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10ee0
	void DeactivateFlashlight(); // Function NotesOfSoul.NOS_Flashlight.DeactivateFlashlight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a01de0
	void ActivateFlashlight(); // Function NotesOfSoul.NOS_Flashlight.ActivateFlashlight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a0ed00
};

// Class NotesOfSoul.NOS_FunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNOS_FunctionLibrary : UBlueprintFunctionLibrary {

	bool WriteLocalDataTable(struct UDataTable* DT, struct FName RowName, struct TMap<struct FString, float> datamap); // Function NotesOfSoul.NOS_FunctionLibrary.WriteLocalDataTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a163a0
	bool WriteLocalCameraType(struct UDataTable* DT, struct FName RowName, struct FCamraSetingData Data); // Function NotesOfSoul.NOS_FunctionLibrary.WriteLocalCameraType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a16200
	struct FDateTime UnixTimeStampToDataTime(int64_t UTS); // Function NotesOfSoul.NOS_FunctionLibrary.UnixTimeStampToDataTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a16140
	struct FNOS_HumanUnderwear TryGetUnderwearDTAttribute(int32_t CharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.TryGetUnderwearDTAttribute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a16010
	void TakeOffAllMesh(struct TMap<enum class EAccessoriesType, struct USkeletalMeshComponent*> TargetComp); // Function NotesOfSoul.NOS_FunctionLibrary.TakeOffAllMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a15f00
	void SortFloatArrayDirectly(struct TArray<float> FloatArray, bool Reversed); // Function NotesOfSoul.NOS_FunctionLibrary.SortFloatArrayDirectly // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a15e00
	struct FString SolarToLunar(int32_t Year, int32_t Month, int32_t Day, int32_t OutYear, int32_t OutMonth, int32_t OutDay); // Function NotesOfSoul.NOS_FunctionLibrary.SolarToLunar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a15bf0
	int32_t SloarMonthDays(int32_t Year, int32_t Month); // Function NotesOfSoul.NOS_FunctionLibrary.SloarMonthDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a15b20
	void SetGroomComp(struct UGroomComponent* GroomComponent, struct UGroomAsset* Asset, struct UGroomBindingAsset* InBinding, struct UPhysicsAsset* PhysicsAsset); // Function NotesOfSoul.NOS_FunctionLibrary.SetGroomComp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a159d0
	struct TArray<struct ULGUIBasePanel*> SearchWidgetByKeyWords(struct FString SearchKey, struct TMap<struct ULGUIBasePanel*, struct FString> AllKeyWords, bool bFuzzySearch, char FuzzyMinChar); // Function NotesOfSoul.NOS_FunctionLibrary.SearchWidgetByKeyWords // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a15780
	float RotationSwitch(float Yaw); // Function NotesOfSoul.NOS_FunctionLibrary.RotationSwitch // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a156d0
	void RevertScreenWidget(struct TArray<struct FHidWidget> SaveHidWidget); // Function NotesOfSoul.NOS_FunctionLibrary.RevertScreenWidget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a155f0
	void ReSpawnElement(enum class ENOSElementSlotType EElementType); // Function NotesOfSoul.NOS_FunctionLibrary.ReSpawnElement // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a14b10
	void RequestWindowsScreenShot(struct FString Path); // Function NotesOfSoul.NOS_FunctionLibrary.RequestWindowsScreenShot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a15510
	void RequestScreenShot(struct FDelegate ScreenShotResponseDelegate, struct FString ScreenshotFileName, int32_t SizeX, int32_t SizeY, bool bInShowUI, bool bHighResScreenShot, bool bAddFilenameSuffix); // Function NotesOfSoul.NOS_FunctionLibrary.RequestScreenShot // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a152c0
	void RequestHttpNoDelegate(struct FString URL, bool bUsingPost, struct TMap<struct FString, struct FString> params, struct FString ImagePath, bool bUploadLog); // Function NotesOfSoul.NOS_FunctionLibrary.RequestHttpNoDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a14fa0
	void RequestHttp(struct FString URL, bool bUsingPost, struct TMap<struct FString, struct FString> params, struct FString ImagePath, struct FDelegate ResponseDelegate, bool bUploadLog); // Function NotesOfSoul.NOS_FunctionLibrary.RequestHttp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a14c20
	bool RecordDevGlobalLog(struct FString Content); // Function NotesOfSoul.NOS_FunctionLibrary.RecordDevGlobalLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a14b80
	struct TArray<int32_t> QuerySkinID(struct FString ItemName, enum class EClothQualityType QualityType, int32_t CharacterID, struct TArray<int32_t> ResultByName); // Function NotesOfSoul.NOS_FunctionLibrary.QuerySkinID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a14960
	enum class ECommodityType QueryIDCommodityType(int32_t QueryValue, int32_t QueryCharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.QueryIDCommodityType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a14550
	enum class EAccessoriesType QueryIDAccessoriesType(int32_t QueryValue, int32_t QueryCharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.QueryIDAccessoriesType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a142e0
	bool QueryArrayContainSpecifyAccessories(struct TArray<int32_t> TargetArray, enum class EAccessoriesType TargetType, int32_t GetedValue); // Function NotesOfSoul.NOS_FunctionLibrary.QueryArrayContainSpecifyAccessories // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a13ef0
	struct USkeletalMesh* MergeMeshes(struct FSkeletalMeshMergeParams params); // Function NotesOfSoul.NOS_FunctionLibrary.MergeMeshes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a13df0
	struct TMap<int32_t, int32_t> ItemMarket_GetAllLevelServiceData(); // Function NotesOfSoul.NOS_FunctionLibrary.ItemMarket_GetAllLevelServiceData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13d70
	bool IsXiangSheng(enum class EHumanType CureHumanType, enum class EHumanType DamageHumanType); // Function NotesOfSoul.NOS_FunctionLibrary.IsXiangSheng // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13c60
	bool IsXiangKe(enum class EHumanType CureHumanType, enum class EHumanType DamageHumanType); // Function NotesOfSoul.NOS_FunctionLibrary.IsXiangKe // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13b40
	struct FString IsUserPCSupportRayTrace(); // Function NotesOfSoul.NOS_FunctionLibrary.IsUserPCSupportRayTrace // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13af0
	bool IsShippingVersion(); // Function NotesOfSoul.NOS_FunctionLibrary.IsShippingVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x180b470
	bool IsHumanSuitOccupySpecifySlot(enum class EAccessoriesType QueryType, struct FNOS_HumanSuit QueryedHumanSuit); // Function NotesOfSoul.NOS_FunctionLibrary.IsHumanSuitOccupySpecifySlot // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a13970
	bool IsCharacterAGhostByID(int32_t CharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.IsCharacterAGhostByID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a138e0
	bool IsBelongThisCategory(int32_t CategoryID, int32_t ParentID); // Function NotesOfSoul.NOS_FunctionLibrary.IsBelongThisCategory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13810
	struct FName Int32ConvertToFName(int32_t Value); // Function NotesOfSoul.NOS_FunctionLibrary.Int32ConvertToFName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a13740
	void HidAllScreenWidget(struct UObject* WorldContextObject, struct TArray<struct FHidWidget> SaveHidWidget); // Function NotesOfSoul.NOS_FunctionLibrary.HidAllScreenWidget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a13660
	int32_t GetWeekFormDateNum(int32_t Year, int32_t Month, int32_t Day); // Function NotesOfSoul.NOS_FunctionLibrary.GetWeekFormDateNum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13560
	struct FVector2D GetViewPortSize(); // Function NotesOfSoul.NOS_FunctionLibrary.GetViewPortSize // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a134f0
	int64_t GetUTCTime(); // Function NotesOfSoul.NOS_FunctionLibrary.GetUTCTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a13450
	struct TArray<int32_t> GetTreasureBoxMissionItemIDByMisiisonID(int32_t MissionID); // Function NotesOfSoul.NOS_FunctionLibrary.GetTreasureBoxMissionItemIDByMisiisonID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a133b0
	struct FNOS_TitleInfo GetTitleDTAttributeByID(int32_t TitleID, struct FString TablePath); // Function NotesOfSoul.NOS_FunctionLibrary.GetTitleDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a13120
	struct FNOS_TitleInfo GetTitleDTAttributeByDT(int32_t TitleID, struct TSoftObjectPtr<struct UDataTable> TitleInDT); // Function NotesOfSoul.NOS_FunctionLibrary.GetTitleDTAttributeByDT // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a12e70
	int32_t GetThisYearSoFarDays(int32_t Year, int32_t Month, int32_t Day); // Function NotesOfSoul.NOS_FunctionLibrary.GetThisYearSoFarDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12d70
	struct FNOS_CommoditiesCategory GetStoreTypeByID(int32_t ID); // Function NotesOfSoul.NOS_FunctionLibrary.GetStoreTypeByID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a12c50
	char GetStoreCategorysEnumByID(int32_t CategoryID, int32_t Level); // Function NotesOfSoul.NOS_FunctionLibrary.GetStoreCategorysEnumByID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12b50
	struct FString GetSteamAuth(); // Function NotesOfSoul.NOS_FunctionLibrary.GetSteamAuth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a12b00
	int32_t GetSolarTotalDays(int32_t Year, int32_t Month, int32_t Day); // Function NotesOfSoul.NOS_FunctionLibrary.GetSolarTotalDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12a00
	struct TMap<int32_t, int32_t> GetSkinSellPrice(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinSellPrice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12920
	int32_t GetSkinOperateInfo(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinOperateInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12890
	float GetSKinMoneyAdditionValue(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSKinMoneyAdditionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12390
	float GetSKinLevelAdditionValue(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSKinLevelAdditionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12300
	struct FNOS_Skin GetSkinInfo(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a126b0
	float GetSKinImacyAdditionValue(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSKinImacyAdditionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12270
	struct TArray<int32_t> GetSkinGiftIntimacy(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinGiftIntimacy // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12610
	void GetSkinCanUseData(int32_t SkinId, bool bFind, struct FNOS_HumanSuit Suit); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinCanUseData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a124b0
	int32_t GetSkinBaseID(int32_t SkinId); // Function NotesOfSoul.NOS_FunctionLibrary.GetSkinBaseID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12420
	bool GetOwningIsGhost(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function NotesOfSoul.NOS_FunctionLibrary.GetOwningIsGhost // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a121a0
	int32_t GetMontageSectionNum(struct UAnimMontage* Montage); // Function NotesOfSoul.NOS_FunctionLibrary.GetMontageSectionNum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12110
	struct FString GetMD5(struct FString Content); // Function NotesOfSoul.NOS_FunctionLibrary.GetMD5 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a12000
	int32_t GetLunarYearTotalDays(int32_t Year); // Function NotesOfSoul.NOS_FunctionLibrary.GetLunarYearTotalDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11f70
	int32_t GetLunarCurentMonthDays(int32_t LunarYear, int32_t LunarMonth); // Function NotesOfSoul.NOS_FunctionLibrary.GetLunarCurentMonthDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11ea0
	bool GetLeapYear(int32_t Year); // Function NotesOfSoul.NOS_FunctionLibrary.GetLeapYear // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11e10
	int32_t GetLeapMonthDays(int32_t LunarYear); // Function NotesOfSoul.NOS_FunctionLibrary.GetLeapMonthDays // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11d80
	int32_t GetLeapMonth(int32_t LunarYear); // Function NotesOfSoul.NOS_FunctionLibrary.GetLeapMonth // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11ce0
	struct TMap<int32_t, int32_t> GetItemSellPrice(int32_t ItemId); // Function NotesOfSoul.NOS_FunctionLibrary.GetItemSellPrice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11c00
	int32_t GetItemOperateInfo(int32_t ItemId); // Function NotesOfSoul.NOS_FunctionLibrary.GetItemOperateInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11b70
	int32_t GetItemMarketServiceCharg(int32_t SaleHours); // Function NotesOfSoul.NOS_FunctionLibrary.GetItemMarketServiceCharg // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11ae0
	int32_t GetItemMarketBoothPrice(int32_t CurrentBoothNum); // Function NotesOfSoul.NOS_FunctionLibrary.GetItemMarketBoothPrice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11a50
	struct TArray<int32_t> GetItemMarketAllSaleableID(); // Function NotesOfSoul.NOS_FunctionLibrary.GetItemMarketAllSaleableID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11a00
	bool GetIsOpenGroomEffect(); // Function NotesOfSoul.NOS_FunctionLibrary.GetIsOpenGroomEffect // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a119d0
	bool GetIsOpenGreenEffect(); // Function NotesOfSoul.NOS_FunctionLibrary.GetIsOpenGreenEffect // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a119a0
	int32_t GetIsOpenGreenColor(); // Function NotesOfSoul.NOS_FunctionLibrary.GetIsOpenGreenColor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11970
	struct FString GetIpFromDomainName(struct FString Domain); // Function NotesOfSoul.NOS_FunctionLibrary.GetIpFromDomainName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11860
	int32_t GetIntimacyNeedScore(int32_t ID); // Function NotesOfSoul.NOS_FunctionLibrary.GetIntimacyNeedScore // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a117d0
	enum class EIntimacyAwardType GetIntimacyAwardType(int32_t Number, int32_t OutNumber); // Function NotesOfSoul.NOS_FunctionLibrary.GetIntimacyAwardType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a11700
	struct TArray<int32_t> GetIncTreasureBoxItemIDByID(int32_t ID); // Function NotesOfSoul.NOS_FunctionLibrary.GetIncTreasureBoxItemIDByID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a11660
	struct FNOS_HumanSuit GetHumanSuitDTAttributeByID(int32_t SuitID); // Function NotesOfSoul.NOS_FunctionLibrary.GetHumanSuitDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a11590
	struct FNOS_HumanLocalData GetHumanDTAttributeByID(int32_t CharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.GetHumanDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a114e0
	struct TArray<enum class EHumanTalentType> GetHumanCanUseTalentType(int32_t HumanID); // Function NotesOfSoul.NOS_FunctionLibrary.GetHumanCanUseTalentType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a11400
	struct FNOS_Accessories GetHumanAccessoriesDTAttributeByID(enum class EAccessoriesType QueryAccessoriesDTType, int32_t AccessoriesID); // Function NotesOfSoul.NOS_FunctionLibrary.GetHumanAccessoriesDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a112f0
	struct FNOS_GhostSuit GetGhostSuitDTAttributeByID(int32_t SuitID); // Function NotesOfSoul.NOS_FunctionLibrary.GetGhostSuitDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a110c0
	struct FNOS_GhostLocalData GetGhostDTAttributeByID(int32_t CharacterID); // Function NotesOfSoul.NOS_FunctionLibrary.GetGhostDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a11010
	struct FNOS_Accessories GetGhostAccessoriesDTAttributeByID(enum class EAccessoriesType QueryAccessoriesDTType, int32_t AccessoriesID); // Function NotesOfSoul.NOS_FunctionLibrary.GetGhostAccessoriesDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a10f00
	bool GetCurIsGhostByString(struct FString PlayerConfigName); // Function NotesOfSoul.NOS_FunctionLibrary.GetCurIsGhostByString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10df0
	struct TMap<int32_t, struct FString> GetChildCategorys(int32_t PreantCategory, struct TMap<int32_t, struct FString> AllCategorys); // Function NotesOfSoul.NOS_FunctionLibrary.GetChildCategorys // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a10c40
	struct TMap<int32_t, int32_t> GetCharacterCanUseCoinMap(int32_t HumanID); // Function NotesOfSoul.NOS_FunctionLibrary.GetCharacterCanUseCoinMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a10b60
	int32_t GetCharacterBaseClothID(); // Function NotesOfSoul.NOS_FunctionLibrary.GetCharacterBaseClothID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xef7770
	float GetAnimCurveFloat(struct UAnimSequenceBase* Animation, struct FName CurveName, float CurrentTime, bool bCurveExist); // Function NotesOfSoul.NOS_FunctionLibrary.GetAnimCurveFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a10a00
	struct TArray<int32_t> GetAllXiaoFeiJiFengTreasureBoxContentFromXsl(int32_t boxid); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllXiaoFeiJiFengTreasureBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10960
	struct TArray<struct FNOS_Skin> GetAllStoreSkinInfo(); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllStoreSkinInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10740
	struct TMap<int32_t, struct FString> GetAllStoreCategorys(struct TMap<int32_t, struct FString> TopCategorys); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllStoreCategorys // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a105f0
	struct TArray<int32_t> GetAllSkinTreasureBoxContentFromXsl(); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllSkinTreasureBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a105a0
	struct TArray<int32_t> GetAllItemIDFromXsl(); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllItemIDFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10550
	struct TArray<int32_t> GetAllGiftTreasureBoxContentFromXsl(int32_t GiftID); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllGiftTreasureBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a104b0
	struct TMap<int32_t, int32_t> GetAllGiftBoxContentFromXsl(int32_t GiftBoxId); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllGiftBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a103d0
	struct TArray<int32_t> GetAllGhostItemIDFromXsl(); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllGhostItemIDFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10380
	struct TArray<int32_t> GetAllCharacterTreasureBoxContentFromXsl(); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllCharacterTreasureBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10330
	struct TArray<int32_t> GetAllActivityTreasureBoxContentFromXsl(int32_t boxid); // Function NotesOfSoul.NOS_FunctionLibrary.GetAllActivityTreasureBoxContentFromXsl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a10290
	struct FNOS_ActionInfo GetActionDTAttributeByID(int32_t ActionID, struct FString TablePath); // Function NotesOfSoul.NOS_FunctionLibrary.GetActionDTAttributeByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a10080
	struct FNOS_ActionInfo GetActionDTAttributeByDT(int32_t ActionID, struct TSoftObjectPtr<struct UDataTable> ActionInDT); // Function NotesOfSoul.NOS_FunctionLibrary.GetActionDTAttributeByDT // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a0fe40
	int32_t GetAccountNeedScore(int32_t ID); // Function NotesOfSoul.NOS_FunctionLibrary.GetAccountNeedScore // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a0fdb0
	void CopyMaterials(struct USkeletalMeshComponent* CopySource, struct USkeletalMeshComponent* TargetSource); // Function NotesOfSoul.NOS_FunctionLibrary.CopyMaterials // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a0fcf0
	int32_t ConverShopType2CategoryID(enum class ECharacterType inCharacterType, enum class EShopType InType); // Function NotesOfSoul.NOS_FunctionLibrary.ConverShopType2CategoryID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a0fc20
	struct FNOS_DamageData Conv_StringToDamageData(struct TArray<struct FString> Datas); // Function NotesOfSoul.NOS_FunctionLibrary.Conv_StringToDamageData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a0fa40
	struct TArray<struct FString> Conv_DamageDataToString(struct FNOS_DamageData Data); // Function NotesOfSoul.NOS_FunctionLibrary.Conv_DamageDataToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a0f880
	void ChangeUIInteractInfo(struct UKxInteractBoxComponent* Target, struct FText NewKeyCode, bool IsLookPlayer, struct FText NewDisplayText); // Function NotesOfSoul.NOS_FunctionLibrary.ChangeUIInteractInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a0f680
	void ChangeAccessories(struct TSoftObjectPtr<struct USkeletalMesh> CharacterNakedModel, SoftClassProperty CharacterNakedModelAnimInst, struct TMap<enum class EAccessoriesType, struct USkeletalMeshComponent*> TargetComp, struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> TargetMesh, struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> CharacterNakedModelMaterialMap); // Function NotesOfSoul.NOS_FunctionLibrary.ChangeAccessories // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a0f1f0
	void CalculateInteractTraceEndLocation(struct AActor* AvatarActor, float TraceRange, struct FVector EndLocation, struct FName SocketName, enum class ECollisionChannel TraceChannel); // Function NotesOfSoul.NOS_FunctionLibrary.CalculateInteractTraceEndLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a0f050
	bool AddWriteLocalDataTable(struct UDataTable* DT, struct FName RowName, struct FLocalFaceCustomData facelocaldata); // Function NotesOfSoul.NOS_FunctionLibrary.AddWriteLocalDataTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a0ed20
};

// Class NotesOfSoul.NOS_GameEndArena
// Size: 0x250 (Inherited: 0x220)
struct ANOS_GameEndArena : AActor {
	struct USceneComponent* RootSceneCom; // 0x220(0x08)
	struct UCameraComponent* ArenaCameraCom; // 0x228(0x08)
	struct USpotLightComponent* SpotLightArena; // 0x230(0x08)
	struct USpotLightComponent* SpotLightMVP; // 0x238(0x08)
	struct UCapsuleComponent* CapsuleComMVP; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class NotesOfSoul.NOS_GameplayEffect
// Size: 0x7c0 (Inherited: 0x7b8)
struct UNOS_GameplayEffect : UGameplayEffect {
	int32_t BuffID; // 0x7b8(0x04)
	char pad_7BC[0x4]; // 0x7bc(0x04)
};

// Class NotesOfSoul.NOS_GameUserSettings
// Size: 0x2d8 (Inherited: 0x120)
struct UNOS_GameUserSettings : UGameUserSettings {
	char pad_120[0xc0]; // 0x120(0xc0)
	struct FNOS_UserSettings UserSettingInfo; // 0x1e0(0x90)
	float PlayerVersion; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	bool bOpenHiarSetting; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FMulticastInlineDelegate OnLanguageChanged; // 0x280(0x10)
	struct FMulticastInlineDelegate OnHairEffectChanged; // 0x290(0x10)
	struct FMulticastInlineDelegate OnGreenModeChanged; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnBodyColorChanged; // 0x2b0(0x10)
	float EffectCameraSpeedValue; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct FIntPoint> GPUSupportResolution; // 0x2c8(0x10)

	void SetEnableVSync(bool IsEnable); // Function NotesOfSoul.NOS_GameUserSettings.SetEnableVSync // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1ad00
	void SetEnableDynamicResolution(bool IsEnable); // Function NotesOfSoul.NOS_GameUserSettings.SetEnableDynamicResolution // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1ac70
	void SetCurrentLanguage(struct FString LuanguageInfo); // Function NotesOfSoul.NOS_GameUserSettings.SetCurrentLanguage // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1abd0
	void RemoveCameraSpeedEffect(); // Function NotesOfSoul.NOS_GameUserSettings.RemoveCameraSpeedEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1aa50
	bool IsOpenHiarEffect(); // Function NotesOfSoul.NOS_GameUserSettings.IsOpenHiarEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1a070
	bool IsOpenGreenMode(); // Function NotesOfSoul.NOS_GameUserSettings.IsOpenGreenMode // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1a040
	bool IsOpenAutoRecordGame(); // Function NotesOfSoul.NOS_GameUserSettings.IsOpenAutoRecordGame // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1a010
	float GetUserSettingCameraSpeed(); // Function NotesOfSoul.NOS_GameUserSettings.GetUserSettingCameraSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19fe0
	void GetScreenResolutionInfo(); // Function NotesOfSoul.NOS_GameUserSettings.GetScreenResolutionInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19ec0
	struct FNOS_UserSettings GetNOSUserSettingsInfo(); // Function NotesOfSoul.NOS_GameUserSettings.GetNOSUserSettingsInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19d30
	struct UNOS_GameUserSettings* GetNOS_GameUserSettingsIns(); // Function NotesOfSoul.NOS_GameUserSettings.GetNOS_GameUserSettingsIns // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19e30
	bool GetIsOpenAutoApplySkill(); // Function NotesOfSoul.NOS_GameUserSettings.GetIsOpenAutoApplySkill // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19cd0
	int32_t GetDefaultResolutionIndex(); // Function NotesOfSoul.NOS_GameUserSettings.GetDefaultResolutionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a19ca0
	void CheckIsRunHard(); // Function NotesOfSoul.NOS_GameUserSettings.CheckIsRunHard // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19a90
	void ApplyVisualEffectQuality(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyVisualEffectQuality // (Final|Native|Public|BlueprintCallable) // @ game+0x1a198d0
	void ApplyViewSettings(struct FNOS_UserSettings_View InViewSettingInf, bool IsInGame); // Function NotesOfSoul.NOS_GameUserSettings.ApplyViewSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19780
	void ApplyTextureQuality(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyTextureQuality // (Final|Native|Public|BlueprintCallable) // @ game+0x1a196f0
	void ApplySoundSettings(struct FNOS_UserSettings_Sound InSoundSettingInfo); // Function NotesOfSoul.NOS_GameUserSettings.ApplySoundSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19600
	void ApplyShadowQuality(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyShadowQuality // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19570
	void ApplyScrrenScalabilityLevel(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyScrrenScalabilityLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1a194e0
	void ApplyScrrenResolutionSetting(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyScrrenResolutionSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19450
	void ApplyScrrenModeSetting(int32_t ModeIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyScrrenModeSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x1a193c0
	void ApplyReSolutionScale(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyReSolutionScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19330
	void ApplyNormalSettings(struct FNOS_UserSettings_Normal InNormalSettingInfo); // Function NotesOfSoul.NOS_GameUserSettings.ApplyNormalSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1a191c0
	void ApplyMASSQuality(int32_t SettingIndex); // Function NotesOfSoul.NOS_GameUserSettings.ApplyMASSQuality // (Final|Native|Public|BlueprintCallable) // @ game+0x1a19130
	void ApplyCameraSpeedEffect(float EffectPercent); // Function NotesOfSoul.NOS_GameUserSettings.ApplyCameraSpeedEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x1a18f80
	void ApplyAllSettings(struct FNOS_UserSettings InSettings, bool IsSaveToConfig, bool IsInGame); // Function NotesOfSoul.NOS_GameUserSettings.ApplyAllSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1a18de0
};

// Class NotesOfSoul.NOS_GATargetActor_Trace
// Size: 0x350 (Inherited: 0x350)
struct ANOS_GATargetActor_Trace : AGameplayAbilityTargetActor_Trace {
};

// Class NotesOfSoul.NOS_GEAttributeChange
// Size: 0x7c0 (Inherited: 0x7c0)
struct UNOS_GEAttributeChange : UNOS_GameplayEffect {
};

// Class NotesOfSoul.NOS_GEGhostInitProperty
// Size: 0x7c0 (Inherited: 0x7c0)
struct UNOS_GEGhostInitProperty : UNOS_GameplayEffect {
};

// Class NotesOfSoul.NOS_GEHumanInitProperty
// Size: 0x7c0 (Inherited: 0x7c0)
struct UNOS_GEHumanInitProperty : UNOS_GameplayEffect {
};

// Class NotesOfSoul.NOS_Gharry
// Size: 0x270 (Inherited: 0x220)
struct ANOS_Gharry : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct USceneComponent* RootScene; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct UKxInteractBoxComponent* InteractBox; // 0x238(0x08)
	struct USplineComponent* SplineCom; // 0x240(0x08)
	struct TArray<struct ANOS_PlayerBase*> Passengers; // 0x248(0x10)
	bool IsMoving; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct FName> PassengersSockets; // 0x260(0x10)

	void OnGharryMove(struct ANOS_PlayerBase* Char); // Function NotesOfSoul.NOS_Gharry.OnGharryMove // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void AddPlayer(struct ANOS_PlayerBase* Character, bool Add); // Function NotesOfSoul.NOS_Gharry.AddPlayer // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a18d10
};

// Class NotesOfSoul.NOS_Ghost_LiftTerritory
// Size: 0x2c8 (Inherited: 0x220)
struct ANOS_Ghost_LiftTerritory : AActor {
	struct USceneComponent* RootSceneCom; // 0x220(0x08)
	struct UBoxComponent* BuffTriggerBoxCom; // 0x228(0x08)
	struct FVector TerritorySize; // 0x230(0x0c)
	float RemainTime; // 0x23c(0x04)
	struct ANOS_PlayerGhost* TerritoryOwner; // 0x240(0x08)
	struct UGameplayEffect* GE_Class; // 0x248(0x08)
	struct FGameplayEffectSpecHandle GE_SpecHandle; // 0x250(0x10)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> DebuffedActorMap; // 0x260(0x50)
	struct TArray<struct AActor*> LiftedActors; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void OnBoxOverlapSceneEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_Ghost_LiftTerritory.OnBoxOverlapSceneEnd // (Final|Native|Public) // @ game+0x1a1a8d0
	void OnBoxOverlapSceneBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_Ghost_LiftTerritory.OnBoxOverlapSceneBegin // (Final|Native|Public|HasOutParms) // @ game+0x1a1a6c0
	void OnBoxOverlapHumanEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_Ghost_LiftTerritory.OnBoxOverlapHumanEnd // (Final|Native|Public) // @ game+0x1a1a560
	void OnBoxOverlapHumanBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_Ghost_LiftTerritory.OnBoxOverlapHumanBegin // (Final|Native|Public|HasOutParms) // @ game+0x1a1a350
};

// Class NotesOfSoul.NOS_GhostAttributeSet
// Size: 0x110 (Inherited: 0xe0)
struct UNOS_GhostAttributeSet : UNOS_AttributeSetBase {
	struct FGameplayAttributeData SoulPoint; // 0xe0(0x10)
	struct FGameplayAttributeData UpgradeNum; // 0xf0(0x10)
	struct FGameplayAttributeData SkillPoints; // 0x100(0x10)

	void OnRep_UpgradeNum(struct FGameplayAttributeData OldUpgradeNum); // Function NotesOfSoul.NOS_GhostAttributeSet.OnRep_UpgradeNum // (Final|Native|Protected) // @ game+0x1a1ffb0
	void OnRep_SoulPoint(struct FGameplayAttributeData OldSoulPoint); // Function NotesOfSoul.NOS_GhostAttributeSet.OnRep_SoulPoint // (Final|Native|Protected) // @ game+0x1a1fe90
	void OnRep_SkillPoints(struct FGameplayAttributeData OldValue); // Function NotesOfSoul.NOS_GhostAttributeSet.OnRep_SkillPoints // (Final|Native|Protected) // @ game+0x1a1fdd0
};

// Class NotesOfSoul.NOS_GI
// Size: 0x1c8 (Inherited: 0x1a8)
struct UNOS_GI : UKxGameInstance {
	struct UNOS_SaveGame_Player* SaveGamePlayer; // 0x1a8(0x08)
	struct UNOS_SaveGame_Settings* SaveGameSettings; // 0x1b0(0x08)
	bool bPerspectiveCheck; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float TimePerCheck; // 0x1bc(0x04)
	struct UUserWidget* LoadingUI; // 0x1c0(0x08)

	void ShowLoadingUI(struct UUserWidget* UIClass, int32_t ZOrder); // Function NotesOfSoul.NOS_GI.ShowLoadingUI // (Final|Native|Public|BlueprintCallable) // @ game+0x1a20390
	void RemoveLoadingUI(); // Function NotesOfSoul.NOS_GI.RemoveLoadingUI // (Final|Native|Public|BlueprintCallable) // @ game+0x1a20150
};

// Class NotesOfSoul.NOS_GlobalDataMgr
// Size: 0x250 (Inherited: 0x220)
struct ANOS_GlobalDataMgr : AActor {
	struct USceneComponent* SceneCom; // 0x220(0x08)
	struct FMulticastInlineDelegate OnCurHumanTypeUpdate; // 0x228(0x10)
	float ReduceGameTime; // 0x238(0x04)
	enum class EHumanType CurType; // 0x23c(0x01)
	char pad_23D[0x13]; // 0x23d(0x13)

	void SetFirstHumanType(enum class EHumanType Type); // Function NotesOfSoul.NOS_GlobalDataMgr.SetFirstHumanType // (Final|Native|Public|BlueprintCallable) // @ game+0x1a202f0
	void OnKillPlayer(enum class EHumanType Type); // Function NotesOfSoul.NOS_GlobalDataMgr.OnKillPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1fc90
	enum class EHumanType GetCurHumanType(); // Function NotesOfSoul.NOS_GlobalDataMgr.GetCurHumanType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f5a0
	struct ANOS_GlobalDataMgr* Get(); // Function NotesOfSoul.NOS_GlobalDataMgr.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f4d0
	float ChangeGameTime(float CurGameTime); // Function NotesOfSoul.NOS_GlobalDataMgr.ChangeGameTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f270
};

// Class NotesOfSoul.NOS_GMArenaBase
// Size: 0x668 (Inherited: 0x358)
struct ANOS_GMArenaBase : AKxGameMode {
	struct FSettleInfo SettleInfo; // 0x358(0x90)
	struct TMap<int32_t, struct ACharacter*> IDCharMap; // 0x3e8(0x50)
	struct TMap<int32_t, struct APlayerState*> IDStateMap; // 0x438(0x50)
	struct FString GameModeConfigName; // 0x488(0x10)
	char pad_498[0xc8]; // 0x498(0xc8)
	struct UDataTable* CharacterDT; // 0x560(0x08)
	float MaxGameTime; // 0x568(0x04)
	float GameReadyTime; // 0x56c(0x04)
	int32_t NeedConpleteElementSlotNum; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct TArray<struct APlayerStart*> CurPlayerStartArray; // 0x578(0x10)
	char pad_588[0x10]; // 0x588(0x10)
	struct ANOS_PlayerGhost* GhostPlayer; // 0x598(0x08)
	struct TArray<struct ANOS_PlayerHuman*> HumanPlayers; // 0x5a0(0x10)
	char pad_5B0[0x98]; // 0x5b0(0x98)
	struct TArray<struct ANOS_PlayerHuman*> AllDieOutHuman; // 0x648(0x10)
	struct TArray<struct ANOS_PCArenaBase*> AllPostLoginPC; // 0x658(0x10)

	bool WriteRedis(); // Function NotesOfSoul.NOS_GMArenaBase.WriteRedis // (Final|Native|Public|BlueprintCallable) // @ game+0x1a205e0
	void UnPauseGameTime(); // Function NotesOfSoul.NOS_GMArenaBase.UnPauseGameTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a205c0
	void StartGame(); // Function NotesOfSoul.NOS_GMArenaBase.StartGame // (Native|Event|Public|BlueprintEvent) // @ game+0x1a20510
	struct ANOS_TrustController* ReqTrustController(struct FString KeyName); // Function NotesOfSoul.NOS_GMArenaBase.ReqTrustController // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a20170
	void PendingGhostWin(); // Function NotesOfSoul.NOS_GMArenaBase.PendingGhostWin // (Final|Native|Protected) // @ game+0x1a20130
	void PauseGameTime(); // Function NotesOfSoul.NOS_GMArenaBase.PauseGameTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a20110
	void OnHumanDieOut(struct ANOS_PlayerHuman* DieOutHuman); // Function NotesOfSoul.NOS_GMArenaBase.OnHumanDieOut // (Native|Protected) // @ game+0x1a1fc00
	void OnGhostDisConnectOverTime(); // Function NotesOfSoul.NOS_GMArenaBase.OnGhostDisConnectOverTime // (Native|Protected) // @ game+0x1a1fbe0
	void OnEndGame(bool bHumanWin); // Function NotesOfSoul.NOS_GMArenaBase.OnEndGame // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnElementSlotInteractUpdate(struct ANOS_ElementSlot* ElementSlot, bool bIsInteracting); // Function NotesOfSoul.NOS_GMArenaBase.OnElementSlotInteractUpdate // (Final|Native|Protected) // @ game+0x1a1fb10
	void OnElementSlotInteractSuc(struct ANOS_ElementSlot* ElementSlot); // Function NotesOfSoul.NOS_GMArenaBase.OnElementSlotInteractSuc // (Final|Native|Protected) // @ game+0x1a1fa80
	void GetSettleInfo(); // Function NotesOfSoul.NOS_GMArenaBase.GetSettleInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f630
	struct ANOS_TrustController* FindTrustController(struct FString KeyName); // Function NotesOfSoul.NOS_GMArenaBase.FindTrustController // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a1f420
	void EndGame(bool bHumanWin); // Function NotesOfSoul.NOS_GMArenaBase.EndGame // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f390
	void ConnectRedis(); // Function NotesOfSoul.NOS_GMArenaBase.ConnectRedis // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f370
	void CallPlayerIsReadyToGame(struct ANOS_PCArenaBase* InPlayerController); // Function NotesOfSoul.NOS_GMArenaBase.CallPlayerIsReadyToGame // (Final|Native|Public) // @ game+0x1a1f1e0
	bool CalcHumanWin(struct ANOS_PSArenaBase* Player); // Function NotesOfSoul.NOS_GMArenaBase.CalcHumanWin // (Final|Native|Public) // @ game+0x1a1f0b0
};

// Class NotesOfSoul.NOS_GMArena
// Size: 0x668 (Inherited: 0x668)
struct ANOS_GMArena : ANOS_GMArenaBase {
};

// Class NotesOfSoul.NOS_GMLangRenSha
// Size: 0x700 (Inherited: 0x668)
struct ANOS_GMLangRenSha : ANOS_GMArenaBase {
	struct ANOS_GSLangRenSha* GS; // 0x668(0x08)
	struct TMap<struct ANOS_PlayerBase*, struct ANOS_PlayerBase*> Human_GhostMap; // 0x670(0x50)
	struct UNOS_GameplayAbility* NightAbility; // 0x6c0(0x08)
	struct UNOS_GameplayAbility* NightShowAbility; // 0x6c8(0x08)
	struct UNOS_GameplayAbility* LRTransformAbility; // 0x6d0(0x08)
	struct UNOS_GameplayAbility* LRSStealthAbility; // 0x6d8(0x08)
	struct UNOS_GameplayAbility* LRSTransformStealthAbility; // 0x6e0(0x08)
	struct UNOS_GameplayAbility* LRSReviveAbility; // 0x6e8(0x08)
	char pad_6F0[0x8]; // 0x6f0(0x08)
	int32_t MAX_WOLF_ALLOW; // 0x6f8(0x04)
	char pad_6FC[0x4]; // 0x6fc(0x04)

	void SpawnNewWolfFor25Boy(struct ANOS_PlayerHuman* ReviveHuman); // Function NotesOfSoul.NOS_GMLangRenSha.SpawnNewWolfFor25Boy // (Final|Native|Public|BlueprintCallable) // @ game+0x1a20460
	void SetDeadView(struct ANOS_PlayerHuman* Target, enum class ESpectatorCamp SpecCamp); // Function NotesOfSoul.NOS_GMLangRenSha.SetDeadView // (Final|Native|Public) // @ game+0x1a20220
	struct ANOS_PlayerBase* GetConvertCharacter(struct ANOS_PlayerBase* CurChar); // Function NotesOfSoul.NOS_GMLangRenSha.GetConvertCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f500
};

// Class NotesOfSoul.NOS_GMTrainArena
// Size: 0x680 (Inherited: 0x668)
struct ANOS_GMTrainArena : ANOS_GMArenaBase {
	bool bIsDefaultPlayer; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct ANOS_PlayerGhost* DefaultGhostClass; // 0x670(0x08)
	struct UNOS_GameplayAbility* EnergyAbility; // 0x678(0x08)

	void TrainPlayerGetItem(struct AActor* InItem); // Function NotesOfSoul.NOS_GMTrainArena.TrainPlayerGetItem // (Final|Native|Protected) // @ game+0x1a20530
};

// Class NotesOfSoul.NOS_GSArenaBase
// Size: 0x600 (Inherited: 0x290)
struct ANOS_GSArenaBase : AKxGameState {
	float StartGameServerTime; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnClientCharacterSpawn; // 0x298(0x10)
	struct FMulticastInlineDelegate OnSettlemenShouldOpen; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnGameEnd; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnGameLoadComplete; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnPauseGame; // 0x2d8(0x10)
	struct FSettleInfo SettleInfo; // 0x2e8(0x90)
	struct FMulticastInlineDelegate OnGameType; // 0x378(0x10)
	struct FMulticastInlineDelegate StartSettle; // 0x388(0x10)
	char pad_398[0x8]; // 0x398(0x08)
	struct FMulticastInlineDelegate OnGameEndState; // 0x3a0(0x10)
	bool bStartEscape; // 0x3b0(0x01)
	bool bPlayOff; // 0x3b1(0x01)
	enum class EKxGameType GSGameType; // 0x3b2(0x01)
	char pad_3B3[0x1]; // 0x3b3(0x01)
	float FloatIsWin; // 0x3b4(0x04)
	char pad_3B8[0x1c]; // 0x3b8(0x1c)
	float FinalGameTime; // 0x3d4(0x04)
	int32_t AllElementSlotBeSealFrequency; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UNOS_EventManagerComponent* EventMgrCom; // 0x3e0(0x08)
	struct ANOS_PlayerBase* TheBest; // 0x3e8(0x08)
	struct ANOS_GameEndArena* GameEndArena; // 0x3f0(0x08)
	struct TArray<struct ANOS_PlayerHuman*> AllHuman; // 0x3f8(0x10)
	struct TArray<struct ANOS_PlayerGhost*> Ghost; // 0x408(0x10)
	struct FMulticastInlineDelegate UpdateCharacter; // 0x418(0x10)
	struct FMulticastInlineDelegate UpdateGhost; // 0x428(0x10)
	struct ANOS_CharacterModel* CloseAccountsCharacter; // 0x438(0x08)
	struct UNOS_GameplayEffect* OutlineGE_Class; // 0x440(0x08)
	struct UNOS_GameplayEffect* InvisibleGE_Class; // 0x448(0x08)
	int32_t CanPullOutElementCount; // 0x450(0x04)
	bool bCanSurrender; // 0x454(0x01)
	bool bIsHumanBeKilled; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	int32_t ErrorInfoIndex; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UUserWidget* SurrenderBoard; // 0x460(0x08)
	struct TMap<enum class ECharacterCategory, struct FSR_TeamAllSurrenderData> AllSurrenderDate; // 0x468(0x50)
	struct TMap<enum class ECharacterCategory, float> SurrenderState; // 0x4b8(0x50)
	struct TArray<struct FSR_LauncherData> LunchData; // 0x508(0x10)
	struct TMap<enum class ECharacterCategory, struct FSR_CheckData> SR_AceeptData; // 0x518(0x50)
	bool bPauseGameTime; // 0x568(0x01)
	char pad_569[0x17]; // 0x569(0x17)
	struct FChatInfo ChatInfo; // 0x580(0x80)

	void StartCreateCloseAccountsUI(); // Function NotesOfSoul.NOS_GSArenaBase.StartCreateCloseAccountsUI // (Final|Native|Public) // @ game+0x1a204f0
	void SetSurrenderState(); // Function NotesOfSoul.NOS_GSArenaBase.SetSurrenderState // (Final|Native|Private) // @ game+0x1a20370
	void OnSurrenderDataChange(enum class ECharacterCategory DateType); // Function NotesOfSoul.NOS_GSArenaBase.OnSurrenderDataChange // (Final|Native|Private) // @ game+0x1a20090
	void OnStartEscapeBP(); // Function NotesOfSoul.NOS_GSArenaBase.OnStartEscapeBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartEscape(); // Function NotesOfSoul.NOS_GSArenaBase.OnStartEscape // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a20070
	void OnRep_UpdateGhost(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_UpdateGhost // (Final|Native|Public) // @ game+0x1a1ff90
	void OnRep_UpdateCharacter(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_UpdateCharacter // (Final|Native|Public) // @ game+0x1a1ff70
	void OnRep_StartSettle(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_StartSettle // (Final|Native|Public) // @ game+0x1a1ff50
	void OnRep_PauseGameTime(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_PauseGameTime // (Native|Event|Public|BlueprintEvent) // @ game+0x1a1fdb0
	void OnRep_OnLunchDataUpdate(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_OnLunchDataUpdate // (Final|Native|Public) // @ game+0x1a1fd90
	void OnRep_OnGameType(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_OnGameType // (Native|Public) // @ game+0x1a1fd70
	void OnRep_OnErrorIndexChange(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_OnErrorIndexChange // (Final|Native|Public) // @ game+0x1a1fd50
	void OnRep_FloatIsWinUpdate(); // Function NotesOfSoul.NOS_GSArenaBase.OnRep_FloatIsWinUpdate // (Final|Native|Protected) // @ game+0x1a1fd30
	void OnPlayOffBP(); // Function NotesOfSoul.NOS_GSArenaBase.OnPlayOffBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnPlayOff(); // Function NotesOfSoul.NOS_GSArenaBase.OnPlayOff // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a1fd10
	void OnEndGame(bool bHumanWin); // Function NotesOfSoul.NOS_GSArenaBase.OnEndGame // (Native|Public) // @ game+0xbc3970
	void New_TryCallSurrender(struct ANOS_PSArenaBase* PlayerState); // Function NotesOfSoul.NOS_GSArenaBase.New_TryCallSurrender // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f9f0
	void New_InitiTeamSRData(struct ANOS_PSArenaBase* PlayerState); // Function NotesOfSoul.NOS_GSArenaBase.New_InitiTeamSRData // (Final|Native|Public) // @ game+0x1a1f960
	void New_ChooseOwnSurrenderState(bool bIsAccept, struct ANOS_PSArenaBase* PlayerState); // Function NotesOfSoul.NOS_GSArenaBase.New_ChooseOwnSurrenderState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f890
	bool New_CheckBeginSurrender(struct ANOS_PSArenaBase* PlayerState); // Function NotesOfSoul.NOS_GSArenaBase.New_CheckBeginSurrender // (Final|Native|Private) // @ game+0x1a1f7f0
	void MulticastChatMessageEvent(struct FChatInfo Info); // Function NotesOfSoul.NOS_GSArenaBase.MulticastChatMessageEvent // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a1f670
	float GetStartGameServerTime(); // Function NotesOfSoul.NOS_GSArenaBase.GetStartGameServerTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f650
	enum class EKxGameType GetGameTypeGS(); // Function NotesOfSoul.NOS_GSArenaBase.GetGameTypeGS // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f610
	bool GetFloatIsWin(); // Function NotesOfSoul.NOS_GSArenaBase.GetFloatIsWin // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f5e0
	float GetFinalGameTime(); // Function NotesOfSoul.NOS_GSArenaBase.GetFinalGameTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a1f5c0
	void CheckSRState(); // Function NotesOfSoul.NOS_GSArenaBase.CheckSRState // (Final|Native|Private) // @ game+0x1a1f330
	void CheckSrGameEndState(); // Function NotesOfSoul.NOS_GSArenaBase.CheckSrGameEndState // (Final|Native|Private) // @ game+0x1a1f350
	void CheckPlayerOnlineState(); // Function NotesOfSoul.NOS_GSArenaBase.CheckPlayerOnlineState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a1f310
	void CallGameModeEndGame(bool bIsHumanWin); // Function NotesOfSoul.NOS_GSArenaBase.CallGameModeEndGame // (Final|Native|Private) // @ game+0x1a1f150
	void BeginTimerToCheckSRState(); // Function NotesOfSoul.NOS_GSArenaBase.BeginTimerToCheckSRState // (Final|Native|Private) // @ game+0x1a1f090
};

// Class NotesOfSoul.NOS_GSArena
// Size: 0x600 (Inherited: 0x600)
struct ANOS_GSArena : ANOS_GSArenaBase {
};

// Class NotesOfSoul.NOS_GSLangRenSha
// Size: 0x708 (Inherited: 0x600)
struct ANOS_GSLangRenSha : ANOS_GSArenaBase {
	struct TArray<struct ANOS_PlayerHuman*> AllPawns; // 0x600(0x10)
	bool bIsNight; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct UNOS_GameplayEffect* ApplyGEOnVoting; // 0x618(0x08)
	float VoteCD; // 0x620(0x04)
	float SpeakTime; // 0x624(0x04)
	float VoteDuration; // 0x628(0x04)
	enum class ELangRenShaPhase CurrentVotePhase; // 0x62c(0x01)
	char pad_62D[0x3]; // 0x62d(0x03)
	struct ANOS_PlayerHuman* CurSpeaker; // 0x630(0x08)
	bool bIsNightSkillInCD; // 0x638(0x01)
	bool bVoteCD; // 0x639(0x01)
	char pad_63A[0x2]; // 0x63a(0x02)
	float NightEffectDuration; // 0x63c(0x04)
	float NightSkillDuration; // 0x640(0x04)
	float VoteDisplayDuration; // 0x644(0x04)
	bool bIsAllPlayerJoinInGames; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct TArray<struct FVoteInfo> PawnVoteInfos; // 0x650(0x10)
	struct ANOS_GMLangRenSha* LRSGM; // 0x660(0x08)
	struct ANOS_PlayerHuman* FinalPawn; // 0x668(0x08)
	bool bIsEvenTicketExist; // 0x670(0x01)
	char pad_671[0x7f]; // 0x671(0x7f)
	struct TArray<struct ANOS_PlayerHuman*> DisablePlayers; // 0x6f0(0x10)
	struct FLRSAbilityState AbilityState; // 0x700(0x01)
	char pad_701[0x7]; // 0x701(0x07)

	void Vote(struct ANOS_PlayerHuman* VotePawn); // Function NotesOfSoul.NOS_GSLangRenSha.Vote // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a26720
	void TransferWolf(struct ANOS_PlayerBase* CurrentHuman, struct ANOS_PlayerBase* BecomeHuman); // Function NotesOfSoul.NOS_GSLangRenSha.TransferWolf // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a26630
	void StopVoteSpeaking(); // Function NotesOfSoul.NOS_GSLangRenSha.StopVoteSpeaking // (Final|Native|Public) // @ game+0x1a26610
	void StopVote(); // Function NotesOfSoul.NOS_GSLangRenSha.StopVote // (Final|Native|Public) // @ game+0x1a265f0
	void StopSpeaking(struct ANOS_PlayerHuman* Pawn); // Function NotesOfSoul.NOS_GSLangRenSha.StopSpeaking // (Final|Native|Public) // @ game+0x1a26560
	void StartVoteSpeaking(struct ANOS_PlayerHuman* LaunchHuman); // Function NotesOfSoul.NOS_GSLangRenSha.StartVoteSpeaking // (Final|Native|Public) // @ game+0x1a264d0
	void SetNightState(bool IsNight); // Function NotesOfSoul.NOS_GSLangRenSha.SetNightState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a26440
	void PreVoteProcessBP(); // Function NotesOfSoul.NOS_GSLangRenSha.PreVoteProcessBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PostVoteProcessBP(); // Function NotesOfSoul.NOS_GSLangRenSha.PostVoteProcessBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartVoteSpeakBP(); // Function NotesOfSoul.NOS_GSLangRenSha.OnStartVoteSpeakBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_IsNight(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_IsNight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25c80
	void OnRep_CurSpeaker(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_CurSpeaker // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25ba0
	void OnRep_CurrentVotePhase(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_CurrentVotePhase // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25c60
	void OnRep_bVoteCD(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_bVoteCD // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsVoting(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_bIsVoting // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsNightSkillInCD(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_bIsNightSkillInCD // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsAllPlayerJoinInGames(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_bIsAllPlayerJoinInGames // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_AllPawns(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_AllPawns // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_AbilityState(); // Function NotesOfSoul.NOS_GSLangRenSha.OnRep_AbilityState // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25860
	void OnItemUseEnd(); // Function NotesOfSoul.NOS_GSLangRenSha.OnItemUseEnd // (Final|Native|Public) // @ game+0x1a25800
	void OnAllPlayerJoinComplete(); // Function NotesOfSoul.NOS_GSLangRenSha.OnAllPlayerJoinComplete // (Final|BlueprintAuthorityOnly|Native|Public) // @ game+0x1a256d0
	bool NextPawnSpeak(struct ANOS_PlayerHuman* CurrentSpeaker); // Function NotesOfSoul.NOS_GSLangRenSha.NextPawnSpeak // (Final|Native|Public) // @ game+0x1a25630
	bool IsVoteCD(); // Function NotesOfSoul.NOS_GSLangRenSha.IsVoteCD // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a24da0
	void InitEffectTimer(); // Function NotesOfSoul.NOS_GSLangRenSha.InitEffectTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a24d80
	void HiddenCorpse(struct ANOS_PlayerHuman* PlayerHuman); // Function NotesOfSoul.NOS_GSLangRenSha.HiddenCorpse // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a24cf0
	struct TArray<struct FVoteInfo> GetVoteInfo(); // Function NotesOfSoul.NOS_GSLangRenSha.GetVoteInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a24b90
	struct ANOS_GMLangRenSha* GetLRSGM(); // Function NotesOfSoul.NOS_GSLangRenSha.GetLRSGM // (Final|Native|Public) // @ game+0x1a24b40
	struct TArray<struct ANOS_PlayerHuman*> GetAllEnabledCorpse(); // Function NotesOfSoul.NOS_GSLangRenSha.GetAllEnabledCorpse // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a24960
	void DieOutPlayer(struct APawn* DieOutPawn); // Function NotesOfSoul.NOS_GSLangRenSha.DieOutPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a248b0
	bool CheckCanVote(struct ANOS_PlayerHuman* LaunchHuman); // Function NotesOfSoul.NOS_GSLangRenSha.CheckCanVote // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1a24790
	void ActiveHuanShiShu(); // Function NotesOfSoul.NOS_GSLangRenSha.ActiveHuanShiShu // (Final|Native|Public|BlueprintCallable) // @ game+0x1a244d0
	void ActiveHuanHunDan(); // Function NotesOfSoul.NOS_GSLangRenSha.ActiveHuanHunDan // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a244b0
	void ActivateNightSkill(); // Function NotesOfSoul.NOS_GSLangRenSha.ActivateNightSkill // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a24470
};

// Class NotesOfSoul.NOS_GSTrainArena
// Size: 0x600 (Inherited: 0x600)
struct ANOS_GSTrainArena : ANOS_GSArenaBase {
};

// Class NotesOfSoul.Nos_HandleJinPoAffair
// Size: 0x140 (Inherited: 0xb0)
struct UNos_HandleJinPoAffair : UActorComponent {
	struct ANOS_JinPo* JinPo; // 0xb0(0x08)
	struct TSoftObjectPtr<struct UAnimMontage> Montage_HumanBeHit_Man; // 0xb8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Montage_HumanBeHit_Woman; // 0xe0(0x28)
	char pad_108[0x38]; // 0x108(0x38)

	void OnHumanCollisionJinPoSkill1(bool bOver, struct UNOS_GameplayAbility* ControlAbilityClass, struct UNOS_GameplayAbility* OverlyingAbilityClass); // Function NotesOfSoul.Nos_HandleJinPoAffair.OnHumanCollisionJinPoSkill1 // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a256f0
	void JinPoSkill3Hit(int32_t Skill3Level, struct UNOS_GameplayAbility* ControlAbilityClass); // Function NotesOfSoul.Nos_HandleJinPoAffair.JinPoSkill3Hit // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a24f10
	void JinPoSkill2Hit(int32_t Skill2Level, struct UNOS_GameplayAbility* DeBuffAbilityClass, struct UNOS_GameplayAbility* OverlyingAbilityClass); // Function NotesOfSoul.Nos_HandleJinPoAffair.JinPoSkill2Hit // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a24dd0
	void GrantAbilityEffect(float InSwordDamageValue); // Function NotesOfSoul.Nos_HandleJinPoAffair.GrantAbilityEffect // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1a24c60
};

// Class NotesOfSoul.NOS_HandleXiaoJiangAffair
// Size: 0x1f0 (Inherited: 0xb0)
struct UNOS_HandleXiaoJiangAffair : UActorComponent {
	struct ANOS_XiaoJiang* XJ; // 0xb0(0x08)
	struct ANOS_XiaoJiang* Master; // 0xb8(0x08)
	struct ANOS_XiaoJiang* PoisionGiverXJ; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FGameplayAbilitySpecHandle HumanBecome25BoyHandle; // 0xd0(0x04)
	struct FGameplayAbilitySpecHandle GAHandle_CancelBecome25Boy; // 0xd4(0x04)
	char pad_D8[0x2c]; // 0xd8(0x2c)
	struct FActiveGameplayEffectHandle RBoxDebuffGE; // 0x104(0x08)
	struct FActiveGameplayEffectHandle MarkHumanBeHugGE; // 0x10c(0x08)
	struct FActiveGameplayEffectHandle GEHandle_25Guy; // 0x114(0x08)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UGameplayEffect* Boy25BodyPoisionGE; // 0x120(0x08)
	struct TArray<struct UNOS_GameplayAbility*> NeedRemoveAbilityWhenBecome25Boy; // 0x128(0x10)
	struct UWorld* World; // 0x138(0x08)
	struct ANOS_PlayerHuman* Human; // 0x140(0x08)
	struct TArray<struct FXiaoJiangHumanTrailInfo> XiaoJiangHumanTrail; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)
	struct UNiagaraComponent* BodyPoisionNS; // 0x170(0x08)
	char pad_178[0x8]; // 0x178(0x08)
	struct TArray<struct TWeakObjectPtr<struct USkeletalMeshComponent>> HumanTargetComp; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
	struct UAudioComponent* XXJChasingSoundComp; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct UNiagaraComponent* FX_GhostFog; // 0x1b8(0x08)
	struct UNiagaraComponent* FX_GhostBoom; // 0x1c0(0x08)
	char pad_1C8[0x28]; // 0x1c8(0x28)

	void WhenHealthChange(enum class EHealthState HealthState); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.WhenHealthChange // (Final|Native|Protected) // @ game+0x1a267b0
	void UnpauseRecordingTrail(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.UnpauseRecordingTrail // (Final|Native|Public) // @ game+0x1a26700
	void SetMeInvisibleTo25Boy(struct AActor* TargetHuman, bool Invisible); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.SetMeInvisibleTo25Boy // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a26370
	void ServerCallBecome25BoyGA(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.ServerCallBecome25BoyGA // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a26350
	void ServerAllHumanBecome25BoyEndGame(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.ServerAllHumanBecome25BoyEndGame // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a26330
	void PauseRecordingTrail(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.PauseRecordingTrail // (Final|Native|Public) // @ game+0x1a25f20
	void OpenOrStopXXJChasingSound(bool Open); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.OpenOrStopXXJChasingSound // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a25e00
	void OnRep_Master(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.OnRep_Master // (Final|Native|Public|BlueprintCallable) // @ game+0x1a25ca0
	void MultiBeSuck(float Yaw, struct AActor* GhostXJ); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.MultiBeSuck // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a25130
	void MultiBecomeSelf(int32_t SelfClothID, bool bIsServerCall); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.MultiBecomeSelf // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a252a0
	void MultiBecome25Boy(struct ANOS_XiaoJiang* MyMaster); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.MultiBecome25Boy // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a25210
	void MoveMyBodyPoision(struct AActor* HelpMyedGoodPersion); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.MoveMyBodyPoision // (Final|Native|Public) // @ game+0x1a250a0
	void LoadBodyPoisionNS(struct ANOS_XiaoJiang* AttackXJ); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.LoadBodyPoisionNS // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a25010
	int32_t GetTrailNum(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.GetTrailNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1a24b70
	void FullHugBeenSaved(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.FullHugBeenSaved // (Final|Native|Public|BlueprintCallable) // @ game+0x1a24940
	void DeloadBodyPoisionNS(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.DeloadBodyPoisionNS // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a24890
	void DeactiveHumanCrouchInvisibleToXiaoJiang(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.DeactiveHumanCrouchInvisibleToXiaoJiang // (Final|Native|Public) // @ game+0x1a24870
	void DeactiveBeSuckGA(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.DeactiveBeSuckGA // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a24850
	void DeactiveBeIrradiateGA(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.DeactiveBeIrradiateGA // (Final|Native|Public) // @ game+0x1a24830
	void Boy25ChangeGhostFogState(bool bActive); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.Boy25ChangeGhostFogState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a245e0
	void AddBodyPoision(struct AActor* HurtVictim, struct ANOS_PlayerHuman* Boy25); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.AddBodyPoision // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a24510
	void ActiveHumanCrouchInvisibleToXiaoJiang(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.ActiveHumanCrouchInvisibleToXiaoJiang // (Final|Native|Public) // @ game+0x1a244f0
	void ActiveBeIrradiateGA(); // Function NotesOfSoul.NOS_HandleXiaoJiangAffair.ActiveBeIrradiateGA // (Final|Native|Public) // @ game+0x1a24490
};

// Class NotesOfSoul.NOS_HumanAttributeSet
// Size: 0x160 (Inherited: 0xe0)
struct UNOS_HumanAttributeSet : UNOS_AttributeSetBase {
	struct FGameplayAttributeData CurPowerRestoreMultiplier; // 0xe0(0x10)
	struct FGameplayAttributeData CurArmour; // 0xf0(0x10)
	struct FGameplayAttributeData MaxArmour; // 0x100(0x10)
	struct FGameplayAttributeData SkillStorageCount; // 0x110(0x10)
	struct FGameplayAttributeData CouchSpeeed; // 0x120(0x10)
	struct FGameplayAttributeData CrawlSpeed; // 0x130(0x10)
	struct FGameplayAttributeData CureValue; // 0x140(0x10)
	struct FGameplayAttributeData AdditionalDamage; // 0x150(0x10)

	void OnRep_SkillStorageCount(struct FGameplayAttributeData OldSkillStorageCount); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_SkillStorageCount // (Final|Native|Protected|HasOutParms) // @ game+0x1a25d60
	void OnRep_MaxArmour(struct FGameplayAttributeData OldMaxArmour); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_MaxArmour // (Final|Native|Protected|HasOutParms) // @ game+0x1a25cc0
	void OnRep_CurPowerRestoreMultiplier(struct FGameplayAttributeData OldCurPowerRestoreMultiplier); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_CurPowerRestoreMultiplier // (Final|Native|Protected|HasOutParms) // @ game+0x1a25b00
	void OnRep_CureValue(struct FGameplayAttributeData OldCureValue); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_CureValue // (Final|Native|Protected|HasOutParms) // @ game+0x1a25bc0
	void OnRep_CurArmour(struct FGameplayAttributeData OldCurArmour); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_CurArmour // (Final|Native|Protected|HasOutParms) // @ game+0x1a25a60
	void OnRep_CrawlSpeed(struct FGameplayAttributeData OldCrawlSpeed); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_CrawlSpeed // (Final|Native|Protected|HasOutParms) // @ game+0x1a259c0
	void OnRep_CouchSpeeed(struct FGameplayAttributeData OldCouchSpeeed); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_CouchSpeeed // (Final|Native|Protected|HasOutParms) // @ game+0x1a25920
	void OnRep_AdditionalDamage(struct FGameplayAttributeData OldValue); // Function NotesOfSoul.NOS_HumanAttributeSet.OnRep_AdditionalDamage // (Final|Native|Protected|HasOutParms) // @ game+0x1a25880
};

// Class NotesOfSoul.NOS_InputPress
// Size: 0xa8 (Inherited: 0x80)
struct UNOS_InputPress : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	void OnPressCallback(); // Function NotesOfSoul.NOS_InputPress.OnPressCallback // (Final|Native|Public) // @ game+0x1a25820
	struct UNOS_InputPress* NOSInputPress(struct UGameplayAbility* OwningAbility, enum class ENOSAbilityInputID inpressid, bool bTestAlreadyPressed, enum class ECustomReplicatedEvent CustomEvent); // Function NotesOfSoul.NOS_InputPress.NOSInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a25370
	void ChannelInput(int32_t InputID); // Function NotesOfSoul.NOS_InputPress.ChannelInput // (Final|Native|Public) // @ game+0x1a24670
};

// Class NotesOfSoul.NOS_InputRelease
// Size: 0xa8 (Inherited: 0x80)
struct UNOS_InputRelease : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	void OnReleaseCallback(); // Function NotesOfSoul.NOS_InputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0x1a25840
	struct UNOS_InputRelease* NOSInputRelease(struct UGameplayAbility* OwningAbility, enum class ENOSAbilityInputID inreleaseid, bool bTestAlreadyReleased, enum class ECustomReplicatedEvent CustomEvent); // Function NotesOfSoul.NOS_InputRelease.NOSInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a254d0
	void ChannelInput(int32_t InputID); // Function NotesOfSoul.NOS_InputRelease.ChannelInput // (Final|Native|Public) // @ game+0x1a24700
};

// Class NotesOfSoul.NOS_InteractSpawnMgr
// Size: 0x4a0 (Inherited: 0x220)
struct ANOS_InteractSpawnMgr : AActor {
	struct TArray<struct ANOS_SpawnPointBase*> AllSpawnPoints; // 0x220(0x10)
	char pad_230[0x10]; // 0x230(0x10)
	bool GetAllSpawnPoint; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FTimerHandle SpawnPropTimerHandle; // 0x248(0x08)
	struct UDataTable* CurMapPropSpawnBatchConfig; // 0x250(0x08)
	struct UDataTable* CurMapPropPoolConfig; // 0x258(0x08)
	struct TArray<struct ANOS_DoveSpawnPoint*> AllDoveSpawnPoint; // 0x260(0x10)
	struct TArray<struct ANOS_DoveSpawnPoint*> AllSpawnedDoveSpawnPoint; // 0x270(0x10)
	struct TArray<struct ANOS_ItemSpawnPoint*> AllGroundItemSpawnPoint; // 0x280(0x10)
	struct TArray<struct ANOS_PropBox*> AllPropBox; // 0x290(0x10)
	struct UObject* DoveClass; // 0x2a0(0x08)
	struct UObject* ItemClass; // 0x2a8(0x08)
	int32_t PropTotalBatch; // 0x2b0(0x04)
	bool UsefixedTime; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float PropBatchTime; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<float> PropAllBatchTime; // 0x2c0(0x10)
	char pad_2D0[0x4]; // 0x2d0(0x04)
	int32_t NotOpenPropBoxNum; // 0x2d4(0x04)
	char pad_2D8[0xb0]; // 0x2d8(0xb0)
	struct TArray<struct AActor*> AllPlayer; // 0x388(0x10)
	struct FTimerHandle SpawnElementTimerHandle; // 0x398(0x08)
	struct UObject* ElementBoxClass; // 0x3a0(0x08)
	struct TArray<struct ANOS_ElementSpawnPoint*> AllElementSpawnPoint; // 0x3a8(0x10)
	struct TArray<struct ANOS_ElementSpawnPoint*> AllElementSpawnPoint_RefreshAgain; // 0x3b8(0x10)
	struct TArray<float> ElementAllBatchTime; // 0x3c8(0x10)
	char pad_3D8[0x60]; // 0x3d8(0x60)
	struct FTimerHandle SpawnBaGuaESTimerHandle; // 0x438(0x08)
	struct UDataTable* CurMapESSpawnPointConfig; // 0x440(0x08)
	struct TArray<struct UTexture2D*> ESSpawnPointDisplayIndex; // 0x448(0x10)
	struct TArray<struct ANOS_ElementSlotSpawnPoint*> AllESSpawnPoint; // 0x458(0x10)
	struct TArray<struct ANOS_ElementSlot*> AllElementSlot; // 0x468(0x10)
	struct UObject* ElementSlotClass; // 0x478(0x08)
	char pad_480[0x20]; // 0x480(0x20)

	void ReducePropNum_Percentage(enum class ENOSPropRefreshPlaces PropType, float Percentage); // Function NotesOfSoul.NOS_InteractSpawnMgr.ReducePropNum_Percentage // (Final|Native|Public|BlueprintCallable) // @ game+0x1a26260
	void ReducePropNum(enum class ENOSPropRefreshPlaces PropType, int32_t Num); // Function NotesOfSoul.NOS_InteractSpawnMgr.ReducePropNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1a26190
	bool RandomGetPropPoolItem(int32_t Batch, enum class ENOSPropRefreshPlaces Places, struct FKxItemData ItemData); // Function NotesOfSoul.NOS_InteractSpawnMgr.RandomGetPropPoolItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26050
	struct ANOS_ElementSpawnPoint* RandomGetEBSpawnPoint_RefreshAgain(); // Function NotesOfSoul.NOS_InteractSpawnMgr.RandomGetEBSpawnPoint_RefreshAgain // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a26020
	struct ANOS_DoveSpawnPoint* RandomGetDoveSpawnPoint_RefreshAgain(); // Function NotesOfSoul.NOS_InteractSpawnMgr.RandomGetDoveSpawnPoint_RefreshAgain // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a25ff0
	void PrintSpawnPointInfo(struct FNOSArrayPrintInfo SPawnPointInfo); // Function NotesOfSoul.NOS_InteractSpawnMgr.PrintSpawnPointInfo // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a25f40
	void PauseGameCallBack(bool IsPause); // Function NotesOfSoul.NOS_InteractSpawnMgr.PauseGameCallBack // (Final|Native|Public) // @ game+0x1a25e90
	struct ANOS_InteractSpawnMgr* GetInteractSpawnMgr(); // Function NotesOfSoul.NOS_InteractSpawnMgr.GetInteractSpawnMgr // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a24b10
	void GetAllPlayer(struct FEventRelevantData eventData); // Function NotesOfSoul.NOS_InteractSpawnMgr.GetAllPlayer // (Final|Native|Public) // @ game+0x1a24a00
};

// Class NotesOfSoul.NOS_ItemSpawnPoint
// Size: 0x250 (Inherited: 0x238)
struct ANOS_ItemSpawnPoint : ANOS_SpawnPointBase {
	enum class ENOSPropRefreshPlaces Places; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USceneComponent* RootCom; // 0x240(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x248(0x08)
};

// Class NotesOfSoul.NOS_JinPo
// Size: 0x1b50 (Inherited: 0x1b00)
struct ANOS_JinPo : ANOS_PlayerGhost {
	struct TSoftObjectPtr<struct UAnimMontage> Montage_HumanBeHit_Man; // 0x1af8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Montage_HumanBeHit_Woman; // 0x1b20(0x28)

	void SetActorHidden(struct AActor* InActor, bool InVal); // Function NotesOfSoul.NOS_JinPo.SetActorHidden // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2bbf0
	void AddHandleAffairCompToHuman(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_JinPo.AddHandleAffairCompToHuman // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a2a5a0
};

// Class NotesOfSoul.NOS_LiftedComponent
// Size: 0x108 (Inherited: 0xb0)
struct UNOS_LiftedComponent : UActorComponent {
	bool bShouldFloat; // 0xb0(0x01)
	bool bCanBeLifted; // 0xb1(0x01)
	bool bCanBeAttacked; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)
	struct USoundBase* CollisionSound; // 0xb8(0x08)
	struct USoundBase* AttackedSound; // 0xc0(0x08)
	struct UStaticMeshComponent* OwnerSM; // 0xc8(0x08)
	float RemainSecond; // 0xd0(0x04)
	float SwitchStagePercent; // 0xd4(0x04)
	float LiftFrequency; // 0xd8(0x04)
	float LiftOffset; // 0xdc(0x04)
	float LiftForce; // 0xe0(0x04)
	char pad_E4[0x24]; // 0xe4(0x24)

	void SwitchStage(); // Function NotesOfSoul.NOS_LiftedComponent.SwitchStage // (Final|Native|Public) // @ game+0xbc9a40
	void PlayCollisionSound(); // Function NotesOfSoul.NOS_LiftedComponent.PlayCollisionSound // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xbdd0d0
	void PlayAttackedSound(); // Function NotesOfSoul.NOS_LiftedComponent.PlayAttackedSound // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x100f5e0
	void OnOwnerHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function NotesOfSoul.NOS_LiftedComponent.OnOwnerHit // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x1a2b4c0
	void LiftOwnerOff(); // Function NotesOfSoul.NOS_LiftedComponent.LiftOwnerOff // (Native|Event|Public|BlueprintEvent) // @ game+0x1a2b000
	void LiftOffByTerritory(); // Function NotesOfSoul.NOS_LiftedComponent.LiftOffByTerritory // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a24890
	void LiftOffByAttack(struct AActor* DamageCauser); // Function NotesOfSoul.NOS_LiftedComponent.LiftOffByAttack // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2af70
	void ClearLift(); // Function NotesOfSoul.NOS_LiftedComponent.ClearLift // (Native|Event|Public|BlueprintEvent) // @ game+0x1a26350
	void ClearAttack(); // Function NotesOfSoul.NOS_LiftedComponent.ClearAttack // (Native|Event|Public|BlueprintEvent) // @ game+0x1a26330
};

// Class NotesOfSoul.NOS_LiftedScene
// Size: 0x250 (Inherited: 0x220)
struct ANOS_LiftedScene : AActor {
	struct UStaticMeshComponent* StaticMeshRootCom; // 0x220(0x08)
	struct UAudioComponent* HitAudioCom; // 0x228(0x08)
	float ImpulseFrequency; // 0x230(0x04)
	float ImpulseForce; // 0x234(0x04)
	float ImpulseRemainTime; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FTimerHandle StageOneTimer; // 0x240(0x08)
	struct FTimerHandle StageTwoTimer; // 0x248(0x08)

	void LiftOffByTerritory(); // Function NotesOfSoul.NOS_LiftedScene.LiftOffByTerritory // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_LoadPakSubSystem
// Size: 0x38 (Inherited: 0x30)
struct UNOS_LoadPakSubSystem : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)

	void Mount(struct FString Filename); // Function NotesOfSoul.NOS_LoadPakSubSystem.Mount // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2b020
	bool CanUpdate(); // Function NotesOfSoul.NOS_LoadPakSubSystem.CanUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2a9e0
};

// Class NotesOfSoul.NOS_LobbyCharacter
// Size: 0xeb0 (Inherited: 0xea0)
struct ANOS_LobbyCharacter : ANOS_CharacterModelBase {
	char pad_EA0[0x10]; // 0xea0(0x10)

	void NoticeBPAsyncLoadBaseDressCompeleted(); // Function NotesOfSoul.NOS_LobbyCharacter.NoticeBPAsyncLoadBaseDressCompeleted // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AsyncLoadBaseDress(struct FIntegrationHumanChangeDress CurModelDressInfo); // Function NotesOfSoul.NOS_LobbyCharacter.AsyncLoadBaseDress // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a2a860
};

// Class NotesOfSoul.NOS_MMCGetAbilityCost
// Size: 0x40 (Inherited: 0x40)
struct UNOS_MMCGetAbilityCost : UGameplayModMagnitudeCalculation {
};

// Class NotesOfSoul.NOS_MMCGetAutoHealth
// Size: 0x98 (Inherited: 0x40)
struct UNOS_MMCGetAutoHealth : UGameplayModMagnitudeCalculation {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class NotesOfSoul.NOS_MMCXJBodyPoision
// Size: 0x40 (Inherited: 0x40)
struct UNOS_MMCXJBodyPoision : UGameplayModMagnitudeCalculation {
};

// Class NotesOfSoul.NOS_MMCXQTakeDamage
// Size: 0x40 (Inherited: 0x40)
struct UNOS_MMCXQTakeDamage : UGameplayModMagnitudeCalculation {
};

// Class NotesOfSoul.NOS_MovementComponent
// Size: 0xbc0 (Inherited: 0xb50)
struct UNOS_MovementComponent : UKxMovementComponent {
	struct FMulticastInlineDelegate OnCrouch; // 0xb48(0x10)
	struct FMulticastInlineDelegate OnUncrouch; // 0xb58(0x10)
	char pad_B70[0x28]; // 0xb70(0x28)
	float CrawlSpeed; // 0xb98(0x04)
	float PowerExpend; // 0xb9c(0x04)
	struct ANOS_Character* OwnerChar; // 0xba0(0x08)
	struct UAbilitySystemComponent* AbilityCom; // 0xba8(0x08)
	char pad_BB0[0x10]; // 0xbb0(0x10)

	void StopRootMotionMove(); // Function NotesOfSoul.NOS_MovementComponent.StopRootMotionMove // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2bf10
	void RootMotionMoveToLocation(struct FVector TargetLocation, float DurationTime, struct UCurveVector* PathOffsetCurve, int32_t Priority, bool bRestrictSpeedToExpected); // Function NotesOfSoul.NOS_MovementComponent.RootMotionMoveToLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a2ba20
	void FlushServerMovesBP(); // Function NotesOfSoul.NOS_MovementComponent.FlushServerMovesBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2ac10
};

// Class NotesOfSoul.NOS_NianShou
// Size: 0x1b00 (Inherited: 0x1b00)
struct ANOS_NianShou : ANOS_PlayerGhost {
};

// Class NotesOfSoul.NOS_NicknameInterface
// Size: 0x28 (Inherited: 0x28)
struct UNOS_NicknameInterface : UInterface {

	void SetTeam(bool InIsHuman); // Function NotesOfSoul.NOS_NicknameInterface.SetTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2bdf0
	void HidenHeadWidget(bool Hidden); // Function NotesOfSoul.NOS_NicknameInterface.HidenHeadWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2ae10
	bool GetShowVoice(); // Function NotesOfSoul.NOS_NicknameInterface.GetShowVoice // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2adc0
	struct FString GetPlayerName(); // Function NotesOfSoul.NOS_NicknameInterface.GetPlayerName // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2ad70
};

// Class NotesOfSoul.NOS_NieXiaoQian
// Size: 0x1b20 (Inherited: 0x1b00)
struct ANOS_NieXiaoQian : ANOS_PlayerGhost {
	enum class ESKillState CurrentSkillState; // 0x1af8(0x01)
	struct UGameplayEffect* GetSoulTimerGE; // 0x1b00(0x08)
	struct ANOS_XQGhostLamp* XQGhostLampClass; // 0x1b08(0x08)
	struct ANOS_XQGhostLamp* XQGhostLamp; // 0x1b10(0x08)
	char pad_1B19[0x7]; // 0x1b19(0x07)

	void SpawnGhostLampActor(struct FVector SpawnLocation); // Function NotesOfSoul.NOS_NieXiaoQian.SpawnGhostLampActor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a2be80
	void On_RepSkillState(); // Function NotesOfSoul.NOS_NieXiaoQian.On_RepSkillState // (Final|Native|Public) // @ game+0x1a2ba00
	void GetBackOrDropGhostLamp(enum class ESKillState StateAction, struct FVector SpawnLampLocation); // Function NotesOfSoul.NOS_NieXiaoQian.GetBackOrDropGhostLamp // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a2ac30
	void ChangeLampState(enum class ESKillState InState); // Function NotesOfSoul.NOS_NieXiaoQian.ChangeLampState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2aaa0
	struct FActiveGameplayEffectHandle ApplySKill02GE(struct AActor* GhostInstigator, struct AActor* Target); // Function NotesOfSoul.NOS_NieXiaoQian.ApplySKill02GE // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a2a780
	struct FActiveGameplayEffectHandle ApplyGetSoulTimerToTarget(struct AActor* GhostInstigator, struct AActor* Target, float DurationTime); // Function NotesOfSoul.NOS_NieXiaoQian.ApplyGetSoulTimerToTarget // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a2a660
};

// Class NotesOfSoul.NOS_NorAttackAnimNotify
// Size: 0x90 (Inherited: 0x38)
struct UNOS_NorAttackAnimNotify : UAnimNotify {
	struct FName Key; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	struct FVector Scale; // 0x58(0x0c)
	char Attached : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FName SocketName; // 0x68(0x08)
	char pad_70[0x20]; // 0x70(0x20)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NotesOfSoul.NOS_NorAttackAnimNotify.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x164c7c0
};

// Class NotesOfSoul.NOS_NoviceTutorialGM
// Size: 0x680 (Inherited: 0x668)
struct ANOS_NoviceTutorialGM : ANOS_GMArena {
	bool bPlayWithGhost; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct ANOS_PlayerHuman* NoviceHumanClass; // 0x670(0x08)
	struct ANOS_PlayerGhost* NoviceGhostClass; // 0x678(0x08)
};

// Class NotesOfSoul.NOS_NoviceTutorialGS
// Size: 0x600 (Inherited: 0x600)
struct ANOS_NoviceTutorialGS : ANOS_GSArena {
};

// Class NotesOfSoul.NOS_PCArenaBase
// Size: 0x5f0 (Inherited: 0x598)
struct ANOS_PCArenaBase : AKxPlayerController {
	char pad_598[0x8]; // 0x598(0x08)
	struct APawn* PawnClass; // 0x5a0(0x08)
	struct UNOS_PCEventComponent* EventCom; // 0x5a8(0x08)
	struct UNOS_UIControlComponent* NOS_UIControlComp; // 0x5b0(0x08)
	struct TArray<float> CurModeAddFightScoreJsonData; // 0x5b8(0x10)
	struct FRotator OldControlRotation; // 0x5c8(0x0c)
	enum class EInputMode LastInputMode; // 0x5d4(0x01)
	bool LastIsShowMouseCursor; // 0x5d5(0x01)
	bool Isusecamera; // 0x5d6(0x01)
	char pad_5D7[0x11]; // 0x5d7(0x11)
	struct UUserWidget* SettingBoard_C; // 0x5e8(0x08)

	void TriggerSetPawnEvent(struct APawn* LastPawn, struct APawn* NextPawn); // Function NotesOfSoul.NOS_PCArenaBase.TriggerSetPawnEvent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a35ed0
	void SwitchSettingBoardVisible(); // Function NotesOfSoul.NOS_PCArenaBase.SwitchSettingBoardVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35d30
	void SwitchCameraPlayer(struct APawn* InPawn); // Function NotesOfSoul.NOS_PCArenaBase.SwitchCameraPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35c00
	void SetSettingBoardVisible(bool InIsShow); // Function NotesOfSoul.NOS_PCArenaBase.SetSettingBoardVisible // (Final|Native|Private) // @ game+0x1a35540
	void ServerSetSpectatorView(struct AActor* ViewTarget); // Function NotesOfSoul.NOS_PCArenaBase.ServerSetSpectatorView // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a35020
	void MulSwitchCameraPlayer(struct APawn* InPawn); // Function NotesOfSoul.NOS_PCArenaBase.MulSwitchCameraPlayer // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a33800
	struct UNOS_UIControlComponent* GetUIControlComp(); // Function NotesOfSoul.NOS_PCArenaBase.GetUIControlComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a332d0
	void CreatSettingBoard(); // Function NotesOfSoul.NOS_PCArenaBase.CreatSettingBoard // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32670
	void ClientLoadMapComplete(); // Function NotesOfSoul.NOS_PCArenaBase.ClientLoadMapComplete // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a32580
	void AddFightScore(enum class EAddFightScoreType AddFightScoreType, enum class EAddFightScoreTerm AddFightScoreTerm, bool bIsHuman, int32_t AddCustomScoreScale); // Function NotesOfSoul.NOS_PCArenaBase.AddFightScore // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a31b00
};

// Class NotesOfSoul.NOS_NoviceTutorialPC
// Size: 0x5f0 (Inherited: 0x5f0)
struct ANOS_NoviceTutorialPC : ANOS_PCArenaBase {
};

// Class NotesOfSoul.NOS_PSArenaBase
// Size: 0x4f0 (Inherited: 0x340)
struct ANOS_PSArenaBase : AKxPlayerState {
	struct FVoiceInfo VoiceInfo; // 0x340(0x10)
	char pad_350[0x1]; // 0x350(0x01)
	enum class EPlayerOnlineState PlayerOnlineState; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float GameCurrency_InGame; // 0x354(0x04)
	struct FMulticastInlineDelegate OnlineState; // 0x358(0x10)
	char pad_368[0x8]; // 0x368(0x08)
	struct FMulticastInlineDelegate OnCharacterTypeChange; // 0x370(0x10)
	struct UNOS_PSTeamComponent* TeamCom; // 0x380(0x08)
	struct TArray<int32_t> FightScore; // 0x388(0x10)
	struct FHumanConfig HumanConfig; // 0x398(0x38)
	struct FGhostConfig GhostConfig; // 0x3d0(0x30)
	int32_t SealElementSlotTimes; // 0x400(0x04)
	int32_t KillHumanTimes; // 0x404(0x04)
	int32_t GhostAttackHumanAndGetDownTimes; // 0x408(0x04)
	int32_t UseItemTimes; // 0x40c(0x04)
	float CureAmount; // 0x410(0x04)
	int32_t PullHumanAmount; // 0x414(0x04)
	int32_t BravePoints; // 0x418(0x04)
	int32_t GhostSubSoulsGain; // 0x41c(0x04)
	int32_t GhostNorAttackDmgSum; // 0x420(0x04)
	int32_t ResetPostionTimes; // 0x424(0x04)
	int32_t account_level; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FString GuildName; // 0x430(0x10)
	int32_t HeadFrame; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UObject* MP_TargetPoint; // 0x448(0x08)
	struct UObject* MP_GhostPoint; // 0x450(0x08)
	struct TArray<struct UObject*> MP_ElementSlotPoint; // 0x458(0x10)
	struct TArray<struct UObject*> MP_ElementBoxPoint; // 0x468(0x10)
	struct TArray<struct UObject*> MP_ItemPoint; // 0x478(0x10)
	struct FTimerHandle WaitCharacterTypeHandle; // 0x488(0x08)
	enum class ECharacterCategory CharacterCategory; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct TArray<int32_t> Config_HumanTestSkin; // 0x498(0x10)
	struct TArray<int32_t> Config_GhostTestSkin; // 0x4a8(0x10)
	char pad_4B8[0x30]; // 0x4b8(0x30)
	struct UUserWidget* SurrenderBoard; // 0x4e8(0x08)

	void SetVoiceTeamID(int32_t TeamID); // Function NotesOfSoul.NOS_PSArenaBase.SetVoiceTeamID // (Final|Native|Public|BlueprintCallable) // @ game+0x1a40d90
	void SetHealthState(enum class EHealthState InState); // Function NotesOfSoul.NOS_PSArenaBase.SetHealthState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a40960
	void ServerTryChooseSurrenderState(bool IsAccept); // Function NotesOfSoul.NOS_PSArenaBase.ServerTryChooseSurrenderState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a40700
	void ServerPlayerTryCallSurrender(); // Function NotesOfSoul.NOS_PSArenaBase.ServerPlayerTryCallSurrender // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a40620
	void ServerCheckCreatSrBoard(); // Function NotesOfSoul.NOS_PSArenaBase.ServerCheckCreatSrBoard // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xbc3a20
	void ReportCheating(int32_t TargetId, struct TArray<struct FString> Key, struct TArray<struct FString> Value, struct FString ImagePath); // Function NotesOfSoul.NOS_PSArenaBase.ReportCheating // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a40420
	void OnRep_VoiceInfo(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_VoiceInfo // (Native|Event|Public|BlueprintEvent) // @ game+0x1a40080
	void OnRep_ShowWolfMan(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_ShowWolfMan // (Final|Native|Public) // @ game+0x1a40060
	void OnRep_OnLineStateChanged(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_OnLineStateChanged // (Final|Native|Public) // @ game+0x1a40040
	void OnRep_HumanConfig(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_HumanConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
	void OnRep_GhostConfig(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_GhostConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
	void OnRep_FightScore(); // Function NotesOfSoul.NOS_PSArenaBase.OnRep_FightScore // (Final|Native|Public) // @ game+0x1a40020
	void OnExitRoom(int32_t Result, struct FString ErrorInfo); // Function NotesOfSoul.NOS_PSArenaBase.OnExitRoom // (Final|Native|Public) // @ game+0x1a3fec0
	void OnEnterRoom(int32_t Result, struct FString ErrorInfo); // Function NotesOfSoul.NOS_PSArenaBase.OnEnterRoom // (Final|Native|Public) // @ game+0x1a3fda0
	void OnDisConnectRoom(int32_t Result, struct FString ErrorInfo); // Function NotesOfSoul.NOS_PSArenaBase.OnDisConnectRoom // (Final|Native|Public) // @ game+0x1a3fc80
	void InitVoiceInfo(); // Function NotesOfSoul.NOS_PSArenaBase.InitVoiceInfo // (Native|Public) // @ game+0x1a3fa10
	int32_t GetPlayerID(); // Function NotesOfSoul.NOS_PSArenaBase.GetPlayerID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f9b0
	int64_t GetPlayerDeadTime(); // Function NotesOfSoul.NOS_PSArenaBase.GetPlayerDeadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3f990
	enum class EHealthState GetPawnHealthState(); // Function NotesOfSoul.NOS_PSArenaBase.GetPawnHealthState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3f970
	struct FHumanConfig GetHumanData(); // Function NotesOfSoul.NOS_PSArenaBase.GetHumanData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f8d0
	struct FGhostConfig GetGhostData(); // Function NotesOfSoul.NOS_PSArenaBase.GetGhostData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f840
	enum class ECharacterCategory GetCharacterType(); // Function NotesOfSoul.NOS_PSArenaBase.GetCharacterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f720
	int32_t GetCharacterID(); // Function NotesOfSoul.NOS_PSArenaBase.GetCharacterID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f700
	int32_t GetAllFightScoreSum(); // Function NotesOfSoul.NOS_PSArenaBase.GetAllFightScoreSum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f670
	struct TArray<int32_t> GetAllFightScore(); // Function NotesOfSoul.NOS_PSArenaBase.GetAllFightScore // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f5d0
	void CloseVoiceChat(); // Function NotesOfSoul.NOS_PSArenaBase.CloseVoiceChat // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a25c60
	void ClientUpdateBoardDate(struct FSR_CheckData AcceptData); // Function NotesOfSoul.NOS_PSArenaBase.ClientUpdateBoardDate // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a3f500
	void ClientRemoveSurrenderBoard(); // Function NotesOfSoul.NOS_PSArenaBase.ClientRemoveSurrenderBoard // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a25c80
	void ClientCreatSRBoard(struct FSR_CheckData AcceptData); // Function NotesOfSoul.NOS_PSArenaBase.ClientCreatSRBoard // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a3f3e0
	void ClientCreateErrorBoard(int32_t ErrorIndex); // Function NotesOfSoul.NOS_PSArenaBase.ClientCreateErrorBoard // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a3f470
	void AddStateFromClient(struct ACharacter* CurPlayer, enum class EPlayerPunishType Type, struct FString Data); // Function NotesOfSoul.NOS_PSArenaBase.AddStateFromClient // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a3f2b0
};

// Class NotesOfSoul.NOS_NoviceTutorialPS
// Size: 0x4f0 (Inherited: 0x4f0)
struct ANOS_NoviceTutorialPS : ANOS_PSArenaBase {

	void SetCurPlayerName(struct FString Name); // Function NotesOfSoul.NOS_NoviceTutorialPS.SetCurPlayerName // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2bcc0
};

// Class NotesOfSoul.NOS_OverlyingGameplayAbility
// Size: 0x4b8 (Inherited: 0x490)
struct UNOS_OverlyingGameplayAbility : UNOS_GameplayAbility {
	char CurrentStorageIndex; // 0x490(0x01)
	char OverlyingSkillAllStorageIndex; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct UGameplayEffect* StorageIndexEffectClass; // 0x498(0x08)
	bool bIsHold; // 0x4a0(0x01)
	bool bHoldOfEndGA; // 0x4a1(0x01)
	char pad_4A2[0x16]; // 0x4a2(0x16)

	void UseSkillIsOver(); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.UseSkillIsOver // (Native|Protected|BlueprintCallable) // @ game+0x10105a0
	void SetShouldIgnoreCooldowns(bool InVal); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.SetShouldIgnoreCooldowns // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a2bd60
	void RecoverySkillEvent(); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.RecoverySkillEvent // (Native|Protected) // @ game+0x10185d0
	void OnRecoverySkillEvent(int32_t SkillIndex); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.OnRecoverySkillEvent // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlueprintGiveAbility(); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.OnBlueprintGiveAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	bool GetLauchSkillIsEnable(); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.GetLauchSkillIsEnable // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a2ad10
	void ClearCurrentStorageIndex(bool bSkillCDIsReset); // Function NotesOfSoul.NOS_OverlyingGameplayAbility.ClearCurrentStorageIndex // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a2ab20
};

// Class NotesOfSoul.NOS_PaperManBase
// Size: 0x560 (Inherited: 0x4c0)
struct ANOS_PaperManBase : ACharacter {
	char pad_4C0[0x18]; // 0x4c0(0x18)
	struct TArray<struct ANOS_PlayerHuman*> AllOverlapHuman; // 0x4d8(0x10)
	bool bIsSeeing; // 0x4e8(0x01)
	char pad_4E9[0xf]; // 0x4e9(0x0f)
	float MaxMoveSpeed; // 0x4f8(0x04)
	float FaceAngle; // 0x4fc(0x04)
	float MinMoveEndTime; // 0x500(0x04)
	float MaxMoveEndTime; // 0x504(0x04)
	float HitWallEscapeTime; // 0x508(0x04)
	bool bIsEscape; // 0x50c(0x01)
	bool bIsFallDown; // 0x50d(0x01)
	enum class EPaperManState PaperManState; // 0x50e(0x01)
	char pad_50F[0x1]; // 0x50f(0x01)
	float GrabDistance; // 0x510(0x04)
	float SeeingDistance; // 0x514(0x04)
	struct AActor* CollisionActor; // 0x518(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x520(0x08)
	struct USphereComponent* SphereCollisionCom; // 0x528(0x08)
	struct UBoxComponent* BoxCollisionCom; // 0x530(0x08)
	struct UAnimMontage* HitWallMontage; // 0x538(0x08)
	struct UAnimMontage* FallDownMontage; // 0x540(0x08)
	struct UAnimMontage* GetUpMontage; // 0x548(0x08)
	struct UAnimMontage* DeliveryMontage; // 0x550(0x08)
	char pad_558[0x8]; // 0x558(0x08)

	void OnSphereEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_PaperManBase.OnSphereEndOverlap // (Final|Native|Public) // @ game+0x1a2b8a0
	void OnSphereBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_PaperManBase.OnSphereBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x1a2b690
	void OnBoxEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_PaperManBase.OnBoxEndOverlap // (Final|Native|Public) // @ game+0x1a2b360
	void OnBoxBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_PaperManBase.OnBoxBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x1a2b150
	void MultiOpenCollision(); // Function NotesOfSoul.NOS_PaperManBase.MultiOpenCollision // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a2b130
	void MultiCloseCollision(); // Function NotesOfSoul.NOS_PaperManBase.MultiCloseCollision // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a2b110
	bool IsSeeingTarget(); // Function NotesOfSoul.NOS_PaperManBase.IsSeeingTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a2af40
	bool IsSeeing(struct AActor* Target); // Function NotesOfSoul.NOS_PaperManBase.IsSeeing // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2aea0
	void Getup(); // Function NotesOfSoul.NOS_PaperManBase.Getup // (Native|Public|BlueprintCallable) // @ game+0x1a2adf0
	struct ANOS_PlayerHuman* GetNearHuman(); // Function NotesOfSoul.NOS_PaperManBase.GetNearHuman // (Final|Native|Protected) // @ game+0x1a2ad40
	void EscapeAgain(); // Function NotesOfSoul.NOS_PaperManBase.EscapeAgain // (Native|Public|BlueprintCallable) // @ game+0x1a2abf0
	void Escape(); // Function NotesOfSoul.NOS_PaperManBase.Escape // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2abd0
	void ChangeCollision(bool IsOpen); // Function NotesOfSoul.NOS_PaperManBase.ChangeCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x1a2aa10
	void BPPlayMontage(struct UAnimMontage* Montage); // Function NotesOfSoul.NOS_PaperManBase.BPPlayMontage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x11cadf0
};

// Class NotesOfSoul.NOS_PaperMan_InBox
// Size: 0x560 (Inherited: 0x560)
struct ANOS_PaperMan_InBox : ANOS_PaperManBase {
	struct ANOS_RangeBox* RangeBox; // 0x558(0x08)

	void Delivery(); // Function NotesOfSoul.NOS_PaperMan_InBox.Delivery // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a2abb0
};

// Class NotesOfSoul.NOS_PaperMan_InFloor
// Size: 0x560 (Inherited: 0x560)
struct ANOS_PaperMan_InFloor : ANOS_PaperManBase {
};

// Class NotesOfSoul.NOS_PaperManSpawnPoint
// Size: 0x270 (Inherited: 0x238)
struct ANOS_PaperManSpawnPoint : ANOS_SpawnPointBase {
	char pad_238[0x9]; // 0x238(0x09)
	bool bIsInbox; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct ANOS_RangeBox* DeliveryRangeBox; // 0x248(0x08)
	struct UMaterialInstance* MI_InBoxMaterial; // 0x250(0x08)
	struct UMaterialInstance* MI_InFloorMaterial; // 0x258(0x08)
	struct USceneComponent* RootCom; // 0x260(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x268(0x08)

	void TestPrint(); // Function NotesOfSoul.NOS_PaperManSpawnPoint.TestPrint // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35d70
};

// Class NotesOfSoul.NOS_Partner
// Size: 0x4d0 (Inherited: 0x4c0)
struct ANOS_Partner : ACharacter {
	struct UNOS_AbilitySystemComponent* AIAbilityComp; // 0x4b8(0x08)
	struct TArray<struct UNOS_GameplayAbility*> DefaultGrantAbilitys; // 0x4c0(0x10)
};

// Class NotesOfSoul.NOS_PartnerAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UNOS_PartnerAnimInstance : UAnimInstance {
};

// Class NotesOfSoul.NOS_PartnerMovementComponent
// Size: 0xb10 (Inherited: 0xb00)
struct UNOS_PartnerMovementComponent : UCharacterMovementComponent {
	char pad_B00[0x10]; // 0xb00(0x10)

	void StopRootMotionMove(); // Function NotesOfSoul.NOS_PartnerMovementComponent.StopRootMotionMove // (Final|Native|Public|BlueprintCallable) // @ game+0x1a35b90
	void RootMotionMoveToLocation(struct FVector StartLocation, struct FVector TargetLocation, float DurationTime, struct UCurveVector* PathOffsetCurve, int32_t Priority, bool bRestrictSpeedToExpected); // Function NotesOfSoul.NOS_PartnerMovementComponent.RootMotionMoveToLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a34a50
};

// Class NotesOfSoul.NOS_PartnerXiaoXiaoJiang
// Size: 0x5b0 (Inherited: 0x4d0)
struct ANOS_PartnerXiaoXiaoJiang : ANOS_Partner {
	enum class XiaoXiaoJiangCurrentState XiaoXiaoJiangState; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	int32_t MyLevel; // 0x4d4(0x04)
	struct ANOS_PlayerHuman* CurCanChaseTarget; // 0x4d8(0x08)
	struct FGameplayTag XiaoJiangChildTag; // 0x4e0(0x08)
	struct FGameplayTag HumanElementSlotDoingTag; // 0x4e8(0x08)
	struct FGameplayTag HugTag; // 0x4f0(0x08)
	struct UCurveVector* PathOffsetCurve; // 0x4f8(0x08)
	struct UNOS_GameplayAbility* XiaoXiaoJiangSwoopAbility; // 0x500(0x08)
	struct USkeletalMeshComponent* ClothAndHairComp; // 0x508(0x08)
	struct USkeletalMeshComponent* HairComp; // 0x510(0x08)
	SoftClassProperty PXXJAnimBlueprint; // 0x518(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> AMBorn; // 0x540(0x28)
	float Config_MoveRectangleMaxLength; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct TArray<struct ANOS_PlayerHuman*> AllHumans; // 0x570(0x10)
	char pad_580[0x10]; // 0x580(0x10)
	struct UNiagaraComponent* BornSwampComp; // 0x590(0x08)
	char pad_598[0x18]; // 0x598(0x18)

	void SetXiaoXiaoJiangState(enum class XiaoXiaoJiangCurrentState TargetState, struct UObject* HuntHuman, struct FName StateBKey); // Function NotesOfSoul.NOS_PartnerXiaoXiaoJiang.SetXiaoXiaoJiangState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a358a0
	void PlayBornAMEnded(); // Function NotesOfSoul.NOS_PartnerXiaoXiaoJiang.PlayBornAMEnded // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnBornMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function NotesOfSoul.NOS_PartnerXiaoXiaoJiang.OnBornMontageEnded // (Final|Native|Private) // @ game+0x1a33ac0
};

// Class NotesOfSoul.NOS_PCArena
// Size: 0x5f0 (Inherited: 0x5f0)
struct ANOS_PCArena : ANOS_PCArenaBase {
};

// Class NotesOfSoul.NOS_PCEventComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UNOS_PCEventComponent : UKxPCEventComponent {
};

// Class NotesOfSoul.NOS_PCLangRenSha
// Size: 0x6a8 (Inherited: 0x5f0)
struct ANOS_PCLangRenSha : ANOS_PCArenaBase {
	char pad_5F0[0xb8]; // 0x5f0(0xb8)

	void Vote(struct ANOS_PlayerHuman* VoteTarget); // Function NotesOfSoul.NOS_PCLangRenSha.Vote // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a361f0
	void UseYinYangYanToTarget(); // Function NotesOfSoul.NOS_PCLangRenSha.UseYinYangYanToTarget // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a361d0
	void UseYanLingShuToTarget(); // Function NotesOfSoul.NOS_PCLangRenSha.UseYanLingShuToTarget // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a361b0
	void UseHuanHunDan(); // Function NotesOfSoul.NOS_PCLangRenSha.UseHuanHunDan // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a36190
	void UseGuDuShuToTarget(); // Function NotesOfSoul.NOS_PCLangRenSha.UseGuDuShuToTarget // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a36170
	void UseGuDuOnServer(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_PCLangRenSha.UseGuDuOnServer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a360e0
	void StopSpeaking(); // Function NotesOfSoul.NOS_PCLangRenSha.StopSpeaking // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a35bb0
	void StartVote(); // Function NotesOfSoul.NOS_PCLangRenSha.StartVote // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a35b40
	void SetYanLingState(bool bState); // Function NotesOfSoul.NOS_PCLangRenSha.SetYanLingState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a359b0
	void ReviseTargetYanLingStateInServer(struct ANOS_PlayerHuman* Human, bool IsOpen); // Function NotesOfSoul.NOS_PCLangRenSha.ReviseTargetYanLingStateInServer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a34980
	void ResponseTargetIdentityToClient(struct ANOS_PlayerHuman* Human, bool IsHuman); // Function NotesOfSoul.NOS_PCLangRenSha.ResponseTargetIdentityToClient // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a348b0
	void GetTargetIdentityInServer(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_PCLangRenSha.GetTargetIdentityInServer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a33240
	struct AActor* GetScreenMidPosTracePawn(int32_t Scale); // Function NotesOfSoul.NOS_PCLangRenSha.GetScreenMidPosTracePawn // (Final|Native|Public|BlueprintCallable) // @ game+0x1a331a0
	void DealingMicState(bool IsMicOpen); // Function NotesOfSoul.NOS_PCLangRenSha.DealingMicState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32720
	void CreateLangrenUI(); // Function NotesOfSoul.NOS_PCLangRenSha.CreateLangrenUI // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ClearVoteCDBP(bool bClear); // Function NotesOfSoul.NOS_PCLangRenSha.ClearVoteCDBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClearVoteCD(bool bClear); // Function NotesOfSoul.NOS_PCLangRenSha.ClearVoteCD // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a324f0
};

// Class NotesOfSoul.NOS_PCRoom
// Size: 0x570 (Inherited: 0x570)
struct ANOS_PCRoom : APlayerController {
};

// Class NotesOfSoul.NOS_PCSpider
// Size: 0x328 (Inherited: 0x328)
struct ANOS_PCSpider : ANOS_AIController {
};

// Class NotesOfSoul.NOS_PCTrainArena
// Size: 0x5f8 (Inherited: 0x5f0)
struct ANOS_PCTrainArena : ANOS_PCArenaBase {
	char pad_5F0[0x8]; // 0x5f0(0x08)

	void OnCharacterChangeSuccess(); // Function NotesOfSoul.NOS_PCTrainArena.OnCharacterChangeSuccess // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CharacterChangeData(int32_t CharacterID); // Function NotesOfSoul.NOS_PCTrainArena.CharacterChangeData // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32370
	void CharacterChangBeginPlayer(struct ANOS_PlayerBase* SpawnedPawn); // Function NotesOfSoul.NOS_PCTrainArena.CharacterChangBeginPlayer // (Final|Native|Protected) // @ game+0x1a322e0
};

// Class NotesOfSoul.NOS_PlayerHuman
// Size: 0x1d60 (Inherited: 0xcd0)
struct ANOS_PlayerHuman : ANOS_PlayerBase {
	char pad_CD0[0x8]; // 0xcd0(0x08)
	bool bHeartAudioActivated; // 0xcd8(0x01)
	char pad_CD9[0x7]; // 0xcd9(0x07)
	struct UNOS_GameplayAbility* SuperNaturalEventGA; // 0xce0(0x08)
	struct UNOS_GameplayAbility* RGetReadyGA; // 0xce8(0x08)
	struct FGameplayAbilitySpecHandle MainTalentHandle; // 0xcf0(0x04)
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct UNOS_HumanAttributeSet* HumanAttributeSet; // 0xcf8(0x08)
	char pad_D00[0x10]; // 0xd00(0x10)
	struct FMulticastInlineDelegate CancelAbilityByPlayerSelf; // 0xd10(0x10)
	struct FMulticastInlineDelegate OnCrawl; // 0xd20(0x10)
	struct FMulticastInlineDelegate OnDieOut; // 0xd30(0x10)
	char pad_D40[0x10]; // 0xd40(0x10)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0xd50(0x08)
	struct UKxInventoryComponent* InventoryCom; // 0xd58(0x08)
	bool FreezeUseItem; // 0xd60(0x01)
	char pad_D61[0x7]; // 0xd61(0x07)
	struct UNOS_HandleXiaoJiangAffair* HandleXiaoJiangAffairComp; // 0xd68(0x08)
	struct UNos_HandleJinPoAffair* HandleJinPoAffairComp; // 0xd70(0x08)
	struct AActor* Teleport; // 0xd78(0x08)
	struct UCameraComponent* ShelterCamera; // 0xd80(0x08)
	float CureValue; // 0xd88(0x04)
	float CureTime; // 0xd8c(0x04)
	float RescueTime; // 0xd90(0x04)
	int32_t PlayerLRSIndex; // 0xd94(0x04)
	char pad_D98[0x4]; // 0xd98(0x04)
	bool bIsFirstcrawl; // 0xd9c(0x01)
	bool bMainTalentIsCD; // 0xd9d(0x01)
	bool piAlphat; // 0xd9e(0x01)
	char pad_D9F[0x1]; // 0xd9f(0x01)
	struct TMap<struct UAnimMontage*, struct UAnimMontage*> ShiHunMontageMap; // 0xda0(0x50)
	SoftClassProperty ArenaModelAnimBlueprint; // 0xdf0(0x28)
	struct FActiveGameplayEffectHandle HandleHeartGE; // 0xe18(0x08)
	struct UGameplayEffect* ClassHeartGE; // 0xe20(0x08)
	struct USoundBase* HeartbeatSound; // 0xe28(0x08)
	bool bNotSpawnFlashlight; // 0xe30(0x01)
	bool bIsHideInShelter; // 0xe31(0x01)
	char pad_E32[0x356]; // 0xe32(0x356)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> BaseDefaultSuitMap; // 0x1188(0x50)
	char pad_11D8[0x350]; // 0x11d8(0x350)
	struct TArray<int32_t> Config_HumanTestSkin; // 0x1528(0x10)
	int32_t OpenDoveCount; // 0x1538(0x04)
	char pad_153C[0x194]; // 0x153c(0x194)
	struct FNOS_Accessories WeaponAccessories; // 0x16d0(0x500)
	bool isAnimMan; // 0x1bd0(0x01)
	char pad_1BD1[0x37]; // 0x1bd1(0x37)
	struct ANOS_PSArenaBase* XiaoPiTransferTargetHumanPS; // 0x1c08(0x08)
	bool bIsProssessedByXiaoPi; // 0x1c10(0x01)
	char pad_1C11[0x7]; // 0x1c11(0x07)
	struct ANOS_PSArenaBase* XiaoPiPS; // 0x1c18(0x08)
	char pad_1C20[0x1]; // 0x1c20(0x01)
	bool bIsControlledByGhost; // 0x1c21(0x01)
	char pad_1C22[0x6]; // 0x1c22(0x06)
	struct ANOS_PlayerHuman* SoulOwner; // 0x1c28(0x08)
	struct USkeletalMeshComponent* LowerClothCom; // 0x1c30(0x08)
	struct USkeletalMeshComponent* HeadCom; // 0x1c38(0x08)
	struct USkeletalMeshComponent* HairAccessoriesCom; // 0x1c40(0x08)
	struct USkeletalMeshComponent* FaceCom; // 0x1c48(0x08)
	struct USkeletalMeshComponent* BackCom; // 0x1c50(0x08)
	struct USkeletalMeshComponent* ShoesCom; // 0x1c58(0x08)
	struct USkeletalMeshComponent* ExclusiveCom; // 0x1c60(0x08)
	enum class EHumanType HumanType; // 0x1c68(0x01)
	char pad_1C69[0x1]; // 0x1c69(0x01)
	bool CanGlide; // 0x1c6a(0x01)
	bool ShouldGlideLongPress; // 0x1c6b(0x01)
	float GlideActivableSpeed; // 0x1c6c(0x04)
	struct FName FlashlightAssetID; // 0x1c70(0x08)
	struct ANOS_Flashlight* Flashlight; // 0x1c78(0x08)
	struct UNOS_GameplayAbility* MainTalentAbility; // 0x1c80(0x08)
	struct UNOS_GameplayAbility* GetSeizedSoulAbility; // 0x1c88(0x08)
	struct UNOS_GameplayAbility* ElementSlotAbility; // 0x1c90(0x08)
	struct UNOS_GameplayAbility* PullAbility; // 0x1c98(0x08)
	struct UNOS_GameplayAbility* PickAbility; // 0x1ca0(0x08)
	struct UNOS_GameplayAbility* CureAbility; // 0x1ca8(0x08)
	struct UNOS_GameplayAbility* ElementAbility; // 0x1cb0(0x08)
	char pad_1CB8[0x18]; // 0x1cb8(0x18)
	struct FTimerHandle LightDistanceCheckHandle; // 0x1cd0(0x08)
	char pad_1CD8[0x8]; // 0x1cd8(0x08)
	struct ANOS_PlayerHuman* TrueLoveKnotTarget; // 0x1ce0(0x08)
	struct ANOS_PSArenaBase* YeLuoPS; // 0x1ce8(0x08)
	char pad_1CF0[0x60]; // 0x1cf0(0x60)
	struct UAudioComponent* HeartbeatAudioCom; // 0x1d50(0x08)
	char pad_1D58[0x8]; // 0x1d58(0x08)

	void UseItem(int32_t ItemId); // Function NotesOfSoul.NOS_PlayerHuman.UseItem // (Final|Exec|Native|Public) // @ game+0x1a32070
	void UseHandLightEvent(struct FEventRelevantData eventData); // Function NotesOfSoul.NOS_PlayerHuman.UseHandLightEvent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a3ba10
	void SwitchFlashlightAiming(bool bSwitch); // Function NotesOfSoul.NOS_PlayerHuman.SwitchFlashlightAiming // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchFlashlight(bool bSwitch); // Function NotesOfSoul.NOS_PlayerHuman.SwitchFlashlight // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a3b380
	void StartInitCharacterDressCallOnBP(); // Function NotesOfSoul.NOS_PlayerHuman.StartInitCharacterDressCallOnBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3b2f0
	void SpawnFlashlight(struct ANOS_Flashlight* FlashlightClass, struct FName AssetRowID, struct FName AttachSocket, struct FRotator NormalRotator, struct FRotator DamagedRotator, float ConeDiameter, float ConeHeight); // Function NotesOfSoul.NOS_PlayerHuman.SpawnFlashlight // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable) // @ game+0x1a3b0b0
	void SmokeStelthCheck(); // Function NotesOfSoul.NOS_PlayerHuman.SmokeStelthCheck // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a3b090
	void SetTrainCurHealthState(enum class EHealthState NewState); // Function NotesOfSoul.NOS_PlayerHuman.SetTrainCurHealthState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3b010
	void SetIsProssessedByXiaoPi(bool bIsProssessed); // Function NotesOfSoul.NOS_PlayerHuman.SetIsProssessedByXiaoPi // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3ae70
	void SetHumanType(enum class EHumanType NewType, bool bRepToClient); // Function NotesOfSoul.NOS_PlayerHuman.SetHumanType // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3ada0
	void SetHealthState(enum class EHealthState NewHealthState); // Function NotesOfSoul.NOS_PlayerHuman.SetHealthState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3ad20
	void SetCurArmor(float Value); // Function NotesOfSoul.NOS_PlayerHuman.SetCurArmor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3aca0
	void ServerUseItem(int32_t ItemId); // Function NotesOfSoul.NOS_PlayerHuman.ServerUseItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3abe0
	void ServerCancelMainTalent(); // Function NotesOfSoul.NOS_PlayerHuman.ServerCancelMainTalent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a398f0
	void ServerAddSoul(int32_t ReStoreNum); // Function NotesOfSoul.NOS_PlayerHuman.ServerAddSoul // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3aa10
	void ServerAddItem(int32_t ItemId); // Function NotesOfSoul.NOS_PlayerHuman.ServerAddItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3a890
	void ServerAddHealth(); // Function NotesOfSoul.NOS_PlayerHuman.ServerAddHealth // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a3a840
	void ReSpawnItemAfterItemRemoved(int32_t ItemId); // Function NotesOfSoul.NOS_PlayerHuman.ReSpawnItemAfterItemRemoved // (Final|Native|Public) // @ game+0x1a3a760
	void ResetArmorBySoul(); // Function NotesOfSoul.NOS_PlayerHuman.ResetArmorBySoul // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3a820
	bool RemoveXiaoLiDebuff(); // Function NotesOfSoul.NOS_PlayerHuman.RemoveXiaoLiDebuff // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3a7f0
	void OnThrowItem(); // Function NotesOfSoul.NOS_PlayerHuman.OnThrowItem // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a740
	void OnSwitchSutra(bool TriggerThisFuncByPress); // Function NotesOfSoul.NOS_PlayerHuman.OnSwitchSutra // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a6b0
	void OnRep_YeLuoPS(); // Function NotesOfSoul.NOS_PlayerHuman.OnRep_YeLuoPS // (Final|Native|Public) // @ game+0xbc9a40
	void OnRep_XiaoPiTransferTargetHumanPS(); // Function NotesOfSoul.NOS_PlayerHuman.OnRep_XiaoPiTransferTargetHumanPS // (Final|Native|Public) // @ game+0x1a3a690
	void OnRep_XiaoPiPS(); // Function NotesOfSoul.NOS_PlayerHuman.OnRep_XiaoPiPS // (Native|Event|Public|BlueprintEvent) // @ game+0xbc9a40
	void OnRep_IsProssessedByXiaoPi(); // Function NotesOfSoul.NOS_PlayerHuman.OnRep_IsProssessedByXiaoPi // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a630
	void OnRep_HumanType(); // Function NotesOfSoul.NOS_PlayerHuman.OnRep_HumanType // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnPressKeyF(); // Function NotesOfSoul.NOS_PlayerHuman.OnPressKeyF // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a610
	void OnPressKey(int32_t PressedKey); // Function NotesOfSoul.NOS_PlayerHuman.OnPressKey // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a580
	void OnMouseRightRelease(); // Function NotesOfSoul.NOS_PlayerHuman.OnMouseRightRelease // (Final|Native|Public) // @ game+0xbc9a40
	void OnActiveElement3(struct FKey Key); // Function NotesOfSoul.NOS_PlayerHuman.OnActiveElement3 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a470
	void OnActiveElement2(struct FKey Key); // Function NotesOfSoul.NOS_PlayerHuman.OnActiveElement2 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a380
	void OnActiveElement1(struct FKey Key); // Function NotesOfSoul.NOS_PlayerHuman.OnActiveElement1 // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3a290
	bool NeedTranslateDamage(struct UGameplayAbility* Ability); // Function NotesOfSoul.NOS_PlayerHuman.NeedTranslateDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3a1d0
	void MultiSetCurType(enum class EHumanType Type); // Function NotesOfSoul.NOS_PlayerHuman.MultiSetCurType // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1a3a0c0
	void MainTalentCDTipUI(); // Function NotesOfSoul.NOS_PlayerHuman.MainTalentCDTipUI // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void HumanStealthTimeline(); // Function NotesOfSoul.NOS_PlayerHuman.HumanStealthTimeline // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a3a0a0
	struct UNOS_SoulComponet* GetSoulComponent(); // Function NotesOfSoul.NOS_PlayerHuman.GetSoulComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3a070
	struct ANOS_PlayerHuman* GetSoulComOwner(); // Function NotesOfSoul.NOS_PlayerHuman.GetSoulComOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3a040
	struct USkeletalMeshComponent* GetShoesComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetShoesComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3a020
	int32_t GetRemoveSoulNumOnDamage(); // Function NotesOfSoul.NOS_PlayerHuman.GetRemoveSoulNumOnDamage // (Native|Event|Public|BlueprintEvent) // @ game+0x1a39ff0
	struct USkeletalMeshComponent* GetLowerClothComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetLowerClothComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39fd0
	enum class EHumanType GetHumanType(); // Function NotesOfSoul.NOS_PlayerHuman.GetHumanType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39fa0
	struct UAudioComponent* GetHeartBeatComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetHeartBeatComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39f80
	struct USkeletalMeshComponent* GetHeadComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetHeadComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39f60
	struct USkeletalMeshComponent* GetHairAccessoriesComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetHairAccessoriesComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39f40
	struct USkeletalMeshComponent* GetFaceComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetFaceComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39ee0
	struct USkeletalMeshComponent* GetExclusiveComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetExclusiveComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39ec0
	struct USkeletalMeshComponent* GetBackComp(); // Function NotesOfSoul.NOS_PlayerHuman.GetBackComp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39ea0
	struct ANOS_PSArenaBase* GetActualPlayerState(); // Function NotesOfSoul.NOS_PlayerHuman.GetActualPlayerState // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1a39e70
	void ExecuteWhenTeamNearBy(); // Function NotesOfSoul.NOS_PlayerHuman.ExecuteWhenTeamNearBy // (Native|Event|Public|BlueprintEvent) // @ game+0x1a39e50
	void ExecuteWhenTeamFayAway(); // Function NotesOfSoul.NOS_PlayerHuman.ExecuteWhenTeamFayAway // (Native|Event|Public|BlueprintEvent) // @ game+0x1a39e30
	void ExecuteOnBeCureDelegate(struct AActor* HelpMyedGoodPersion); // Function NotesOfSoul.NOS_PlayerHuman.ExecuteOnBeCureDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x1a39d80
	void ExecuteMainTalent(); // Function NotesOfSoul.NOS_PlayerHuman.ExecuteMainTalent // (Final|Native|Public) // @ game+0x1a39d60
	void ExecuteGetSeizedSoul(float Index); // Function NotesOfSoul.NOS_PlayerHuman.ExecuteGetSeizedSoul // (Final|Native|Public|BlueprintCallable) // @ game+0x1a39ce0
	void DieOut(struct AActor* EventInstigator); // Function NotesOfSoul.NOS_PlayerHuman.DieOut // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a39c50
	void ClearTrueLoveKnotTarget(); // Function NotesOfSoul.NOS_PlayerHuman.ClearTrueLoveKnotTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1a39c10
	bool CheckTrueLoveKnotTag(float Damage); // Function NotesOfSoul.NOS_PlayerHuman.CheckTrueLoveKnotTag // (Final|Native|Public|BlueprintCallable) // @ game+0x1a39b80
	void CheckDistancePrivate(bool IsLightOpen); // Function NotesOfSoul.NOS_PlayerHuman.CheckDistancePrivate // (Final|Native|Public) // @ game+0x1a39af0
	void CheckCorpsePrivate(); // Function NotesOfSoul.NOS_PlayerHuman.CheckCorpsePrivate // (Final|Native|Public) // @ game+0x1a39ad0
	void ChangePlayerState(struct ANOS_PSArenaBase* inNewState); // Function NotesOfSoul.NOS_PlayerHuman.ChangePlayerState // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a39a40
	void CanInitEquipment(); // Function NotesOfSoul.NOS_PlayerHuman.CanInitEquipment // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	bool CanBeenKill(struct ANOS_PlayerGhost* Ghost); // Function NotesOfSoul.NOS_PlayerHuman.CanBeenKill // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a39910
	void AddSoul(int32_t ReStoreNum); // Function NotesOfSoul.NOS_PlayerHuman.AddSoul // (Final|Exec|Native|Public) // @ game+0x1a32070
	void AddItem(int32_t ItemId); // Function NotesOfSoul.NOS_PlayerHuman.AddItem // (Final|Exec|Native|Public) // @ game+0x1a32070
	void AddFullHealth(); // Function NotesOfSoul.NOS_PlayerHuman.AddFullHealth // (Final|Exec|Native|Public) // @ game+0xbc9a40
};

// Class NotesOfSoul.NOS_PlayMontageAndWaitForEvent
// Size: 0x148 (Inherited: 0x80)
struct UNOS_PlayMontageAndWaitForEvent : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb0(0x10)
	struct FMulticastInlineDelegate EventReceived; // 0xc0(0x10)
	struct UAnimMontage* MontageToPlay; // 0xd0(0x08)
	struct UAnimMontage* WomanMontage; // 0xd8(0x08)
	struct FGameplayTagContainer EventTags; // 0xe0(0x20)
	float Rate; // 0x100(0x04)
	struct FName StartSection; // 0x104(0x08)
	float AnimRootMotionTranslationScale; // 0x10c(0x04)
	bool bStopWhenAbilityEnds; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float StartPostion; // 0x114(0x04)
	char pad_118[0x30]; // 0x118(0x30)

	struct UNOS_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, struct FGameplayTagContainer EventTags, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, struct UAnimMontage* WomanMontage, float StartPostion); // Function NotesOfSoul.NOS_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a400a0
};

// Class NotesOfSoul.NOS_PlaySoundAnimNotify
// Size: 0x68 (Inherited: 0x38)
struct UNOS_PlaySoundAnimNotify : UAnimNotify {
	struct FName SoundName; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FName AttachName; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct USoundBase* Sound; // 0x58(0x08)
	struct UAudioComponent* AudioComponent; // 0x60(0x08)

	struct UAudioComponent* GetAudioComponent(); // Function NotesOfSoul.NOS_PlaySoundAnimNotify.GetAudioComponent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1a3f6a0
};

// Class NotesOfSoul.NOS_PlaySoundAnimNotifyState
// Size: 0x60 (Inherited: 0x30)
struct UNOS_PlaySoundAnimNotifyState : UAnimNotifyState {
	struct FName SoundName; // 0x30(0x08)
	float VolumeMultiplier; // 0x38(0x04)
	float PitchMultiplier; // 0x3c(0x04)
	char bFollow : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FName AttachName; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct USoundBase* Sound; // 0x50(0x08)
	struct UAudioComponent* AudioComponent; // 0x58(0x08)

	struct UAudioComponent* GetAudioComponent(); // Function NotesOfSoul.NOS_PlaySoundAnimNotifyState.GetAudioComponent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1a3f6d0
};

// Class NotesOfSoul.NOS_Portal
// Size: 0x258 (Inherited: 0x220)
struct ANOS_Portal : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct UKxInteractBoxComponent* BoxCollision; // 0x230(0x08)
	struct ANOS_Portal* MyPortal; // 0x238(0x08)
	struct UParticleSystemComponent* Particle; // 0x240(0x08)
	bool PressOrWalkInto; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float PortalUpdateTime; // 0x24c(0x04)
	char pad_250[0x8]; // 0x250(0x08)

	void SetBoxCollision(); // Function NotesOfSoul.NOS_Portal.SetBoxCollision // (Final|Native|Public) // @ game+0x1a40790
	void ServerTransmission(struct ACharacter* Character); // Function NotesOfSoul.NOS_Portal.ServerTransmission // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1a40640
	void OnComponentBeginOverlapEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_Portal.OnComponentBeginOverlapEvent // (Final|Native|Public|HasOutParms) // @ game+0x1a3fa70
};

// Class NotesOfSoul.NOS_PracticeCharacterHuman
// Size: 0x2b10 (Inherited: 0x1d60)
struct ANOS_PracticeCharacterHuman : ANOS_PlayerHuman {
	int32_t PracticePlayerConfigName; // 0x1d58(0x04)
	struct TArray<int32_t> SkinIDArray; // 0x1d60(0x10)
	enum class EHumanType PracticePlayerHumanType; // 0x1d70(0x01)
	bool bGhost; // 0x1d71(0x01)
	bool HumanCompeletedFirstDressSet; // 0x1d72(0x01)
	bool GhostCompeletedFirstDressSet; // 0x1d73(0x01)
	struct FNOS_HumanSuit PSHumanSuit; // 0x1d78(0x350)
	struct FNOS_HumanSuit PSHumanDefaultSuit; // 0x20c8(0x350)
	struct FNOS_GhostSuit PSGhostSuit; // 0x2418(0x350)
	struct FNOS_GhostSuit PSGhostDefaultSuit; // 0x2768(0x350)
	struct TMap<enum class EAccessoriesType, struct FNOS_Accessories> DefaultSuitMap; // 0x2ab8(0x50)
	char pad_2B08[0x8]; // 0x2b08(0x08)

	void StartInitGhostCharacterDress(); // Function NotesOfSoul.NOS_PracticeCharacterHuman.StartInitGhostCharacterDress // (Final|Native|Private) // @ game+0x1a40ed0
	void SetCurHealthState(enum class EHealthState NewState); // Function NotesOfSoul.NOS_PracticeCharacterHuman.SetCurHealthState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3b010
	void OnLoadGhostCharacterDressComplete(); // Function NotesOfSoul.NOS_PracticeCharacterHuman.OnLoadGhostCharacterDressComplete // (Final|Native|Private) // @ game+0x1a40000
	void OnLoadCharacterDressSucess(); // Function NotesOfSoul.NOS_PracticeCharacterHuman.OnLoadCharacterDressSucess // (Final|Native|Public) // @ game+0x1a3f9d0
	void InitPlayerDressByBP(); // Function NotesOfSoul.NOS_PracticeCharacterHuman.InitPlayerDressByBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3f9f0
	void InitPlayerConfigNameByBP(); // Function NotesOfSoul.NOS_PracticeCharacterHuman.InitPlayerConfigNameByBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3f9d0
};

// Class NotesOfSoul.NOS_PracticePlayerGhost
// Size: 0x1b10 (Inherited: 0x1b00)
struct ANOS_PracticePlayerGhost : ANOS_PlayerGhost {
	struct TArray<int32_t> SkinIDArray; // 0x1af8(0x10)
};

// Class NotesOfSoul.NOS_PSArena
// Size: 0x4f0 (Inherited: 0x4f0)
struct ANOS_PSArena : ANOS_PSArenaBase {
};

// Class NotesOfSoul.NOS_PSLangRenSha
// Size: 0x598 (Inherited: 0x4f0)
struct ANOS_PSLangRenSha : ANOS_PSArenaBase {
	bool bIsGhost; // 0x4f0(0x01)
	bool bIsZhiZunLingUsing; // 0x4f1(0x01)
	bool bIsFuChouLingUsing; // 0x4f2(0x01)
	bool bIsYanLingState; // 0x4f3(0x01)
	bool bIsLiHunShuUsing; // 0x4f4(0x01)
	bool bHasHuanHunDan; // 0x4f5(0x01)
	bool bIsNight; // 0x4f6(0x01)
	bool bIsTransformInCd; // 0x4f7(0x01)
	struct ANOS_PlayerBase* Partner; // 0x4f8(0x08)
	int32_t LangrenShaIndex; // 0x500(0x04)
	int32_t OldLangrenShaIndex; // 0x504(0x04)
	struct FString PlayerOldName; // 0x508(0x10)
	struct FString teststr; // 0x518(0x10)
	struct ANOS_PlayerBase* OwnerWolf; // 0x528(0x08)
	float LRTransformCD; // 0x530(0x04)
	int32_t VoteHumanId; // 0x534(0x04)
	struct ANOS_PlayerHuman* LastVotePawn; // 0x538(0x08)
	bool bIsLRS25State; // 0x540(0x01)
	bool bIsCanVote; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct ANOS_PlayerGhost* SummonAI; // 0x548(0x08)
	char pad_550[0x10]; // 0x550(0x10)
	struct APawn* OwingPawn; // 0x560(0x08)
	struct TArray<struct ANOS_PlayerHuman*> NearbyDiedPeople; // 0x568(0x10)
	bool bCanPlayerType; // 0x578(0x01)
	char pad_579[0x1f]; // 0x579(0x1f)

	void UpdateOwingPawnPerspective(); // Function NotesOfSoul.NOS_PSLangRenSha.UpdateOwingPawnPerspective // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a02690
	void SetZhiZunLingState(bool IsActive); // Function NotesOfSoul.NOS_PSLangRenSha.SetZhiZunLingState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a40e20
	void SetPlayerNightState(bool IsNight); // Function NotesOfSoul.NOS_PSLangRenSha.SetPlayerNightState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a40d00
	void SetPlayerGhostState(bool IsGhost); // Function NotesOfSoul.NOS_PSLangRenSha.SetPlayerGhostState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a40c70
	void SetNearByDiedPeople(struct TArray<struct ANOS_PlayerHuman*> Pawns); // Function NotesOfSoul.NOS_PSLangRenSha.SetNearByDiedPeople // (Final|Native|Public) // @ game+0x1a40b00
	void SetMyPartner(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_PSLangRenSha.SetMyPartner // (Final|Native|Public) // @ game+0x1a40a70
	void SetCurrentOwingPawn(struct APawn* Pawn); // Function NotesOfSoul.NOS_PSLangRenSha.SetCurrentOwingPawn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a408d0
	void SetCurrentMicState(bool IsMicOpen); // Function NotesOfSoul.NOS_PSLangRenSha.SetCurrentMicState // (Final|Native|Public) // @ game+0x1a40840
	void SetCanPlayerType(bool CanPlayerType); // Function NotesOfSoul.NOS_PSLangRenSha.SetCanPlayerType // (Final|Native|Public|BlueprintCallable) // @ game+0x1a407b0
	void RevertToHumanState(); // Function NotesOfSoul.NOS_PSLangRenSha.RevertToHumanState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a40600
	void PopupHuanHunDanTips(); // Function NotesOfSoul.NOS_PSLangRenSha.PopupHuanHunDanTips // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a40400
	void OnRep_Partner(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_Partner // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsTransformInCd(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_bIsTransformInCd // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsNight(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_bIsNight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a02370
	void OnRep_bIsNearHumanCorpse(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_bIsNearHumanCorpse // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsGhost(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_bIsGhost // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_Become25Ghost(); // Function NotesOfSoul.NOS_PSLangRenSha.OnRep_Become25Ghost // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameBegin(); // Function NotesOfSoul.NOS_PSLangRenSha.OnGameBegin // (Native|Event|Public|BlueprintEvent) // @ game+0x1a3ffe0
	void LRTransformSkillEnterCD(); // Function NotesOfSoul.NOS_PSLangRenSha.LRTransformSkillEnterCD // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3fa50
	void LRTransformSkillClearCD(); // Function NotesOfSoul.NOS_PSLangRenSha.LRTransformSkillClearCD // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a3fa30
	struct TArray<struct ANOS_PlayerHuman*> GetDiedPersonNearby(); // Function NotesOfSoul.NOS_PSLangRenSha.GetDiedPersonNearby // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a3f7a0
	struct APawn* GetCurrentOwingPawn(); // Function NotesOfSoul.NOS_PSLangRenSha.GetCurrentOwingPawn // (Final|Native|Public) // @ game+0x1a3f770
	bool GetCurrentMisState(); // Function NotesOfSoul.NOS_PSLangRenSha.GetCurrentMisState // (Final|Native|Public) // @ game+0x1a3f740
	void EnterCDTimerFunc(); // Function NotesOfSoul.NOS_PSLangRenSha.EnterCDTimerFunc // (Final|Native|Public|BlueprintCallable) // @ game+0x1a3f5b0
	void DealingCD(); // Function NotesOfSoul.NOS_PSLangRenSha.DealingCD // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1a3f590
	void ActiveGoodPersonState(); // Function NotesOfSoul.NOS_PSLangRenSha.ActiveGoodPersonState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a3f290
};

// Class NotesOfSoul.NOS_PSTeamComponent
// Size: 0xd8 (Inherited: 0xd8)
struct UNOS_PSTeamComponent : UKxPSTeamComponent {
};

// Class NotesOfSoul.NOS_PSTrainArenaBase
// Size: 0x4f0 (Inherited: 0x4f0)
struct ANOS_PSTrainArenaBase : ANOS_PSArenaBase {
};

// Class NotesOfSoul.NOS_PunishCheckMgr
// Size: 0x40 (Inherited: 0x30)
struct UNOS_PunishCheckMgr : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	void ReportToGameServer(); // Function NotesOfSoul.NOS_PunishCheckMgr.ReportToGameServer // (Final|Native|Public) // @ game+0x1a45f20
	void ReportCheatingToServer(int32_t CurCharacterUID, enum class EPlayerPunishType Type); // Function NotesOfSoul.NOS_PunishCheckMgr.ReportCheatingToServer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a45e50
	void ReportCheating(int32_t TargetId, struct TArray<struct FString> Key, struct TArray<struct FString> Value, struct FString ImagePath); // Function NotesOfSoul.NOS_PunishCheckMgr.ReportCheating // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a45c50
	void RecordClientZuAnData(int32_t CurCharacterUID, enum class EPlayerPunishType Type, struct FString Data); // Function NotesOfSoul.NOS_PunishCheckMgr.RecordClientZuAnData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a458a0
	void OnEndGame(); // Function NotesOfSoul.NOS_PunishCheckMgr.OnEndGame // (Final|Native|Public) // @ game+0x1a45840
	void NotifyClientWarning(int32_t CurCharacterUID, struct ANOS_PlayerBase* PlayerBase, enum class EPlayerPunishType Type); // Function NotesOfSoul.NOS_PunishCheckMgr.NotifyClientWarning // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a453e0
	struct UNOS_PunishCheckMgr* GetInstance(struct UGameInstance* MainInstance); // Function NotesOfSoul.NOS_PunishCheckMgr.GetInstance // (Final|Native|Static|Public) // @ game+0x1a44e20
	void AddStateFromClient(int32_t CurCharacterUID, enum class EPlayerPunishType Type); // Function NotesOfSoul.NOS_PunishCheckMgr.AddStateFromClient // (Final|Native|Public) // @ game+0x1a445a0
};

// Class NotesOfSoul.NOS_ReplaySubsystem
// Size: 0x80 (Inherited: 0x38)
struct UNOS_ReplaySubsystem : UReplaySubsystem {
	struct ANOS_ReplayWatchPawn* CurrentControlledPawn; // 0x38(0x08)
	char pad_40[0x38]; // 0x40(0x38)
	bool bIsDeleteFile; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	void TimerCheck(); // Function NotesOfSoul.NOS_ReplaySubsystem.TimerCheck // (Final|Native|Protected) // @ game+0x1a46180
	void SetPlaySpeed(float Scale); // Function NotesOfSoul.NOS_ReplaySubsystem.SetPlaySpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1a46100
	bool ReplayFileCanPlay(struct FString Filename); // Function NotesOfSoul.NOS_ReplaySubsystem.ReplayFileCanPlay // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a45b60
	void NOS_StopRecordReplay(); // Function NotesOfSoul.NOS_ReplaySubsystem.NOS_StopRecordReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x1a453c0
	void NOS_StartReplay(struct FString InName); // Function NotesOfSoul.NOS_ReplaySubsystem.NOS_StartReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45320
	void NOS_StartRecordReplay(struct FString Name); // Function NotesOfSoul.NOS_ReplaySubsystem.NOS_StartRecordReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45280
	void NOS_DemoStartPlayCheck(struct UWorld* NewWorld); // Function NotesOfSoul.NOS_ReplaySubsystem.NOS_DemoStartPlayCheck // (Final|Native|Protected) // @ game+0x1a451f0
	void JumpToTime(float InSetTime); // Function NotesOfSoul.NOS_ReplaySubsystem.JumpToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45170
	float GetPlaySpeed(); // Function NotesOfSoul.NOS_ReplaySubsystem.GetPlaySpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44eb0
	float GetCurrentReplayTotalTime(); // Function NotesOfSoul.NOS_ReplaySubsystem.GetCurrentReplayTotalTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44df0
	float GetCurrentReplayTime(); // Function NotesOfSoul.NOS_ReplaySubsystem.GetCurrentReplayTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44dc0
	struct TMap<struct FString, struct FDateTime> GetAllReplayFileList(); // Function NotesOfSoul.NOS_ReplaySubsystem.GetAllReplayFileList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44c80
};

// Class NotesOfSoul.NOS_ReplayWatchPawn
// Size: 0x2b0 (Inherited: 0x2a8)
struct ANOS_ReplayWatchPawn : ASpectatorPawn {
	bool bIsFreezePlayerMove; // 0x2a8(0x01)
	bool bIsOnPauseMove; // 0x2a9(0x01)
	bool IsCanCustomMove; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)

	void CustomMoveUp(float Val); // Function NotesOfSoul.NOS_ReplayWatchPawn.CustomMoveUp // (Native|Event|Public|BlueprintEvent) // @ game+0x1a44bf0
	void CustomMoveRight(float Val); // Function NotesOfSoul.NOS_ReplayWatchPawn.CustomMoveRight // (Native|Event|Public|BlueprintEvent) // @ game+0x1a44b60
	void CustomMoveForwad(float Val); // Function NotesOfSoul.NOS_ReplayWatchPawn.CustomMoveForwad // (Native|Event|Public|BlueprintEvent) // @ game+0x1a44ad0
};

// Class NotesOfSoul.NOS_ReplyPlayerController
// Size: 0x580 (Inherited: 0x570)
struct ANOS_ReplyPlayerController : APlayerController {
	struct ANOS_ReplayWatchPawn* WatchPawnClass; // 0x570(0x08)
	struct ASpectatorPawn* ReplaySpectatorPawn; // 0x578(0x08)
};

// Class NotesOfSoul.NOS_RestrictMovementAI
// Size: 0x120 (Inherited: 0xb0)
struct UNOS_RestrictMovementAI : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	enum class EMovementState MoveState; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float TickIntervalCom; // 0xbc(0x04)
	bool bIsActiveCom; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct ANOS_RangeBox* RangeBox; // 0xc8(0x08)
	float MaxMoveSpeed; // 0xd0(0x04)
	float MaxCheckForwardDistance; // 0xd4(0x04)
	float RayCheckRadius; // 0xd8(0x04)
	float TriggerRadius; // 0xdc(0x04)
	char pad_E0[0xc]; // 0xe0(0x0c)
	float RotationAddSpeed; // 0xec(0x04)
	char pad_F0[0xc]; // 0xf0(0x0c)
	bool bIsInRangeBox; // 0xfc(0x01)
	char pad_FD[0x2]; // 0xfd(0x02)
	bool bIsLimitZAxis; // 0xff(0x01)
	float ZAxisCheckTime; // 0x100(0x04)
	float MinZAxisRange; // 0x104(0x04)
	float MaxZAxisRange; // 0x108(0x04)
	float ZAxisReviseSpeed; // 0x10c(0x04)
	char pad_110[0x10]; // 0x110(0x10)

	void SetMoveState(enum class EMovementState NewState); // Function NotesOfSoul.NOS_RestrictMovementAI.SetMoveState // (Final|Native|Public|BlueprintCallable) // @ game+0x1a46080
};

// Class NotesOfSoul.NOS_Sacrifice_StealthField
// Size: 0x2c0 (Inherited: 0x220)
struct ANOS_Sacrifice_StealthField : AActor {
	float Config_StealthDuration; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UBoxComponent* BoxCollisionComp; // 0x228(0x08)
	struct FInvisibleData Config_StealthFieldData; // 0x230(0x30)
	struct UGameplayEffect* GE_AddStealthGA; // 0x260(0x08)
	struct UNOS_GameplayAbility* GA_FieldStealth; // 0x268(0x08)
	struct TMap<struct TWeakObjectPtr<struct ANOS_PlayerHuman>, struct FActiveGameplayEffectHandle> InStealthFieldHumans; // 0x270(0x50)

	void OpenCollision(); // Function NotesOfSoul.NOS_Sacrifice_StealthField.OpenCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45880
	void Bind_BoxCollisionComp_EndOverlap(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_Sacrifice_StealthField.Bind_BoxCollisionComp_EndOverlap // (Final|Native|Private) // @ game+0x1a44880
	void Bind_BoxCollisionComp_BeginOverlap(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_Sacrifice_StealthField.Bind_BoxCollisionComp_BeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x1a44670
};

// Class NotesOfSoul.NOS_SaveGame_Player
// Size: 0x178 (Inherited: 0x28)
struct UNOS_SaveGame_Player : USaveGame {
	int32_t BackupChoosedHumanCharacter; // 0x28(0x04)
	int32_t BackupChoosedGhostCharacter; // 0x2c(0x04)
	struct TMap<int32_t, int32_t> BackupWearCloth; // 0x30(0x50)
	struct TMap<int32_t, int32_t> BackupWearHead; // 0x80(0x50)
	struct TMap<int32_t, int32_t> BackupWearFace; // 0xd0(0x50)
	struct TMap<int32_t, int32_t> BackupWearBack; // 0x120(0x50)
	int32_t BackupWearTitle; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
};

// Class NotesOfSoul.NOS_SaveGame_Settings
// Size: 0xa8 (Inherited: 0x28)
struct UNOS_SaveGame_Settings : USaveGame {
	int32_t Language; // 0x28(0x04)
	int32_t FOV; // 0x2c(0x04)
	float MasterAudio; // 0x30(0x04)
	float MusicAudio; // 0x34(0x04)
	float SFXAudio; // 0x38(0x04)
	float HorizontalSensitivity; // 0x3c(0x04)
	float VerticalSensitivity; // 0x40(0x04)
	bool Bloom; // 0x44(0x01)
	bool MotionBlur; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	int32_t VoiceMode; // 0x48(0x04)
	int32_t VoiceChannel; // 0x4c(0x04)
	int32_t VoiceInputVol; // 0x50(0x04)
	int32_t VoiceOutputVol; // 0x54(0x04)
	struct TMap<struct FString, int32_t> bNeedUITips; // 0x58(0x50)
};

// Class NotesOfSoul.NOS_Scapegoat
// Size: 0x510 (Inherited: 0x4c0)
struct ANOS_Scapegoat : ACharacter {
	bool bInIdle; // 0x4b8(0x01)
	struct USkeletalMeshComponent* ClothComp; // 0x4c0(0x08)
	struct USkeletalMeshComponent* HairComp; // 0x4c8(0x08)
	struct USkeletalMeshComponent* LowerClothCom; // 0x4d0(0x08)
	struct USkeletalMeshComponent* HeadCom; // 0x4d8(0x08)
	struct USkeletalMeshComponent* FaceCom; // 0x4e0(0x08)
	struct USkeletalMeshComponent* BackCom; // 0x4e8(0x08)
	struct USkeletalMeshComponent* ShoesCom; // 0x4f0(0x08)
	struct USkeletalMeshComponent* ConjoinedBodyComp; // 0x4f8(0x08)
	struct USkeletalMeshComponent* ExclusiveCom; // 0x500(0x08)
	struct USkeletalMeshComponent* HairAccessoriesCom; // 0x508(0x08)
};

// Class NotesOfSoul.NOS_SceneLight
// Size: 0x268 (Inherited: 0x220)
struct ANOS_SceneLight : AActor {
	int32_t UseCount; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct USoundWave* S_BadSound; // 0x228(0x08)
	bool bIsOpen; // 0x230(0x01)
	char pad_231[0x2f]; // 0x231(0x2f)
	struct UStaticMeshComponent* SM_ModelCom; // 0x260(0x08)

	void SetLightOnOrOff(bool IsOn); // Function NotesOfSoul.NOS_SceneLight.SetLightOnOrOff // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45ff0
	void ChangeIsOpen(); // Function NotesOfSoul.NOS_SceneLight.ChangeIsOpen // (Final|Native|Public) // @ game+0x1a449e0
};

// Class NotesOfSoul.NOS_SceneLightSwitch
// Size: 0x270 (Inherited: 0x220)
struct ANOS_SceneLightSwitch : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct TArray<struct ANOS_SceneLight*> LightArray; // 0x228(0x10)
	bool bInitOpen; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float ButtonRotation; // 0x23c(0x04)
	bool bHumanIsInteracts; // 0x240(0x01)
	bool bGhostIsInteracts; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct USoundWave* S_OpenSound; // 0x248(0x08)
	struct USoundWave* S_CloseSound; // 0x250(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x258(0x08)
	struct UStaticMeshComponent* SM_ButtonModelCom; // 0x260(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x268(0x08)

	void UseLightSwitch(bool IsOpen, bool IsInit); // Function NotesOfSoul.NOS_SceneLightSwitch.UseLightSwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1a461a0
	void NotSelected(); // Function NotesOfSoul.NOS_SceneLightSwitch.NotSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
	void InSelected(); // Function NotesOfSoul.NOS_SceneLightSwitch.InSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
};

// Class NotesOfSoul.NOS_ShaoZiKiller
// Size: 0x1b00 (Inherited: 0x1b00)
struct ANOS_ShaoZiKiller : ANOS_PlayerGhost {
};

// Class NotesOfSoul.NOS_Shelter
// Size: 0x2d0 (Inherited: 0x280)
struct ANOS_Shelter : APawn {
	char pad_280[0x8]; // 0x280(0x08)
	struct USceneComponent* SceneCom; // 0x288(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x290(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	struct UStaticMeshComponent* HumanMontagePlayPoint; // 0x2a0(0x08)
	struct UStaticMeshComponent* GhostMontagePlayPoint; // 0x2a8(0x08)
	struct UCameraComponent* GetOutCameraLocation; // 0x2b0(0x08)
	struct ANOS_PlayerHuman* HideCharacter; // 0x2b8(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x2c0(0x10)
};

// Class NotesOfSoul.NOS_SocialAnim
// Size: 0x260 (Inherited: 0x260)
struct UNOS_SocialAnim : UUserWidget {

	void ActiveCurDir(); // Function NotesOfSoul.NOS_SocialAnim.ActiveCurDir // (Native|Event|Public|BlueprintEvent) // @ game+0x10229b0
};

// Class NotesOfSoul.NOS_SoulComponet
// Size: 0x158 (Inherited: 0xb0)
struct UNOS_SoulComponet : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct TMap<int32_t, float> SoulMap; // 0xb8(0x50)
	struct FMulticastInlineDelegate OnSoulChanged; // 0x108(0x10)
	float Lose4SoulSubSpeedScale; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<int32_t> AllSoul; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct UNOS_AbilitySystemComponent* AbilityCom; // 0x140(0x08)
	struct UNOS_MovementComponent* MoveCom; // 0x148(0x08)
	struct ANOS_PlayerHuman* Human; // 0x150(0x08)

	struct TArray<int32_t> RestoreSoul(int32_t ReStoreNum); // Function NotesOfSoul.NOS_SoulComponet.RestoreSoul // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a45f40
	struct TArray<int32_t> RemoveSoulOnDamage(); // Function NotesOfSoul.NOS_SoulComponet.RemoveSoulOnDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45b10
	void RemoveSoulBySoulID(int32_t SoulID); // Function NotesOfSoul.NOS_SoulComponet.RemoveSoulBySoulID // (Final|Native|Public|BlueprintCallable) // @ game+0x1a45a80
	struct TArray<int32_t> RemoveSoul(int32_t RemoveNum); // Function NotesOfSoul.NOS_SoulComponet.RemoveSoul // (Final|Native|Public|BlueprintCallable) // @ game+0x1a459d0
	void OnRep__AllSoul(); // Function NotesOfSoul.NOS_SoulComponet.OnRep__AllSoul // (Final|Native|Private) // @ game+0x1a45860
	bool HasSoul(int32_t Soul); // Function NotesOfSoul.NOS_SoulComponet.HasSoul // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a45010
	struct TMap<int32_t, float> GetSoulMap(); // Function NotesOfSoul.NOS_SoulComponet.GetSoulMap // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44ee0
	int32_t GetAllSoulNum(); // Function NotesOfSoul.NOS_SoulComponet.GetAllSoulNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a44da0
	void ChangeSoulWeight(int32_t SoulID, float ChangeValue); // Function NotesOfSoul.NOS_SoulComponet.ChangeSoulWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1a44a00
};

// Class NotesOfSoul.NOS_SpiderBase
// Size: 0x540 (Inherited: 0x4d0)
struct ANOS_SpiderBase : ANOS_Partner {
	enum class EHumanType HumanType; // 0x4d0(0x01)
	enum class ESpiderState SpiderState; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct FTimerHandle SetPatrolPosTimeHandle; // 0x4d8(0x08)
	struct FTimerHandle EvolutionHandle; // 0x4e0(0x08)
	int32_t SpiderLevel; // 0x4e8(0x04)
	float EvolutionTime; // 0x4ec(0x04)
	float CurHp; // 0x4f0(0x04)
	float MaxHp; // 0x4f4(0x04)
	float ReboundHeight; // 0x4f8(0x04)
	float AutoSetPatrolPosTime; // 0x4fc(0x04)
	struct ANOS_SpiderCocoon* SpiderCocoon; // 0x500(0x08)
	float TrampleDamageValue; // 0x508(0x04)
	float AtkValue; // 0x50c(0x04)
	struct AActor* Master; // 0x510(0x08)
	struct AActor* IdleActor; // 0x518(0x08)
	struct ANOS_XiaoZhuSpawnManager* XiaoZhuSpawnManager; // 0x520(0x08)
	struct UKxInteractBoxComponent* InteractBox; // 0x528(0x08)
	struct UBillboardComponent* InteractUIPos; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)

	void VariationSpiderMonster(); // Function NotesOfSoul.NOS_SpiderBase.VariationSpiderMonster // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a4aa90
	void TrampleDamage(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_SpiderBase.TrampleDamage // (Native|Public|BlueprintCallable) // @ game+0x1a4a5b0
	void SpiderEvolution(); // Function NotesOfSoul.NOS_SpiderBase.SpiderEvolution // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2abf0
	void SpiderAttributeUpdate(); // Function NotesOfSoul.NOS_SpiderBase.SpiderAttributeUpdate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a2b110
	void SetPatrolPos(struct FVector pos); // Function NotesOfSoul.NOS_SpiderBase.SetPatrolPos // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4a230
	void SetOutline(bool IsOpen); // Function NotesOfSoul.NOS_SpiderBase.SetOutline // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a4a1a0
	void SetAlertTarget(struct AActor* AlertTarget); // Function NotesOfSoul.NOS_SpiderBase.SetAlertTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4a110
	void RandomSetPatrolPos(); // Function NotesOfSoul.NOS_SpiderBase.RandomSetPatrolPos // (Native|Public|BlueprintCallable) // @ game+0x1a2abb0
	struct UBlackboardComponent* GetBlackboardFromCtrl(); // Function NotesOfSoul.NOS_SpiderBase.GetBlackboardFromCtrl // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a49b60
	void Atk(); // Function NotesOfSoul.NOS_SpiderBase.Atk // (Native|Public|BlueprintCallable) // @ game+0x1a49920
};

// Class NotesOfSoul.NOS_SpiderCocoon
// Size: 0x290 (Inherited: 0x220)
struct ANOS_SpiderCocoon : AActor {
	struct AActor* Creator; // 0x220(0x08)
	struct ANOS_SpiderBase* SpiderClass; // 0x228(0x08)
	float FirstSpawnTime; // 0x230(0x04)
	float IntervalSpawnTime; // 0x234(0x04)
	int32_t SpiderMaxNum; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct ANOS_SpiderBase*> SpiderArray; // 0x240(0x10)
	float DismantleTime; // 0x250(0x04)
	float CurRangeRadius; // 0x254(0x04)
	float RangeRadius; // 0x258(0x04)
	float BOOMRangeRadius; // 0x25c(0x04)
	float CurHp; // 0x260(0x04)
	float MaxHp; // 0x264(0x04)
	struct USceneComponent* RootCom; // 0x268(0x08)
	struct UStaticMeshComponent* SpiderCocoonMode; // 0x270(0x08)
	struct UKxInteractBoxComponent* InteractBox; // 0x278(0x08)
	struct UBillboardComponent* InteractUIPos; // 0x280(0x08)
	struct ANOS_XiaoZhuSpawnManager* XiaoZhuSpawnManager; // 0x288(0x08)

	struct TArray<struct ANOS_SpiderBase*> SpawnSpider(int32_t Num); // Function NotesOfSoul.NOS_SpiderCocoon.SpawnSpider // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4a4b0
	struct FVector RandomGetRangePos(); // Function NotesOfSoul.NOS_SpiderCocoon.RandomGetRangePos // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4a0d0
	void Dismantle(); // Function NotesOfSoul.NOS_SpiderCocoon.Dismantle // (Final|Native|Public|BlueprintCallable) // @ game+0x1a49a70
};

// Class NotesOfSoul.NOS_SpiderMonster
// Size: 0x540 (Inherited: 0x540)
struct ANOS_SpiderMonster : ANOS_SpiderBase {
	struct ANOS_ElementSlot* ElementSlot; // 0x538(0x08)

	int32_t HumanTypeToEStypeInt(); // Function NotesOfSoul.NOS_SpiderMonster.HumanTypeToEStypeInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a49b90
};

// Class NotesOfSoul.NOS_SuperNaturalEventTriggerBox
// Size: 0x248 (Inherited: 0x220)
struct ANOS_SuperNaturalEventTriggerBox : AActor {
	struct TArray<struct ANOS_SuperNaturalStuff*> ConnectedEvent; // 0x220(0x10)
	struct UBoxComponent* TriggerEventBox; // 0x230(0x08)
	bool bTriggerAllConnectedEvent; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UArrowComponent* ArrowComp; // 0x240(0x08)

	void TriggerEventOverlapEnd(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_SuperNaturalEventTriggerBox.TriggerEventOverlapEnd // (Final|Native|Private) // @ game+0x1a4a850
	void TriggerEventOverlapBegin(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_SuperNaturalEventTriggerBox.TriggerEventOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x1a4a640
};

// Class NotesOfSoul.NOS_SuperNaturalStuff
// Size: 0x2d8 (Inherited: 0x220)
struct ANOS_SuperNaturalStuff : AActor {
	bool bEventTriggered; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct TMap<struct FName, struct TSoftObjectPtr<struct USoundBase>> NeedSound; // 0x228(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UNiagaraSystem>> NeedNS; // 0x278(0x50)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void MultiRecoverEvent(); // Function NotesOfSoul.NOS_SuperNaturalStuff.MultiRecoverEvent // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a01e00
	void MultiActiveEvent(struct ANOS_PlayerHuman* TriggerPlayer); // Function NotesOfSoul.NOS_SuperNaturalStuff.MultiActiveEvent // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a49d90
	void BPRecoverDo(); // Function NotesOfSoul.NOS_SuperNaturalStuff.BPRecoverDo // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BPNoticeLoadCompleted(); // Function NotesOfSoul.NOS_SuperNaturalStuff.BPNoticeLoadCompleted // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BPActiveDo(struct ANOS_PlayerHuman* TriggerPlayer); // Function NotesOfSoul.NOS_SuperNaturalStuff.BPActiveDo // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_TalentCom
// Size: 0x118 (Inherited: 0xb0)
struct UNOS_TalentCom : UActorComponent {
	struct TMap<int32_t, struct FGameplayAbilitySpecHandle> TalentHandleMap; // 0xb0(0x50)
	struct TArray<int32_t> ActiveTalentID; // 0x100(0x10)
	struct UNOS_AbilitySystemComponent* OwnerAbilityCom; // 0x110(0x08)

	struct TArray<int32_t> GetActiveTalentID(); // Function NotesOfSoul.NOS_TalentCom.GetActiveTalentID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a49a90
};

// Class NotesOfSoul.NOS_TargetActor_ConeTrace
// Size: 0x430 (Inherited: 0x340)
struct ANOS_TargetActor_ConeTrace : AGameplayAbilityTargetActor {
	float TraceLength; // 0x338(0x04)
	float ConeScale; // 0x33c(0x04)
	struct TArray<float> OffsetList; // 0x340(0x10)
	bool ShowTraceLine; // 0x350(0x01)
	struct FName TraceProfileName; // 0x354(0x08)
	bool ShouldTraceComplex; // 0x35c(0x01)
	struct TArray<struct AActor*> TraceIgnoreActors; // 0x360(0x10)
	bool bShouldIgnoreSelf; // 0x370(0x01)
	enum class EDrawDebugTrace DebugType; // 0x371(0x01)
	struct FLinearColor TraceColor; // 0x374(0x10)
	struct FLinearColor TraceHitColor; // 0x384(0x10)
	float DebugDuration; // 0x394(0x04)
	char pad_398[0x98]; // 0x398(0x98)
};

// Class NotesOfSoul.NOS_TargetActor_ProjectileBoom
// Size: 0x490 (Inherited: 0x340)
struct ANOS_TargetActor_ProjectileBoom : AGameplayAbilityTargetActor {
	struct FPredictProjectilePathParams ProjectilePathParams; // 0x338(0x60)
	bool UseCameraAsStart; // 0x398(0x01)
	struct FName SocketName; // 0x39c(0x08)
	float AdditionalRaiseDegree; // 0x3a4(0x04)
	float LaunchVelocitytLength; // 0x3a8(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x3b0(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x3c0(0x10)
	char pad_3D1[0xbf]; // 0x3d1(0xbf)
};

// Class NotesOfSoul.NOS_Teleporter
// Size: 0x250 (Inherited: 0x220)
struct ANOS_Teleporter : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct USceneComponent* SceneCom; // 0x228(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom1; // 0x230(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom2; // 0x238(0x08)
	struct UStaticMeshComponent* Portal1; // 0x240(0x08)
	struct UStaticMeshComponent* Portal2; // 0x248(0x08)
};

// Class NotesOfSoul.NOS_TimedNiagaraEffec
// Size: 0x68 (Inherited: 0x60)
struct UNOS_TimedNiagaraEffec : UAnimNotifyState_TimedNiagaraEffect {
	struct FName Key; // 0x60(0x08)
};

// Class NotesOfSoul.NOS_TimedParticleEffect
// Size: 0x68 (Inherited: 0x60)
struct UNOS_TimedParticleEffect : UAnimNotifyState_TimedParticleEffect {
	struct FName Key; // 0x60(0x08)
};

// Class NotesOfSoul.NOS_Trail
// Size: 0x60 (Inherited: 0x58)
struct UNOS_Trail : UAnimNotifyState_Trail {
	struct FName Key; // 0x58(0x08)
};

// Class NotesOfSoul.NOS_TrainInstanceSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UNOS_TrainInstanceSubsystem : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)

	bool OpenTrainMap(); // Function NotesOfSoul.NOS_TrainInstanceSubsystem.OpenTrainMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1a49fd0
	void CloseTrainMap(); // Function NotesOfSoul.NOS_TrainInstanceSubsystem.CloseTrainMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1a49a50
};

// Class NotesOfSoul.NOS_TrustController
// Size: 0x588 (Inherited: 0x570)
struct ANOS_TrustController : APlayerController {
	struct FString NickName; // 0x570(0x10)
	char pad_580[0x8]; // 0x580(0x08)

	void OnRep_NickName(); // Function NotesOfSoul.NOS_TrustController.OnRep_NickName // (Final|Native|Public) // @ game+0xbc9a40
};

// Class NotesOfSoul.NOS_UI_Nickname
// Size: 0x268 (Inherited: 0x260)
struct UNOS_UI_Nickname : UUserWidget {
	struct APawn* Pawn; // 0x260(0x08)

	void SetPawn(struct APawn* InPawn); // Function NotesOfSoul.NOS_UI_Nickname.SetPawn // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4a2c0
};

// Class NotesOfSoul.NOS_UIControlComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UNOS_UIControlComponent : UActorComponent {
	struct UUserWidget* BroadcastUIClass; // 0xb0(0x08)
	struct UUserWidget* PopupUIClass; // 0xb8(0x08)
	struct UUI_BroadCastMgr* BroadcastManager; // 0xc0(0x08)
	struct UUI_PopupMgr* PopupManager; // 0xc8(0x08)

	void UIBroadcast(struct FUIBroadcastInfo BroadcastInfo); // Function NotesOfSoul.NOS_UIControlComponent.UIBroadcast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a4a9b0
	void StopBroadcast(); // Function NotesOfSoul.NOS_UIControlComponent.StopBroadcast // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4a590
	void ShowHumanIcon(bool bShow, struct UUserWidget* WidgetCom); // Function NotesOfSoul.NOS_UIControlComponent.ShowHumanIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4a3e0
	int32_t ShowGhostSkillsVFX(int32_t Index, bool bIsShow, bool bReturnBool); // Function NotesOfSoul.NOS_UIControlComponent.ShowGhostSkillsVFX // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void PopupTips(struct FText Msgs); // Function NotesOfSoul.NOS_UIControlComponent.PopupTips // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a4a000
	void OnWheelUp(); // Function NotesOfSoul.NOS_UIControlComponent.OnWheelUp // (Native|Event|Public|BlueprintEvent) // @ game+0x1a24890
	void OnWheelDown(); // Function NotesOfSoul.NOS_UIControlComponent.OnWheelDown // (Native|Event|Public|BlueprintEvent) // @ game+0x1a2b000
	void OnTabPressed(bool IsPressed); // Function NotesOfSoul.NOS_UIControlComponent.OnTabPressed // (Native|Event|Public|BlueprintEvent) // @ game+0x1a49f40
	void OnHumanLeftAlt(bool IsPressed); // Function NotesOfSoul.NOS_UIControlComponent.OnHumanLeftAlt // (Native|Event|Public|BlueprintEvent) // @ game+0x1a49eb0
	void OnF5Pressed(bool IsPressed); // Function NotesOfSoul.NOS_UIControlComponent.OnF5Pressed // (Native|Event|Public|BlueprintEvent) // @ game+0x1a49e20
	void OnExitGameandChat(bool IsPressed); // Function NotesOfSoul.NOS_UIControlComponent.OnExitGameandChat // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25e00
	void IsVisibilityChatUI(bool Is, struct FChatInfo Info); // Function NotesOfSoul.NOS_UIControlComponent.IsVisibilityChatUI // (Native|Event|Public|BlueprintEvent) // @ game+0x1a49bc0
	void DisableSkill(enum class EDisableSkillsType DisableType, bool IsEnabled); // Function NotesOfSoul.NOS_UIControlComponent.DisableSkill // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ClientUIShowAddFightScore(enum class EAddFightScoreTerm AddFightScoreType, int32_t AddScore, bool bIsHuman); // Function NotesOfSoul.NOS_UIControlComponent.ClientUIShowAddFightScore // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1a49940
	void AddFightScore(enum class EAddFightScoreTerm AddFightScoreType, int32_t AddScore, bool bIsHuman); // Function NotesOfSoul.NOS_UIControlComponent.AddFightScore // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void AddChatMessageServerEvent(struct FChatInfo Info); // Function NotesOfSoul.NOS_UIControlComponent.AddChatMessageServerEvent // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a497a0
};

// Class NotesOfSoul.NOS_UIData
// Size: 0x28 (Inherited: 0x28)
struct UNOS_UIData : UObject {
};

// Class NotesOfSoul.NOS_WaitBoxTarget
// Size: 0x1a0 (Inherited: 0x80)
struct UNOS_WaitBoxTarget : UNOS_AbilityTask {
	struct FMulticastInlineDelegate BoxTraceTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate BoxTraceNoTarget; // 0x90(0x10)
	char pad_A0[0x100]; // 0xa0(0x100)

	struct UNOS_WaitBoxTarget* WaitBoxTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct TArray<enum class EObjectTypeQuery> ObjectTypes, struct TArray<struct AActor*> ActorsToIgnore, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct FVector BoxExtent, float TimerPeriod, float AdditionalMove, struct FVector BoxOffset, bool bUpdateLocation, bool bCheckMultiActors, bool bShowDebug); // Function NotesOfSoul.NOS_WaitBoxTarget.WaitBoxTarget // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4cf80
	void PauseCheck(bool IsPause); // Function NotesOfSoul.NOS_WaitBoxTarget.PauseCheck // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4ce90
};

// Class NotesOfSoul.NOS_WaitBoxTarget_Channel
// Size: 0x190 (Inherited: 0x80)
struct UNOS_WaitBoxTarget_Channel : UNOS_AbilityTask {
	struct FMulticastInlineDelegate BoxTraceTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate BoxTraceNoTarget; // 0x90(0x10)
	char pad_A0[0xf0]; // 0xa0(0xf0)

	struct UNOS_WaitBoxTarget_Channel* WaitBoxTargetChannel(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class ETraceTypeQuery TraceChannel, struct TArray<struct AActor*> ActorsToIgnore, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct FVector BoxExtent, float TimerPeriod, float AdditionalMove, struct FVector BoxOffset, bool bUpdateLocation, bool bCheckMultiActors, bool bShowDebug); // Function NotesOfSoul.NOS_WaitBoxTarget_Channel.WaitBoxTargetChannel // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4d4d0
	void PauseCheck(bool IsPause); // Function NotesOfSoul.NOS_WaitBoxTarget_Channel.PauseCheck // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4ce90
};

// Class NotesOfSoul.NOS_WaitBoxTargetPlus
// Size: 0x1a0 (Inherited: 0x80)
struct UNOS_WaitBoxTargetPlus : UNOS_AbilityTask {
	struct FMulticastInlineDelegate BoxFoundNewTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate BoxLostTarget; // 0x90(0x10)
	struct FMulticastInlineDelegate BoxOverlapedTarget; // 0xa0(0x10)
	char pad_B0[0xf0]; // 0xb0(0xf0)

	struct UNOS_WaitBoxTargetPlus* WaitBoxTargetPlus(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct TArray<enum class EObjectTypeQuery> ObjectTypes, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct FVector BoxExtent, float TimerPeriod, float AdditionalMove, bool bUpdateLocation, bool bShowDebug, struct UObject* FindTargetClass); // Function NotesOfSoul.NOS_WaitBoxTargetPlus.WaitBoxTargetPlus // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4d9d0
};

// Class NotesOfSoul.NOS_WaitChangeFOV
// Size: 0xb8 (Inherited: 0x80)
struct UNOS_WaitChangeFOV : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnTargetFOVReached; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)

	struct UNOS_WaitChangeFOV* WaitChangeFOV(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UCameraComponent* CameraComponent, float TargetFOV, float Duration, struct UCurveFloat* OptionalInterpolationCurve); // Function NotesOfSoul.NOS_WaitChangeFOV.WaitChangeFOV // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4de20
};

// Class NotesOfSoul.NOS_WaitConeTarget
// Size: 0x1b0 (Inherited: 0x80)
struct UNOS_WaitConeTarget : UNOS_AbilityTask {
	struct FMulticastInlineDelegate ConeFindNewTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate ConeLostTarget; // 0x90(0x10)
	char pad_A0[0x110]; // 0xa0(0x110)

	struct UNOS_WaitConeTarget* WaitConeTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetingLocationInfo StartLocation, float Radius, struct TArray<enum class EObjectTypeQuery> TraceObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, float TimerPeriod, enum class EDrawDebugTrace DebugType, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime, struct TArray<float> OffsetList, float TraceLength, bool bExecuteTagCheck, struct FGameplayTag CheckTag); // Function NotesOfSoul.NOS_WaitConeTarget.WaitConeTarget // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x1a4dff0
};

// Class NotesOfSoul.NOS_WaitDelay
// Size: 0xb0 (Inherited: 0x80)
struct UNOS_WaitDelay : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnTickDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFinishDelegate; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)

	void ResumeDelay(); // Function NotesOfSoul.NOS_WaitDelay.ResumeDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4cf60
	void PauseDelay(); // Function NotesOfSoul.NOS_WaitDelay.PauseDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4cf20
	struct UNOS_WaitDelay* NOSWaitDelay(struct UGameplayAbility* OwningAbility, float delayTime, float TimePeriod); // Function NotesOfSoul.NOS_WaitDelay.NOSWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4cd70
	bool IsTimerPaused(); // Function NotesOfSoul.NOS_WaitDelay.IsTimerPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a4cd40
	float GetRemainTime(); // Function NotesOfSoul.NOS_WaitDelay.GetRemainTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a4ccf0
	void AddDelayTimeToRemainTime(float TimeOffsetValue); // Function NotesOfSoul.NOS_WaitDelay.AddDelayTimeToRemainTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1a4cba0
};

// Class NotesOfSoul.NOS_WaitInputReleasePlus
// Size: 0xc8 (Inherited: 0x80)
struct UNOS_WaitInputReleasePlus : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTick; // 0x90(0x10)
	struct FMulticastInlineDelegate TriggerCriticalPoint; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)

	struct UNOS_WaitInputReleasePlus* WaitInputReleasePlus(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased, float CriticalPoint); // Function NotesOfSoul.NOS_WaitInputReleasePlus.WaitInputReleasePlus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4f180
	void OnReleaseCallback(); // Function NotesOfSoul.NOS_WaitInputReleasePlus.OnReleaseCallback // (Final|Native|Public) // @ game+0x1a4ce70
};

// Class NotesOfSoul.NOS_WaitInteractableTarget
// Size: 0x150 (Inherited: 0x80)
struct UNOS_WaitInteractableTarget : UNOS_AbilityTask {
	struct FMulticastInlineDelegate FoundNewInteractableTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate LostInteractableTarget; // 0x90(0x10)
	char pad_A0[0xb0]; // 0xa0(0xb0)

	struct UNOS_WaitInteractableTarget* WaitForInteractableTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class ECollisionChannel TraceProfile, float MaxRange, float TimerPeriod, struct FName TranceSocketName, bool bForceCheckInteract, bool bShowDebug); // Function NotesOfSoul.NOS_WaitInteractableTarget.WaitForInteractableTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4e6e0
	void PerformTrace(); // Function NotesOfSoul.NOS_WaitInteractableTarget.PerformTrace // (Final|Native|Protected) // @ game+0x1a4cf40
};

// Class NotesOfSoul.NOS_WaitOverlapTarget
// Size: 0x190 (Inherited: 0x80)
struct UNOS_WaitOverlapTarget : UNOS_AbilityTask {
	struct FMulticastInlineDelegate FoundRangeTarget; // 0x80(0x10)
	char pad_90[0x100]; // 0x90(0x100)

	struct UNOS_WaitOverlapTarget* WaitOverlapTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct TArray<enum class ECollisionChannel> TraceProfiles, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct UObject* FindTargetClass, struct UStaticMesh* OverlapedMesh, struct AStaticMeshActor* AStaticMesh, struct TArray<struct AActor*> IgnoreActors, struct FVector Scale3D, float TimerPeriod, bool bShowDebug); // Function NotesOfSoul.NOS_WaitOverlapTarget.WaitOverlapTarget // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4f2a0
	struct AStaticMeshActor* GetStaticMesh(); // Function NotesOfSoul.NOS_WaitOverlapTarget.GetStaticMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a4cd20
};

// Class NotesOfSoul.NOS_WaitRangeTarget
// Size: 0x170 (Inherited: 0x80)
struct UNOS_WaitRangeTarget : UNOS_AbilityTask {
	struct FMulticastInlineDelegate FoundNewRangeTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate LostRangeTarget; // 0x90(0x10)
	char pad_A0[0xd0]; // 0xa0(0xd0)

	struct UNOS_WaitRangeTarget* WaitRangeTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class ECollisionChannel TraceProfile, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct UObject* FindTargetClass, float MaxRange, float TimerPeriod, bool bShowDebug); // Function NotesOfSoul.NOS_WaitRangeTarget.WaitRangeTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4f790
};

// Class NotesOfSoul.NOS_WaitRangeTargetPlusTag
// Size: 0x190 (Inherited: 0x80)
struct UNOS_WaitRangeTargetPlusTag : UNOS_AbilityTask {
	struct FMulticastInlineDelegate FoundNewRangeTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate LostRangeTarget; // 0x90(0x10)
	char pad_A0[0xf0]; // 0xa0(0xf0)

	struct UNOS_WaitRangeTargetPlusTag* WaitTianXuRangeTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayTagContainer ForceLostGhostTag, enum class ECollisionChannel TraceProfile, struct FGameplayTag ForceLostTag1, struct FGameplayAbilityTargetingLocationInfo StartLocation, float MaxRange, float TimerPeriod, bool bShowDebug); // Function NotesOfSoul.NOS_WaitRangeTargetPlusTag.WaitTianXuRangeTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4fac0
};

// Class NotesOfSoul.NOS_WaitThreeDirectionTrace
// Size: 0x150 (Inherited: 0x80)
struct UNOS_WaitThreeDirectionTrace : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnTraceTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTraceNoTarget; // 0x90(0x10)
	char pad_A0[0xb0]; // 0xa0(0xb0)

	struct UNOS_WaitThreeDirectionTrace* WaitForThreeDirectionTrace(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct TArray<enum class EObjectTypeQuery> ObjectTypes, enum class EWaitThreeDirection Direction, struct FVector CustomDirection, bool bPosiOrNega, bool bShowDebug, float TimerPeriod, float TraceLength); // Function NotesOfSoul.NOS_WaitThreeDirectionTrace.WaitForThreeDirectionTrace // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4e940
};

// Class NotesOfSoul.NOS_WaitTimerLoop
// Size: 0xb0 (Inherited: 0x80)
struct UNOS_WaitTimerLoop : UAbilityTask {
	struct FMulticastInlineDelegate OnTimerLoops; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTimerFinished; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UNOS_WaitTimerLoop* WaitTimerLoop(struct UGameplayAbility* OwningAbility, float TimerPeriod, int32_t LoopTimes); // Function NotesOfSoul.NOS_WaitTimerLoop.WaitTimerLoop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4fea0
};

// Class NotesOfSoul.NOS_WaitTraceByObjectTypes
// Size: 0x160 (Inherited: 0x80)
struct UNOS_WaitTraceByObjectTypes : UAbilityTask {
	struct FMulticastInlineDelegate OnTraceImpact; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTraceNoImpact; // 0x90(0x10)
	char pad_A0[0xc0]; // 0xa0(0xc0)

	struct UNOS_WaitTraceByObjectTypes* WaitForTraceTargetByObjectTypes(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct TArray<enum class EObjectTypeQuery> CollisionChannel, float MaxRange, float TimerPeriod, struct FName TranceSocketName, bool bShowDebug, bool bForceEnableTrace); // Function NotesOfSoul.NOS_WaitTraceByObjectTypes.WaitForTraceTargetByObjectTypes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4eec0
};

// Class NotesOfSoul.NOS_WaitTraceLocation
// Size: 0x150 (Inherited: 0x80)
struct UNOS_WaitTraceLocation : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnTraceImpact; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTraceNoImpact; // 0x90(0x10)
	char pad_A0[0xb0]; // 0xa0(0xb0)

	struct UNOS_WaitTraceLocation* WaitForTraceLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class ECollisionChannel CollisionChannel, float MaxRange, float TimerPeriod, struct FName TranceSocketName, bool bShowDebug, bool bForceEnableTrace); // Function NotesOfSoul.NOS_WaitTraceLocation.WaitForTraceLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4ec60
};

// Class NotesOfSoul.NOS_WaitTraceTarget
// Size: 0x1e0 (Inherited: 0x80)
struct UNOS_WaitTraceTarget : UAbilityTask {
	struct FMulticastInlineDelegate TraceFoundTarget; // 0x80(0x10)
	struct FMulticastInlineDelegate TraceNoTarget; // 0x90(0x10)
	char pad_A0[0x140]; // 0xa0(0x140)

	struct UNOS_WaitTraceTarget* WaitTraceTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetingLocationInfo LocationInfo, struct TArray<enum class EObjectTypeQuery> ObjectTypes, struct FVector StartLocation, struct FVector TraceDirection, struct TArray<struct AActor*> ActorsToIgnore, float TraceLength, bool TraceComplex, enum class EDrawDebugTrace DrawDebugType); // Function NotesOfSoul.NOS_WaitTraceTarget.WaitTraceTarget // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a4ffb0
};

// Class NotesOfSoul.NOS_WaitVelocityLess
// Size: 0xa0 (Inherited: 0x80)
struct UNOS_WaitVelocityLess : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnVelocityLess; // 0x80(0x10)
	struct AActor* SourceActor; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)

	struct UNOS_WaitVelocityLess* CreateWaitVelocityLess(struct UGameplayAbility* OwningAbility, float MinimumMagnitude); // Function NotesOfSoul.NOS_WaitVelocityLess.CreateWaitVelocityLess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a4cc20
};

// Class NotesOfSoul.NOS_WaitVelocityOut
// Size: 0xa0 (Inherited: 0x80)
struct UNOS_WaitVelocityOut : UNOS_AbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)

	struct UNOS_WaitVelocityOut* CreateWaitVelocityOut(struct UGameplayAbility* OwningAbility, float MinimumMagnitude); // Function NotesOfSoul.NOS_WaitVelocityOut.CreateWaitVelocityOut // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a53870
};

// Class NotesOfSoul.NOS_WaitXiaoJiangBeIrradiation
// Size: 0x150 (Inherited: 0x80)
struct UNOS_WaitXiaoJiangBeIrradiation : UAbilityTask {
	struct FMulticastInlineDelegate FindNewTargets; // 0x80(0x10)
	struct FMulticastInlineDelegate LostOldTargets; // 0x90(0x10)
	char pad_A0[0x80]; // 0xa0(0x80)
	struct TArray<struct TWeakObjectPtr<struct AActor>> FindActors; // 0x120(0x10)
	struct TArray<struct AActor*> IgnoreActors; // 0x130(0x10)
	struct AActor* Avator; // 0x140(0x08)
	struct USpotLightComponent* FlashSpotLightComp; // 0x148(0x08)

	struct UNOS_WaitXiaoJiangBeIrradiation* WaitXiaoJiangBeIrradiation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetingLocationInfo StartLocation, struct FGameplayTag XiaoJiangChildTag); // Function NotesOfSoul.NOS_WaitXiaoJiangBeIrradiation.WaitXiaoJiangBeIrradiation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a54d10
};

// Class NotesOfSoul.NOS_WordsComponent
// Size: 0x120 (Inherited: 0xb0)
struct UNOS_WordsComponent : UActorComponent {
	struct TArray<struct UAudioComponent*> ActivatedAudioPlayer; // 0xb0(0x10)
	float PowerColdDown; // 0xc0(0x04)
	float PowerProb; // 0xc4(0x04)
	float RecrodPowerTime; // 0xc8(0x04)
	float BeAttachColdDown; // 0xcc(0x04)
	float BeAttachProb; // 0xd0(0x04)
	float RecrodBeAttachTime; // 0xd4(0x04)
	float BeCureColdDown; // 0xd8(0x04)
	float BeCureProb; // 0xdc(0x04)
	float RecrodBeCureTime; // 0xe0(0x04)
	float TerritoryColdDown; // 0xe4(0x04)
	float TerritoryProb; // 0xe8(0x04)
	float RecrodTerritoryTime; // 0xec(0x04)
	float ShiHunColdDown; // 0xf0(0x04)
	float ShiHunProb; // 0xf4(0x04)
	float RecrodShiHunTime; // 0xf8(0x04)
	char pad_FC[0x24]; // 0xfc(0x24)

	bool StopWords(struct TSoftObjectPtr<struct USoundBase> Sound); // Function NotesOfSoul.NOS_WordsComponent.StopWords // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a54be0
	void PlayWrodsByType(struct TSoftObjectPtr<struct USoundBase> Words, enum class EWordsAudioType _AudioType); // Function NotesOfSoul.NOS_WordsComponent.PlayWrodsByType // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a54530
	bool PlayWords(struct TSoftObjectPtr<struct USoundBase> Sound); // Function NotesOfSoul.NOS_WordsComponent.PlayWords // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a54440
	struct UAudioComponent* CheckIsPlayingSound(struct USoundBase* Sound); // Function NotesOfSoul.NOS_WordsComponent.CheckIsPlayingSound // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a537d0
	void BreakWrods(); // Function NotesOfSoul.NOS_WordsComponent.BreakWrods // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a53580
};

// Class NotesOfSoul.NOS_WuLianGui
// Size: 0x1b00 (Inherited: 0x1b00)
struct ANOS_WuLianGui : ANOS_PlayerGhost {
};

// Class NotesOfSoul.NOS_WuNvArrowBase
// Size: 0x280 (Inherited: 0x280)
struct ANOS_WuNvArrowBase : APawn {
};

// Class NotesOfSoul.NOS_WuNvSaveArrowAbility
// Size: 0x4b8 (Inherited: 0x4b8)
struct UNOS_WuNvSaveArrowAbility : UNOS_OverlyingGameplayAbility {

	void OnStorageSkillNumChanged(char CurrentValue); // Function NotesOfSoul.NOS_WuNvSaveArrowAbility.OnStorageSkillNumChanged // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a542b0
};

// Class NotesOfSoul.NOS_XiaoFang
// Size: 0x1d60 (Inherited: 0x1d60)
struct ANOS_XiaoFang : ANOS_PlayerHuman {
};

// Class NotesOfSoul.NOS_XiaoGang
// Size: 0x1d60 (Inherited: 0x1d60)
struct ANOS_XiaoGang : ANOS_PlayerHuman {
};

// Class NotesOfSoul.NOS_XiaoGangBulletBase
// Size: 0x238 (Inherited: 0x220)
struct ANOS_XiaoGangBulletBase : AActor {
	struct FGameplayEffectSpecHandle StunHandle; // 0x220(0x10)
	bool EnhancedEdition; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class NotesOfSoul.NOS_XiaoHong
// Size: 0x1d60 (Inherited: 0x1d60)
struct ANOS_XiaoHong : ANOS_PlayerHuman {
};

// Class NotesOfSoul.NOS_XiaoJiang
// Size: 0x1cf0 (Inherited: 0x1b00)
struct ANOS_XiaoJiang : ANOS_PlayerGhost {
	bool bUsingSkill3; // 0x1af8(0x01)
	SoftClassProperty Boy25AnimBlueprint; // 0x1b00(0x28)
	struct TMap<struct AActor*, float> TrailCDManage; // 0x1b28(0x50)
	bool FirstShiHunUsed; // 0x1b78(0x01)
	char pad_1B7A[0x6]; // 0x1b7a(0x06)
	struct TArray<struct UNOS_GameplayAbility*> NeedCheckGA; // 0x1b80(0x10)
	struct UNOS_GameplayAbility* HumanCrouchInvisibleAbility; // 0x1b90(0x08)
	struct UNOS_GameplayAbility* BeHumanIrradiateBecomeSlowAbility; // 0x1b98(0x08)
	struct UNOS_GameplayAbility* MakeHumanBecome25Boy; // 0x1ba0(0x08)
	struct UNOS_GameplayAbility* Cancel25BoyGA; // 0x1ba8(0x08)
	struct UNOS_GameplayAbility* Skill3SuckGA; // 0x1bb0(0x08)
	struct UNOS_GameplayAbility* Skill3HumanBeSuckGA; // 0x1bb8(0x08)
	struct UNOS_GameplayAbility* ListenHumanBecome25BoyGA; // 0x1bc0(0x08)
	struct UNOS_GameplayAbility* RBigZombieKnockDownGA; // 0x1bc8(0x08)
	struct UGameplayEffect* BodyPoisionGE; // 0x1bd0(0x08)
	SoftClassProperty PXXJAnimBlueprint; // 0x1bd8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> PXXJAMBorn; // 0x1c00(0x28)
	struct UGameplayEffect* AddDurationTagGE; // 0x1c28(0x08)
	struct UNOS_GameplayAbility* CancelXXJHugGA; // 0x1c30(0x08)
	struct UNOS_GameplayAbility* FullBeHugBeTeammateInteractCancelHug; // 0x1c38(0x08)
	struct UNOS_GameplayAbility* HumanBeHugBeTeammateInteractCncelHug; // 0x1c40(0x08)
	struct UNOS_GameplayAbility* ShowChooseBecome25BoyUIPanelGA; // 0x1c48(0x08)
	struct UNOS_GameplayAbility* Boy25AttackGA; // 0x1c50(0x08)
	struct UNOS_GameplayAbility* Boy25SubSoulGA; // 0x1c58(0x08)
	struct UNOS_GameplayAbility* Boy25HumanBeAttackGA; // 0x1c60(0x08)
	struct UNOS_GameplayAbility* Boy25HumanBeSubSoulGA; // 0x1c68(0x08)
	struct UNOS_GameplayAbility* Boy25FogGA; // 0x1c70(0x08)
	struct TArray<struct UNOS_GameplayAbility*> NeedRemoveAbilityWhenBecome25Boy; // 0x1c78(0x10)
	struct UNOS_GameplayAbility* Boy25ShockGA; // 0x1c88(0x08)
	struct UWorld* World; // 0x1c90(0x08)
	char pad_1C98[0x8]; // 0x1c98(0x08)
	struct USphereComponent* Skill3CheckHumanBox; // 0x1ca0(0x08)
	char pad_1CA8[0x10]; // 0x1ca8(0x10)
	struct UNiagaraComponent* Skill1RightRedEyesNSComp; // 0x1cb8(0x08)
	struct UNiagaraComponent* Skill1LeftRedEyesNSComp; // 0x1cc0(0x08)
	struct UNiagaraComponent* Skill3FlyFeelWindComp; // 0x1cc8(0x08)
	struct UAudioComponent* Skill3FlyFeelWindSoundComp; // 0x1cd0(0x08)
	char pad_1CD8[0x18]; // 0x1cd8(0x18)

	void UnpauseTrailCDTimer(); // Function NotesOfSoul.NOS_XiaoJiang.UnpauseTrailCDTimer // (Final|Native|Public) // @ game+0x1a54cf0
	void UnpauseSkill3ForwardTimer(); // Function NotesOfSoul.NOS_XiaoJiang.UnpauseSkill3ForwardTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a54cd0
	void ShowSatisfyConditionTrail(struct FTransform ReleaseSkillOldTransform, int32_t SkillLevel); // Function NotesOfSoul.NOS_XiaoJiang.ShowSatisfyConditionTrail // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a54730
	void SendSuckEvent(struct AActor* Human, struct AActor* MySelf); // Function NotesOfSoul.NOS_XiaoJiang.SendSuckEvent // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a54660
	void PauseTrailCDTimer(); // Function NotesOfSoul.NOS_XiaoJiang.PauseTrailCDTimer // (Final|Native|Public) // @ game+0x1a54420
	void PauseSkill3ForwardTimer(); // Function NotesOfSoul.NOS_XiaoJiang.PauseSkill3ForwardTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a54400
	void MultiLoadSkill3NS(bool bIsServerCall); // Function NotesOfSoul.NOS_XiaoJiang.MultiLoadSkill3NS // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a53eb0
	void MultiLoadSkill1NS(bool bIsServerCall); // Function NotesOfSoul.NOS_XiaoJiang.MultiLoadSkill1NS // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a53e20
	void MultiDeloadSkill3NS(bool bIsServerCall); // Function NotesOfSoul.NOS_XiaoJiang.MultiDeloadSkill3NS // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a53d90
	void MultiDeloadSkill1NS(bool bIsServerCall); // Function NotesOfSoul.NOS_XiaoJiang.MultiDeloadSkill1NS // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1a53d00
	void LoadCheckHumanBox(); // Function NotesOfSoul.NOS_XiaoJiang.LoadCheckHumanBox // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a53ce0
	void InitShowTrailParam(float ShowTime, float ShowAngle, float SweepTrailRadius); // Function NotesOfSoul.NOS_XiaoJiang.InitShowTrailParam // (Final|Native|Public|BlueprintCallable) // @ game+0x1a53bc0
	void GenerateHumanShadow(struct FTransform ReleaseSkillOldTransform, float SweepRadius, float ShowAngle, int32_t SkillLevel); // Function NotesOfSoul.NOS_XiaoJiang.GenerateHumanShadow // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a539f0
	void DetachCheckHumanBox(); // Function NotesOfSoul.NOS_XiaoJiang.DetachCheckHumanBox // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a53940
	void CheckHumanBoxOverlapBegin(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoJiang.CheckHumanBoxOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x1a535c0
	void CheckGA(); // Function NotesOfSoul.NOS_XiaoJiang.CheckGA // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1a535a0
	void Bind_ActiveShowBecome25BoyGA(struct AActor* ShiHunInstigator, struct AActor* ShiHunVictim); // Function NotesOfSoul.NOS_XiaoJiang.Bind_ActiveShowBecome25BoyGA // (Final|Native|Private) // @ game+0x1a534b0
	void AddHandleXiaoJiangAffairCompToHuman(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_XiaoJiang.AddHandleXiaoJiangAffairCompToHuman // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1a533f0
	void AddALayerBodyPoision(struct AActor* HurtInstigator, struct AActor* HurtVictim, bool bVictimCrawl, struct FGameplayTag HurtSourceTag); // Function NotesOfSoul.NOS_XiaoJiang.AddALayerBodyPoision // (Final|Native|Private|HasOutParms) // @ game+0x1a53290
};

// Class NotesOfSoul.NOS_XiaoJiang_TerritoryBox
// Size: 0x258 (Inherited: 0x220)
struct ANOS_XiaoJiang_TerritoryBox : AActor {
	struct FVector SlowDownBoxExtent; // 0x220(0x0c)
	struct FVector SlowDownBoxCenter; // 0x22c(0x0c)
	struct UBoxComponent* SlowDownBoxComp; // 0x238(0x08)
	struct UGameplayEffect* InBoxDebuffGE; // 0x240(0x08)
	struct TArray<struct TWeakObjectPtr<struct ANOS_PlayerHuman>> InBoxHumans; // 0x248(0x10)

	void SlowDownBoxOverlapEnd(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoJiang_TerritoryBox.SlowDownBoxOverlapEnd // (Final|Native|Private) // @ game+0x1a54a80
	void SlowDownBoxOverlapBegin(struct UPrimitiveComponent* OverlapedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoJiang_TerritoryBox.SlowDownBoxOverlapBegin // (Final|Native|Private|HasOutParms) // @ game+0x1a54870
	void NoticeOneHumanInBox(struct ANOS_PlayerHuman* Human); // Function NotesOfSoul.NOS_XiaoJiang_TerritoryBox.NoticeOneHumanInBox // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_XiaoJiangAnimInstance
// Size: 0x450 (Inherited: 0x440)
struct UNOS_XiaoJiangAnimInstance : UNOS_GhostAnimInstanceBase {
	bool bUsingSkill3; // 0x438(0x01)
	float MoveForwardAxis; // 0x43c(0x04)
	float MoveRightAxis; // 0x440(0x04)
	char pad_449[0x7]; // 0x449(0x07)
};

// Class NotesOfSoul.NOS_XiaoJiangHumanTrail
// Size: 0x228 (Inherited: 0x220)
struct ANOS_XiaoJiangHumanTrail : AActor {
	char pad_220[0x8]; // 0x220(0x08)
};

// Class NotesOfSoul.NOS_XiaoJiangRPartner
// Size: 0x4e0 (Inherited: 0x4c0)
struct ANOS_XiaoJiangRPartner : ACharacter {
	float ZMaxLow; // 0x4b8(0x04)
	float FallingSpeed; // 0x4bc(0x04)
	float DelayFall; // 0x4c0(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UNiagaraComponent* LightColumnComp; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void BPCreateLightColumn(); // Function NotesOfSoul.NOS_XiaoJiangRPartner.BPCreateLightColumn // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_XiaoLi
// Size: 0x1b50 (Inherited: 0x1b00)
struct ANOS_XiaoLi : ANOS_PlayerGhost {
	enum class ESpawnBloodPoolResult SpawnBloodPoolResult; // 0x1af8(0x01)
	struct UNOS_GameplayAbility* Skill2TeleportAbility; // 0x1b00(0x08)
	struct FGameplayAbilitySpecHandle Skill2TeleportHandle; // 0x1b08(0x04)
	char pad_1B0D[0x3]; // 0x1b0d(0x03)
	struct TArray<struct ANOS_XiaoLi_BloodyPool*> AllBloodyPools; // 0x1b10(0x10)
	struct TArray<struct ANOS_XiaoLi_BloodyPool*> AllBloodyPoolsOnGround; // 0x1b20(0x10)
	struct ANOS_XiaoLi_UltimateTerritory* UltimateTerritory; // 0x1b30(0x08)
	struct ANOS_XiaoLi_BloodyPool* InteractingBloodyPool; // 0x1b38(0x08)
	struct AActor* AimingBloodyPool; // 0x1b40(0x08)
	struct ANOS_XiaoLi_Skill3TargetActor* Skill3TargetActor; // 0x1b48(0x08)

	void OutlineHuman(struct AActor* Human, bool bSwitch); // Function NotesOfSoul.NOS_XiaoLi.OutlineHuman // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1a54330
	void HideAllBloodyPoolTeleport(); // Function NotesOfSoul.NOS_XiaoLi.HideAllBloodyPoolTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x1a53ba0
	void ExecuteTeleportation(struct FVector TeleportLocation); // Function NotesOfSoul.NOS_XiaoLi.ExecuteTeleportation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a53960
};

// Class NotesOfSoul.NOS_XiaoLi_BloodyPool
// Size: 0x2d8 (Inherited: 0x220)
struct ANOS_XiaoLi_BloodyPool : AActor {
	struct USceneComponent* RootSceneCom; // 0x220(0x08)
	struct UBoxComponent* BoxCollisionCom; // 0x228(0x08)
	struct UStaticMeshComponent* TeleportSphereCom; // 0x230(0x08)
	struct UNOS_GameplayEffect* GE_Class; // 0x238(0x08)
	struct FGameplayEffectSpecHandle GE_SpecHandle; // 0x240(0x10)
	struct FVector SpawnLocation; // 0x250(0x0c)
	struct FVector ImpactNormal; // 0x25c(0x0c)
	float CapsuleComHeight; // 0x268(0x04)
	float CapsuleComDiameter; // 0x26c(0x04)
	float DebuffRemanTime; // 0x270(0x04)
	int32_t MaxBloodyPoolNum; // 0x274(0x04)
	struct ANOS_XiaoLi* xiaoli; // 0x278(0x08)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> OutlinedActorMap; // 0x280(0x50)
	bool bIsOnGround; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)

	void XiaoLiInteractBloodyPool(bool IsSwtich); // Function NotesOfSoul.NOS_XiaoLi_BloodyPool.XiaoLiInteractBloodyPool // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a54f20
	void OnBloodyPoolOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoLi_BloodyPool.OnBloodyPoolOverlapEnd // (Final|Native|Public) // @ game+0x1a54150
	void OnBloodyPoolOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoLi_BloodyPool.OnBloodyPoolOverlapBegin // (Final|Native|Public|HasOutParms) // @ game+0x1a53f40
};

// Class NotesOfSoul.NOS_XiaoLi_Skill2ReticleActor
// Size: 0x430 (Inherited: 0x340)
struct ANOS_XiaoLi_Skill2ReticleActor : AGameplayAbilityTargetActor {
	struct FName SocketName; // 0x338(0x08)
	float TraceLength; // 0x340(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x344(0x01)
	struct AActor* CurrentBloodyPool; // 0x348(0x08)
	char pad_355[0xdb]; // 0x355(0xdb)

	void SwitchBloodyPool(float Switch); // Function NotesOfSoul.NOS_XiaoLi_Skill2ReticleActor.SwitchBloodyPool // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetReticleValid(bool bIsValid); // Function NotesOfSoul.NOS_XiaoLi_Skill2ReticleActor.SetReticleValid // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Initialize(); // Function NotesOfSoul.NOS_XiaoLi_Skill2ReticleActor.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_XiaoLi_Skill3TargetActor
// Size: 0x480 (Inherited: 0x470)
struct ANOS_XiaoLi_Skill3TargetActor : ANOS_TargetActor_ProjectilePath {
	float MaxTolerableSlope; // 0x468(0x04)
	char pad_474[0xc]; // 0x474(0x0c)

	void SetMaterialColor(int32_t MaterialColor); // Function NotesOfSoul.NOS_XiaoLi_Skill3TargetActor.SetMaterialColor // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Initialize(); // Function NotesOfSoul.NOS_XiaoLi_Skill3TargetActor.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_XiaoLi_UltimateTerritory
// Size: 0x358 (Inherited: 0x220)
struct ANOS_XiaoLi_UltimateTerritory : AActor {
	struct USceneComponent* RootSceneCom; // 0x220(0x08)
	struct UBoxComponent* TerritoryBoxCom; // 0x228(0x08)
	struct UStaticMeshComponent* TeleportSphereCom; // 0x230(0x08)
	struct UNiagaraComponent* BloodyRainCom; // 0x238(0x08)
	struct UAudioComponent* BloodyRainAudio; // 0x240(0x08)
	struct UGameplayEffect* GE_TerritoryClass; // 0x248(0x08)
	struct FGameplayEffectSpecHandle GE_TerritorySpecHandle; // 0x250(0x10)
	struct UNOS_GameplayEffect* GE_BloodyPoolClass; // 0x260(0x08)
	struct FGameplayEffectSpecHandle GE_BloodyPoolSpecHandle; // 0x268(0x10)
	struct FVector TerritorySize; // 0x278(0x0c)
	float TerritoryRemainTime; // 0x284(0x04)
	float BloodyPoolDebuffRemanTime; // 0x288(0x04)
	float ElementSlotCheckRadius; // 0x28c(0x04)
	int32_t MaxBloodyPoolNum; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct ANOS_XiaoLi* xiaoli; // 0x298(0x08)
	struct TArray<struct AActor*> LiftedActors; // 0x2a0(0x10)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> TerritoryDebuffedActorMap; // 0x2b0(0x50)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> BloodyPoolDebuffedActorMap; // 0x300(0x50)
	char pad_350[0x8]; // 0x350(0x08)

	void XiaoLiInteractUltimateTerritory(bool IsSwtich); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.XiaoLiInteractUltimateTerritory // (Final|Native|Protected|BlueprintCallable) // @ game+0x1a5b2c0
	void OnUltimateTerritoryOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnUltimateTerritoryOverlapEnd // (Final|Native|Protected) // @ game+0x1a5a5e0
	void OnUltimateTerritoryOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnUltimateTerritoryOverlapBegin // (Final|Native|Protected|HasOutParms) // @ game+0x1a5a3d0
	void OnTerritoryOverlapSceneEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnTerritoryOverlapSceneEnd // (Final|Native|Protected) // @ game+0x1a1a8d0
	void OnTerritoryOverlapSceneBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnTerritoryOverlapSceneBegin // (Final|Native|Protected|HasOutParms) // @ game+0x1a5a1c0
	void OnTerritoryOverlapHumanEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnTerritoryOverlapHumanEnd // (Final|Native|Protected) // @ game+0x1a5a060
	void OnTerritoryOverlapHumanBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.OnTerritoryOverlapHumanBegin // (Final|Native|Protected|HasOutParms) // @ game+0x1a59e50
	void DisableBloodyPool(); // Function NotesOfSoul.NOS_XiaoLi_UltimateTerritory.DisableBloodyPool // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.NOS_XiaoMing
// Size: 0x1d60 (Inherited: 0x1d60)
struct ANOS_XiaoMing : ANOS_PlayerHuman {
};

// Class NotesOfSoul.NOS_XiaoPi
// Size: 0x1b70 (Inherited: 0x1b00)
struct ANOS_XiaoPi : ANOS_PlayerGhost {
	bool bIsTransfer; // 0x1b00(0x01)
	char pad_1B01[0x7]; // 0x1b01(0x07)
	struct ANOS_PlayerHuman* TargetHuman; // 0x1b08(0x08)
	struct ANOS_PlayerHuman* LastTargetHuman; // 0x1b10(0x08)
	struct ANOS_PlayerHuman* TransferHuman; // 0x1b18(0x08)
	struct ANOS_PlayerHuman* LastHuman; // 0x1b20(0x08)
	struct TArray<struct ANOS_PlayerHuman*> AllTransferHumen; // 0x1b28(0x10)
	char pad_1B38[0x38]; // 0x1b38(0x38)

	void TransferToHuman(); // Function NotesOfSoul.NOS_XiaoPi.TransferToHuman // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a5b1d0
	void TransferBackToGhost(); // Function NotesOfSoul.NOS_XiaoPi.TransferBackToGhost // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a39e50
	void SetIsTransfer(bool NewIsTransfer); // Function NotesOfSoul.NOS_XiaoPi.SetIsTransfer // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5a8b0
	bool RandomAliveHuman(int32_t RandomSeed); // Function NotesOfSoul.NOS_XiaoPi.RandomAliveHuman // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5a810
	void OnRep_IsTransfer(); // Function NotesOfSoul.NOS_XiaoPi.OnRep_IsTransfer // (Final|Native|Public) // @ game+0x1a59e30
	struct ANOS_PlayerHuman* GetTransferHuman(struct ANOS_PlayerHuman* TargetHuman); // Function NotesOfSoul.NOS_XiaoPi.GetTransferHuman // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1a59580
	bool GetIsTransfer(); // Function NotesOfSoul.NOS_XiaoPi.GetIsTransfer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a593c0
	void CopyItemsFromLastHuman(); // Function NotesOfSoul.NOS_XiaoPi.CopyItemsFromLastHuman // (Final|Native|Public|BlueprintCallable) // @ game+0x1a58fe0
	bool CanTransToHuman(); // Function NotesOfSoul.NOS_XiaoPi.CanTransToHuman // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a58f20
	void AddSoulComp(struct ANOS_PlayerHuman* PlayerHuman); // Function NotesOfSoul.NOS_XiaoPi.AddSoulComp // (Final|Native|Public|BlueprintCallable) // @ game+0x1a58e90
};

// Class NotesOfSoul.NOS_XiaoPi_LiftTerritory
// Size: 0x2d8 (Inherited: 0x2c8)
struct ANOS_XiaoPi_LiftTerritory : ANOS_Ghost_LiftTerritory {
	int32_t AbilityLevel; // 0x2c8(0x04)
	char pad_2CC[0xc]; // 0x2cc(0x0c)

	void OnBoxOverlapXiaoPiEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NotesOfSoul.NOS_XiaoPi_LiftTerritory.OnBoxOverlapXiaoPiEnd // (Final|Native|Public) // @ game+0x1a59cd0
	void OnBoxOverlapXiaoPiBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NotesOfSoul.NOS_XiaoPi_LiftTerritory.OnBoxOverlapXiaoPiBegin // (Final|Native|Public|HasOutParms) // @ game+0x1a59ac0
};

// Class NotesOfSoul.NOS_XiaoQiang
// Size: 0x1d60 (Inherited: 0x1d60)
struct ANOS_XiaoQiang : ANOS_PlayerHuman {
};

// Class NotesOfSoul.NOS_XiaoXiaoJiangAnimInst
// Size: 0x2d0 (Inherited: 0x2c0)
struct UNOS_XiaoXiaoJiangAnimInst : UNOS_PartnerAnimInstance {
	float MoveForwardAxis; // 0x2b8(0x04)
	char pad_2C4[0xc]; // 0x2c4(0x0c)
};

// Class NotesOfSoul.NOS_XiaoXiaoJiangBase
// Size: 0x500 (Inherited: 0x4c0)
struct ANOS_XiaoXiaoJiangBase : ACharacter {
	int32_t MyLevel; // 0x4b8(0x04)
	struct ANOS_PlayerHuman* CurCanChaseTarget; // 0x4c0(0x08)
	struct FGameplayTag XiaoXiaoJiangPerceptionIgnoreTags; // 0x4c8(0x08)
	enum class XiaoXiaoJiangBehaviourState XiaoXiaoJiangState; // 0x4d0(0x01)
	char pad_4D5[0x2b]; // 0x4d5(0x2b)
};

// Class NotesOfSoul.NOS_XiaoZhu
// Size: 0x1b20 (Inherited: 0x1b00)
struct ANOS_XiaoZhu : ANOS_PlayerGhost {
	int32_t EatDoveCount; // 0x1af8(0x04)
	int32_t GetSoulPointNeedDoveNum; // 0x1afc(0x04)
	struct ANOS_XiaoZhuSpawnManager* SpawnManager; // 0x1b00(0x08)
	struct TArray<struct ANOS_SpiderBase*> FollowSpiders; // 0x1b08(0x10)

	void EatDove(struct ANOS_Dove* Dove); // Function NotesOfSoul.NOS_XiaoZhu.EatDove // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a59000
};

// Class NotesOfSoul.NOS_XiaoZhuSpawnManager
// Size: 0x268 (Inherited: 0x220)
struct ANOS_XiaoZhuSpawnManager : AActor {
	struct TArray<struct ANOS_SpiderBase*> AllSpiderMonster; // 0x220(0x10)
	struct TArray<struct ANOS_SpiderBase*> AllSpider_1; // 0x230(0x10)
	struct TArray<struct ANOS_SpiderBase*> AllSpider_2; // 0x240(0x10)
	struct TArray<struct ANOS_SpiderCocoon*> AllSpiderCocoon; // 0x250(0x10)
	int32_t SpiderSilk; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)

	void UpdateSpider(struct ANOS_SpiderBase* Spider, bool IsAdd); // Function NotesOfSoul.NOS_XiaoZhuSpawnManager.UpdateSpider // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5b1f0
};

// Class NotesOfSoul.NOS_XingTi_FunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNOS_XingTi_FunctionLibrary : UBlueprintFunctionLibrary {

	void TestXingTi(int32_t CharacterID, int32_t PlanIndex, struct FNOS_XingTi_SaveData Dat); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.TestXingTi // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a5b030
	void SetXingTi_Tatto(float Value, struct FNOS_XingTi_Tattoo TattooInfor, struct USkeletalMeshComponent* SKComp); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.SetXingTi_Tatto // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5ae80
	void SetXingTi_Model(float Value, struct FNOS_XingTi_HaveModelType ModelInfor, struct USkeletalMeshComponent* SKComp); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.SetXingTi_Model // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5acf0
	void SetXingTi_MaterialParamRGB(float ValueR, float ValueG, float ValueB, struct FNOS_XingTi_Material XTMat, struct USkeletalMeshComponent* SKComp); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.SetXingTi_MaterialParamRGB // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5aae0
	void SetXingTi_MaterialParam(float Value, struct FNOS_XingTi_Material XTMat, struct USkeletalMeshComponent* SKComp); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.SetXingTi_MaterialParam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5a940
	enum class EXingTiType GetXingTiTypeByActionID(int32_t ID); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetXingTiTypeByActionID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a59620
	struct TSoftObjectPtr<struct UTexture2D> GetXingTi_FaceTattoMapping(struct TMap<int32_t, float> JsonData, struct FNOS_XingTi XT); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetXingTi_FaceTattoMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a59870
	struct TSoftObjectPtr<struct UTexture2D> GetXingTi_BodyTattoMapping(struct TMap<int32_t, float> JsonData, struct FNOS_XingTi XT); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetXingTi_BodyTattoMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a596b0
	struct TMap<int32_t, float> GetPinchDataMapFromAllXingTiData(int32_t CharacterID, int32_t PlanIndex); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetPinchDataMapFromAllXingTiData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a593e0
	struct UDataTable* GetDefaultXingTiDT(); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetDefaultXingTiDT // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a59390
	struct FNOS_XingTi GetCharacterDefaultXingTi(int32_t CharacterID, struct UDataTable* DT); // Function NotesOfSoul.NOS_XingTi_FunctionLibrary.GetCharacterDefaultXingTi // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a59280
};

// Class NotesOfSoul.NOS_XQ_SoulLink
// Size: 0x2e8 (Inherited: 0x220)
struct ANOS_XQ_SoulLink : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x228(0x08)
	struct USphereComponent* SphereCom; // 0x230(0x08)
	struct FMulticastInlineDelegate OnLinkHit; // 0x238(0x10)
	struct FMulticastInlineDelegate OnDegreeCheckUpdate; // 0x248(0x10)
	struct FHitResult EndHitData; // 0x258(0x8c)
	char pad_2E4[0x4]; // 0x2e4(0x04)
};

// Class NotesOfSoul.NOS_XQGhostLamp
// Size: 0x240 (Inherited: 0x220)
struct ANOS_XQGhostLamp : AActor {
	struct ANOS_NieXiaoQian* OwnerXiaoQianPawn; // 0x220(0x08)
	struct USphereComponent* SphereCom; // 0x228(0x08)
	struct USpringArmComponent* LampSpringArm; // 0x230(0x08)
	struct USkeletalMeshComponent* LampSkeletalMesh; // 0x238(0x08)

	void OpenRangeFreeze(float HalfRange, float DurationTime); // Function NotesOfSoul.NOS_XQGhostLamp.OpenRangeFreeze // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a5a740
	void LampMoveToTargetLocation(struct FVector TargetLocation); // Function NotesOfSoul.NOS_XQGhostLamp.LampMoveToTargetLocation // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a59a30
	struct ANOS_XQ_SoulLink* FireXQGhostLink(struct FVector TargetLocation, enum class ESKillAction SkillAction, float Scale, bool IsOpenFlyCheckDamage, bool bIsDestory); // Function NotesOfSoul.NOS_XQGhostLamp.FireXQGhostLink // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a59090
	void ChangeLampState(bool bIsHold); // Function NotesOfSoul.NOS_XQGhostLamp.ChangeLampState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a58f50
};

// Class NotesOfSoul.NOS_YeLuoPuppetMesh
// Size: 0xef0 (Inherited: 0xed0)
struct UNOS_YeLuoPuppetMesh : USkeletalMeshComponent {
	int32_t PuppetIndex; // 0xed0(0x04)
	int32_t CurrentMoveAnimationIndex; // 0xed4(0x04)
	struct UMaterialInterface* NormalMat; // 0xed8(0x08)
	enum class EPuppetState State; // 0xee0(0x01)
	char pad_EE1[0xf]; // 0xee1(0x0f)

	bool ShouldChangeMoveAnimation(); // Function NotesOfSoul.NOS_YeLuoPuppetMesh.ShouldChangeMoveAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a5b000
};

// Class NotesOfSoul.NosCameraManager
// Size: 0x27c0 (Inherited: 0x27b0)
struct ANosCameraManager : APlayerCameraManager {
	bool IsUseAlsCamera; // 0x27b0(0x01)
	char pad_27B1[0x7]; // 0x27b1(0x07)
	struct APawn* Player; // 0x27b8(0x08)

	void OnPossess(struct APawn* InPawn); // Function NotesOfSoul.NosCameraManager.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
};

// Class NotesOfSoul.PuppetInitComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPuppetInitComponent : UActorComponent {
};

// Class NotesOfSoul.SeasonPassInstanceSubsystem
// Size: 0x58 (Inherited: 0x30)
struct USeasonPassInstanceSubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnGetCongratulationsReward; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	void PurchaseSeasonPassType(struct FDelegate InDelegate, enum class EPurchaseSeasonPassType InPurchaseType); // Function NotesOfSoul.SeasonPassInstanceSubsystem.PurchaseSeasonPassType // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5cf20
	void PurchaseSeasonPassLevel(struct FDelegate InDelegate, int32_t PurchaseLevel); // Function NotesOfSoul.SeasonPassInstanceSubsystem.PurchaseSeasonPassLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5ce40
	int32_t GetSeasonPassLevel(); // Function NotesOfSoul.SeasonPassInstanceSubsystem.GetSeasonPassLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a5cdf0
	void GainSelectSeasonPassLevelReward(int32_t GainSeasonPassLevel); // Function NotesOfSoul.SeasonPassInstanceSubsystem.GainSelectSeasonPassLevelReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1a32070
	int32_t CanPurchaseSeasonPassLevel(); // Function NotesOfSoul.SeasonPassInstanceSubsystem.CanPurchaseSeasonPassLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a5cd00
};

// Class NotesOfSoul.TLBJWebBrowser
// Size: 0x150 (Inherited: 0x150)
struct UTLBJWebBrowser : UWebBrowser {

	void UnbindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function NotesOfSoul.TLBJWebBrowser.UnbindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5d120
	void RefreshInputMethod(); // Function NotesOfSoul.TLBJWebBrowser.RefreshInputMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5d010
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function NotesOfSoul.TLBJWebBrowser.BindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5caf0
};

// Class NotesOfSoul.TrainConfigSetting
// Size: 0x70 (Inherited: 0x38)
struct UTrainConfigSetting : UNotConfigSetting {
	bool bIsOpenTrainServer; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString TrainModePath; // 0x40(0x10)
	struct FString TrainModeName; // 0x50(0x10)
	struct FString TrainModeArgs; // 0x60(0x10)

	struct UTrainConfigSetting* GetInstanceImp(); // Function NotesOfSoul.TrainConfigSetting.GetInstanceImp // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x1a5cdc0
};

// Class NotesOfSoul.UI_BroadCastMgr
// Size: 0x280 (Inherited: 0x260)
struct UUI_BroadCastMgr : UUserWidget {
	char pad_260[0x8]; // 0x260(0x08)
	struct TArray<struct FUIBroadcastInfo> m_queue; // 0x268(0x10)
	struct FTimerHandle m_TimerHandle; // 0x278(0x08)

	void StopBroadcast(); // Function NotesOfSoul.UI_BroadCastMgr.StopBroadcast // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5d100
	void ShowBroadcastUI_BP(struct FUIBroadcastInfo BroadcastInfo); // Function NotesOfSoul.UI_BroadCastMgr.ShowBroadcastUI_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	bool IsPlaying(); // Function NotesOfSoul.UI_BroadCastMgr.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a5ce10
	void HiddenBroadcastUI_BP(); // Function NotesOfSoul.UI_BroadCastMgr.HiddenBroadcastUI_BP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BroadcastUI(struct FUIBroadcastInfo UIBroadcastInfo); // Function NotesOfSoul.UI_BroadCastMgr.BroadcastUI // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5cc20
};

// Class NotesOfSoul.UI_PopupMgr
// Size: 0x290 (Inherited: 0x260)
struct UUI_PopupMgr : UUserWidget {
	char pad_260[0x30]; // 0x260(0x30)

	void ShowPopupTips(struct FText Msg); // Function NotesOfSoul.UI_PopupMgr.ShowPopupTips // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a5d030
	void OnShowPopupTips(struct FText Msg); // Function NotesOfSoul.UI_PopupMgr.OnShowPopupTips // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnShowPopupDialog(struct FText Title, struct FText Content); // Function NotesOfSoul.UI_PopupMgr.OnShowPopupDialog // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnClosePopupDialog(); // Function NotesOfSoul.UI_PopupMgr.OnClosePopupDialog // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(bool IsOK); // Function NotesOfSoul.UI_PopupMgr.Click // (Final|Native|Public|BlueprintCallable) // @ game+0x1a5cd30
};

