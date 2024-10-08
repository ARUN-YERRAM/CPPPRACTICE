#include<bits/stdc++.h>
using namespace std;

bool Recrse(int arr[],int tot,int i){
    if(tot == 0)return true;

    if(i == 0)return false;

    if(arr[i-1] <= tot)return Recrse(arr,tot-arr[i],i-1) || Recrse(arr,tot,i-1);
    else return Recrse(arr,tot,i-1);
}
int main(){
    int arr[] = {1,2,3,4,5};

    int tot = 0;
    for(auto it:arr)tot += it;

    if(tot&1)return false;

    else return Recrse(arr,tot/2,n);
    return 0;
}