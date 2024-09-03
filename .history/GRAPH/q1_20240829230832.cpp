#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin,line);

    stringstream ss(line);
    

    vector<string>vec;
    string word;

    while(ss >> word){
        vec.emplace_back(word);
    }
    
    int n = vec.size();

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
            if(!vis[j] && s == st){
                vis[j] = true;
                t.push_back(j);
            }
        }for(auto it:t){
            cout<<vec[it]<<" ";
        }
        cout<<endl;
    }return 0;
}