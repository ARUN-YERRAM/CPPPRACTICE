#include <bits/stdc++.h>
using namespace std;

void Recrse(vector<stack<char>>& vec, int a, int b, int cnt) {
    stack<char> st;
    for (int i = 0; i < cnt; i++) {
        if (!vec[a - 1].empty()) {
            st.push(vec[a - 1].top());
            // cout<<vec[a - 1].top();
            vec[a - 1].pop();
            // vec[b-1].push(st.top());
        }
    }

    while (!st.empty()) {
        vec[b - 1].push(st.top());
        st.pop();
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
        for (int j = v.size()-1;j>=0;j--) {
            vec[i].push(v[j]);
            // cout<<v[j]<<endl;
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
// 3
// Z N
// M C D
// P
// 4
// 2 -> 1
// 1 ---> 3
// 2 --> 1
// 1 -> 2

// #include<bits/stdc++.h>
// using namespace std;


// void Recrse(vector<stack<char>>&vec,int a,int b,int cnt){
//     stack<char>st;
//     for(int i=0;i<cnt;i++){
//         if(!vec[a-1].empty()){
//             st.push(vec[a-1].top());
//             vec[a-1].pop();
//             vec[b-1].push(st.top());
//         }
//     }

//     // while(!st.empty()){
//     //     vec[b-1].push(st.top());
//     //     st.pop();
//     // }
// }
// int main(){
//     int n;
//     int j;
//     cin>>n;

//     vector<stack<char>>vec(n);
//     for(int i=0;i<n;i++){
//         string line;
//         getline(cin,line);

//         stringstream ss(line);
//         char ch;
//         vector<char>v;
//         while(ss >> ch)
//             v.push_back(ch);
//         for(auto it:v){
//             vec[i].push(it);
//             // cout<<it<<endl;
//         }
//     }

//     // 4
// // 2 -> 1
// // 1 ---> 3
// // 2 --> 1
// // 1 -> 2
//     // int j;
//     cin>>j;
//     for(int i=0;i<j;i++){
//         string st;
//         getline(cin,st);
//         int a = st[0];
//         int b = st[st.size()-1];
//         int cnt = 0;
//         for(auto it:st)
//             if(it == '-')cnt++;
        
//         Recrse(vec,a,b,cnt);
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<vec[i].top()<<" ";
//     }return 0;
// }


// // 3
// // Z N
// // M C D
// // P
// // 4
// // 2 -> 1
// // 1 ---> 3
// // 2 --> 1
// // 1 -> 2
