#include <iostream>
#include <vector>
using namespace std;

void josephus(int n, int k, int index, vector<int>& children, vector<int>& result) {
    // Base case: only one child left
    if (children.size() == 1) {
        result.push_back(children[0]);
        return;
    }

    // Calculate the index of the next child to be removed
    index = (index + k) % children.size();
    
    // Add the removed child to the result
    result.push_back(children[index]);
    
    // Remove the child from the circle
    children.erase(children.begin() + index);
    
    // Recurse for the remaining children
    josephus(n, k, index, children, result);
}

int main() {
    int n;
    cin >> n;

    vector<int> children;
    for (int i = 1; i <= n; i++) {
        children.push_back(i);
    }
    
    vector<int> result;

    josephus(n, 1, 0, children, result);

    for (int x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}
