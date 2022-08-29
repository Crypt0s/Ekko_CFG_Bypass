# Ekko_CFG_Bypass
A PoC for adding NtContinue to CFG allowed list in order to make Ekko work in a CFG protected process.  

Use markCFGValid_std to use SetProcessValidCallTargets and markCFGValid_nt to use NtSetInformationVirtualMemory.

Sleep obfuscation code (left unchanged) from https://github.com/Cracked5pider/Ekko.

Supporting blog post: https://icebreaker.team/blogs/sleeping-with-control-flow-guard/
