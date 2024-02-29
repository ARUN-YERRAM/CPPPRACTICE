#include<iostream>
#include<stack>
using namespace std;

int main(){
    string ans = "abcdcba";

    stack<char>st;
    int len = ans.size();

    if(len%2==0){
        for(int i=0;i<len/2;i++)
            st.push(ans[i]);
    } else{
        for(int i=0;i<len-1)
    }


}