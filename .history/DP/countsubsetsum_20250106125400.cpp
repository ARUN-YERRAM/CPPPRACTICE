#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int Recrse(int arr[], int tar, int i) {
    if(tar == 0) return 1; // If target is reached, count this as a valid way
    if(i == 0) return 0;   // If no elements left to pick from, no valid way

    if(arr[i-1] <= tar) 
        return Recrse(arr, tar-arr[i-1], i-1) + Recrse(arr, tar, i-1); // Include or exclude the current element
    else 
        return Recrse(arr, tar, i-1); // Exclude the current element if it's larger than target
}

int RecrseMem(int arr[],int tar ,int i,vector<vector<int>>&dp){
    if(tar==0) return 1;
    if(i==0) return 0;
    if(dp[i][tar]!=-1) return dp[i][tar];
    if(arr[i-1]<=tar) return dp[i][tar]=RecrseMem(arr,tar-arr[i-1],i-1,dp)+RecrseMem(arr,tar,i-1,dp);
    else return dp[i][tar]=RecrseMem(arr,tar,i-1,dp);
}

int RecrseDP(int arr[], int tar, int n) {
    vector<vector<int>> dp(n+1, vector<int>(tar+1, 0));

    // Base Case: If target is 0, there's 1 way to make the sum (by not selecting any element)
    for(int i = 0; i <= n; i++) dp[i][0] = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= tar; j++) {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j]; // Include or exclude the current element
            else 
                dp[i][j] = dp[i-1][j]; // Exclude the current element
        }
    }

    return dp[n][tar]; // Return the number of ways to form 'tar' using 'n' elements
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int tar = 6;

    // Recursive version
    cout << "Number of ways (Recursive): " << Recrse(arr, tar, n) << endl;

    // Dynamic programming version
    cout << "Number of ways (DP): " << RecrseDP(arr, tar, n) << endl;

    return 0;
}
