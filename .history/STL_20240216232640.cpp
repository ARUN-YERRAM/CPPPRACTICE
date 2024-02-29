#include<bits/stdc++.h>
using namespace std;


//  

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
    //  begin,end,rbegin,rend,size,swap,insert,clear,
    ls.push_back(2);
    ls.emplace_back(23);
    ls.push_front(123);
    ls.emplace_front(1243);
    }

    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front();

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();

    stack<int>st;
    stack<int>st1;
    st.push(12);
    st.emplace(123);
    st.pop();
    st.top();
    st.size();

    st.empty();
    st.swap(st1);

    queue<int>q;
    q.push(1);
    q.emplace(12);
    q.back();
    q.front();
    q.pop();


    priority_queue<int>pq;
    pq.push(12);
    pq.push(123);
    pq.emplace(1234);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    priority_queue<int, vector<int>, greater<int>>p;
    p.push(123);
    p.push(1);
    p.emplace(43);

    cout<<p.top();

    set<int>s;
            //  Everything logarithmic  (log N)
    s.insert(1);
    s.insert(23);
    s.insert(13);
    s.insert(345);
    s.insert(54);
    s.insert(64);
    s.emplace(34);
    
    auto it = s.find(3);  // returns iterator

    s.erase(1);

    int cnt = s.count(1);

    auto i = s.find(23);
    s.erase(i);

    auto it1 = s.find(23);
    auto it2 = s.find(345);

    s.erase(it1,it2);

    auto it = s.lower_bound(23);

    auto it = s.upper_bound(1);

    multiset<int>set;

    // same as sets but sorted and multiple...........

    unordered_set<int>sets;
    // .................same as sets...............
    
    // O(1) time complexity for search , insertion and deletion

    map<int,int>mpp;  // only map O(log N)...........

    map<int,pair<int,int >>maps;

    map<pair<int,int>,int>mps;

    unordered_map<int,int>maps; // O(1) time complexity


    








}