#include<bits/stdc++.h>
using namespace std;


int Recrse(int arr[],int tot,int i){
    if(tot == 0)return 1;

    if(i == 0)return 0;

    if(arr[i-1] <= tot)return Recrse(arr,tot-arr[i-1],i-1) + Recrse(arr,tot,i-1);
    else return Recrse(arr,tot,i-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n  = 5;
    int tot = 0;
    for(auto it:arr)tot += it;

    // if(tot&1)return ;

    /* The line `if(tot&1) return;` in the provided code snippet is checking if the total sum `tot` is
    an odd number. */
    return Recrse(arr,tot,n);
    return 0;
}