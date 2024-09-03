b) Write a C program that receives a message from message queue and display them.
PROGRAM:
Message Queue Sender:
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX_TEXT 512 //maximum length of the message that can be sent allowed
struct my_msg{
long int msg type;
char some_text[MAX_TEXT];
};
int main()
{
int running-1;
int msgid;
struct my_msgsome_data;
char buffer[50]; //array to store user input
msgid=msgget((key_t)12345,0666|IPC_CREAT);
if (msgid=-1) // -1 means the message queue is not created
{
printf("Error in creating queue\n");
exit(0);
}
while(running)
{
printf("Enter some text:\n");
fgets(buffer,50,stdin);
some_data.msg_type=1;
strcpy(some_data.some_text,buffer);
if(msgsnd(msgid,(void *)&some_data, MAX_TEXT,0)=-1) // msgsnd returns -1 if the message is not sent