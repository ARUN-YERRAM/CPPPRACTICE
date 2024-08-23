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
    char ch;
    for(auto it:mp){
        if((it.second%2) == 1){
            cnt++;
            ch = it.first;
        }
    }if(cnt > 1)cout<<"NO SOLUTION"<<endl;
    else{

    }
}