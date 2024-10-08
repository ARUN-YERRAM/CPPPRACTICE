#include <vector>
#include <algorithm>
using namespace std;

int findMaximumZeroes(vector<int>& arr) {
    // Find the minimum value in the array
    int minValue = *min_element(arr.begin(), arr.end());
    
    // The maximum number of zeroes we can achieve is the number of elements in the array
    // because we can reduce every element to zero minValue times.
    return count_if(arr.begin(), arr.end(), [minValue](int x) {
        return x <= minValue;
    });
}