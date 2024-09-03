#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        t.emplace_back(a);
    }
    sort(t.begin(),t.end());
    

}