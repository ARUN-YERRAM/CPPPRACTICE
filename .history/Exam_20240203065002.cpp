#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main() {
    stack<int>st;
    stack<int>st1;
    queue<int>que;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(14);
    st.push(15);

    while(!st.empty()){
        int ele = st.top();
        st.pop();
        st1.push(ele);
    } 
    


    
}