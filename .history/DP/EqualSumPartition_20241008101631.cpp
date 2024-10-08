#include<bits/stdc++.h>
using namespace std;

bool Recrse(int arr[],int tot,int i){
    if(tot == 0)return false;

    if(i == 0)return false;
}
int main(){
    int arr[] = {1,2,3,4,5};

    int tot = 0;
    for(auto it:arr)tot += it;

    if(tot&1)return false;

    else return Recrse(arr,tot/2,0);
    return 0;
}