#include<bits/stdc++.h>
using namespace std;

int main(){
    int int n,k;
    cin>>n>>k;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    long long int cnt = 0;

    for(int i=0;i<n;i++){
        set<int>st;
        for(int j=i;j<n;j++){
            st.insert(t[j]);
            if(st.size() == k)cnt++;
        }
    }cout<<cnt<<endl;
    return 0;
}