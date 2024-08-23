#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool canDivide(const vector<long long>& arr, long long maxSum, long long k) {
    long long currentSum = 0;
    long long countSubarrays = 1; // We need at least one subarray

    for (long long num : arr) {
        if (currentSum + num > maxSum) {
            countSubarrays++;
            currentSum = num; // Start a new subarray
            if (countSubarrays > k) {
                return false; // More than k subarrays needed
            }
        } else {
            currentSum += num;
        }
    }

    return true;
}

long long findMinimumMaxSubarraySum(const vector<long long>& arr, long long k) {
    long long left = *max_element(arr.begin(), arr.end());
    long long right = accumulate(arr.begin(), arr.end(), 0LL);
    long long result = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canDivide(arr, mid, k)) {
            result = mid;
            right = mid - 1; // Try to find a smaller maximum sum
        } else {
            left = mid + 1; // Increase the maximum sum
        }
    }

    return result;
}

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << findMinimumMaxSubarraySum(arr, k) << endl;

    return 0;
}
