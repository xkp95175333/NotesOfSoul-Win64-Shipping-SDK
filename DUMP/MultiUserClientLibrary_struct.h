// Enum MultiUserClientLibrary.EMultiUserConnectionStatus
enum class EMultiUserConnectionStatus : uint8 {
	Connecting,
	Connected,
	Disconnecting,
	Disconnected,
	EMultiUserConnectionStatus_MAX,
};

// Enum MultiUserClientLibrary.EMultiUserSourceValidationMode
enum class EMultiUserSourceValidationMode : uint8 {
	Hard,
	Soft,
	SoftAutoProceed,
	EMultiUserSourceValidationMode_MAX,
};

// Enum MultiUserClientLibrary.EMultiUserConnectionError
enum class EMultiUserConnectionError : uint8 {
	None,
	Canceled,
	ConnectionAttemptAborted,
	ServerNotResponding,
	ServerError,
	WorkspaceValidationUnknown,
	SourceControlValidationUnknown,
	SourceControlValidationCanceled,
	SourceControlValidationError,
	DirtyPackageValidationError,
	EMultiUserConnectionError_MAX,
};

// ScriptStruct MultiUserClientLibrary.MultiUserClientConfig
// Size: 0x38 (Inherited: 0x00)
struct FMultiUserClientConfig {
	struct FString DefaultServerURL; // 0x00(0x10)
	struct FString DefaultSessionName; // 0x10(0x10)
	struct FString DefaultSessionToRestore; // 0x20(0x10)
	enum class EMultiUserSourceValidationMode ValidationMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct MultiUserClientLibrary.MultiUserConnectionError
// Size: 0x20 (Inherited: 0x00)
struct FMultiUserConnectionError {
	enum class EMultiUserConnectionError ErrorCode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText ErrorMessage; // 0x08(0x18)
};

// ScriptStruct MultiUserClientLibrary.MultiUserClientInfo
// Size: 0x40 (Inherited: 0x00)
struct FMultiUserClientInfo {
	struct FGuid ClientEndpointId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FLinearColor AvatarColor; // 0x20(0x10)
	struct TArray<struct FName> Tags; // 0x30(0x10)
};

