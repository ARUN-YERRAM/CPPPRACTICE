// #include<bits/stdc++.h>
// using namespace std;


// //  CPP STL  
// // 1) Algorithms
// // 2) Functions
// // 3) Iterators
// // 4) Containers


// int main(){
//     // pair<int,int>p = {1,2};
//     // cout<<p.first<<endl;
//     // cout<<p.second<<endl;

//     vector<int>vec(5,1);
//     vector<int>v1(vec);

//     vector<int>::iterator it = vec.begin();
//     it++;
//     cout<<vec.back()<<endl;
//     cout<<*it<<endl;

//     vec.erase(vec.begin()+1,vec.begin()+6);
//     vec.insert(vec.begin(),5,2000);
    
//     vec.pop_back();
//     vec.clear();
//     vec.size();
//     vec.swap(v1);

//     vec.insert(vec.begin(),v1.begin(),v1.end());

//     vec.push_back(12);
//     vec.emplace_back(13);
//     for(auto it:vec){
//         cout<<it<<" ";


//     list<int>ls;
//     //  begin,end,rbegin,rend,size,swap,insert,clear,
//     ls.push_back(2);
//     ls.emplace_back(23);
//     ls.push_front(123);
//     ls.emplace_front(1243);
//     }

//     deque<int>dq;
//     dq.push_back(1);
//     dq.emplace_back(2);
//     dq.push_front(3);
//     dq.emplace_front();

//     dq.pop_back();
//     dq.pop_front();

//     dq.front();
//     dq.back();

//     stack<int>st;
//     stack<int>st1;
//     st.push(12);
//     st.emplace(123);
//     st.pop();
//     st.top();
//     st.size();

//     st.empty();
//     st.swap(st1);

//     queue<int>q;
//     q.push(1);
//     q.emplace(12);
//     q.back();
//     q.front();
//     q.pop();


//     priority_queue<int>pq;
//     pq.push(12);
//     pq.push(123);
//     pq.emplace(1234);

//     cout<<pq.top();
//     pq.pop();
//     cout<<pq.top();

//     priority_queue<int, vector<int>, greater<int>>p;
//     p.push(123);
//     p.push(1);
//     p.emplace(43);

//     cout<<p.top();

//     set<int>s;
//             //  Everything logarithmic  (log N)
//     s.insert(1);
//     s.insert(23);
//     s.insert(13);
//     s.insert(345);
//     s.insert(54);
//     s.insert(64);
//     s.emplace(34);
    
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


    
    pair<int,int>p2;


    // sort(vec.begin(),vec.end());

    bool cmp(pair<int,int>p1,pair<int,int>p2) {

        if(p1.second < p2.second) return true;
        if(p1.second>p2.second) return false;

        if(p1.first > p2.first) return true;
        return false;

    }
    sort(vec.begin(),vec.end(),cmp);

}


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;

    int vec[n] = {1,5,3,6,4,7};

    int n=vec.size();

    int num = 7;

    int cnt = __builtin_popcount(num);

    long long nums = 999891236577575989;
    int res = __builtin_popcountll(nums);

    cout<<res<<" "<<cnt<<endl;

    string str = "1234";
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));

    int maxi = *max_element(vec,vec+n);
}
// 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node*root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node*root){
    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(Node*root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}

