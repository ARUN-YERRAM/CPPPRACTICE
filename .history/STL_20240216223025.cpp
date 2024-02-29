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
    vec.insert(vec.begin(),5,2000);
    
    vec.pop_back();
    vec.clear();
    vec.size();
    vec.swap(v1);

    vec.insert(vec.begin(),v1.begin(),v1.end());

    vec.push_back(12);
    vec.emplace_back(13);
    for(auto it:vec){
        cout<<it<<" ";


    list<int>ls;
    //  begin,end,rbegin
    ls.push_back(2);
    ls.emplace_back(23);
    ls.push_front(123);
    ls.emplace_front(1243);
    }
}