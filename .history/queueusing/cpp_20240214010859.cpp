#include <iostream>
#include <stack>
using namespace std;

int main() {
    string ans = "abcdcba";

    stack<char> st;

    int len = ans.size();
    int i;

    for (i = 0; i < len / 2; i++) {
        st.push(ans[i]);
    }

    if (len % 2 == 1) {
        i++; 
    }

    while (i < len) {
        char c = st.top();
        st.pop();

        if (c != ans[i]) {
            cout << "False" << endl;
            return 0; // Exit the program indicating it's not a palindrome
        }
        i++;
    }

    cout << "True" << endl; // If the loop finishes, it's a palindrome
    return 0;
}
