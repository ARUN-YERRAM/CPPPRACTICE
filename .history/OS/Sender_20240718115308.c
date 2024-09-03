// Sender.c - Send a message through a named pipe

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main() {
    int res, n;
    char *message = "Hello, Receiver!";
    int message_len = strlen(message) + 1; // +1 for null terminator

    // Open the named pipe "fifol" for writing
    res = open("fifol", O_WRONLY);
    if (res == -1) {
        perror("open");
        return 1;
    }

    // Write message to the named pipe
    n = write(res, message, message_len);
    if (n == -1) {
        perror("write");
        close(res);
        return 1;
    }

    printf("Sender Process with PID %d sent the message: '%s'\n", getpid(), message);

    close(res); // Close the pipe

    return 0;
}
