// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbc2f0
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbc1e0
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbc0d0
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbbfc0
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbeb0
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbd60
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbc10
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbb960
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbb7c0
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbb620
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbbaf00
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbad60
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbac70
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbaad0
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbba930
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbba790
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbba660
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbba530
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbba410
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbba260
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbba0e0
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbb9f10
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb9d70
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb9bf0
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb99f0
	bool GetGameplayCueEndLocationAndNormal(struct AActor* targetActor, struct FGameplayCueParameters Parameters, struct FVector Location, struct FVector Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbb9770
	bool GetGameplayCueDirection(struct AActor* targetActor, struct FGameplayCueParameters Parameters, struct FVector Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbb9540
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb93c0
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb9240
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb90c0
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb8f40
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8e30
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb8d60
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb8b70
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb8a80
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb8950
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb87b0
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb85d0
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8540
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb84b0
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8420
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8390
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb82b0
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8220
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb8130
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb80a0
	void ForwardGameplayCueToTarget(struct TScriptInterface<None> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb7e60
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb7ce0
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, float BaseValue, bool bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb7a20
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, bool bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb77a0
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb7600
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbb74d0
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb73e0
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb72f0
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb7200
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb7110
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb7020
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbb6f20
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb6e30
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb6ce0
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb6bf0
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb69f0
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb68a0
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements SourceTagReqs, struct FGameplayTagRequirements TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb65b0
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb6410
	void BreakGameplayCueParameters(struct FGameplayCueParameters Parameters, float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbb5c50
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5ab0
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5910
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb57b0
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5610
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb54b0
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5300
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb51a0
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb4ff0
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb4e90
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo SourceLocation, struct FGameplayAbilityTargetingLocationInfo TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb4ce0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb4be0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*> ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbb4ac0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb4a00
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1308 (Inherited: 0x120)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_120[0x10]; // 0x120(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x130(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x140(0x10)
	struct FName AffectedAnimInstanceTag; // 0x150(0x08)
	char pad_158[0x198]; // 0x158(0x198)
	float OutgoingDuration; // 0x2f0(0x04)
	float IncomingDuration; // 0x2f4(0x04)
	char pad_2F8[0x20]; // 0x2f8(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x318(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x328(0x10)
	char pad_338[0x58]; // 0x338(0x58)
	bool UserAbilityActivationInhibited; // 0x390(0x01)
	bool ReplicationProxyEnabled; // 0x391(0x01)
	bool bSuppressGrantAbility; // 0x392(0x01)
	bool bSuppressGameplayCues; // 0x393(0x01)
	char pad_394[0x4]; // 0x394(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x398(0x10)
	char pad_3A8[0x28]; // 0x3a8(0x28)
	struct AActor* OwnerActor; // 0x3d0(0x08)
	struct AActor* AvatarActor; // 0x3d8(0x08)
	char pad_3E0[0x10]; // 0x3e0(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x3f0(0x120)
	char pad_510[0x30]; // 0x510(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x540(0x10)
	char pad_550[0x200]; // 0x550(0x200)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x750(0x30)
	bool bCachedIsNetSimulated; // 0x780(0x01)
	bool bPendingMontageRep; // 0x781(0x01)
	char pad_782[0x6]; // 0x782(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x788(0x28)
	char pad_7B0[0xa0]; // 0x7b0(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x850(0x478)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xcc8(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xdf0(0x128)
	char pad_F18[0x128]; // 0xf18(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0x1040(0x10)
	char pad_1050[0x128]; // 0x1050(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1178(0x60)
	char pad_11D8[0x18]; // 0x11d8(0x18)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x11f0(0x118)

	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xbc3b50
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3a40
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // (Native|Public|BlueprintCallable) // @ game+0xbc3a20
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // (Native|Public|BlueprintCallable) // @ game+0xbc3a00
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // (Native|Public|BlueprintCallable) // @ game+0xbc3970
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbc3870
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbc3790
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc34b0
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc3340
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc31c0
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2f80
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2d50
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2b80
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2ad0
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2a20
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2930
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc28e0
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc2740
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc2630
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc24a0
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc2390
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbc2260
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbc2100
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbc1ff0
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbc1f10
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbc1e20
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbc1d30
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbc1c40
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbc1c40
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // (Native|Public) // @ game+0xbc1c20
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // (Native|Protected) // @ game+0xbc1c00
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // (Final|Native|Public) // @ game+0xbc1be0
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // (Native|Public) // @ game+0xbc1bc0
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // (Native|Protected) // @ game+0xbc1ba0
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc1920
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc1740
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc14c0
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc1290
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc1100
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc0f80
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc0b20
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc09a0
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc0d50
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // (Net|Native|Event|NetMulticast|Public) // @ game+0xbc0820
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbc0600
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbc0580
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // (Final|Native|Public|BlueprintCallable) // @ game+0xbc04b0
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbc0410
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbc03e0
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbc02a0
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0190
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbc0090
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xbbffb0
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbff20
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xbbfdf0
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xbbfce0
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbfbe0
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbfae0
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbf8a0
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbf7b0
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbbf6d0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xbbf510
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // (Final|Native|Public|BlueprintCallable) // @ game+0xbbf370
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbf250
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbf170
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1ec38f0
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1ec38f0
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x310 (Inherited: 0x310)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x260 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	char pad_40[0x28]; // 0x40(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x68(0x08)
	struct FName ActivateFailIsDeadName; // 0x70(0x08)
	struct FGameplayTag ActivateFailCooldownTag; // 0x78(0x08)
	struct FName ActivateFailCooldownName; // 0x80(0x08)
	struct FGameplayTag ActivateFailCostTag; // 0x88(0x08)
	struct FName ActivateFailCostName; // 0x90(0x08)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x98(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xa0(0x08)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xa8(0x08)
	struct FName ActivateFailTagsMissingName; // 0xb0(0x08)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xb8(0x08)
	struct FName ActivateFailNetworkingName; // 0xc0(0x08)
	int32_t MinimalReplicationTagCountBits; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xd0(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xe0(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xe4(0x50)
	char pad_134[0x4]; // 0x134(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x138(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x150(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x158(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x170(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x178(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x190(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1a0(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1b0(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1c8(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1e0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1f0(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x208(0x08)
	bool PredictTargetGameplayEffects; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x218(0x08)
	char pad_220[0x40]; // 0x220(0x40)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // (Exec|Native|Public) // @ game+0xbc9d20
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // (Exec|Native|Public) // @ game+0xbc9d00
	void ServerEndPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // (Final|Exec|Native|Public) // @ game+0xbc9c10
	void ServerCancelPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // (Final|Exec|Native|Public) // @ game+0xbc9c10
	void ServerActivatePlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // (Final|Exec|Native|Public) // @ game+0xbc9c10
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // (Final|Exec|Native|Public) // @ game+0xbc9a40
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x2c8 (Inherited: 0x2a8)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_2A8[0x18]; // 0x2a8(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x2c0(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x68(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x80(0x08)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector FinishSetVelocity; // 0x8c(0x0c)
	float FinishClampVelocity; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf0 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector WorldDirection; // 0xc8(0x0c)
	float Strength; // 0xd4(0x04)
	float Duration; // 0xd8(0x04)
	bool bIsAdditive; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UCurveFloat* StrengthOverTime; // 0xe0(0x08)
	bool bEnableGravity; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc7f80
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xc8(0x10)
	struct FRotator Rotation; // 0xd8(0x0c)
	float Distance; // 0xe4(0x04)
	float Height; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float MinimumLandedTriggerTime; // 0xf0(0x04)
	bool bFinishOnLanded; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct UCurveVector* PathOffsetCurve; // 0xf8(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void OnLandedCallback(struct FHitResult Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0xbc9a60
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a20
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc82d0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x130 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x0c)
	struct FVector TargetLocation; // 0xdc(0x0c)
	struct AActor* targetActor; // 0xe8(0x08)
	struct FVector TargetLocationOffset; // 0xf0(0x0c)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float Duration; // 0x100(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x104(0x01)
	bool bSetNewMovementMode; // 0x105(0x01)
	enum class EMovementMode NewMovementMode; // 0x106(0x01)
	bool bRestrictSpeedToExpected; // 0x107(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x108(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x110(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x118(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0xbc9b40
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // (Final|Native|Protected) // @ game+0xbc9b20
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc8ee0
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* targetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc86a0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x108 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	float Duration; // 0xf0(0x04)
	bool bSetNewMovementMode; // 0xf4(0x01)
	enum class EMovementMode NewMovementMode; // 0xf5(0x01)
	bool bRestrictSpeedToExpected; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc8b90
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AActor* LocationActor; // 0xd8(0x08)
	float Strength; // 0xe0(0x04)
	float Duration; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	bool bIsPush; // 0xec(0x01)
	bool bIsAdditive; // 0xed(0x01)
	bool bNoZForce; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xf0(0x08)
	struct UCurveFloat* StrengthOverTime; // 0xf8(0x08)
	bool bUseFixedWorldDirection; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRotator FixedWorldDirection; // 0x104(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbc9510
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x80(0x10)
	char pad_90[0x4]; // 0x90(0x04)
	struct FVector StartLocation; // 0x94(0x0c)
	struct FVector TargetLocation; // 0xa0(0x0c)
	float DurationOfMovement; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UCurveFloat* LerpCurve; // 0xb8(0x08)
	struct UCurveVector* LerpCurveVector; // 0xc0(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbcc820
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce950
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // (Final|Native|Public) // @ game+0xbcce30
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x108 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb0(0x10)
	char pad_C0[0x28]; // 0xc0(0x28)
	struct UAnimMontage* MontageToPlay; // 0xe8(0x08)
	float Rate; // 0xf0(0x04)
	struct FName StartSection; // 0xf4(0x08)
	float AnimRootMotionTranslationScale; // 0xfc(0x04)
	float StartTimeSeconds; // 0x100(0x04)
	bool bStopWhenAbilityEnds; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0xbcce10
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // (Final|Native|Public) // @ game+0xbccd40
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // (Final|Native|Public) // @ game+0xbccc70
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc390
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcce50
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x80(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x90(0x10)
	char pad_A0[0x28]; // 0xa0(0x28)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbccf60
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc5f0
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbcc0b0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd0d0
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* targetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd320
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd1d0
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc750
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbcc270
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd890
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcda90
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd6f0
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // (Final|Native|Public) // @ game+0xbcca00
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x80(0x10)
	char pad_90[0x68]; // 0x90(0x68)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcddb0
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdc60
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // (Final|Native|Public) // @ game+0xbcca90
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce690
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdf30
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x140 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x138(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce160
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x58]; // 0x90(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xe8(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce450
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd470
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xbccc10
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xbccb20
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd500
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // (Final|Native|Public) // @ game+0xbccb60
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd590
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // (Final|Native|Public) // @ game+0xbccc50
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xbccc30
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // (Final|Native|Public) // @ game+0xbccbf0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xbccb40
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd620
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd14d0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd2440
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd2070
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd2b50
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd2780
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate bLocked; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd2e90
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x20]; // 0xa0(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd1e20
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // (Final|Native|Public|HasOutParms) // @ game+0xbd1630
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd1f00
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange // (Final|Native|Public) // @ game+0xbd1710
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3150
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0xbd1400
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd32f0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3440
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3590
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // (Final|Native|Public) // @ game+0xbd1b10
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3660
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0xbd1b30
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0xbd1a00
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd1130
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x80(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd1fe0
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xbd1830
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x80(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x90(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0xa0(0x08)
	struct AGameplayAbilityTargetActor* targetActor; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* targetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3880
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd3730
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // (Final|Native|Public) // @ game+0xbd1e00
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd1cf0
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd1c20
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd1b50
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbd1330
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbd1010
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd1200
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x3b0 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xa8(0x20)
	bool bReplicateInputDirectly; // 0xc8(0x01)
	bool RemoteInstanceEnded; // 0xc9(0x01)
	char pad_CA[0x4]; // 0xca(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xce(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xcf(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd0(0x01)
	bool bRetriggerInstancedAbility; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8(0x18)
	struct FGameplayEventData CurrentEventData; // 0xf0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1a0(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1a8(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1b0(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1c0(0x08)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1c8(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1e8(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x208(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x228(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x248(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x268(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x288(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2a8(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2c8(0x20)
	char pad_2E8[0x20]; // 0x2e8(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x308(0x10)
	char pad_318[0x10]; // 0x318(0x10)
	struct UAnimMontage* CurrentMontage; // 0x328(0x08)
	char pad_330[0x60]; // 0x330(0x60)
	bool bIsActive; // 0x390(0x01)
	bool bIsCancelable; // 0x391(0x01)
	bool bIsBlockingOtherAbilities; // 0x392(0x01)
	char pad_393[0x15]; // 0x393(0x15)
	bool bMarkPendingKillOnAbilityEnd; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0xbddcb0
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // (Native|Public|BlueprintCallable) // @ game+0xbddc20
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // (Native|Protected|BlueprintCallable) // @ game+0xbdd9b0
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect // (Native|Public|BlueprintCallable) // @ game+0xbdd990
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd910
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd840
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd7b0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xbdd6b0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xbdd610
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd4b0
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0x1ec38f0
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbdd420
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	bool K2_HasAuthority(); // Function GameplayAbilities.GameplayAbility.K2_HasAuthority // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbdd3f0
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xbdd230
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbdd0f0
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // (Native|Protected|BlueprintCallable) // @ game+0xbdd0d0
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xbdd030
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xbdcf40
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // (Native|Public|BlueprintCallable) // @ game+0xbdcf10
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xbdcee0
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xbdceb0
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xbdce90
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x1ec38f0
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdccf0
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdcc00
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xbdc9f0
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbdc870
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	bool IsLocallyControlled(); // Function GameplayAbilities.GameplayAbility.IsLocallyControlled // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbdc840
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbdc820
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc7f0
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc7c0
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc740
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc710
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc6e0
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc6b0
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc580
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc550
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc4e0
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc4b0
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc480
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdc3f0
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdc360
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdc290
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdc1e0
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdc100
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdbfe0
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdbec0
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdbcf0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdbbd0
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3b0 (Inherited: 0x3b0)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x3e8 (Inherited: 0x3b0)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x3b0(0x08)
	float PlayRate; // 0x3b8(0x04)
	struct FName SectionName; // 0x3bc(0x08)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x3c8(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3d8(0x10)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x340 (Inherited: 0x220)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x220(0x01)
	char pad_221[0xf]; // 0x221(0x0f)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x230(0x70)
	char pad_2A0[0x30]; // 0x2a0(0x30)
	struct APlayerController* MasterPC; // 0x2d0(0x08)
	struct UGameplayAbility* OwningAbility; // 0x2d8(0x08)
	bool bDestroyOnConfirmation; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct AActor* SourceActor; // 0x2e8(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x300(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x308(0x10)
	bool bDebug; // 0x318(0x01)
	char pad_319[0x17]; // 0x319(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0xbdc270
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // (Native|Public) // @ game+0xa19870
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x350 (Inherited: 0x340)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x338(0x04)
	struct FCollisionProfileName TraceProfile; // 0x33c(0x08)
	bool bTraceAffectsAimPitch; // 0x344(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x370 (Inherited: 0x350)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x350(0x04)
	float CollisionHeight; // 0x354(0x04)
	char pad_358[0x18]; // 0x358(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x390 (Inherited: 0x370)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UObject* PlacedActorClass; // 0x370(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x340 (Inherited: 0x340)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x338(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x350 (Inherited: 0x350)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x240 (Inherited: 0x220)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x220(0x0c)
	bool bFaceOwnerFlat; // 0x22c(0x01)
	bool bSnapToTargetedActor; // 0x22d(0x01)
	bool bIsTargetValid; // 0x22e(0x01)
	bool bIsTargetAnActor; // 0x22f(0x01)
	struct APlayerController* MasterPC; // 0x230(0x08)
	struct AActor* TargetingActor; // 0x238(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1ec38f0
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2ac0
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x258 (Inherited: 0x240)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x240(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x248(0x10)
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xbe2b50
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x310 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x18]; // 0x30(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
	char pad_E8[0x1c8]; // 0xe8(0x1c8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2b0(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2c0(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d0(0x10)
	int32_t GameplayCueSendContextCount; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2e8(0x10)
	char pad_2F8[0x18]; // 0x2f8(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x280 (Inherited: 0x220)
struct AGameplayCueNotify_Actor : AActor {
	bool bAutoDestroyOnRemove; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float AutoDestroyDelay; // 0x224(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x228(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x229(0x01)
	char pad_22A[0x2]; // 0x22a(0x02)
	struct FGameplayTag GameplayCueTag; // 0x22c(0x08)
	struct FName GameplayCueName; // 0x234(0x08)
	bool bAutoAttachToOwner; // 0x23c(0x01)
	bool IsOverride; // 0x23d(0x01)
	bool bUniqueInstancePerInstigator; // 0x23e(0x01)
	bool bUniqueInstancePerSourceObject; // 0x23f(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x240(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x241(0x01)
	char pad_242[0x2]; // 0x242(0x02)
	int32_t NumPreallocatedInstances; // 0x244(0x04)
	char pad_248[0x38]; // 0x248(0x38)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbe9410
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbe9070
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // (Native|Public) // @ game+0xbe8fe0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbe8c40
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbe88a0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue // (Native|Public|BlueprintCallable) // @ game+0xa199d0
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool IsOverride; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbe95e0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbe9240
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbe8e10
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbe8a70
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1ec38f0
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x50 (Inherited: 0x40)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x7b8 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1a8)
	struct FScalableFloat Period; // 0x1e0(0x20)
	bool bExecutePeriodicEffectOnApplication; // 0x200(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x208(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x218(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x228(0x20)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x248(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x258(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x268(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x278(0x10)
	bool bDenyOverflowApplication; // 0x288(0x01)
	bool bClearStackOnOverflow; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x290(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2a0(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x2b0(0x01)
	bool bSuppressStackingCues; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2b8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x2c8(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x2d0(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x330(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x390(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x3d0(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x410(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x450(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x4b0(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x4f0(0x150)
	char pad_640[0x8]; // 0x640(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x648(0x150)
	char pad_798[0x1]; // 0x798(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x799(0x01)
	char pad_79A[0x2]; // 0x79a(0x02)
	int32_t StackLimitCount; // 0x79c(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x7a0(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x7a1(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x7a2(0x01)
	char pad_7A3[0x5]; // 0x7a3(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x7a8(0x10)
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject {

	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbede40
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters ExecutionParams, struct FGameplayEffectCustomExecutionOutput OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbedfa0
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	float CalculateBaseMagnitude(struct FGameplayEffectSpec Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbedd70
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1e8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	char pad_40[0x1a8]; // 0x40(0x1a8)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0xbee110
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface {
};

