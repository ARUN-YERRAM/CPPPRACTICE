#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int i = 0;
    int c = 1;
    bool f = false;
    while(i+1 < s.size()){
        if(s[i] == s[i+1]){
            c++;
        }else{
            if(c >= 7){
                f = true;
            }else c = 1;
        }i++;
        if(f)break;
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}