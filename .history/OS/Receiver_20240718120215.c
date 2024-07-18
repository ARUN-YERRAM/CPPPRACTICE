// Receiver.c - Receive a message from a named pipe on Windows

#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hPipe;
    DWORD dwRead;
    char buffer[100];

    // Open the named pipe for reading
    hPipe = CreateFile("\\\\.\\pipe\\fifol", GENERIC_READ, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hPipe == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "Failed to open named pipe. Error %d\n", GetLastError());
        return 1;
    }

    // Read from the named pipe
    if (!ReadFile(hPipe, buffer, sizeof(buffer), &dwRead, NULL)) {
        fprintf(stderr, "Failed to read from named pipe. Error %d\n", GetLastError());
        CloseHandle(hPipe);
        return 1;
    }

    printf("Receiver Process with PID %d received data: '%s'\n", GetCurrentProcessId(), buffer);

    CloseHandle(hPipe);

    return 0;
}
