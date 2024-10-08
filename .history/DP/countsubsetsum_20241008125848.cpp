#include<bits/stdc++.h>
using namespace std;


int Recrse(int arr[],int tar,int i){
    if(tar == 0)return 1;

    if(i == 0)return 0;

    if(arr[i-1] <= tar)return Recrse(arr,tar-arr[i-1],i-1) + Recrse(arr,tar,i-1);
    else return Recrse(arr,tar,i-1);
}

int Recrse(int arr[],int tar,int )
int main(){
    int arr[] = {1,2,3,4,5};
    int n  = 5;
    int tot = 0;
    int tar = 6;
    // for(auto it:arr)tot += it;

    // if(tot&1)return ;

    /* The line `if(tot&1) return;` in the provided code snippet is checking if the total sum `tot` is
    an odd number. */
    return Recrse(arr,tar,n);
    return 0;
}