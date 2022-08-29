#include <windows.h>
#include <stdio.h>
#include "CFG.h"
#include "Ekko.h"




int main()
{
    puts("[*] Ekko Sleep Obfuscation by C5pider\n");

    puts("[+] Allowing NtContinue to be called...");
    PVOID NtContinue = GetProcAddress(GetModuleHandleA("Ntdll"), "NtContinue");
    if (!markCFGValid_nt(NtContinue))
    {
        puts("[!!] Something went horribly wrong!");
        return;
    }
    puts("[+] Success! You may NtContinue.");
    puts("[+] Starting Ekko...\n");
    
    do
    {
        // Start Sleep Obfuscation
        EkkoObf(4 * 1000);
    }   while (TRUE);

    return 0;
}
