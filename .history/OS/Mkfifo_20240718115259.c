// Mkfifo.c - To create a named pipe

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    int res;

    // Create a named pipe with the name "fifol"
    res = mkfifo("fifol", 0777); // creates a named pipe with read/write permissions for all
    if (res == 0) {
        printf("Named pipe 'fifol' created successfully\n");
    } else {
        perror("mkfifo"); // Print error message if mkfifo fails
    }

    return 0;
}
