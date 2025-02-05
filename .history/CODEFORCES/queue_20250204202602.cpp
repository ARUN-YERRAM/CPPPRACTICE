#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    string s;
    cin>>s;

    while(l > 0){
        int i = 0;
        while(i+1 < n){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i += 2;
            }else i++;
        }l--;
    }cout<<s<<endl;
    return 0;
}