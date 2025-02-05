#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s += temp;
    }
    int cnt =0 ;
    int i=0;
    while(i+1 < s.size()){
        if(s[i] == s[i+1])
            cnt++;
        i++;
    }
    cout<<cnt1<<endl;
    return 0;
}