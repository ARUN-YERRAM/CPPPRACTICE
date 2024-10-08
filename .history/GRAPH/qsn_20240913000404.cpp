#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

void moveRelics(vector<stack<char>>& towers, int from, int cnt, int to) {
    stack<char> tempStack;
    // Move `cnt` relics from `from` to a temporary stack
    for (int i = 0; i < cnt; ++i) {
        if (!towers[from].empty()) {
            tempStack.push(towers[from].top());
            towers[from].pop();
        }
    }
    // Push them to the target tower
    while (!tempStack.empty()) {
        towers[to].push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    int n;  // number of towers
    cin >> n;
    cin.ignore();

    // Create `n` towers (stacks of chars)
    vector<stack<char>> towers(n);

    // Read the initial setup of relics in each tower
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<char> relics;
        char relic;
        while (iss >> relic) relics.push_back(relic);

        // Add relics to the tower (reverse order)
        for (int j = relics.size() - 1; j >= 0; --j) {
            towers[i].push(relics[j]);
            cout<<relice[i]
        }
    }

    int S;  // number of instructions
    cin >> S;
    cin.ignore();

    // Process each instruction
    for (int i = 0; i < S; ++i) {
        string instruction;
        getline(cin, instruction);

        // Count the number of dashes to determine the number of relics to move
        int cnt = 0;
        for (char c : instruction) {
            if (c == '-') cnt++;
        }

        // Determine the `from` and `to` towers (convert from 1-based to 0-based index)
        int from = instruction[0] - '1';
        int to = instruction[instruction.size() - 1] - '1';

        // Move the relics
        moveRelics(towers, from, cnt, to);
    }

    // Output the top relic of each tower
    for (int i = 0; i < n; ++i) {
        if (towers[i].empty()) {
            cout << "-";  // If tower is empty, print '-'
        } else {
            cout << towers[i].top();  // Print top relic
        }
        if (i < n - 1) cout << " ";  // Space between outputs
    }
    cout << endl;

    return 0;
}


// 3
// Z N
// M C D
// P
// 4
// 2 -> 1
// 1 ---> 3
// 2 --> 1
// 1 -> 2