#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }

    map<long long int,long long int>mp;
    for(int i=0;i<n;i++){
        mp[t[i]] = i;
    }
    vector<int>ans;
    for(it)


    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}