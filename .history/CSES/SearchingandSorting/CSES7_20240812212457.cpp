#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.emplace_back(a);
    }

    sort(t.begin(),t.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find())
        mp[t[i]] = i+1;
    }
    int i = 0,j = n-1;
    bool f = true;
    while(i<j){
        if((t[i] + t[j]) == k){
            cout<<mp[t[i]]<<" "<<mp[t[j]]<<endl;
            f = false;
            break;
        }
        else if((t[i] + t[j]) > k)j--;
        else i++;
    }
    if(f)cout<<"IMPOSSIBLE"<<endl;
    return 0;
}