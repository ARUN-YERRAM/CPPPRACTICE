#include <iostream>
#include <vector>

void generateSubsets(std::vector<int>& nums, int index, std::vector<int>& current, std::vector<std::vector<int>>& result) {
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

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> current;
    generateSubsets(nums, 0, current, result);
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> result = subsets(nums);

    std::cout << "All Subsets of the Array:" << std::endl;
    for (const auto& subset : result) {
        std::cout << "[ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
