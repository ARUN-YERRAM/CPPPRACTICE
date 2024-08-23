#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;

    vector<long long int>t;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    long long int sum = 0;
    long long int cnt = 0;
    map<long long int,long long int>mp;
    mp[0] = 1;
    for(int i=0;i<n;i++){
        sum += t[i];

        if(mp.find(sum%n) != mp.end()){
            cnt += mp[sum%n];
        }
        // sum = 0;
        // for(int j=i;j<n;j++){
            // sum += t[j];
            // if((sum %n) == 0)cnt++;
        // }
        mp[sum%n]++;
    }
    cout<<cnt<<endl;
    return 0;
}