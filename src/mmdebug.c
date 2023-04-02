#include <mmdebug.h>

void Write(char* text) {
    pspDebugScreenPrintf(text);
}
void WriteLine(char* text) {
    Write(text);
    Write("\n");
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
