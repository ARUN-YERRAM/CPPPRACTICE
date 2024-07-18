// d) Write a C program that illustrate the suspending and resuming process using signal
// PROGRAM:
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
int pid=fork();
if(pid=-1)
{
printf("\nChild not created\n");
}
if(pid=0)
{
printf("\nChild created");
}
else
{
printf("\nParent process\n");
kill(pid, SIGSTOP);
sleep(5);
kill(pid, SIGCONT);
sleep(10);
printf("\nParent got control back\n");
kill(pid, SIGKILL);
wait(NULL);
}
return 0;
}