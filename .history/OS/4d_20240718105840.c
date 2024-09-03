c) Write a C program to allow cooperating process to lock a resource for exclusive use (using semaphore)
PROGRAM:
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <unistd.h>
void *fun1();
void *fun2();
int shared=1; //shared variable
sem_t s; //semaphore variable
int main()
{ sem_init(&s,0,1); //initialize semaphore variable 1st argument is address of variable, 2nd is number of processes sharing semaphore, 3rd argument is the initial value of semaphore variable
pthread_t thread1, thread2;
pthread_create(&thread1, NULL, fun1, NULL);
pthread_create(&thread2, NULL, fun2, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
printf("\nFinal value of shared is %d\n",shared); //prints the last updated value of shared variable
}
void *fun1()
{
int x;
printf("\nWe are in func1()\n");
sem_wait(&s);//executes wait operation on s
x=shared;//thread1 reads value of shared variable
printf("\nThread1l reads the value as %d\n",x); x++; //thread1 increments its value
printf("Local updation by Thread1: %d\n",x);