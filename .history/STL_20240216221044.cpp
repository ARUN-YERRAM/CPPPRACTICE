#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<int,int>p = {1,2};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    vector<int>vec(5,1);
    vector<int>v1(vec);

    vector<int>::iterator it = vec.begin();
    it++;
    cout<<it.back();
    cout<<*it<<endl;

    vec.push_back(12);
    vec.emplace_back(13);
    for(auto it:vec){
        cout<<it<<" ";
    }
}