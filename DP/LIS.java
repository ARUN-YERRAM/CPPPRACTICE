/*
Given an integer array nums, return the length of the longest strictly increasing 
subsequence
.
Example 1:

Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.


Example 2:
Input: nums = [0,1,0,3,2,3]
Output: 4

Example 3:
Input: nums = [7,7,7,7,7,7,7]
Output: 1


case=1
input=
8
10 9 2 5 3 7 101 18
output=
4

case=2
input=
6
0 1 0 3 2 3
output=
4

case=3
input=
7
7 7 7 7 7 7 7
output=
1
*/

import java.util.*;

public class LIS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // Read number of elements
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt(); // Read each element of the array
        }
        
        // Initialize dp array, where dp[i] stores the length of the longest increasing subsequence ending at index i
        int[] dp = new int[n];
        Arrays.fill(dp, 1); // Every element can at least be a subsequence of length 1

        // Fill dp array using dynamic programming approach
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j]) { // If arr[i] can extend the subsequence ending at arr[j]
                    dp[i] = Math.max(dp[i], dp[j] + 1); // Update dp[i]
                }
            }
        }
        
        // The result will be the maximum value in dp array
        int result = Arrays.stream(dp).max().getAsInt();
        System.out.println(result); // Output the length of the longest increasing subsequence
    }
}

