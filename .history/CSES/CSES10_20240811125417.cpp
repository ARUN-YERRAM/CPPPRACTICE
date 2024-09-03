#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n;
    cin>>n;

    long long int cnt = 0;
    long long int div = 1e9;
    vector<int>t = {5, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int c = 0;
    int zc = 9;
    int i = t.size()-1;
    while(i>=0){
        int q = n/t[i];
        q -= c;
        // if(i!=n-1)
            c = ;

        cnt += q*zc;
        zc--;
        i--;
    }

    // cout<<cnt<<endl;
    return 0;
}