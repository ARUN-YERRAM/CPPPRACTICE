#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.getTop()<<endl;
    

}