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
        c = 0;
        while(i<s.size() && ch == s[i]){
            c++;
            i++;
        }if(c >= 7)f = true;
        c = 1;
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}