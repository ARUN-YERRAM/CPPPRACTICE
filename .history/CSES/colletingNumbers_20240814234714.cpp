#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }

    map<int,int>mp;
    for(int i=0;i<t.size();i++){
        mp[t[i]] = i;
    }

    int i = 1;
    int c = 0;
    int cnt = 0;
    int temp = 0;
    while(c != n){
        if(upper_bound(t.begin()+temp,t.end(),i) - t.begin() != -1){
            c++;
        }else{
            cnt++;
            temp = 0;
        }
    }cout<<cnt<<endl;
}