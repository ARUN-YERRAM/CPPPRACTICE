#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int i = 0;
    int c = 1;
    bool f = false;
    while(i < s.size()){
        char ch = s[i];
        while(ch == s[i]){
            c++;
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}