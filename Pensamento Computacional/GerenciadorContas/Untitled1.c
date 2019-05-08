#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
HANDLE wHnd;    // Handle to write to the console.
HANDLE rHnd;    // Handle to read from the console.
int main()
{
    // Set up the handles for reading/writing:
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
     SMALL_RECT windowSize = {0, 0, 50, 30};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    // Change the console window size:
        // Create a COORD to hold the buffer size:
    COORD bufferSize = {50, 50};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
    // Exit
    return 0;
}

