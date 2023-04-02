#ifndef MM_PSP_DEBUG
#define MM_PSP_DEBUG

#include <pspdebug.h>

void Write(char* text);
void WriteLine(char* text);
void ClearScreen();

void EnableBackgroundColor();
void DisableBackgroundColor();
void SetBackgroundColor(u32 color);

#endif /* MM_PSP_DEBUG */