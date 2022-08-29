# Ekko_CFG_Bypass
A PoC for adding NtContinue to the CFG allowed list in order to make callback-based sleep obfuscation techniques work in a CFG protected process.  

Use the markCFGValid_std function to call SetProcessValidCallTargets and the markCFGValid_nt function to call NtSetInformationVirtualMemory.

Sleep obfuscation code (left unchanged) from https://github.com/Cracked5pider/Ekko.

Supporting blog post: https://icebreaker.team/blogs/sleeping-with-control-flow-guard/
