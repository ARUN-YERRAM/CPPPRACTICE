#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;

    st.push(12);
    st.push(15);
    st.push(13);
    st.push(17);

    while(!st.empty()){
        cout<<st.top();
        st.pop();
        cout<<" ";
    }

    cout<<st.empty()<<" ";
    cout<<st.size()<<" ";
    


    return 0;
}