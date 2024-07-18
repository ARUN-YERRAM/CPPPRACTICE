Experiment 7
a) Write a C program that takes one or more file/directory names as command line input and reports following information i) File Type ii) Number of Links iii) Time of last Access iv) Read, write and execute permissions.
PROGRAM:
#include<stdio.h>
#include<sys/stat.h>
#include<time.h>
int main(int argc, char *argv[])
{
int i,j;
struct stat a;
for(i=1;i<argc;i++)
{
printf("%s\n",argv[i]);
stat(argv[i],&a);
if(S_ISDIR(a.st_mode))
{
printf("Is a directory\n");
}
else
{
printf("Is a regular file\n");
}
printf("FILE PROPERTIES\n");