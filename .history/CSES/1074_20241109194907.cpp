#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        t.push_back(a);
    }
    long long int tot = 0;
    long long int t1,t2,t3 = 0;
    sort(t.begin(),t.end());

    for(auto it:t){
        tot += it;
    }
    tot /= n;
    if(n%2 == 0){
        for(int i=0;i<n;i++)
            t1 += abs(t[i]-t[n/2]);
        for(int i=0;i<n;i++)
            t3 += abs(t[i]-t[n/2 - 1]);
        }
    else{
        for(int i=0;i<n;i++)
            t2 += abs(t[i]-t[(n+1)/2]);
    }
    long long int ans = 0;
    for(auto it:t){
        ans += (abs(it - tot));
    }
    if(n%2 != 0)
    cout<<min(ans,t2)<<endl;
    else
    cout<<min(ans,min(t1,t3))<<endl;

    return 0;
}