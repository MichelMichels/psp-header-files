#ifndef MM_PSP_INIT
#define MM_PSP_INIT

#include <pspkernel.h>
#include <pspdebug.h>

int ExitCallback(int arg1, int arg2, void* common);
int CallbackThread(SceSize args, void* argp);
int SetupCallbacks(void);
int Initialize(void);

#endif /* MM_PSP_INIT */