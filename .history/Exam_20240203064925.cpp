#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main() {
    stack<int>st;
    queue<int>que;
    st.push(1);
    st.push(2);
    st.push(3);

    while(!st.empty()){
        int ele = st.top();
        st.pop();
        st1.push(ele);
    }
    cout<<st.size();


    
}