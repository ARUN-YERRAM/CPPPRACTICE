// Sender.c - Send a message through a named pipe on Windows

#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hPipe;
    DWORD dwWritten;
    char message[] = "Hello, Receiver!";

    // Open the named pipe for writing
    hPipe = CreateFile("\\\\.\\pipe\\fifol", GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hPipe == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "Failed to open named pipe. Error %d\n", GetLastError());
        return 1;
    }

    // Write to the named pipe
    if (!WriteFile(hPipe, message, sizeof(message), &dwWritten, NULL)) {
        fprintf(stderr, "Failed to write to named pipe. Error %d\n", GetLastError());
        CloseHandle(hPipe);
        return 1;
    }

    printf("Sender Process with PID %d sent the message: '%s'\n", GetCurrentProcessId(), message);

    CloseHandle(hPipe);

    return 0;
}
