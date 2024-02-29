#include<iostream>
#include<stack>
using namespace std;

int main(){
    string ans = "abcdcba";

    stack<char>st;
    int k = 0;
    int len = ans.size();

    if(len%2==0){
        for(int i=0;i<len/2;i++)
            st.push(ans[k++]);
    } else{
        for(int i=0;i<(len-1)/2;i++)
            st.push(ans[k++]);
    }

    if(len%2==0){
        for(int i=0;i<len/2;i++){
            char c = st.pop();
            if(c!=ans[k]) cout<<"False"<<endl;
            k++;
        
        }
    }




}