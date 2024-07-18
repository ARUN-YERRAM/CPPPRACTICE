// Experiment 6
// Write a C program to simulate the following memory management technique: Paging
// Program:
// /*Write a C program to simulate Paging in Memory Management
// #include<stdio.h>
// #define MAX 50
// int main()
// {
// int page[MAX],i,n,f,ps,off,pno;
// int choice=0;
// printf("Enter the no of pages in memory: ");
// scanf("%d",&n);
// printf("\nEnter page size: ");
// scanf("%d",&ps);
// printf("\nEnter no of frames: ");
// scanf("%d",&f);
// for(i=0;i<n;i++)
// page[i]=-1;
// printf("\nEnter the page table\n");
// printf("(Enter frame no as -1 if that page is not present in any frame)\n");
// printf("\npageno\tframeno\n------\t-----");
// for(i=0;i<n;i++)
// printf("\n%d\t",i);
// scanf("%d",&page[i]);
// }
// do