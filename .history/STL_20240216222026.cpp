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
    cout<<vec.back()<<endl;
    cout<<*it<<endl;

    vec.erase(vec.begin()+1,vec.begin()+6);
    vec.insert(vec.begin(),2000);

    vec.push_back(12);
    vec.emplace_back(13);
    for(auto it:vec){
        cout<<it<<" ";
    }
}