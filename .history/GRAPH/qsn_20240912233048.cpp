// 3
// Z N
// M C D
// P
// 4
// 2 -> 1
// 1 ---> 3
// 2 --> 1
// 1 -> 2

#include<bits/stdc++.h>
using namespace std;


void Recrse(vector<stack<char>>&vec,int a,int b,int cnt){

}
int main(){
    int n;
    cin>>n;

    vector<stack<char>>vec(n);
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);

        stringstream ss(line);
        char ch;
        vector<char>v;
        while(ss >> ch)
            v.push_back(ch);
        for(auto it:v){
            vec[i].push(it);
            // cout<<it<<endl;
        }
    }

    // 4
// 2 -> 1
// 1 ---> 3
// 2 --> 1
// 1 -> 2
    int j;
    cin>>j;
    for(int i=0;i<j;i++){
        string st;
        getline(cin,st);
        int a = st[0];
        int b = st[st.size()-1];
        int cnt = 0;
        for(auto it:st){
            if(it == '-')cnt++;
        }
        Recrse(vec,a,b,cnt);
        
    }
    for(int i=0;i<)



}