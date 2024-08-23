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

    // map<long long int,long long int>mp;
    // priority_queue<int>pq;
    // for(int i=0;i<n;i++){
    //     pq.push(t[i]);
    // }
    // for(int i=0;i<n;i++){
        // mp[t[i]] = i;
    // }
    vector<int>ans;
    int j = 0;
    for(int i=0;i<n;i++){
        // pq.push(t[i]);
        // int ele = pq.top();
        j = i-1;
        while(j >=0 && t[j] >= t[i]){
            j--;
        }
        // if(j>=0) ans.push_back(j);
        if(j>=0)cout<<j+1<<" ";
        else cout<<0<<" ";
        // else ans.push_back(0);
    }
    // for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}