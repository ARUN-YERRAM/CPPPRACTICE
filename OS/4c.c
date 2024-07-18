// c) Write a C program to allow cooperating process to lock a resource for exclusive use (using semaphore)
// PROGRAM:
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



sleep(1); //thread1 is preempted by thread 2
shared=x; //thread one updates the value of shared variable
printf("\nValue of shared variable updated by Thread1 is: %d\n",shared); sem_post(&s);
}
void *fun2()
{
int y;
printf("\nWe are in func2()\n");
printf("\nfun2() is blocked until func1() executes"); sem_wait(&s);
y=shared;//thread2 reads value of shared variable 
printf("\nFunc2() resumes its execution after func1()"); 
printf("\nThread2 reads the value as %d\n",y);
 y--; //thread2 increments its value 
 printf("\nLocalupdation by Thread2: %d\n",y);
  sleep(1); //thread2 is preempted by thread 1 
   shared = y; //thread2 updates the value of shared variable 
   printf("\nValue of shared variable updated by Thread2 is: %d\n",shared); sem_post(&s);
}