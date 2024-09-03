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
    for(auto it:mp){
        if((it.second%2) == 1)cnt++;
    }
}