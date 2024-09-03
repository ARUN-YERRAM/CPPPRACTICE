#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,b;
    cin>>n>>a>>b;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int e;
        cin>>e;
        t.push_back(e);
    }

    long long int maxi = t[0];

    int i = 0;
    int j = 0;
    long long int sum = 0;
    while(i<n && j<n){
        sum += t[j];

        if((j - i) >= a && (j-i) <= b){
            maxi = max(maxi,sum);
        } else{
            
        }
    }cout<<maxi<<endl;
    return 0;
}
