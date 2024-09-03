#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    map<char,int>mp;
    for(auto it:str){
        mp[it]++;
    }
    int cnt = 0;
    char ch = '0';
    for(auto it:mp){
        if((it.second%2) == 1){
            cnt++;
            ch = it.first;
        }
    } 
    if(mp.size() == 1){
        cout<<str<<endl;
        return 0;
    }
    string ans,rev;
    if(cnt > 1)cout<<"NO SOLUTION"<<endl;
    else{
        for(auto it:mp){
            // if((it.second%2) != 1){
                for(int i=0;i<it.second/2;i++){
                    ans += it.first;
                }
            }
        }
        // CBPPBFCFAA
        rev = ans;
        reverse(rev.begin(),rev.end());
        // rev += ans;
        if(ch != '0')
            ans += ch;
        ans += rev;
        cout<<ans<<endl;
    }return 0;
}