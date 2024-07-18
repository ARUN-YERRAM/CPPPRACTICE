// Mkfifo.c - Create a named pipe using Windows API

#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hPipe;

    // Create a named pipe
    hPipe = CreateNamedPipe("\\\\.\\pipe\\fifol", PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT, 1, 1024, 1024, NMPWAIT_USE_DEFAULT_WAIT, NULL);
    if (hPipe == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "Failed to create named pipe. Error %d\n", GetLastError());
        return 1;
    }

    printf("Named pipe 'fifol' created successfully\n");

    CloseHandle(hPipe);

    return 0;
}
