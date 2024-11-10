#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int x;
    cin>>n>>x;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        t.push_back(a);
    }
    vector<long long int>t1;
    t1.insert(t1.end(),t.begin(),t.end());
    sort(t.begin(),t.end());
    long long int cnt = 0;
    long long int cnt1 = 0;
    long long int tot = 0;
    int i = 0;
    int c = 0;
    while(i < n){
        tot = 0;
        c= 0;
        while(i<n && tot+t[i] <= x){
            tot += t[i];
            i++;
            c++;
            if(c == 2)break;
        }cnt++;
        // i++;
    }
    tot = 0;
    i = 0;
    c = 0;
    while(i < n){
        tot = 0;
        c= 0;
        while(i<n && tot+t1[i] <= x){
            tot += t1[i];
            i++;
            c++;
            if(c == 2)break;
        }cnt1++;
        // i++;
    }
    cout<<min(cnt,cnt1)<<endl;
}

// 10 15
// 9 8 8 9 10 8 5 8 7 10