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
    
    vector<int>vis(n,0);
    int cnt = 0;
    int c = 0;
    int i = 1;
    int idx = 0;
    while(cnt != n){
        if(t[idx] == i && vis[idx] == 0){
            i++;
            vis[idx]++;
            cnt++;
        }else{
            idx++;
        }
        if(idx == n-1){
            c++;
            idx = 0;
        }
    }cout<<cnt<<endl;
}