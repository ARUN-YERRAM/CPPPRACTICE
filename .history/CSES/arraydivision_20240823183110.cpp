// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
#include<bits/stdc++.h>
using namespace std;

bool canDivide(const vector<long long int>& arr, int maxSum, int k) {
    int currentSum = 0;
    int requiredSubarrays = 1;

    for (long long int num : arr) {
        if (currentSum + num > maxSum) {
            requiredSubarrays++;
            currentSum = num; 
            if (requiredSubarrays > k) {
                return false;
            }
        } else {
            currentSum += num;
        }
    }

    return true;
}

int findMinimumMaxSubarraySum(const vector<int>& arr, int k) {
    long long int left = *max_element(arr.begin(), arr.end());
    long long int right = accumulate(arr.begin(), arr.end(), 0);
    long long int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canDivide(arr, mid, k)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << findMinimumMaxSubarraySum(arr, k) << endl;

    return 0;
}
