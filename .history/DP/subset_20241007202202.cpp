#include<bits/stdc++.h>
using namespace std;

bool Recrse(vector<int>&arr,int n,int sum){
    if(sum == 0 || sum == 0 && n == 0)return true;
    // if(n == 0)return false;
    if(n < 0)return false;

    return Recrse(arr,n-1,sum-arr[n-1]) || Recrse(arr,n-1,sum);
}

int main(){
    return Recrse(arr,n,sum);
    return 0;
}