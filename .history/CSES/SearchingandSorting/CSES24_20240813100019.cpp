#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int j,k;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += vec[i];
        j = i+1;
        k = n-1;

        while(j<k){
            if(sum + vec[j] + vec[k])
        }
    }

    return 0;
}