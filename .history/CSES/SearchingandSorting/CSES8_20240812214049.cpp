#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>vec;

    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        vec.push_back(x);
    }
    long long int tot = ;
    long long int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,tot);
        tot += vec[i];

        if(tot < 0)tot = 0;
    }cout<<maxi<<endl;
}