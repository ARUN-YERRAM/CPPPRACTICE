#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<pair<long long int,long long int>>vp;
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end(),[](pair<long long int,long long int>&a,pair<long long int,long long int>&b){
        return a.second<b.second;
    });
    int mx= 1;
    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(vp[i].second<=vp[i+1].first){
            cnt++;
        }else{
            mx = max(mx,cnt);
            cnt = 1;
        }
    }
    cout<<mx<<endl;
}