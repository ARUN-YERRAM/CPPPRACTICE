#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    sort(t.begin(),t.end());
    int cnt = 0;
    int tot = 0;
    int i = 0;
    while(i < n){
        tot = 0;
        while(i<n && tot+t[i] <= x){
            tot += t[i];
            i++;
        }if(tot <= x)cnt++;
        // i++;
    }
    cout<<cnt<<endl;
}