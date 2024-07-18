// Experiment 5

// Consider the following snapshot of a system. P0, P1, P2, P3, P4 are the processes and A, B, C, D are the resource types. The values in the table indicate the number of instances of a specific resource (for example: 3 3 2 1 under the last column indicates that there are 3 A-type, 3 B-type, 2 C-type, and 1 D-type resources are available after allocating the resources to all five processes). The numbers under allocation-column indicate that those numbers of resources are allocated to various processes mentioned in the first column. The numbers under Max-column indicate the maximum number of resources required by the processes. For example: in 1st row under allocation-column 2 0 0 1 indicate there are 2 A-type, 0 B-type, 0 C-type and 1 D-type resources are allocated to process P0. Whereas 4 2 1 2 under Max-column indicate that process P0’s maximum requirement is 4 A-type, 2 B-type, 1 C-type and 2 D-type resources.

// Table:

// Process	Allocation	Max	Available
// P0	2 0 0 1	4 2 1 2	3 3 2 1
// P1	3 1 2 1	5 2 5 2	
// P2	2 1 0 3	2 3 1 6	
// P3	1 3 2 1	1 4 2 4	
// P4	1 4 3 2	3 6 6 5	
// Questions:

// How many instances of resources are present in the system under each type of resource?
// Compute the Need matrix for the given snapshot of a system.
// Verify whether the snapshot of the present system is in a safe state by demonstrating an order in which the processes may complete.
// If a request from process P1 arrives for (1,1,0,0), can the request be granted immediately?
// If a request from process P4 arrives for (0,0,2,0), can the request be granted immediately?



#include <stdio.h>


int main() {
    // P0, P1, P2, P3, P4 are the Process names here
    int n, m, i, j, k;
    n = 5; // Number of processes
    m = 3; // Number of resources

    int alloc[5][3] = { { 0, 1, 0 }, // P0 
                        { 2, 0, 0 }, // P1 
                        { 3, 0, 2 }, // P2 
                        { 2, 1, 1 }, // P3 
                        { 0, 0, 2 } }; // P4 

    int max[5][3] = { { 7, 5, 3 }, // P0 
                      { 3, 2, 2 }, // P1 
                      { 9, 0, 2 }, // P2 
                      { 2, 2, 2 }, // P3 
                      { 4, 3, 3 } }; // P4 

    int avail[3] = { 3, 3, 2 }; // Available Resources

    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
        f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int y = 0;
    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    printf("Following is the SAFE Sequence\n");
    for (i = 0; i < n - 1; i++) {
        printf(" P%d ->", ans[i]);
    }
    printf(" P%d", ans[n - 1]);

    return (0);
}


