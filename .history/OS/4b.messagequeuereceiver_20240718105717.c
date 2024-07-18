#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct my_msg {
    long int msg_type;
    char some_text[BUFSIZ];
};

int main() {
    int running = 1;
    int msgid;
    struct my_msg some_data;
    long int msg_to_rec = 0;

    // Create message queue
    msgid = msgget((key_t)12345, 0666 | IPC_CREAT);
    if (msgid == -1) {
        printf("Error in creating queue\n");
        exit(1);
    }

    while (running) {
        // Receive message
        if (msgrcv(msgid, (void *)&some_data, BUFSIZ, msg_to_rec, 0) == -1) {
            printf("Error in receiving message\n");
            exit(1);
        }
        printf("Data received: %s\n", some_data.some_text);

        // Check for end condition
        if (strncmp(some_data.some_text, "end", 3) == 0) {
            running = 0;
        }
    }

    // Remove message queue
    if (msgctl(msgid, IPC_RMID, 0) == -1) {
        printf("Error in removing queue\n");
        exit(1);
    }

    return 0;
}
