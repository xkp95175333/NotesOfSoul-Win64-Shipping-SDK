// Class MultiUserClientLibrary.MultiUserClientStatics
// Size: 0x28 (Inherited: 0x28)
struct UMultiUserClientStatics : UBlueprintFunctionLibrary {

	void UpdateWorkspaceModifiedPackages(); // Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72b50
	bool StartMultiUserDefaultConnection(); // Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa727f0
	void SetMultiUserPresenceVisibilityById(struct FGuid ClientEndpointId, bool Visibility, bool PropagateToAll); // Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa72d20
	void SetMultiUserPresenceVisibility(struct FString Name, bool Visibility, bool PropagateToAll); // Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72bf0
	void SetMultiUserPresenceEnabled(bool IsEnabled); // Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72b70
	void PersistMultiUserSessionChanges(); // Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72b50
	void JumpToMultiUserPresence(struct FString OtherUserName, struct FTransform TransformOffset); // Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xa72a00
	bool GetRemoteMultiUserClientInfos(struct TArray<struct FMultiUserClientInfo> ClientInfos); // Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa72920
	struct FTransform GetMultiUserPresenceTransform(struct FGuid ClientEndpointId); // Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa72850
	enum class EMultiUserConnectionStatus GetMultiUserConnectionStatusDetail(); // Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72820
	bool GetMultiUserConnectionStatus(); // Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa727f0
	bool GetMultiUserClientInfoByName(struct FString ClientName, struct FMultiUserClientInfo ClientInfo); // Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa726d0
	struct FMultiUserClientInfo GetLocalMultiUserClientInfo(); // Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa725a0
	struct FMultiUserConnectionError GetLastMultiUserConnectionError(); // Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa72500
	bool ConfigureMultiUserClient(struct FMultiUserClientConfig ClientConfig); // Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa72430
};

