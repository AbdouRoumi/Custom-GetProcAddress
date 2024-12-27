#include <Windows.h>
#include <stdio.h>
#include <winternl.h>

FARPROC CustomGetProcProcess(IN HMODULE hModule, IN LPCSTR FuncName) {
    PBYTE pBase = (PBYTE)hModule;

    // Getting the DOS header and checking the signature
    PIMAGE_DOS_HEADER pImgDosHdr = (PIMAGE_DOS_HEADER)pBase;
    if (pImgDosHdr->e_magic != IMAGE_DOS_SIGNATURE) {
        return NULL;
    }

    // Getting the NT headers and checking the signature
    PIMAGE_NT_HEADERS pImgNtHdrs = (PIMAGE_NT_HEADERS)(pImgDosHdr->e_lfanew + pBase);
    if (pImgNtHdrs->Signature != IMAGE_NT_SIGNATURE) {
        return NULL;
    }

    // Getting the optional header
    IMAGE_OPTIONAL_HEADER ImgOptHdr = pImgNtHdrs->OptionalHeader;

    // Getting the export table
    PIMAGE_EXPORT_DIRECTORY pImgExportDir = (PIMAGE_EXPORT_DIRECTORY)(pBase + ImgOptHdr.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);

    // Getting the function name array
    PDWORD FunctionNameArray = (PDWORD)(pBase + pImgExportDir->AddressOfNames);

    // Getting the func address array
    PDWORD FunctionAddressArray = (PDWORD)(pBase + pImgExportDir->AddressOfFunctions);

    // Getting the func ordinal array
    PWORD FunctionOrdinalArray = (PWORD)(pBase + pImgExportDir->AddressOfNameOrdinals); // Use PWORD, not PDWORD

    printf("Number of Named Functions: %d\n", pImgExportDir->NumberOfNames);

    for (DWORD i = 0; i < pImgExportDir->NumberOfNames; i++) { // Iterate over NumberOfNames
        // Getting the name of the function
        CHAR* pFunctionName = (CHAR*)(pBase + FunctionNameArray[i]);

        // Getting the address of the function through its ordinal
        FARPROC pFunctionAddress = (FARPROC)(pBase + FunctionAddressArray[FunctionOrdinalArray[i]]);

        printf("[+] Checking Function: %s\n", pFunctionName);

        // Searching for the function
        if (strcmp(FuncName, pFunctionName) == 0) {
            printf("[%04d] FOUND API - \t NAME: %s - \tADDRESS: 0x%p - \tORDINAL: %d\n",
                i, pFunctionName, pFunctionAddress, FunctionOrdinalArray[i]);
            return pFunctionAddress;
        }
    }

    printf("[-] Function not found.\n");
    return NULL;
}

int main() {
    printf("Original GetProcAddress : 0x%p \n", GetProcAddress(GetModuleHandleA("NTDLL.DLL"), "NtAllocateVirtualMemory"));
    printf("GetProcAddress Replacement : 0x%p \n", CustomGetProcProcess(GetModuleHandleA("NTDLL.DLL"), "NtAllocateVirtualMemory"));

    return 0;
}
