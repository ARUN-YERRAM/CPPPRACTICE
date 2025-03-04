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
    sort(vp.begin(),vp.end(),[](pair<long long int,int>&a,pair<int,int>&b){
        return a.second < b.second;
    });

    int mx = 0;
    int cnt = 0;

    long long int lst = vp[0].second;
    for(int i=1;i<n;i++){
        if(vp[i].first <= lst){
            cnt++;
            lst = vp[i].second;
        }
        else{
            lst = vp[i].second;
            mx = max(mx,cnt);
            cnt = 1;
        }
    }
    cout<<mx<<endl;
    return 0;
}