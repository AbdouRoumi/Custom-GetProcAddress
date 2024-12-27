#include <Windows.h>
#include <stdio.h>
#include <winternl.h>

FARPROC CustomGetProcProcess(IN HMODULE hModule , IN LPCSTR FuncName) {

	PBYTE pBase = (PBYTE)hModule;


	//Getting the dos header and making the signature check
	PIMAGE_DOS_HEADER pImgDosHdr = (PIMAGE_DOS_HEADER)pBase;
	if (pImgDosHdr->e_magic != IMAGE_DOS_SIGNATURE) {
		return NULL;
	}

	//Getting the nt headers and doing a signature check
	PIMAGE_NT_HEADERS pImgNtHdrs = (PIMAGE_NT_HEADERS)(pImgDosHdr->e_lfanew + pBase);
	if (pImgNtHdrs->Signature != IMAGE_NT_SIGNATURE) {
		return NULL;
	}
	//Getting the optional header

}