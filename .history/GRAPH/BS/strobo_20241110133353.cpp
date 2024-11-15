#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isStrobogrammaticHelper(const string& num, int left, int right, const unordered_map<char, char>& strobogrammaticPairs) {
    // Base case: If we've checked all pairs
    if (left > right) return true;

    // Check if the current pair (num[left], num[right]) is valid
    if (strobogrammaticPairs.find(num[left]) == strobogrammaticPairs.end() || 
        strobogrammaticPairs[num[left]] != num[right]) {
        return false;
    }

    // Recursive check for the next pair
    return isStrobogrammaticHelper(num, left + 1, right - 1, strobogrammaticPairs);
}

bool isStrobogrammatic(string num) {
    unordered_map<char, char> strobogrammaticPairs = {
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}
    };

    return isStrobogrammaticHelper(num, 0, num.size() - 1, strobogrammaticPairs);
}

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrobogrammatic(num)) {
        cout << num << " is a strobogrammatic number." << endl;
    } else {
        cout << num << " is not a strobogrammatic number." << endl;
    }

    return 0;
}
