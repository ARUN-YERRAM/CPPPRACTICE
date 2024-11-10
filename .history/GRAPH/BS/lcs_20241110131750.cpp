#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isCommonPrefix(const vector<string>& strs, int len) {
    string prefix = strs[0].substr(0, len);
    for (int i = 1; i < strs.size(); ++i) {
        if (strs[i].substr(0, len) != prefix) {
            return false;
        }
    }
    return true;
}

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    
    int minLen = strs[0].size();
    for (const string& str : strs) {
        minLen = min(minLen, (int)str.size());
    }
    
    int low = 0, high = minLen;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isCommonPrefix(strs, mid)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return strs[0].substr(0, (low + high) / 2);
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
