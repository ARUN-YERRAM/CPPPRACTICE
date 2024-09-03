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
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        // if(mp.find(t[i]) == mp.end())
            mp[t[i]].push_back(i+1);
    }
    sort(t.begin(),t.end());
    int i = 0,j = n-1;
    bool f = true;
    while(i<j){
        if((t[i] + t[j]) == k){
            if(t[i] != t[j])
                cout<<mp[t[i]][0]<<" "<<mp[t[j]][0]<<endl;
            f = false;
            break;
        }
        else if((t[i] + t[j]) > k)j--;
        else i++;
    }
    if(f)cout<<"IMPOSSIBLE"<<endl;
    return 0;
}