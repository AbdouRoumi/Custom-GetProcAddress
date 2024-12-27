# Custom-GetProcAddress

## [![Typing SVG](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=2000&pause=1000&width=435&lines=Welcome+to+CustomGetProc+Repo!!!;Explore+Windows+API+Internals;Manually+Resolve+Function+Addresses;Learn+PE+Export+Table+Parsing)](https://git.io/typing-svg)


## NOTE
I will use this function directly in the other malwares, try to check it before seeing the other projects <3 !! Happy Hacking <3
## Overview

Welcome to the **Custom-GetProcessAddress** repository! This project demonstrates a custom implementation of `GetProcAddress`, allowing manual resolution of function addresses from a module's export table. It provides insights into how Windows resolves API calls internally, making it an essential resource for reverse engineers, security enthusiasts, and low-level Windows developers.

The tool walks through the PE (Portable Executable) export directory, retrieves function names, and resolves their addresses without relying on the Windows API's `GetProcAddress`.


## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Example Output](#example-output)
- [Contributing](#contributing)
- [License](#license)

## Features

- Manual resolution of function addresses from PE export tables.
- Parsing of DOS and NT headers.
- Access to export directory structures.
- Function name and address resolution.
- Insights into PE file internals.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/CustomGetProc.git
   ```
2. Open the project in Visual Studio.
3. Build the project in Debug or Release mode.

## Usage

1. Compile the program.
2. Run the executable to resolve a function address:
   ```cmd
   CustomGetProc.exe
   ```
3. Example resolution:
   ```cmd
   Original GetProcAddress : 0x00007FF995C50690
Number of Named Functions: 2490
[+] Checking Function: A_SHAFinal
[+] Checking Function: A_SHAInit
[+] Checking Function: A_SHAUpdate
[+] Checking Function: AlpcAdjustCompletionListConcurrencyCount
[+] Checking Function: AlpcFreeCompletionListMessage
[+] Checking Function: AlpcGetCompletionListLastMessageInformation
[+] Checking Function: AlpcGetCompletionListMessageAttributes
[+] Checking Function: AlpcGetHeaderSize
[+] Checking Function: AlpcGetMessageAttribute
[+] Checking Function: AlpcGetMessageFromCompletionList
[+] Checking Function: AlpcGetOutstandingCompletionListMessageCount
[+] Checking Function: AlpcInitializeMessageAttribute
[+] Checking Function: AlpcMaxAllowedMessageLength
[+] Checking Function: AlpcRegisterCompletionList
[+] Checking Function: AlpcRegisterCompletionListWorkerThread
[+] Checking Function: AlpcRundownCompletionList
[+] Checking Function: AlpcUnregisterCompletionList
[+] Checking Function: AlpcUnregisterCompletionListWorkerThread
[+] Checking Function: ApiSetQueryApiSetPresence
[+] Checking Function: ApiSetQueryApiSetPresenceEx
[+] Checking Function: CsrAllocateCaptureBuffer
[+] Checking Function: CsrAllocateMessagePointer
[+] Checking Function: CsrCaptureMessageBuffer
[+] Checking Function: CsrCaptureMessageMultiUnicodeStringsInPlace
[+] Checking Function: CsrCaptureMessageString
[+] Checking Function: CsrCaptureTimeout
[+] Checking Function: CsrClientCallServer
[+] Checking Function: CsrClientConnectToServer
[+] Checking Function: CsrFreeCaptureBuffer
[+] Checking Function: CsrGetProcessId
[+] Checking Function: CsrIdentifyAlertableThread
[+] Checking Function: CsrSetPriorityClass
[+] Checking Function: CsrVerifyRegion
[+] Checking Function: DbgBreakPoint
[+] Checking Function: DbgPrint
[+] Checking Function: DbgPrintEx
[+] Checking Function: DbgPrintReturnControlC
[+] Checking Function: DbgPrompt
[+] Checking Function: DbgQueryDebugFilterState
[+] Checking Function: DbgSetDebugFilterState
[+] Checking Function: DbgUiConnectToDbg
[+] Checking Function: DbgUiContinue
[+] Checking Function: DbgUiConvertStateChangeStructure
[+] Checking Function: DbgUiConvertStateChangeStructureEx
[+] Checking Function: DbgUiDebugActiveProcess
[+] Checking Function: DbgUiGetThreadDebugObject
[+] Checking Function: DbgUiIssueRemoteBreakin
[+] Checking Function: DbgUiRemoteBreakin
[+] Checking Function: DbgUiSetThreadDebugObject
[+] Checking Function: DbgUiStopDebugging
[+] Checking Function: DbgUiWaitStateChange
[+] Checking Function: DbgUserBreakPoint
[+] Checking Function: EtwCheckCoverage
[+] Checking Function: EtwCreateTraceInstanceId
[+] Checking Function: EtwDeliverDataBlock
[+] Checking Function: EtwEnumerateProcessRegGuids
[+] Checking Function: EtwEventActivityIdControl
[+] Checking Function: EtwEventEnabled
[+] Checking Function: EtwEventProviderEnabled
[+] Checking Function: EtwEventRegister
[+] Checking Function: EtwEventSetInformation
[+] Checking Function: EtwEventUnregister
[+] Checking Function: EtwEventWrite
[+] Checking Function: EtwEventWriteEndScenario
[+] Checking Function: EtwEventWriteEx
[+] Checking Function: EtwEventWriteFull
[+] Checking Function: EtwEventWriteNoRegistration
[+] Checking Function: EtwEventWriteStartScenario
[+] Checking Function: EtwEventWriteString
[+] Checking Function: EtwEventWriteTransfer
[+] Checking Function: EtwGetTraceEnableFlags
[+] Checking Function: EtwGetTraceEnableLevel
[+] Checking Function: EtwGetTraceLoggerHandle
[+] Checking Function: EtwLogTraceEvent
[+] Checking Function: EtwNotificationRegister
[+] Checking Function: EtwNotificationUnregister
[+] Checking Function: EtwProcessPrivateLoggerRequest
[+] Checking Function: EtwRegisterSecurityProvider
[+] Checking Function: EtwRegisterTraceGuidsA
[+] Checking Function: EtwRegisterTraceGuidsW
[+] Checking Function: EtwReplyNotification
[+] Checking Function: EtwSendNotification
[+] Checking Function: EtwSetMark
[+] Checking Function: EtwTraceEventInstance
[+] Checking Function: EtwTraceMessage
[+] Checking Function: EtwTraceMessageVa
[+] Checking Function: EtwUnregisterTraceGuids
[+] Checking Function: EtwWriteUMSecurityEvent
[+] Checking Function: EtwpCreateEtwThread
[+] Checking Function: EtwpGetCpuSpeed
[+] Checking Function: EvtIntReportAuthzEventAndSourceAsync
[+] Checking Function: EvtIntReportEventAndSourceAsync
[+] Checking Function: ExpInterlockedPopEntrySListEnd
[+] Checking Function: ExpInterlockedPopEntrySListFault
[+] Checking Function: ExpInterlockedPopEntrySListResume
[+] Checking Function: KiRaiseUserExceptionDispatcher
[+] Checking Function: KiUserApcDispatcher
[+] Checking Function: KiUserCallbackDispatcher
[+] Checking Function: KiUserExceptionDispatcher
[+] Checking Function: KiUserInvertedFunctionTable
[+] Checking Function: LdrAccessResource
[+] Checking Function: LdrAddDllDirectory
[+] Checking Function: LdrAddLoadAsDataTable
[+] Checking Function: LdrAddRefDll
[+] Checking Function: LdrAppxHandleIntegrityFailure
[+] Checking Function: LdrCallEnclave
[+] Checking Function: LdrControlFlowGuardEnforced
[+] Checking Function: LdrCreateEnclave
[+] Checking Function: LdrDeleteEnclave
[+] Checking Function: LdrDisableThreadCalloutsForDll
[+] Checking Function: LdrEnumResources
[+] Checking Function: LdrEnumerateLoadedModules
[+] Checking Function: LdrFastFailInLoaderCallout
[+] Checking Function: LdrFindEntryForAddress
[+] Checking Function: LdrFindResourceDirectory_U
[+] Checking Function: LdrFindResourceEx_U
[+] Checking Function: LdrFindResource_U
[+] Checking Function: LdrFlushAlternateResourceModules
[+] Checking Function: LdrGetDllDirectory
[+] Checking Function: LdrGetDllFullName
[+] Checking Function: LdrGetDllHandle
[+] Checking Function: LdrGetDllHandleByMapping
[+] Checking Function: LdrGetDllHandleByName
[+] Checking Function: LdrGetDllHandleEx
[+] Checking Function: LdrGetDllPath
[+] Checking Function: LdrGetFailureData
[+] Checking Function: LdrGetFileNameFromLoadAsDataTable
[+] Checking Function: LdrGetKnownDllSectionHandle
[+] Checking Function: LdrGetProcedureAddress
[+] Checking Function: LdrGetProcedureAddressEx
[+] Checking Function: LdrGetProcedureAddressForCaller
[+] Checking Function: LdrHotPatchNotify
[+] Checking Function: LdrInitShimEngineDynamic
[+] Checking Function: LdrInitializeEnclave
[+] Checking Function: LdrInitializeThunk
[+] Checking Function: LdrIsModuleSxsRedirected
[+] Checking Function: LdrLoadAlternateResourceModule
[+] Checking Function: LdrLoadAlternateResourceModuleEx
[+] Checking Function: LdrLoadDll
[+] Checking Function: LdrLoadEnclaveModule
[+] Checking Function: LdrLockLoaderLock
[+] Checking Function: LdrOpenImageFileOptionsKey
[+] Checking Function: LdrProcessInitializationComplete
[+] Checking Function: LdrProcessRelocationBlock
[+] Checking Function: LdrProcessRelocationBlockEx
[+] Checking Function: LdrQueryImageFileExecutionOptions
[+] Checking Function: LdrQueryImageFileExecutionOptionsEx
[+] Checking Function: LdrQueryImageFileKeyOption
[+] Checking Function: LdrQueryModuleServiceTags
[+] Checking Function: LdrQueryOptionalDelayLoadedAPI
[+] Checking Function: LdrQueryProcessModuleInformation
[+] Checking Function: LdrRegisterDllNotification
[+] Checking Function: LdrRemoveDllDirectory
[+] Checking Function: LdrRemoveLoadAsDataTable
[+] Checking Function: LdrResFindResource
[+] Checking Function: LdrResFindResourceDirectory
[+] Checking Function: LdrResGetRCConfig
[+] Checking Function: LdrResRelease
[+] Checking Function: LdrResSearchResource
[+] Checking Function: LdrResolveDelayLoadedAPI
[+] Checking Function: LdrResolveDelayLoadsFromDll
[+] Checking Function: LdrRscIsTypeExist
[+] Checking Function: LdrSetAppCompatDllRedirectionCallback
[+] Checking Function: LdrSetDefaultDllDirectories
[+] Checking Function: LdrSetDllDirectory
[+] Checking Function: LdrSetDllManifestProber
[+] Checking Function: LdrSetImplicitPathOptions
[+] Checking Function: LdrSetMUICacheType
[+] Checking Function: LdrShutdownProcess
[+] Checking Function: LdrShutdownThread
[+] Checking Function: LdrStandardizeSystemPath
[+] Checking Function: LdrSystemDllInitBlock
[+] Checking Function: LdrUnloadAlternateResourceModule
[+] Checking Function: LdrUnloadAlternateResourceModuleEx
[+] Checking Function: LdrUnloadDll
[+] Checking Function: LdrUnlockLoaderLock
[+] Checking Function: LdrUnregisterDllNotification
[+] Checking Function: LdrUpdatePackageSearchPath
[+] Checking Function: LdrVerifyImageMatchesChecksum
[+] Checking Function: LdrVerifyImageMatchesChecksumEx
[+] Checking Function: LdrpResGetMappingSize
[+] Checking Function: LdrpResGetResourceDirectory
[+] Checking Function: MD4Final
[+] Checking Function: MD4Init
[+] Checking Function: MD4Update
[+] Checking Function: MD5Final
[+] Checking Function: MD5Init
[+] Checking Function: MD5Update
[+] Checking Function: MicrosoftTelemetryAssertTriggeredUM
[+] Checking Function: NlsAnsiCodePage
[+] Checking Function: NlsMbCodePageTag
[+] Checking Function: NlsMbOemCodePageTag
[+] Checking Function: NtAcceptConnectPort
[+] Checking Function: NtAccessCheck
[+] Checking Function: NtAccessCheckAndAuditAlarm
[+] Checking Function: NtAccessCheckByType
[+] Checking Function: NtAccessCheckByTypeAndAuditAlarm
[+] Checking Function: NtAccessCheckByTypeResultList
[+] Checking Function: NtAccessCheckByTypeResultListAndAuditAlarm
[+] Checking Function: NtAccessCheckByTypeResultListAndAuditAlarmByHandle
[+] Checking Function: NtAcquireCrossVmMutant
[+] Checking Function: NtAcquireProcessActivityReference
[+] Checking Function: NtAddAtom
[+] Checking Function: NtAddAtomEx
[+] Checking Function: NtAddBootEntry
[+] Checking Function: NtAddDriverEntry
[+] Checking Function: NtAdjustGroupsToken
[+] Checking Function: NtAdjustPrivilegesToken
[+] Checking Function: NtAdjustTokenClaimsAndDeviceGroups
[+] Checking Function: NtAlertResumeThread
[+] Checking Function: NtAlertThread
[+] Checking Function: NtAlertThreadByThreadId
[+] Checking Function: NtAllocateLocallyUniqueId
[+] Checking Function: NtAllocateReserveObject
[+] Checking Function: NtAllocateUserPhysicalPages
[+] Checking Function: NtAllocateUserPhysicalPagesEx
[+] Checking Function: NtAllocateUuids
[+] Checking Function: NtAllocateVirtualMemory
[0217] FOUND API -       NAME: NtAllocateVirtualMemory -        ADDRESS: 0x00007FF995C50690 -   ORDINAL: 218
GetProcAddress Replacement : 0x00007FF995C50690

```

## Example Output

```
[+] Original GetProcAddress : 0x00007FF995C50690
[+] GetProcAddress Replacement : 0x00007FF995C50690
[0001] FOUND API -   NAME : NtAllocateVirtualMemory -   ADDRESS : 0x7FF995C50690 -   ORDINAL : 123
```

## How It Works

- Parses the DOS and NT headers of the loaded module.
- Accesses the export directory via the DataDirectory field.
- Iterates through function names and resolves their addresses using ordinals.
- Compares each function name with the requested one.

## Contributing

Contributions are welcome! If you encounter issues or have ideas for improvements, feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE.txt).

---
**Happy API Resolving! 🛡️**

> *"Understanding PE structures unlocks the secrets of Windows internals."*

