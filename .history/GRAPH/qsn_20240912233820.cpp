#include <bits/stdc++.h>
using namespace std;

void Recrse(vector<stack<char>>& vec, int a, int b, int cnt) {
    stack<char> temp;
    for (int i = 0; i < cnt; i++) {
        if (!vec[a - 1].empty()) {
            temp.push(vec[a - 1].top());
            vec[a - 1].pop();
        }
    }

    while (!temp.empty()) {
        vec[b - 1].push(temp.top());
        temp.pop();
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  // To ignore the newline after the integer input

    vector<stack<char>> vec(n);
    
    // Reading the initial stacks of characters
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        char ch;
        vector<char> v;
        while (ss >> ch)
            v.push_back(ch);
        reverse(v.begin(), v.end());  // Reverse to push to the stack in correct order
        for (auto it : v) {
            vec[i].push(it);
        }
    }

    int j;
    cin >> j;
    cin.ignore();  // To ignore the newline after the integer input

    for (int i = 0; i < j; i++) {
        string command;
        getline(cin, command);  // Read the command as a string

        // Parse the source and destination from the string
        int cnt = count(command.begin(), command.end(), '-');  // Count the number of dashes ('-')
        int a = command[0] - '0';  // Source stack (convert char to int)
        int b = command[command.size() - 1] - '0';  // Destination stack (convert char to int)

        // Move the elements as per the command
        Recrse(vec, a, b, cnt);
    }

    // Output the top elements of each stack
    for (int i = 0; i < n; i++) {
        if (!vec[i].empty())
            cout << vec[i].top() << " ";
        else
            cout << "Empty ";
    }
    cout << endl;

    return 0;
}
