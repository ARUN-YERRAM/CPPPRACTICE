// #include <iostream>
// #include <vector>
// using namespace std;

// void josephus(int n, int k, int index, vector<int>& children, vector<int>& result) {
//     // Base case: only one child left
//     if (children.size() == 1) {
//         result.push_back(children[0]);
//         return;
//     }

//     index = (index + k) % children.size();

//     result.push_back(children[index]);

//     children.erase(children.begin() + index);

//     josephus(n, k, index, children, result);
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> children;
//     for (int i = 1; i <= n; i++) {
//         children.push_back(i);
//     }
    
//     vector<int> result;

//     josephus(n, 1, 0, children, result);

//     for (int x : result)
//         cout << x << " ";
//     cout << endl;
//     return 0;
// }

#include <iostream>
#include <list>
using namespace std;

void find_removal_order(int n) {
    list<int> children;
    for (int i = 1; i <= n; i++) {
        children.push_back(i);
    }

    auto it = children.begin();
    while (!children.empty()) {
        // Move iterator to the next child to remove (every other child)
        it++;
        if (it == children.end()) it = children.begin();  // Wrap around

        // Print the current child to remove
        cout << *it << " ";

        // Remove the current child
        it = children.erase(it);

        // Wrap the iterator if it reaches the end
        if (it == children.end()) it = children.begin();
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    find_removal_order(n);
    return 0;
}
