Experiment 5
Consider the following snapshot of a system. P0, P1, P2, P3, P4 are the processes and A, B, C, D are the resource types. The values in the table indicates the number of instances of a specific resource (for example: 3 3 2 1 under the last column indicates that there are 3 A-type, 3 B-type, 2 C-type and 1 D-type resources are available after allocating the resources to all five processes). The numbers under allocation-column indicate that those number of resources are allocated to various processes mentioned in the first column. The numbers under Max-column indicate the maximum number of resources required by the processes. For example: in 1st row under allocation-column 2001 indicate there are 2 A-type, 0 B-type, 0 C-type and 1 D-type resources are allocated to process P0. Whereas 4 2 1 2 under Max-column indicate that process PO's maximum requirement is 4 A-type, 2 B-type, 1 C-type and 2 D-typeresources.
Process
Allocation ABCD
Max ABCD
Available ABCD
Po
P1
2001
3121
4212
3321
P2
P3
2103
5252
2316
1312
1424
P4
1432
3665
Answer the following questions using banker's algorithm by providing all intermediate steps
How many instances of resources are present in the system under each type of a resource?
Compute the Need matrix for the given snapshot of a system.
Verify whether the snapshot of the present system is in a safe state by demonstrating an order in which the processes may complete. iv. If a request from process P1 arrives for (1,1,0,0), can the request be granted immediately? v. If a request from process P4 arrives for (0,0,2,0), can the request be granted immediately?
PROGRAM
#include <stdio.h>
int main() {
// P0, P1, P2, P3, P4 are the Process names here int n, m, i, j, k, n=5; // Number of processes m3; // Number of resources int alloc[5][3]={{0,1,0}, // PO // Allocation Matrix {2,0,0}, //P1 {3, 0, 2}, // P2 {2, {2,1,1 1, 1}, // P3 {0, 0, 2} }; // P4 int max[5][3]={{7,5,3}, // PO // MAX Matrix {3,2,2}, // P1
{9, 0, 2}, // P2