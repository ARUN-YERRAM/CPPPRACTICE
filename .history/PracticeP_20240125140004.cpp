#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    if (index == nums.size()) {
        result.push_back(current);
        return;
    }

    // Exclude the current element
    generateSubsets(nums, index + 1, current, result);

    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, result);

    // Backtrack to exclude the current element for the next iteration
    current.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    generateSubsets(nums, 0, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<std::vector<int>> result = subsets(nums);

    cout << "All Subsets of the Array:" << std::endl;
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << std::endl;
    }

    return 0;
}
