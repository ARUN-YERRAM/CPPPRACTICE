#include<bits/stdc++.h>
using namespace std;

bool Recrse(vector<int>&arr,int n,int sum){
    
    if (sum == 0) return true;  // If sum becomes 0, we found a subset
    if (n == 0) return false;   // If no elements left and sum is not 0, no solution exists

    // If the current element is greater than the sum, ignore it
    if (arr[n - 1] > sum) {
        return Recrse(arr, n - 1, sum);
    }

    // Check including or excluding the current element
    return Recrse(arr, n - 1, sum - arr[n - 1]) || Recrse(arr, n - 1, sum);
    
}

int main(){
    return Recrse(arr,n,sum);
    return 0;
}