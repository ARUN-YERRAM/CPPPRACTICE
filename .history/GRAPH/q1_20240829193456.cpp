#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++){
        string st = vec[i];
        vis[i] = true;
        vector<int>t;
        sort(st.begin(),st.end());
        if(!vis[i])
            t.emplace_back(i);
        for(int j=i+1;j<n;j++){
            if(!vis[i] && vec[j] == st){
                vis[j] = true;
            }
        }
    }
}