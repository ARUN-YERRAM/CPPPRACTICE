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
    sort(vp.begin(),vp.end(),[](pair<int,int>&a,pair<int,int>&b){
        return a.second < b.second;
    });

    int mx = 0;
    int cnt = 0;

    int lst = vp[0].second;
    

    cout<<mx<<endl;
    return 0;
}