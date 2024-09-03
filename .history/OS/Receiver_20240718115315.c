// Receiver.c - Receive a message from a named pipe

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main() {
    int res, n;
    char buffer[100];

    // Open the named pipe "fifol" for reading
    res = open("fifol", O_RDONLY);
    if (res == -1) {
        perror("open");
        return 1;
    }

    // Read from the named pipe into buffer
    n = read(res, buffer, sizeof(buffer));
    if (n == -1) {
        perror("read");
        close(res);
        return 1;
    }

    printf("Receiver Process with PID %d received data: '%s'\n", getpid(), buffer);

    close(res); // Close the pipe

    return 0;
}
