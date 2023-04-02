#ifndef MM_PSP_DEBUG
#define MM_PSP_DEBUG

#include <pspdebug.h>

void WriteLine(char* text) {
    pspDebugScreenPrintf(text);
    pspDebugScreenPrintf("\n");
}
void ClearScreen() {
    pspDebugScreenClear();
}

void EnableBackgroundColor() {
    pspDebugScreenEnableBackColor(1);
}
void DisableBackgroundColor() {
    pspDebugScreenEnableBackColor(0);
}
void SetBackgroundColor(u32 color) {
    pspDebugScreenSetBackColor(color);
}

#endif /* MM_PSP_DEBUG */