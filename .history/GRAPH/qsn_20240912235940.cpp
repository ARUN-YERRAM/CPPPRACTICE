#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

// Function to move artifacts between towers
void Recrse(vector<stack<char>>& towers, int from, int cnt, int to) {
    stack<char> tempStack;
    
    // Move 'cnt' relics from the 'from' tower to a temporary stack
    for (int i = 0; i < cnt; ++i) {
        if (!towers[from].empty()) {
            tempStack.push(towers[from].top());
            towers[from].pop();
        }
    }
    
    // Move relics from the temporary stack to the 'to' tower to preserve order
    while (!tempStack.empty()) {
        towers[to].push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    int n;  // Number of towers
    cin >> n;
    cin.ignore();  // Ignore the newline after the number of towers

    vector<stack<char>> towers(n);  // Vector of stacks to represent towers

    // Read the artifacts for each tower
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<char> artifacts;
        char artifact;
        
        // Read artifacts from bottom to top
        while (iss >> artifact) {
            artifacts.push_back(artifact);
        }
        
        // Push artifacts into the stack (bottom to top)
        for (int j = artifacts.size() - 1; j >= 0; --j) {
            towers[i].push(artifacts[j]);
        }
    }

    int S;  // Number of instructions
    cin >> S;
    cin.ignore();  // Ignore the newline after the number of instructions

    // Process each instruction
    for (int i = 0; i < S; ++i) {
        string str;
        getline(cin, str);
        
        // Count the number of dashes to determine how many relics to move
        int cnt = 0;
        for (char c : str) {
            if (c == '-') cnt++;
        }
        
        // Extract the 'from' and 'to' towers from the instruction
        int from = str[0] - '1';  // Convert from 1-based to 0-based index
        int to = str[str.size() - 1] - '1';  // Convert from 1-based to 0-based index
        
        // Move the artifacts based on the number of dashes (move cnt relics)
        Recrse(towers, from, cnt, to);
    }

    // Output the top artifact from each tower
    for (int i = 0; i < n; ++i) {
        if (towers[i].empty()) {
            cout << "-";  // Output '-' for empty towers
        } else {
            cout << towers[i].top();  // Output the top artifact
        }
        if (i < n - 1) cout << " ";  // Space between outputs
    }
    
    cout << endl;

    return 0;
}


3
Z N
M C D
P
4
2 -> 1
1 ---> 3
2 --> 1
1 -> 2