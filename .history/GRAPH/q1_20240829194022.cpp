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
        vector<int>t;
        sort(st.begin(),st.end());
        if(!vis[i]){
            t.emplace_back(i);
            vis[i] = true;
        }
        for(int j=i+1;j<n;j++){
            string s = vec[j];
            sort(s.begin(),s.end());
            if(!vis[j] && vec[j] == st){
                vis[j] = true;
                t.push_back(j);
            }
        }for(auto it:t){
            cout<<vec[it]<<" ";
        }
    }return 0;
}